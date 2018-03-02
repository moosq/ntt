#define HASH_BLOOM
#include "hash.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#define CHUNK_SIZE  524288
#define  HASH_SIZE    4096

struct chunk {
    unsigned size;
    unsigned count;
    void *data;
    struct list list;
};

struct flyweight {
    hash_t *hash;
    struct list chunks;
};

static struct flyweight *flyweight;

static struct flyweight *get_instance(void)
{
    if (!flyweight) {
        flyweight = malloc(sizeof *flyweight);
        flyweight->hash = HASH_CREATE_STR(HASH_SIZE);
        LIST_INIT_HEAD(&flyweight->chunks);

        struct chunk *c = malloc(sizeof *c);
        c->count = 0;
        c->size = CHUNK_SIZE;
        c->data = malloc(c->size);
        list_add(&flyweight->chunks, &c->list);
    }

    return flyweight;
}

static struct chunk *chunk_grow(struct chunk *c, unsigned size)
{
    if (c->count + size <= c->size)
        return c;

    struct chunk *new = malloc(sizeof *new);
    if (!new)
        return NULL;

    new->count = 0;
    new->size = (CHUNK_SIZE < size) ? size : CHUNK_SIZE;
    new->data = malloc(new->size);
    if (!new->data) {
        free(new);
        return NULL;
    }

    list_add(&c->list, &new->list);

    return new;
};

static const char *chunk_insert(struct chunk *chunk, const char *str)
{
    unsigned size = strlen(str) + 1;

    chunk = chunk_grow(chunk, size);
    if (!chunk)
        return NULL;

    memcpy(chunk->data + chunk->count, str, size);
    str = chunk->data + chunk->count;
    chunk->count += size;

    return str;
}

const char *flyweight_insert(const char *str)
{
    struct flyweight *fw = get_instance();

    const char *other = HASH_GET_STR(fw->hash, str);
    if (other)
        return other;

    other = chunk_insert(LIST_LAST_ENTRY(&fw->chunks, struct chunk, list), str);
    HASH_SET_STR(fw->hash, other, other);
    return other;
}

void flyweight_destroy(void)
{
    struct chunk *c, *tmp;
    struct flyweight *fw = get_instance();

    HASH_RELEASE_STR(fw->hash);
    LIST_FOR_EACH_ENTRY_SAFE(c, tmp, &fw->chunks, list) {
        list_remove(&c->list);
        free(c->data);
        free(c);
    }

    flyweight = NULL;
}
