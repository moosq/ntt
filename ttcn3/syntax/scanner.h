#ifndef SCANNER_H
#define SCANNER_H

#include "source.h"

typedef enum token_type tok_t;
typedef struct scanner scanner_t;
typedef void (*error_f)(src_t*, unsigned begin, const char *msg);

enum token_type {
    /* Character tokens */
	#define DEF_CHAR(Enum, Value) Enum = Value,
	#include "tokens.def"

    /* Multi-character tokens */
    TOK_MULTICHARS_START = 256,
	#define DEF_TOKEN(Enum, Desc) Enum,
	#include "tokens.def"

    /* Value tokens */
    TOK_VALUES_START,
	#define DEF_VALUE(Enum, Desc) Enum,
	#include "tokens.def"

    TOK_COUNT,
};

scanner_t *scanner_new(src_t*, error_f);
void scanner_free(scanner_t*);

tok_t scan(scanner_t*, unsigned* begin, unsigned* end);
const char *scanner_tok_str(tok_t tok);

static inline int is_literal(tok_t tok)
{
    switch (tok) {
    #define DEF_VALUE(Enum, Desc) case Enum:
    #include "tokens.def"
        return 1;
    default:
        return 0;
    }
}

#endif
