#ifndef SOURCE_H
#define SOURCE_H

#include <stdio.h>

typedef struct src src_t;

src_t *src_load_string(const char *str);
src_t *src_load_buffer(void *buf, unsigned size);
src_t *src_load_file(const char *path);
src_t *src_load_stream(FILE *);

void src_free(src_t *);

const char *src_name(src_t * src);
const char *src_addr(src_t * src);
unsigned src_size(src_t * src);
unsigned src_line(src_t * src, unsigned offset);
unsigned src_line_begin(src_t * src, unsigned offset);
unsigned src_line_end(src_t * src, unsigned offset);
unsigned src_column(src_t * src, unsigned offset);
char *src_str(src_t * src, unsigned begin, unsigned end);

void src_set_name(src_t * src, const char *name);
int src_set_linebreak(src_t * src, unsigned offset);

static inline int src_is_linebreak(const char *s)
{
    switch (*s) {
    case '\r':
        /* count CRLF as single NL */
        if (*(s + 1) == '\n')
            break;
        /* fall through */
    case '\n':
        return 1;
    }
    return 0;
}

static inline void src_find_linebreaks(src_t * src)
{
    unsigned offset = 0;
    const char *tmp = src_addr(src);
    while (*tmp) {
        if (src_is_linebreak(tmp))
            src_set_linebreak(src, offset);
        ++tmp;
        ++offset;
    }
}

#endif
