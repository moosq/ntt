%option noyywrap nounput noinput batch stack reentrant
%option outfile="scanner.c"

%{

#include <stdio.h>
#include "scanner.h"
#include "source.h"

struct scanner {
	// source file buffer for handling error messages
    src_t *src;

	// token position begin
    int begin;

	// token position end
    int end;

    // error handler
    error_f error;

	// memorize begin of multline comment
    int comment_begin;

	// flex instance and buffer
    yyscan_t scanner;
    YY_BUFFER_STATE buf;
};

const char *names[TOK_COUNT] = {
	#define DEF_CHAR(Enum, Value)   [Enum] = # Enum,
	#define DEF_VALUE(Enum, Desc)   [Enum] = # Enum,
	#define DEF_TOKEN(Enum, Desc)   [Enum] = # Enum,
	#include "tokens.def"
};

const char *scanner_tok_str(enum token_type tok)
{
    return names[tok];
}

#define YY_EXTRA_TYPE     scanner_t*
#define YY_VALUE(Tok)     (Tok)
#define YY_NEW_LINE       src_set_linebreak(yyextra->src, yyextra->end-1)

#define YY_USER_ACTION    do {         \
		yyextra->begin = yyextra->end; \
		yyextra->end  += yyleng;       \
	} while(0);

#define YY_ERROR(Msg) \
	if (yyextra->error) \
        yyextra->error(yyextra->src, yyextra->begin, Msg)

%}


%x COMMENT

ws         [ \t]
nl         (\r\n|\r|\n|\v|\f)
alpha      [A-Za-z_]
alnum      [A-Za-z_0-9]
utf8       [\x01-\x7f]|[\x80-\xff]+

Identifier {alpha}{alnum}*
Modifier   @{Identifier}

Integer    [1-9][0-9]*|"0"
FloatDot   {Integer}"."[0-9]+
FloatE     {Integer}("."[0-9]+)?("E"|"e")("-")?{Integer}

%%

<*>{
 {ws}+
 {nl}            YY_NEW_LINE;
 "//".*{nl}      {YY_NEW_LINE; return YY_VALUE(TOK_COMMENT);}
 "/*"            { yyextra->comment_begin = yyextra->begin; BEGIN(COMMENT); }
}

<COMMENT>{
     [^*\r\n\v\f]*
     [^*\r\n\v\f]*\n             YY_NEW_LINE;
     "*"+[^*/\r\n\v\f]*
     "*"+[^*/\r\n\v\f]*\r\n\v\f  YY_NEW_LINE;
     "*"+"/" {
            BEGIN(INITIAL);
            yyextra->begin = yyextra->comment_begin;
            return TOK_COMMENT;
     }
}

<INITIAL>{
    "!"  return TOK_EXCLAMATION;
    "!=" return TOK_NE;
    "&"  return TOK_CONCAT;
    "("  return TOK_LPAREN;
    ")"  return TOK_RPAREN;
    "*"  return TOK_STAR;
    "+"  return TOK_PLUS;
    ","  return TOK_COMMA;
    "-"  return TOK_MINUS;
    "->" return TOK_REDIRECT;
    "."  return TOK_DOT;
    ".." return TOK_RANGE;
    "/"  return TOK_SLASH;
    ":"  return TOK_COLON;
    ":=" return TOK_ASSIGN;
    ";"  return TOK_SEMICOLON;
    "<"  return TOK_LT;
    "<<" return TOK_SHL;
    "<=" return TOK_LE;
    "<@" return TOK_ROL;
    "==" return TOK_EQ;
    ">"  return TOK_GT;
    ">=" return TOK_GE;
    ">>" return TOK_SHR;
    "?"  return TOK_ANY;
    "@>" return TOK_ROR;
    "["  return TOK_LBRACKET;
    "]"  return TOK_RBRACKET;
    "{"  return TOK_LCURLY;
    "}"  return TOK_RCURLY;

    "#"[^*\r\n]* return YY_VALUE(TOK_PREPROC);

    \"(\\.|[^\"\r\n\v\f]|\"\")*\" return YY_VALUE(TOK_CSTRING);
    \"(\\.|[^\"\r\n\v\f]|\"\")*$  {
        YY_ERROR("missing terminating \" character");
        return YY_VALUE(TOK_CSTRING);
    }

    '[^'\r\n\v\f]*'{Identifier} return YY_VALUE(TOK_BSTRING);
    '[^'\r\n\v\f]*' {
        YY_ERROR("missing bitstring specifier");
        return YY_VALUE(TOK_BSTRING);
    }
    '[^'\r\n\v\f]*$ {
        YY_ERROR("missing terminating ' character");
        return YY_VALUE(TOK_CSTRING);
    }

    {FloatDot}|{FloatE} return YY_VALUE(TOK_FLOAT);
    {Integer}           return YY_VALUE(TOK_INT);
    @?{Identifier}      return YY_VALUE(TOK_ID);

    "\0"                return TOK_EOF;
    {utf8}              YY_ERROR("invalid character");
}

%%

scanner_t *scanner_new(src_t *src, error_f error)
{
	scanner_t *s = calloc(1, sizeof *s);
	if (!s)
		return NULL;

	s->src   = src;
    s->error = error;

    yylex_init_extra(s, &s->scanner);
    s->buf = yy_scan_bytes(src_addr(src), src_size(src), s->scanner);
    return s;
}

void scanner_free(scanner_t *s)
{
    yy_delete_buffer(s->buf, s->scanner);
    yylex_destroy(s->scanner);
	free(s);
}

tok_t scan(scanner_t *s, unsigned *begin, unsigned *end)
{
	tok_t tok = yylex(s->scanner);
	*begin = s->begin;
	*end = s->end;
	return tok;
}
