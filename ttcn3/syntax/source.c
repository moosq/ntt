#include "source.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <unistd.h>

typedef struct vector vector_t;
vector_t *vector_new(void);
void vector_free(vector_t *);
void vector_append(vector_t *, long);
long *vector_vec(vector_t *);
unsigned vector_count(vector_t *);

struct src {
    char *name;
    char *addr;
    unsigned size;
    vector_t *lines;
    unsigned last_line;
    unsigned last_line_start;
    unsigned last_line_begin;
    unsigned last_line_end;
};

static src_t *_src_new(const char *name, char *addr, unsigned size)
{
    src_t *s = malloc(sizeof *s);
    if (!s)
        return NULL;

    s->name = strdup(name);
    s->addr = addr;
    s->size = size;
    s->last_line = 0;
    s->last_line_start = 0;
    s->last_line_begin = 0;
    s->last_line_end = 0;
    s->lines = vector_new();
    vector_append(s->lines, 0);
    return s;
}

static inline unsigned utf8_strnlen(const char *s, long max)
{
    unsigned len = 0;

    while (*s && max) {
        if ((*s & 0XC0) != 0x80)
            ++len;
        ++s;
        --max;
    }

    return len;
}

static unsigned line_slow(src_t * src, unsigned offset)
{
    int count = vector_count(src->lines);
    long *vec = vector_vec(src->lines);

    int l = 0;
    int r = count - 1;

    while (l < r) {
        unsigned i = l + (r - l) / 2;

        if (offset < vec[i])
            r = i - 1;
        else
            l = i + 1;
    }

    if (offset < vec[r])
        return r - 1;
    else
        return r;
}

static unsigned line_begin(src_t * src, int line)
{
    long *vec = vector_vec(src->lines);
    return vec[line];
}

static unsigned line_end_slow(src_t * src, unsigned offset)
{
    const char *tmp = src->addr + offset;
    while (*tmp) {
        /* NOTE: for TTCN-3 we also have to check for \f and \v */
        if (src_is_linebreak(tmp) || *tmp == '\f' || *tmp == '\v')
            break;
        ++tmp;
    }
    return tmp - src->addr;
}

static unsigned line_end(src_t * src, int line, unsigned offset)
{
    int count = vector_count(src->lines);
    if (line == count - 1)
        return line_end_slow(src, offset);

    long *vec = vector_vec(src->lines);
    return vec[line + 1] - 1;
}

static unsigned line(src_t * src, unsigned offset)
{
    /* memoization */
    if (src->last_line_begin <= offset && offset <= src->last_line_end)
        return src->last_line;

    src->last_line = line_slow(src, offset);
    src->last_line_begin = line_begin(src, src->last_line);
    src->last_line_end = line_end(src, src->last_line, offset);

    return src->last_line;
}

static src_t *load_buffer(const char *buf, unsigned size, int pad)
{
    char *addr = malloc(size + pad);
    if (!addr)
        return NULL;

    memcpy(addr, buf, size);
    addr[size + pad - 1] = '\0';

    return _src_new("<none>", addr, size);
}

src_t *src_load_string(const char *str)
{
    return load_buffer(str, strlen(str) + 1, 0);
}

src_t *src_load_buffer(void *buf, unsigned size)
{
    return load_buffer(buf, size, 1);
}

src_t *src_load_stream(FILE * fstream)
{
    char *s = malloc(1);
    int count = 0;

    while (!feof(fstream)) {
        char buf[2048];
        int ret = fread(buf, 1, sizeof(buf), fstream);
        s = realloc(s, count + ret + 1);
        memcpy(s + count, buf, ret);
        count += ret;

        if (ferror(fstream)) {
            free(s);
            return NULL;
        }
    }
    s[count] = '\0';

    return _src_new("<stream>", s, count + 1);
}

src_t *src_load_file(const char *path)
{
    FILE *fd = fopen(path, "rb");
    if (!fd)
        goto error;

    fseek(fd, 0, SEEK_END);
    size_t size = ftell(fd);
    fseek(fd, 0, SEEK_SET);

    char *addr = malloc(size + 1);
    if (!addr)
        goto error;

    fread(addr, 1, size, fd);
    if (ferror(fd)) {
        free(addr);
        goto error;
    }
    addr[size] = '\0';

    fclose(fd);

    return _src_new(path, addr, size + 1);

 error:
    return NULL;
}

void src_free(src_t * src)
{
    free(src->addr);
    free(src->name);
    vector_free(src->lines);
    free(src);
}

const char *src_name(src_t * src)
{
    return src->name;
}

const char *src_addr(src_t * src)
{
    return src->addr;
}

unsigned src_size(src_t * src)
{
    return src->size;
}

void src_set_name(src_t * src, const char *name)
{
    free(src->name);
    src->name = strdup(name);
}

int src_set_linebreak(src_t * src, unsigned offset)
{
    unsigned line_start = ++offset;

    /* NOTE: For binary search on lines we require lines to be sorted */
    if (line_start <= src->last_line_start)
        return -1;
    src->last_line_start = line_start;
    vector_append(src->lines, line_start);
    return 0;
}

char *src_str(src_t * src, unsigned begin, unsigned end)
{
    unsigned len = end - begin;
    char *str = malloc(len + 1);
    if (!str)
        return NULL;
    memcpy(str, src->addr + begin, len);
    str[len] = '\0';
    return str;
}

unsigned src_line(src_t * src, unsigned offset)
{
    return line(src, offset) + 1;
}

unsigned src_line_begin(src_t * src, unsigned offset)
{
    unsigned l = line(src, offset);
    return line_begin(src, l);
}

unsigned src_line_end(src_t * src, unsigned offset)
{
    unsigned l = line(src, offset);
    return line_end(src, l, offset);
}

unsigned src_column(src_t * src, unsigned offset)
{
    unsigned l = line(src, offset);
    unsigned begin = line_begin(src, l);

    /* NOTE: Just subracting begin from offset does not work, if we want to
     *       support UTF-8. We cannot use mbstowcs either, because the string
     *       is not \0-terminated.
     */
    return 1 + utf8_strnlen(src->addr + begin, offset - begin);
}

#define MAX(a,b) ( ((a)>=(b))?(a):(b) )

struct vector {
    long *vec;
    unsigned count;
    unsigned size;
};

static void grow(vector_t * a, unsigned elems)
{
    if (a->count + elems > a->size) {
        a->size = MAX(a->count + elems, a->size * 2);
        a->vec = realloc(a->vec, sizeof(long) * a->size);
    }
}

vector_t *vector_new(void)
{
    vector_t *a = malloc(sizeof *a);
    if (!a)
        return NULL;
    a->count = 0;
    a->size = 0;
    a->vec = NULL;

    return a;
}

void vector_free(vector_t * a)
{
    free(a->vec);
    free(a);
}

void vector_append(vector_t * a, long val)
{
    grow(a, 1);
    a->vec[a->count++] = val;
}

long *vector_vec(vector_t * a)
{
    return a->vec;
}

unsigned vector_count(vector_t * a)
{
    return a->count;
}
