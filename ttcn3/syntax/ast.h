#ifndef AST_H
#define AST_H

#include "scanner.h"
#include "list.h"

enum node_kind {
    NODE_UNKNOWN,
    #define TREE(Kind) NODE_ ## Kind,
    #include <nodes.def>
    NODE_COUNT,
};

struct loc {
    unsigned begin;
    unsigned end;
};

typedef struct loc loc_t;

struct ast {
    struct list list;
    enum node_kind kind;
    struct loc loc;
    const char *value;
};

typedef struct ast ast_t;

#endif
