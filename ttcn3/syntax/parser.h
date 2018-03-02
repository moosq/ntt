#ifndef PARSER_H
#define PARSER_H

#include "ast.h"
#include "source.h"

typedef void (*ttcn3_error_func) (src_t*, loc_t*, const char *msg);
int parse(src_t*);
#endif
