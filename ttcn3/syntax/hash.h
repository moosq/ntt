#ifndef HASH_H
#define HASH_H

#include <limits.h>
#include <string.h>
#include <stdlib.h>

#include "list.h"

#define HASH_CREATE_STR(size)  hash_create((size), compare_str, hashsum_string)
#define HASH_SET_STR(h, key, data)   hash_set(h, (const void*) key, data)
#define HASH_GET_STR(h, key)   (const char*) hash_get(h, (const void*) key)
#define HASH_DEL_STR(h, key)   (const char*) hash_del(h, (const void*) key)
#define HASH_RELEASE_STR(h)    hash_release(h)

#define HASH_CREATE_PTR(size) hash_create((size), compare_long, hashsum_long)
#define HASH_SET_PTR(h, key, data)  hash_set(h, (const void*) key, data)
#define HASH_GET_PTR(h, key)  hash_get(h, (const void*) key)
#define HASH_DEL_PTR(h, key)  hash_del(h, (const void*) key)
#define HASH_RELEASE_PTR(h)   hash_release(h)

#ifndef LONG_BIT
#if LONG_MAX == 2147483647
#define LONG_BIT 32
#elif LONG_MAX == 9223372036854775807
#define LONG_BIT 64
#else
#error hash implemenation cannot handle wordsizes other than 32 or 63 bit.
#endif
#endif

#if LONG_BIT == 32
    /* 2^31 + 2^29 - 2^25 + 2^22 - 2^19 - 2^16 + 1 */
#define GOLDEN_RATIO_PRIME 0x9e370001UL
#elif LONG_BIT == 64
    /*  2^63 + 2^61 - 2^57 + 2^54 - 2^51 - 2^18 + 1 */
#define GOLDEN_RATIO_PRIME 0x9e37fffffffc0001UL
#else
#error hash implemenation cannot handle wordsizes other than 32 or 63 bit.
#endif

#define __HASH_COMPARE(h, item, key) (h->compare(item, key))
#define __HASH_SUM(h, key)           (h->hashsum(key) & (h->size-1))
#define __HASH_GET_SLOT(h, key)      (& h->heads[__HASH_SUM(h, key)])

typedef struct {
    unsigned (*hashsum) (const void *);
    int (*compare) (const void *, const void *);
    int size;
    int entries;
    struct list *heads;
} hash_t;

/* 
 * buckets are doubly-linked. This increases the overhead by one pointer per
 * item, but allows insertion with O(1), though.
 */
struct __hash_bucket {
    const void *key;
    struct list chain;
    const void *payload;
};

static inline int compare_str(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b) == 0;
}

static inline int compare_long(const void *a, const void *b)
{
    return a == b;
}

static inline unsigned hashsum_long(const void *val)
{
    /* On some cpus multiply is faster, on others gcc will do shifts */
    unsigned hash = (unsigned long)val * GOLDEN_RATIO_PRIME;

    /* High bits are more random, so use them. */
    return hash;
}

/* sdbm hashing -- from http://www.cse.yorku.ca/~oz/hash.html */
static inline unsigned hashsum_string(const void *ptr)
{
    const char *s = ptr;
    unsigned int hash = 0;

    while (*s)
        hash = *s++ + (hash << 6) + (hash << 16) - hash;

    return hash;
}

static inline unsigned nearest_power_of_2(unsigned n)
{
    if (!n)
        return n;               // (0 ==2^0)

    unsigned x = 1;
    while (x < n)
        x <<= 1;

    return x;
}

static inline void __hash_init_slots(struct list *h, int s)
{
    struct list *l;
    for (l = h; l < h + s; ++l)
        LIST_INIT_HEAD(l);
}

static inline void __hash_double(hash_t * h)
{
    int i = h->size;
    h->size = h->size * 2;

    struct list *old = h->heads;
    h->heads = realloc(h->heads, h->size * sizeof(struct list));

    /* initialize only the new half of list heads */
    __hash_init_slots(h->heads + i, h->size - i);

    /* rehash old half */
    unsigned long j = 0;
    struct list *slot;
    for (slot = h->heads; slot < h->heads + i; ++slot, ++j) {
        /* HACK-Alert: check if back links are broken (due to realloc) */
        if (old != h->heads) {
            if (slot->next == old + j) {
                LIST_INIT_HEAD(slot);
            } else {
                slot->next->prev = slot;
                slot->prev->next = slot;
            }
        }

        struct __hash_bucket *b, *tmp;
        LIST_FOR_EACH_ENTRY_SAFE(b, tmp, slot, chain) {
            if (j != __HASH_SUM(h, b->key)) {
                list_remove(&b->chain);
                list_add_tail(__HASH_GET_SLOT(h, b->key), &b->chain);
            }
        }
    }
}

static inline struct __hash_bucket *__hash_bucket_create(const void *key,
                                                         const void *data)
{
    struct __hash_bucket *b = malloc(sizeof *b);
    b->key = key;
    b->payload = data;
    return b;
}

static inline void __hash_bucket_release(struct __hash_bucket *b)
{
    free(b);
}

static inline void hash_set(hash_t * h, const void *key, const void *data)
{
    struct __hash_bucket *b = __hash_bucket_create(key, data);
    if ((float)h->entries / (float)h->size > 0.8)
        __hash_double(h);
    ++(h->entries);
    list_add_tail(__HASH_GET_SLOT(h, key), &b->chain);
}

static inline struct __hash_bucket *__hash_get(const hash_t * h,
                                               const void *key)
{
    struct __hash_bucket *b;
    LIST_FOR_EACH_ENTRY(b, __HASH_GET_SLOT(h, key), chain)
        if (__HASH_COMPARE(h, b->key, key))
        return b;
    return NULL;
}

static inline void *hash_get(const hash_t * h, const void *key)
{
    struct __hash_bucket *b = __hash_get(h, key);
    if (b)
        return (void *)b->payload;
    else
        return NULL;
}

static inline void *hash_del(hash_t * h, const void *key)
{
    struct __hash_bucket *b = __hash_get(h, key);
    if (!b)
        return NULL;

    void *ret = (void *)b->payload;
    list_remove(&b->chain);
    __hash_bucket_release(b);
    return ret;
}

static inline hash_t *hash_create(int size,
                                  int (*cmp) (const void *, const void *),
                                  unsigned (*sum) (const void *))
{
    /* hash sizes must be a power of 2 */
    size = nearest_power_of_2(size);

    hash_t *h = malloc(sizeof *h);

    h->entries = 0;
    h->size = size;
    h->compare = cmp;
    h->hashsum = sum;
    h->heads = malloc(size * sizeof(struct list));

    __hash_init_slots(h->heads, h->size);

    return h;
}

static inline void hash_release(hash_t * h)
{
    struct list *slot;
    struct __hash_bucket *b, *tmp;

    for (slot = h->heads; slot < h->heads + h->size; ++slot)
        LIST_FOR_EACH_ENTRY_SAFE(b, tmp, slot, chain)
            __hash_bucket_release(b);

    free(h->heads);
    free(h);
}
#endif
