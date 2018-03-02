/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 1






/* First part of user declarations.  */

#line 55 "parser.c" /* glr.c:240  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 9 "parser.y" /* glr.c:244  */

    #define _GNU_SOURCE
    #include <string.h>
    #include <stdlib.h>
    #include "source.h"
    #include "parser.h"
    #include "scanner.h"

    typedef struct {
        scanner_t *scanner;
        src_t *src;
        ast_t *root;
        int errors;
        ttcn3_error_func err;
    } parser_t;

    #define YYLTYPE loc_t

    /* Initialize a location */
    static inline
    loc_t loc_init(unsigned pos)
    {
        loc_t loc = {
            .begin = pos,
            .end   = pos,
        };

        return loc;
    }

    /* Merge two locations */
    static inline
    loc_t loc_merge(const loc_t first, const loc_t second)
    {
        loc_t loc = {
            .begin = first.begin,
            .end   = second.end,
        };

        return loc;
    }

#line 116 "parser.c" /* glr.c:244  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYTOK_EOF = 0,
    YYTOK_COMMENT = 258,
    YYTOK_ERROR = 259,
    YYTOK_PREPROC = 260,
    YYTOK_EXCLAMATION = 261,
    YYTOK_DOT = 262,
    YYTOK_CONCAT = 263,
    YYTOK_ANY = 264,
    YYTOK_GT = 265,
    YYTOK_LT = 266,
    YYTOK_PLUS = 267,
    YYTOK_MINUS = 268,
    YYTOK_STAR = 269,
    YYTOK_SLASH = 270,
    YYTOK_COLON = 271,
    YYTOK_SEMICOLON = 272,
    YYTOK_COMMA = 273,
    YYTOK_LPAREN = 274,
    YYTOK_RPAREN = 275,
    YYTOK_LCURLY = 276,
    YYTOK_RCURLY = 277,
    YYTOK_LBRACKET = 278,
    YYTOK_RBRACKET = 279,
    ID = 280,
    TITANID = 281,
    INT = 282,
    FLOAT = 283,
    CSTRING = 284,
    BSTRING = 285,
    MODIFIER = 286,
    YYTOK_EQ = 287,
    YYTOK_NE = 288,
    YYTOK_GE = 289,
    YYTOK_LE = 290,
    YYTOK_SHR = 291,
    YYTOK_SHL = 292,
    YYTOK_ROR = 293,
    YYTOK_ROL = 294,
    YYTOK_RANGE = 295,
    YYTOK_ASSIGN = 296,
    YYTOK_REDIRECT = 297,
    YYTOK_KW_ACTION = 298,
    YYTOK_KW_ACTIVATE = 299,
    YYTOK_KW_ADDRESS = 300,
    YYTOK_KW_ALIVE = 301,
    YYTOK_KW_ALL = 302,
    YYTOK_KW_ALT = 303,
    YYTOK_KW_ALTSTEP = 304,
    YYTOK_KW_AND = 305,
    YYTOK_KW_AND4B = 306,
    YYTOK_KW_ANY = 307,
    YYTOK_KW_ANYTYPE = 308,
    YYTOK_KW_BITSTRING = 309,
    YYTOK_KW_BOOLEAN = 310,
    YYTOK_KW_BREAK = 311,
    YYTOK_KW_CALL = 312,
    YYTOK_KW_CASE = 313,
    YYTOK_KW_CATCH = 314,
    YYTOK_KW_CHAR = 315,
    YYTOK_KW_CHARSTRING = 316,
    YYTOK_KW_CHECK = 317,
    YYTOK_KW_CLEAR = 318,
    YYTOK_KW_COMPLEMENT = 319,
    YYTOK_KW_COMPONENT = 320,
    YYTOK_KW_CONNECT = 321,
    YYTOK_KW_CONST = 322,
    YYTOK_KW_CONTINUE = 323,
    YYTOK_KW_CONTROL = 324,
    YYTOK_KW_CREATE = 325,
    YYTOK_KW_DEACTIVATE = 326,
    YYTOK_KW_DECMATCH = 327,
    YYTOK_KW_DEFAULT = 328,
    YYTOK_KW_DISCONNECT = 329,
    YYTOK_KW_DISPLAY = 330,
    YYTOK_KW_DO = 331,
    YYTOK_KW_DONE = 332,
    YYTOK_KW_ELSE = 333,
    YYTOK_KW_ENCODE = 334,
    YYTOK_KW_ENUMERATED = 335,
    YYTOK_KW_ERROR = 336,
    YYTOK_KW_EXCEPT = 337,
    YYTOK_KW_EXCEPTION = 338,
    YYTOK_KW_EXECUTE = 339,
    YYTOK_KW_EXTENDS = 340,
    YYTOK_KW_EXTENSION = 341,
    YYTOK_KW_EXTERNAL = 342,
    YYTOK_KW_FAIL = 343,
    YYTOK_KW_FALSE = 344,
    YYTOK_KW_FLOAT = 345,
    YYTOK_KW_FOR = 346,
    YYTOK_KW_FRIEND = 347,
    YYTOK_KW_FROM = 348,
    YYTOK_KW_FUNCTION = 349,
    YYTOK_KW_GETCALL = 350,
    YYTOK_KW_GETREPLY = 351,
    YYTOK_KW_GETVERDICT = 352,
    YYTOK_KW_GOTO = 353,
    YYTOK_KW_GROUP = 354,
    YYTOK_KW_HALT = 355,
    YYTOK_KW_HEXSTRING = 356,
    YYTOK_KW_IF = 357,
    YYTOK_KW_IFPRESENT = 358,
    YYTOK_KW_IMPORT = 359,
    YYTOK_KW_IN = 360,
    YYTOK_KW_INCONC = 361,
    YYTOK_KW_INFINITY = 362,
    YYTOK_KW_INOUT = 363,
    YYTOK_KW_INTEGER = 364,
    YYTOK_KW_INTERLEAVE = 365,
    YYTOK_KW_KILL = 366,
    YYTOK_KW_KILLED = 367,
    YYTOK_KW_LABEL = 368,
    YYTOK_KW_LANGUAGE = 369,
    YYTOK_KW_LENGTH = 370,
    YYTOK_KW_LOG = 371,
    YYTOK_KW_MAP = 372,
    YYTOK_KW_MATCH = 373,
    YYTOK_KW_MESSAGE = 374,
    YYTOK_KW_MIXED = 375,
    YYTOK_KW_MOD = 376,
    YYTOK_KW_MODIFIES = 377,
    YYTOK_KW_MODULE = 378,
    YYTOK_KW_MODULEPAR = 379,
    YYTOK_KW_MTC = 380,
    YYTOK_KW_NOBLOCK = 381,
    YYTOK_KW_NONE = 382,
    YYTOK_KW_NOT = 383,
    YYTOK_KW_NOT4B = 384,
    YYTOK_KW_NOWAIT = 385,
    YYTOK_KW_NULL = 386,
    YYTOK_KW_OCTETSTRING = 387,
    YYTOK_KW_OF = 388,
    YYTOK_KW_OMIT = 389,
    YYTOK_KW_ON = 390,
    YYTOK_KW_OPTIONAL = 391,
    YYTOK_KW_OR = 392,
    YYTOK_KW_OR4B = 393,
    YYTOK_KW_OUT = 394,
    YYTOK_KW_OVERRIDE = 395,
    YYTOK_KW_PARAM = 396,
    YYTOK_KW_PASS = 397,
    YYTOK_KW_PATTERN = 398,
    YYTOK_KW_PERMUTATION = 399,
    YYTOK_KW_PORT = 400,
    YYTOK_KW_PRESENT = 401,
    YYTOK_KW_PRIVATE = 402,
    YYTOK_KW_PROCEDURE = 403,
    YYTOK_KW_PUBLIC = 404,
    YYTOK_KW_RAISE = 405,
    YYTOK_KW_READ = 406,
    YYTOK_KW_REALTIME = 407,
    YYTOK_KW_RECEIVE = 408,
    YYTOK_KW_RECORD = 409,
    YYTOK_KW_RECURSIVE = 410,
    YYTOK_KW_REGEXP = 411,
    YYTOK_KW_REM = 412,
    YYTOK_KW_REPEAT = 413,
    YYTOK_KW_REPLY = 414,
    YYTOK_KW_RETURN = 415,
    YYTOK_KW_RUNNING = 416,
    YYTOK_KW_RUNS = 417,
    YYTOK_KW_SELECT = 418,
    YYTOK_KW_SELF = 419,
    YYTOK_KW_SEND = 420,
    YYTOK_KW_SENDER = 421,
    YYTOK_KW_SET = 422,
    YYTOK_KW_SETVERDICT = 423,
    YYTOK_KW_SIGNATURE = 424,
    YYTOK_KW_START = 425,
    YYTOK_KW_STEPSIZE = 426,
    YYTOK_KW_STOP = 427,
    YYTOK_KW_SUBSET = 428,
    YYTOK_KW_SUPERSET = 429,
    YYTOK_KW_SYSTEM = 430,
    YYTOK_KW_TEMPLATE = 431,
    YYTOK_KW_TESTCASE = 432,
    YYTOK_KW_TIMEOUT = 433,
    YYTOK_KW_TIMER = 434,
    YYTOK_KW_TIMESTAMP = 435,
    YYTOK_KW_TO = 436,
    YYTOK_KW_TRIGGER = 437,
    YYTOK_KW_TRUE = 438,
    YYTOK_KW_TYPE = 439,
    YYTOK_KW_UNION = 440,
    YYTOK_KW_UNIVERSAL = 441,
    YYTOK_KW_UNMAP = 442,
    YYTOK_KW_VALUE = 443,
    YYTOK_KW_VALUEOF = 444,
    YYTOK_KW_VAR = 445,
    YYTOK_KW_VARIANT = 446,
    YYTOK_KW_VERDICTTYPE = 447,
    YYTOK_KW_WHILE = 448,
    YYTOK_KW_WITH = 449,
    YYTOK_KW_XOR = 450,
    YYTOK_KW_XOR4B = 451,
    OMIT = 452,
    ANYFROM = 454,
    ARRAYDEF = 455,
    UNARY = 456
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "parser.y" /* glr.c:244  */

    const char *lit;
    ast_t *ast;

#line 335 "parser.c" /* glr.c:244  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (parser_t *p);


/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;

/* Copy the second part of user declarations.  */
#line 301 "parser.y" /* glr.c:263  */


    /* Bison needs these macros to handle custom locations */
    #define YYLLOC_DEFAULT(Cur, Rhs, N)                              \
    do                                                               \
    if (N) {                                                         \
        (Cur) = loc_merge(YYRHSLOC(Rhs, 1), YYRHSLOC(Rhs, N));       \
    } else {                                                         \
        (Cur).begin = (Cur).end = YYRHSLOC(Rhs, 0).end;              \
    }                                                                \
    while (0)

    static inline void yyerror(loc_t *loc, parser_t *p, const char *msg);
    static int yylex(YYSTYPE *value, loc_t *loc, parser_t *p);

#line 398 "parser.c" /* glr.c:263  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5785

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  208
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  172
/* YYNRULES -- Number of rules.  */
#define YYNRULES  512
/* YYNRULES -- Number of states.  */
#define YYNSTATES  959
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 14
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   462

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   327,   327,   335,   336,   340,   344,   346,   350,   351,
     355,   358,   360,   363,   365,   369,   370,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   388,
     390,   391,   392,   397,   398,   402,   403,   412,   417,   418,
     419,   422,   424,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   440,   444,   447,   449,   453,   454,   458,   459,
     460,   461,   464,   466,   470,   471,   475,   476,   479,   481,
     485,   486,   490,   491,   492,   493,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   513,   514,   515,   516,   517,
     518,   519,   522,   524,   533,   536,   538,   539,   540,   549,
     553,   558,   563,   573,   578,   583,   588,   593,   598,   602,
     604,   608,   609,   613,   617,   619,   623,   628,   633,   634,
     638,   639,   648,   652,   654,   663,   667,   669,   673,   674,
     675,   679,   680,   684,   685,   686,   687,   688,   697,   700,
     704,   706,   710,   719,   729,   738,   747,   748,   749,   757,
     759,   763,   764,   768,   774,   775,   784,   788,   789,   793,
     794,   798,   801,   803,   807,   808,   812,   813,   814,   815,
     816,   820,   824,   828,   833,   837,   838,   841,   843,   844,
     845,   848,   850,   854,   855,   859,   860,   865,   866,   870,
     871,   879,   881,   884,   886,   890,   891,   895,   899,   901,
     905,   906,   907,   908,   909,   910,   913,   915,   919,   920,
     924,   925,   926,   930,   931,   932,   933,   934,   935,   936,
     937,   938,   942,   945,   947,   951,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   971,   972,   973,
     974,   975,   976,   977,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1029,
    1030,  1035,  1036,  1040,  1041,  1045,  1046,  1047,  1048,  1049,
    1050,  1051,  1054,  1056,  1057,  1058,  1062,  1063,  1064,  1065,
    1066,  1067,  1070,  1071,  1074,  1075,  1076,  1077,  1078,  1079,
    1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,
    1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1100,  1101,
    1102,  1103,  1104,  1108,  1113,  1114,  1118,  1119,  1123,  1124,
    1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,
    1145,  1146,  1150,  1153,  1154,  1155,  1156,  1157,  1158,  1159,
    1160,  1161,  1165,  1169,  1172,  1174,  1178,  1181,  1183,  1187,
    1188,  1192,  1193,  1197,  1198,  1207,  1208,  1212,  1213,  1217,
    1218,  1219,  1220,  1221,  1222,  1223,  1225,  1226,  1227,  1228,
    1230,  1231,  1234,  1237,  1238,  1239,  1240,  1241,  1242,  1243,
    1244,  1245,  1246,  1250,  1251,  1252,  1253,  1254,  1255,  1256,
    1265,  1273,  1274,  1277,  1278,  1286,  1287,  1288,  1292,  1296,
    1300,  1301,  1305,  1306,  1314,  1315,  1318,  1320,  1324,  1325,
    1329,  1330,  1331,  1335,  1338,  1340,  1344,  1345,  1346,  1349,
    1351,  1354,  1356,  1357,  1358,  1362,  1363,  1364,  1369,  1370,
    1371,  1372,  1373,  1377,  1380,  1381,  1382,  1384,  1385,  1386,
    1387,  1388,  1389,  1390,  1391,  1392,  1396,  1396,  1397,  1397,
    1398,  1398,  1400,  1400,  1401,  1401,  1402,  1402,  1403,  1403,
    1404,  1404,  1405,  1405,  1406,  1406,  1407,  1407,  1408,  1408,
    1411,  1411,  1412
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"comment\"",
  "\"error token\"", "\"preprocessor directive\"", "\"!\"", "\".\"",
  "\"&\"", "\"?\"", "\">\"", "\"<\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\":\"", "\";\"", "\",\"", "\"(\"", "\")\"", "\"{\"", "\"}\"", "\"[\"",
  "\"]\"", "\"identifier\"", "\"Titan identifier\"", "\"integer literal\"",
  "\"float literal\"", "\"string literal\"", "\"bitstring literal\"",
  "\"modifier\"", "\"==\"", "\"!=\"", "\">=\"", "\"<=\"", "\">>\"",
  "\"<<\"", "\"@>\"", "\"<@\"", "\"..\"", "\":=\"", "\"->\"", "\"action\"",
  "\"activate\"", "\"address\"", "\"alive\"", "\"all\"", "\"alt\"",
  "\"altstep\"", "\"and\"", "\"and4b\"", "\"any\"", "\"anytype\"",
  "\"bitstring\"", "\"boolean\"", "\"break\"", "\"call\"", "\"case\"",
  "\"catch\"", "\"char\"", "\"charstring\"", "\"check\"", "\"clear\"",
  "\"complement\"", "\"component\"", "\"connect\"", "\"const\"",
  "\"continue\"", "\"control\"", "\"create\"", "\"deactivate\"",
  "\"decmatch\"", "\"default\"", "\"disconnect\"", "\"display\"", "\"do\"",
  "\"done\"", "\"else\"", "\"encode\"", "\"enumerated\"", "\"error\"",
  "\"except\"", "\"exception\"", "\"execute\"", "\"extends\"",
  "\"extension\"", "\"external\"", "\"fail\"", "\"false\"", "\"float\"",
  "\"for\"", "\"friend\"", "\"from\"", "\"function\"", "\"getcall\"",
  "\"getreply\"", "\"getverdict\"", "\"goto\"", "\"group\"", "\"halt\"",
  "\"hexstring\"", "\"if\"", "\"ifpresent\"", "\"import\"", "\"in\"",
  "\"inconc\"", "\"infinity\"", "\"inout\"", "\"integer\"",
  "\"interleave\"", "\"kill\"", "\"killed\"", "\"label\"", "\"language\"",
  "\"length\"", "\"log\"", "\"map\"", "\"match\"", "\"message\"",
  "\"mixed\"", "\"mod\"", "\"modifies\"", "\"module\"", "\"modulepar\"",
  "\"mtc\"", "\"noblock\"", "\"none\"", "\"not\"", "\"not4b\"",
  "\"nowait\"", "\"null\"", "\"octetstring\"", "\"of\"", "\"omit\"",
  "\"on\"", "\"optional\"", "\"or\"", "\"or4b\"", "\"out\"",
  "\"override\"", "\"param\"", "\"pass\"", "\"pattern\"",
  "\"permutation\"", "\"port\"", "\"present\"", "\"private\"",
  "\"procedure\"", "\"public\"", "\"raise\"", "\"read\"", "\"realtime\"",
  "\"receive\"", "\"record\"", "\"recursive\"", "\"regexp\"", "\"rem\"",
  "\"repeat\"", "\"reply\"", "\"return\"", "\"running\"", "\"runs\"",
  "\"select\"", "\"self\"", "\"send\"", "\"sender\"", "\"set\"",
  "\"setverdict\"", "\"signature\"", "\"start\"", "\"stepsize\"",
  "\"stop\"", "\"subset\"", "\"superset\"", "\"system\"", "\"template\"",
  "\"testcase\"", "\"timeout\"", "\"timer\"", "\"timestamp\"", "\"to\"",
  "\"trigger\"", "\"true\"", "\"type\"", "\"union\"", "\"universal\"",
  "\"unmap\"", "\"value\"", "\"valueof\"", "\"var\"", "\"variant\"",
  "\"verdicttype\"", "\"while\"", "\"with\"", "\"xor\"", "\"xor4b\"",
  "OMIT", "\"checkstate\"", "ANYFROM", "ARRAYDEF", "UNARY",
  "\"not_a_number\"", "\"__MODULE__\"", "\"__FILE__\"", "\"__BFILE__\"",
  "\"__LINE__\"", "\"__SCOPE__\"", "$accept", "parse", "Modules", "Module",
  "OptLanguage", "Strings", "String", "OptModuleDefs", "OptControl",
  "ModuleDefs", "ModuleDef", "OptVisibility", "Group", "Friend", "Import",
  "ImportBody", "OptRecursive", "ImportType", "ImportTypeGroup",
  "ImportTypeAll", "OptImportStmts", "ImportStmts", "ImportStmt",
  "OptExcept", "GroupRefs", "GroupRef", "OptExceptStmts", "ExceptStmts",
  "ExceptStmt", "Type", "NestedType", "OptReturn", "SubType",
  "OptConstraint", "RecordOfType", "SetOfType", "NestedRecordOfType",
  "NestedSetOfType", "UnionType", "RecordType", "SetType",
  "NestedUnionType", "NestedRecordType", "NestedSetType",
  "OptStructFields", "StructFields", "StructField", "OptOptional", "Enum",
  "NestedEnum", "Enumerations", "Enumeration", "Component", "OptExtends",
  "Port", "OptRealtime", "PortType", "PortAttributes", "PortAttribute",
  "Signature", "OptExceptionSpec", "NoBlock", "ExtFunction", "Function",
  "Testcase", "Altstep", "OptFormalPars", "FormalPars", "FormalPar",
  "FormalParRef", "ExtConst", "ModulePar", "ModulePars",
  "ObsoleteModulePar", "OptDecls", "Decls", "Decl", "TimerDecl",
  "PortDecl", "VarDecl", "Const", "Template", "OptTemplateRestriction",
  "OptTemplatePars", "Declarators", "Declarator", "ArrayDef", "Def",
  "OptWith", "OptWithStmts", "WithStmts", "WithStmt", "OptOverride",
  "WithType", "OptWithQualifiers", "WithQualifiers", "WithQualifier",
  "WithSelectorType", "WithSelector", "OptWithExcept", "WithValue", "Ref",
  "RefElem", "AnyOrAllFromKeyword", "Refs", "Primary", "PortReadOp",
  "OptCheckParam", "Expr", "ModifiesExpr", "Exprs", "ExprOrOmit",
  "Literal", "Value", "PatternValue", "SetValue", "OptParams", "Params",
  "OptInits", "Inits", "InitElement", "Designator", "Block", "Stmts",
  "Stmt", "CommunicationStmt", "Assignment", "ForLoop", "WhileLoop",
  "DoWhileLoop", "IfConstruct", "SelectUnionConstruct", "SelectConstruct",
  "Cases", "Case", "AltConstruct", "OptAltGuards", "AltGuards", "AltGuard",
  "GuardOp", "OptDirection", "Direction", "OptModifier",
  "OptNestedTemplateRestriction", "TemplateRestriction", "Redirect",
  "Index", "RunsOnSpec", "MtcSpec", "SystemSpec", "To", "From",
  "Timestamp", "IndexSpec", "SenderSpec", "ValueSpec", "ParamSpec",
  "Length", "OptRunsOnSpec", "OptMtcSpec", "OptSystemSpec", "OptRedirect",
  "OptLength", "OptParamSpec", "OptSenderSpec", "OptIndexSpec",
  "OptTimestamp", "OptTo", "OptFrom", "OptExpr", "OptSemicolon",
  "Semicolon", YY_NULLPTR
};
#endif

#define YYPACT_NINF -701
#define YYTABLE_NINF -394

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     -42,   287,   114,   -42,   105,  -701,  -701,    14,  -701,   105,
    -701,  -701,  -701,   115,   178,  -701,  -701,   196,  -701,    43,
     115,    94,   287,  -701,   167,   171,   253,   105,   452,  -701,
    -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
     287,   233,   133,   287,   243,   251,   105,  -701,   287,  4807,
       4,   287,   187,  3247,  4807,   287,   267,   287,   287,  4183,
     306,  -701,  -701,  -701,  -701,  -701,  -701,  -701,   254,   287,
     289,  2931,  -701,   121,  -701,   301,  -701,  -701,  -701,  -701,
     388,   400,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,   264,  -701,  -701,  -701,   550,  -701,  4807,  4807,
     311,   311,   287,  4807,   550,   550,   330,   177,   311,   337,
      24,  -701,    70,  -701,   287,   287,   287,   213,   213,   287,
    -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
     550,  -701,  -701,   340,  -701,   311,  -701,   329,  -701,   254,
    -701,   341,  -701,  -701,   243,   357,   287,   396,   362,   287,
     403,  -701,  1467,    26,   403,   406,  -701,   152,  -701,  -701,
    3090,   105,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,   377,  -701,    42,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,  4027,  1060,  1669,    24,   583,   550,  -701,
     287,   420,    14,  3403,   105,   550,    24,    24,    42,   386,
     434,   457,  4807,    42,   287,  -701,  1467,  1669,   398,   499,
     241,   506,   515,  -701,   404,   521,   416,   543,    65,   202,
    4807,   121,   528,   542,   375,  4339,  -701,  1467,   542,  -701,
    1060,   430,  1467,  -701,  1467,  1467,  -701,  1467,  1060,  -701,
    -701,  -701,  -701,   553,   564,  -701,  -701,  -701,  -701,  -701,
    4807,  -701,  1467,  1467,  -701,  -701,  -701,  -701,   311,   565,
     311,   572,   573,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,   547,   557,  2583,  -701,  -701,   128,  -701,  1467,   581,
    -701,   464,  1467,  3715,  1669,   151,  -701,  1467,  1467,  -701,
     574,   574,  -701,   105,  -701,   332,  -701,  -701,  -701,   600,
     628,  -701,   306,  -701,  -701,  -701,  -701,  -701,   630,  -701,
    -701,   631,  -701,  -701,  -701,  -701,  1467,  1467,   536,  2583,
    -701,   633,   649,  -701,   613,   644,  -701,    24,   650,    42,
     516,   121,   105,  -701,   652,  -701,  -701,   654,  -701,  -701,
    -701,   550,   655,  -701,   979,  -701,  4807,   657,   287,  -701,
    -701,  -701,   524,  1467,  4495,  4495,  4495,  4495,  4495,   121,
     566,  -701,   659,   550,  -701,   121,  1265,   658,   542,   105,
     663,   670,   555,   671,  1902,   669,   263,   403,  2643,  -701,
    -701,  2583,   276,   672,  1467,  1467,   636,   767,   236,   666,
    1467,   673,  1467,  1467,  1467,   662,  -701,  1467,  1467,  1467,
    1467,  1467,  1467,  1467,  1467,  1467,  1467,  1467,  1467,  1467,
    1467,  1467,  1467,  1467,  1467,  1467,  1467,  1467,  1467,  1467,
    1467,  -701,   593,  1935,  4807,   403,  1981,   678,   680,  -701,
    4807,   692,  4807,  4807,  2774,  -701,   532,   662,   575,   554,
    2583,  2583,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,   697,   332,   105,   595,   561,   229,   311,  1467,  1467,
    2071,  -701,  1060,  1669,  -701,  -701,    42,   713,  -701,    96,
    -701,  -701,   -41,   715,   561,  -701,   583,   718,    84,   359,
    -701,   719,  -701,   723,  2131,   724,    59,    85,   725,   287,
    -701,  -701,  -701,  -701,  -701,   717,   729,  -701,  -701,   583,
     287,   726,   287,   387,  -701,  -701,  -701,    24,  -701,   727,
    2583,   728,  -701,   105,  -701,  1467,  1467,  1467,   243,  -701,
    -701,  -701,  1467,  -701,  -701,   364,   379,  1467,  -701,  -701,
     412,  1060,   428,   451,  2583,  -701,    68,    40,    40,    68,
      68,  -701,  -701,   690,   690,    40,    40,    82,    82,    82,
      82,  2643,   767,   236,  -701,  2677,    95,  -701,  2721,   257,
    -701,   732,   397,  -701,   243,  1467,   349,  -701,   594,  1060,
     583,   583,  1060,   583,  -701,  -701,  -701,   532,  -701,   554,
    -701,   662,  -701,   105,  -701,  -701,   730,   615,  -701,   629,
    -701,  4651,   423,   477,  -701,  -701,  -701,   735,   561,   664,
    -701,   121,   677,  -701,   306,   679,   679,   229,    51,   585,
    4807,   739,    84,   105,   287,   121,  1467,   201,  -701,   287,
    4495,   632,  4495,   634,  4495,    65,   121,  4495,    30,   121,
      30,   121,  -701,   243,  4807,  -701,  2183,  2243,  2297,   688,
    2583,  -701,  -701,  2583,  -701,   466,  -701,  -701,   712,   752,
    -701,   487,   403,   403,   122,   403,   403,   756,   763,   574,
     488,   612,  -701,   662,   532,  -701,  3559,   755,  4807,  4807,
    -701,   585,  -701,   287,   583,  -701,  1467,  -701,  1467,   625,
     629,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  4963,  5119,   764,   664,   105,  -701,   766,  4807,   772,
     121,   121,   620,  1467,   121,  4807,  -701,   243,   583,   121,
     105,  -701,  -701,  -701,  2357,  4807,   651,   653,   182,   105,
    5275,   458,   771,  4495,   773,  4495,   478,   660,  -701,  -701,
     121,  -701,   121,  -701,  -701,   160,  -701,   509,  -701,  4807,
    4807,    83,  -701,    53,   219,  -701,   712,   616,   705,  -701,
     705,  1467,  -701,   574,   705,   705,  -701,  -701,  -701,   788,
    -701,  -701,   532,  -701,  1669,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,   762,  -701,   627,  -701,   765,  -701,   583,  -701,
    -701,   583,   583,   789,  -701,  2391,  2435,   121,   585,   242,
     718,   242,   795,  -701,   331,  -701,   105,  -701,   664,   583,
    4807,  -701,  -701,  -701,  2469,  -701,   583,   121,  -701,  -701,
    -701,   583,   797,   802,   121,   105,  -701,   388,   718,  -701,
    -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  3871,
    -701,  -701,   807,   809,  -701,  -701,  1467,   243,  -701,  -701,
     271,  -701,   810,   574,   574,  1869,  -701,   574,   574,  -701,
    -701,   806,  3559,  -701,   750,   168,  -701,  -701,  -701,   625,
    4807,  -701,  -701,  4807,   814,  -701,  5431,  5587,   815,   664,
     105,   638,  -701,  -701,   229,   229,  -701,  -701,   243,   243,
     642,  -701,  -701,   542,  -701,  -701,   705,  1467,  -701,  -701,
    -701,  -701,   817,  -701,   140,   116,   243,   718,  -701,   664,
     388,   718,   388,   718,  -701,   105,  -701,  -701,   643,   646,
    -701,  -701,   243,   146,   574,  2529,  4807,   121,   476,   121,
     121,   820,  -701,  -701,  -701,  -701,  -701,  -701,   705,   529,
    -701,   121,  -701,  -701,  -701,   574,  -701,  -701,  -701
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     2,   510,   189,   190,     6,     1,   510,
     512,     3,   511,     0,     0,     4,    10,     7,     8,    29,
       0,    31,     0,    32,    30,    13,    29,   510,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    27,     9,
       0,     0,     0,     0,     0,     0,   510,    15,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
     461,    26,   166,   167,   168,   170,   169,    35,    29,     0,
       0,     0,    14,   191,    16,     0,   244,   251,   252,   253,
       0,     0,   260,   261,   262,   263,   265,   266,   247,   267,
     268,   269,   270,   271,   272,   250,   273,   274,   275,   276,
     277,   278,   279,   249,   246,   280,   248,   281,   282,   283,
     284,   285,     0,   287,   288,   264,     0,   226,     0,     0,
     459,   459,     0,     0,     0,     0,     0,     0,   459,     0,
     191,   183,   185,   187,     0,     0,     0,   494,   494,     0,
      28,    84,    79,    80,    81,    82,    83,    78,    76,    77,
       0,   465,   467,   462,   466,   459,   464,     0,    36,    29,
     395,     0,   400,   401,     0,     0,     0,     0,     0,     0,
       0,   399,   402,     0,   384,     0,   414,   293,   423,   422,
       0,   510,   412,   413,   415,   416,   417,   418,   419,   420,
     421,     0,     5,   454,   254,   290,   255,   256,   257,   289,
     258,   259,   286,     0,   387,     0,   191,   245,     0,   460,
       0,     0,     6,     0,   510,     0,   191,   191,   454,     0,
       0,     0,     0,   454,     0,   171,     0,     0,   123,     0,
       0,     0,     0,   495,     0,     0,     0,     0,    95,     0,
       0,   191,     0,   446,     0,     0,   404,     0,   446,   405,
       0,   406,     0,   365,     0,     0,   366,     0,   387,   350,
     351,   348,   349,     0,     0,   356,   353,   357,   354,   363,
       0,   355,     0,     0,   364,   359,   360,   352,   459,     0,
     459,     0,     0,   361,   358,   362,   367,   368,   369,   370,
     371,   293,   306,   403,   313,   372,   308,   380,     0,     0,
     408,   385,     0,     0,     0,     0,   294,     0,     0,   424,
     425,   427,   396,   510,   397,   193,   456,   458,   457,     0,
     150,   151,   461,   455,   233,   240,   235,   239,   241,   236,
     237,     0,   232,   234,   238,   229,   347,     0,   293,   346,
     391,     0,   388,   389,     0,     0,   174,   191,     0,   454,
      41,   191,   510,   159,   161,   157,   172,     0,   178,   180,
     179,     0,     0,   184,     0,   186,     0,     0,     0,   129,
     130,   128,   126,     0,   109,     0,   109,     0,     0,   191,
      96,    98,     0,     0,    33,   191,   508,     0,   447,   510,
       0,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   344,     0,     0,     0,     0,     0,   338,   339,     0,
       0,     0,     0,     0,     0,     0,   307,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   311,   309,     0,     0,     0,     0,     0,   302,   430,
       0,     0,     0,     0,     0,   472,   502,   500,   496,   498,
     478,   477,   426,   428,   398,   202,   200,   203,   204,   205,
     201,     0,   194,   510,   198,   486,   454,   459,     0,     0,
       0,   228,     0,     0,   227,   156,   454,     0,    42,     0,
     158,   160,    92,   181,     0,   188,   291,   124,   162,     0,
     118,   120,   127,     0,     0,     0,   494,   494,     0,     0,
      86,    87,    88,    89,    90,     0,   110,   111,    91,    85,
       0,     0,     0,     0,    94,    97,   463,   191,    34,     0,
     509,     0,   444,   510,   448,     0,     0,     0,     0,   445,
     386,   407,     0,   383,   381,     0,     0,     0,   382,   378,
       0,     0,     0,     0,   312,   473,   332,   320,   319,   330,
     331,   333,   334,   317,   318,   321,   322,   324,   323,   326,
     325,   337,   316,   329,   335,   314,   327,   336,   315,   328,
     310,     0,     0,   409,     0,     0,     0,   429,   480,     0,
     481,   479,     0,   482,   503,   471,   501,   502,   497,   498,
     499,   500,   192,   510,   195,   199,   206,     0,   487,   488,
     152,     0,     0,     0,   394,   390,   392,     0,   486,    54,
      53,   191,    38,   142,   461,   140,   140,   454,     0,   490,
       0,     0,   163,   510,     0,   191,     0,     0,   485,     0,
     109,     0,   109,     0,     0,    95,   191,     0,    95,   191,
      95,   191,   173,     0,     0,   449,     0,     0,     0,   435,
     345,   373,   374,   343,   375,     0,   376,   377,     0,     0,
     433,     0,   384,   384,   506,   384,   384,     0,     0,   492,
       0,     0,   470,   500,   502,   196,     0,     0,     0,     0,
     489,   490,   155,     0,   154,   242,     0,   230,     0,    92,
     488,    45,    44,    47,    52,    50,    49,    48,    43,    46,
      51,     0,     0,     0,    55,   510,    37,     0,     0,     0,
     191,   191,     0,     0,   191,     0,   491,     0,   292,   191,
     510,   164,   119,   116,     0,     0,     0,     0,     0,   510,
       0,     0,     0,     0,     0,     0,     0,   114,   104,   112,
     191,   105,   191,   103,   452,   293,   453,     0,   434,     0,
       0,     0,   379,     0,     0,   440,     0,   504,   506,   385,
     506,     0,   507,   492,   506,   506,   303,   305,   493,     0,
     484,   483,   502,   469,     0,   217,   216,   219,   213,   221,
     220,   215,   285,   214,     0,   208,     0,   210,   211,   225,
     197,   474,   475,     0,   153,     0,     0,   191,   490,    62,
      58,    62,    59,    64,    66,    40,   510,    56,    68,    93,
       0,   138,   139,   182,   191,   176,   476,   191,   122,   165,
     121,   133,     0,     0,   191,   510,   131,   136,   137,   117,
     107,   101,   108,   102,   106,   115,   113,    99,   100,     0,
     451,   450,     0,     0,   437,   436,     0,     0,   439,   441,
       0,   505,   410,   492,   492,     0,   299,   492,   492,   304,
     468,     0,     0,   207,   223,     0,   243,   231,   143,    92,
       0,    60,    61,     0,     0,    57,     0,     0,     0,    69,
     510,     0,   175,   145,   454,   454,   125,   132,     0,     0,
       0,   443,   438,     0,   298,   297,   506,     0,   295,   296,
     212,   209,     0,   222,     0,     0,     0,    63,    65,    68,
      73,    72,    75,    74,    39,   510,    70,   141,     0,     0,
     431,   432,     0,     0,   492,     0,     0,   191,     0,   191,
     191,     0,    71,   134,   135,   442,   411,   300,   506,     0,
     146,   191,   147,   144,    67,   492,   224,   148,   301
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -701,  -701,  -701,   833,   637,  -701,   819,    64,  -701,  -701,
     818,  -701,  -701,  -701,  -701,  -701,  -701,  -549,  -518,  -701,
    -701,  -701,   129,    34,  -701,   -37,   -69,  -701,   -38,  -701,
    -351,  -658,  -701,  -178,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,  -345,  -346,   210,  -701,  -701,  -701,
     220,   224,  -701,  -701,  -701,  -701,  -701,  -701,   123,  -701,
     234,  -701,  -701,  -701,  -701,  -701,  -185,  -606,   389,  -701,
    -701,  -701,  -701,   661,  -701,   -13,   -23,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,   -81,  -215,  -139,    18,  -117,  -701,
    -701,   391,  -701,  -701,  -701,  -701,    -8,  -701,  -701,  -701,
    -701,    -3,  -201,  -701,  -654,   -67,  -701,  -701,   517,   238,
    -390,  -199,  -701,  -701,  -701,  -221,   -50,  -140,   609,  -225,
     390,  -701,   -43,  -701,   691,   214,  -238,  -701,  -701,  -701,
     109,  -701,  -701,   110,  -700,  -701,   639,  -548,  -380,  -701,
    -701,  -590,   -92,  -310,   640,  -174,  -701,   381,  -701,  -701,
     111,  -167,   577,  -245,   580,  -701,   435,  -222,   274,   194,
    -632,  -655,  -111,  -701,   296,  -534,  -558,  -701,  -645,  -701,
      -9,  -701
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     2,     3,     4,    14,    17,    18,    25,    45,    26,
      27,    28,    29,    30,    31,   621,   489,   886,   887,   622,
     713,   714,   715,   881,   812,   813,   888,   889,   890,   140,
     509,   625,   141,   379,   142,   143,   510,   511,   144,   145,
     146,   512,   513,   514,   515,   516,   517,   846,   147,   518,
     499,   500,   148,   367,   149,   503,   372,   738,   739,    32,
     720,   626,    33,    34,    35,    36,   319,   320,   321,   693,
      37,    38,   213,   214,   631,   632,   176,    62,    63,    64,
      65,    66,   128,   628,   130,   131,   132,   133,   192,   471,
     472,   473,   606,   474,   687,   794,   795,   796,   797,   913,
     800,   291,   117,   118,   497,   292,   677,   587,   339,   294,
     402,   340,   295,   296,   549,   297,   300,   769,   341,   342,
     343,   344,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   764,   765,   190,   387,   388,   389,   757,
     322,   323,   210,   155,   156,   778,   416,   608,   690,   726,
     310,   772,   594,   596,   600,   458,   459,   233,   609,   691,
     727,   779,   234,   599,   601,   597,   595,   862,   773,   531,
      11,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      15,    72,   335,   309,   178,    61,   345,   393,   533,   363,
     311,   238,   477,   225,   545,   546,   381,   380,    47,     7,
     550,   722,   552,   553,   520,   396,   522,   236,   365,   211,
     251,   521,   523,   357,   301,   206,   222,    74,   362,   682,
      41,   807,   224,   216,   217,   298,   116,   740,   417,   257,
     124,   125,   420,   421,   422,   423,   150,   810,    67,   803,
     456,    70,  -149,   240,   859,   -11,    75,   684,   177,   121,
     711,   119,   856,   126,   442,   129,   428,   429,   430,   431,
     640,     1,   422,   423,   257,   623,   838,   158,   226,   346,
     417,   434,   723,   226,   420,   421,   422,   423,   120,   355,
     356,   712,   335,   417,    71,   449,   642,   420,   421,   422,
     423,   227,   -11,   178,     8,   207,   208,   619,   866,   624,
     215,   244,    10,   863,   384,   864,   783,   347,    13,   867,
     868,   857,   157,   434,   354,    21,   462,   463,   939,   386,
     212,   771,    22,   620,    16,   231,   434,   316,   740,   782,
     317,    49,   228,   229,   230,   232,   235,   237,   525,   303,
     859,   435,   937,   386,   487,   711,   891,   849,   946,   386,
     555,   204,   314,   270,   231,   205,   879,   177,   437,   204,
     231,   318,   450,   205,   246,   167,   409,   249,   411,   435,
      23,   386,    24,   304,   305,   671,   712,   438,   306,    19,
     231,   338,   305,   435,   834,   353,   306,    49,   904,   905,
     215,   299,   908,   909,    20,   307,   435,    40,   191,   361,
     437,   916,   391,   242,   870,   438,   917,   735,   348,    54,
     485,   441,   921,   923,   490,    49,   440,   383,     5,   438,
      44,   858,   392,   231,   417,   307,   735,   338,   420,   421,
     422,   423,   438,   307,    68,   338,    69,   541,     6,    42,
      56,   934,   524,    58,    71,   417,    43,   406,   528,   420,
     421,   422,   423,    73,    60,   -12,   -11,   763,   440,   947,
     122,   482,   949,   540,   616,    54,   127,   316,   928,   929,
     317,   440,   451,   902,   542,   742,   543,   744,   746,   736,
     958,   617,   527,   955,   464,   583,   316,   194,   434,   317,
     159,   219,     5,    54,   718,   191,    56,   452,   736,    58,
     193,   318,   -12,   220,   880,   202,   665,   915,   231,   763,
      60,   453,     6,   308,   316,   195,   151,   317,   203,   454,
     318,   308,   209,   491,    56,    21,    21,    58,   152,   218,
     204,   241,    22,    22,   205,   933,   223,   435,    60,   239,
     369,   370,   243,   496,   680,   221,   938,   681,   318,   737,
     645,   519,   519,   519,   519,   519,   245,   634,   435,   493,
     534,   635,   542,   248,   661,   611,   501,   196,   737,   371,
     154,   305,   841,   438,   843,   641,   643,   542,   315,   662,
      23,    23,    24,    24,   203,   647,   358,   465,   672,   651,
     652,   466,   678,   884,   438,   247,   204,   669,   467,   679,
     205,   197,   250,   381,   380,   302,   381,   380,   381,   380,
     542,   417,   664,   418,   419,   420,   421,   422,   423,   349,
     151,   582,   307,   695,   673,   674,   542,   588,   666,   590,
     591,   593,   152,   194,   359,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   604,   198,   900,   747,   468,   542,
     750,   667,   752,   433,   434,   633,   634,   360,   804,   338,
     839,   195,   153,   366,   482,   417,   762,   418,   419,   420,
     421,   422,   423,   199,   154,   659,   647,   697,   951,   386,
     844,    48,   675,   469,   716,   542,   482,   767,   780,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   733,    49,
     368,   852,   853,   470,   655,   373,   850,   433,   434,   748,
      71,   676,   751,   196,   753,   533,   374,   375,   648,    50,
     650,   670,   376,   203,   435,   200,    51,   630,   338,   377,
     385,   956,   414,   533,   203,   204,    52,   203,   533,   205,
     436,   437,   203,   414,   378,   386,   204,   197,   390,   204,
     205,   397,   404,   205,   204,     5,    53,  -393,   205,   201,
     438,   309,   306,   405,   410,   871,   338,   178,   311,   338,
     203,   412,   413,   306,   685,     6,   304,    54,   435,   415,
     444,   203,   204,   821,   822,   445,   205,   825,   694,   730,
     754,   696,   828,   204,   436,   437,   305,   205,   439,   440,
     475,    55,   768,   770,   731,   774,   775,   728,    56,    57,
     482,    58,   781,   847,   438,   848,    59,   519,   476,   519,
     823,   519,    60,   203,   519,   872,   476,   873,   335,   478,
     479,   755,   501,   481,   483,   204,   630,   501,   927,   205,
     542,   476,   932,   943,   476,   698,   944,   482,   484,   486,
     224,   488,   439,   440,   492,   494,   502,   547,   498,   526,
     532,   231,   535,   798,   827,   801,   802,   536,   537,   293,
     878,   539,   551,   450,   544,   548,   580,   585,   417,   586,
     418,   419,   420,   421,   422,   423,   817,   892,   496,   814,
     893,   589,   453,   701,   851,   819,   451,   896,   854,   602,
     452,   829,   826,   607,   426,   427,   428,   429,   430,   431,
     836,   702,   831,   618,   627,   605,   630,   496,   636,   646,
     519,   434,   519,   364,   637,   639,   644,   647,   649,   686,
     688,   653,   654,   668,   689,   699,   392,   392,   703,   717,
     725,   729,   719,   704,   394,   743,   761,   745,   705,   398,
     763,   399,   400,   766,   401,   417,   776,   418,   419,   420,
     421,   422,   423,   777,   799,   624,   815,   818,   706,   407,
     408,   820,   832,   840,   833,   842,   845,   308,   307,   424,
     425,   426,   427,   428,   429,   430,   431,   885,   869,  -218,
     875,   435,   874,   883,   901,   443,   894,   496,   434,   446,
     950,   895,   952,   953,   460,   461,   897,   898,   437,   899,
     910,   903,   912,   707,   957,   919,     9,   924,   936,    39,
     708,   709,   954,   816,    46,   882,   918,   438,   710,   350,
     941,   925,   633,   400,   480,   930,   931,   749,   732,   741,
     721,   835,   914,   603,   911,   610,   724,   403,   756,   798,
     855,   313,   615,   940,   352,   629,   860,   496,   861,   382,
     814,   926,   455,   496,   496,   457,   440,   395,   435,   945,
     504,   730,   700,   598,   808,   683,     0,     0,     0,     0,
       0,     0,     0,   530,     0,   437,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   942,     0,     0,     0,
       0,   401,   401,     0,   438,     0,     0,   401,     0,   401,
     401,   554,     0,   496,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,     0,     0,
       0,     0,     0,   440,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   417,     0,   418,
     419,   420,   421,   422,   423,   612,   613,     0,     0,     0,
       0,     0,     0,   495,     0,     0,     0,     0,     0,     0,
       0,   424,   425,   426,   427,   428,   429,   430,   431,   432,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   433,
     434,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   656,   657,   658,     0,     0,     0,     0,   660,
       0,     0,     0,     0,   663,     0,   252,     0,     0,   253,
       0,     0,   254,   336,   256,     0,     0,     0,     0,   257,
       0,   258,     0,   337,     0,    76,     0,   259,   260,   261,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     435,     0,   401,    77,    78,    79,     0,    80,     0,     0,
       0,     0,    81,    82,    83,    84,   436,   437,     0,     0,
     263,    85,     0,    86,   264,     0,    87,     0,     0,     0,
      88,    89,     0,    90,    91,     0,   438,     0,     0,     0,
       0,   265,     0,     0,    92,     0,     0,     0,   266,   267,
      93,     0,     0,   734,     0,     0,     0,    94,     0,     0,
      95,    96,     0,     0,     0,     0,   268,   269,     0,    97,
       0,    98,     0,     0,   439,   440,    99,     0,   100,     0,
       0,     0,   270,     0,     0,   101,     0,   271,   272,   273,
     274,   275,   102,     0,   276,     0,     0,     0,     0,     0,
       0,     0,   277,   278,   279,     0,     0,     0,     0,     0,
     103,   104,     0,   805,     0,   806,   280,     0,     0,     0,
       0,     0,     0,     0,   105,   106,     0,     0,   107,     0,
     108,     0,   109,   281,   282,   110,     0,   111,   283,     0,
     824,     0,     0,   284,     0,     0,   112,     0,     0,   113,
       0,     0,   114,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   285,   286,   287,   288,   289,   290,     0,     0,
       0,   252,     0,     0,   253,     0,     0,   254,   255,   256,
       0,     0,     0,     0,   257,     0,   258,     0,   865,     0,
      76,     0,   259,   260,   261,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
      79,     0,    80,     0,     0,     0,     0,    81,    82,    83,
      84,     0,     0,     0,     0,   263,    85,     0,    86,   264,
       0,    87,     0,     0,     0,    88,    89,     0,    90,    91,
       0,     0,     0,   529,     0,     0,   265,     0,     0,    92,
       0,     0,     0,   266,   267,    93,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,     0,     0,     0,
       0,   268,   269,   401,    97,     0,    98,     0,     0,     0,
       0,    99,     0,   100,     0,     0,     0,   270,     0,     0,
     101,     0,   271,   272,   273,   274,   275,   102,     0,   276,
       0,     0,     0,     0,     0,     0,     0,   277,   278,   279,
       0,     0,     0,     0,     0,   103,   104,     0,     0,     0,
       0,   280,     0,     0,   935,     0,     0,     0,     0,   105,
     106,     0,     0,   107,     0,   108,     0,   109,   281,   282,
     110,     0,   111,   283,     0,     0,     0,     0,   284,     0,
       0,   112,     0,     0,   113,     0,     0,   114,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   285,   286,   287,
     288,   289,   290,   252,     0,     0,   253,     0,     0,   254,
     255,   256,     0,     0,     0,     0,   257,     0,   258,     0,
       0,     0,    76,     0,   259,   260,   261,   262,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,    79,     0,    80,     0,     0,     0,     0,    81,
      82,    83,    84,     0,     0,     0,     0,   263,    85,     0,
      86,   264,     0,    87,     0,     0,     0,    88,    89,     0,
      90,    91,     0,     0,     0,     0,     0,     0,   265,     0,
       0,    92,     0,     0,     0,   266,   267,    93,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,     0,
       0,     0,     0,   268,   269,     0,    97,     0,    98,     0,
       0,     0,     0,    99,     0,   100,     0,     0,     0,   270,
       0,     0,   101,     0,   271,   272,   273,   274,   275,   102,
       0,   276,     0,     0,     0,     0,     0,     0,     0,   277,
     278,   279,     0,     0,     0,     0,     0,   103,   104,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,   105,   106,     0,     0,   107,     0,   108,     0,   109,
     281,   282,   110,     0,   111,   283,     0,     0,     0,     0,
     284,     0,     0,   112,     0,     0,   113,     0,     0,   114,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   285,
     286,   287,   288,   289,   290,   252,     0,     0,   253,     0,
       0,   254,   336,   256,     0,     0,     0,     0,   257,     0,
     258,     0,     0,     0,    76,     0,   259,   260,   261,   262,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79,     0,    80,     0,     0,     0,
       0,    81,    82,    83,    84,     0,     0,     0,     0,   263,
      85,     0,    86,   264,     0,    87,     0,     0,     0,    88,
      89,     0,    90,    91,     0,     0,     0,     0,     0,     0,
     265,     0,     0,    92,     0,     0,     0,   266,   267,    93,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,     0,     0,     0,     0,   268,   269,     0,    97,     0,
      98,     0,     0,     0,     0,    99,     0,   100,     0,     0,
       0,   270,     0,     0,   101,     0,   271,   272,   273,   274,
     275,   102,     0,   276,     0,     0,     0,     0,     0,     0,
       0,   277,   278,   279,     0,     0,     0,     0,     0,   103,
     104,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,     0,     0,   105,   106,     0,     0,   107,     0,   108,
       0,   109,   281,   282,   110,     0,   111,   283,     0,     0,
       0,     0,   284,     0,     0,   112,     0,     0,   113,     0,
       0,   114,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   285,   286,   287,   288,   289,   290,   417,     0,   418,
     419,   420,   421,   422,   423,     0,     0,     0,     0,   906,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     417,     0,   418,   419,   420,   421,   422,   423,     0,   433,
     434,     0,   538,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   417,     0,   418,   419,   420,   421,   422,
     423,     0,   433,   434,     0,   581,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   424,   425,   426,
     427,   428,   429,   430,   431,   432,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   433,   434,     0,     0,   417,
     435,   418,   419,   420,   421,   422,   423,     0,     0,     0,
       0,   584,     0,     0,     0,     0,   436,   437,     0,     0,
       0,     0,     0,   424,   425,   426,   427,   428,   429,   430,
     431,   432,     0,   435,     0,     0,   438,     0,     0,     0,
       0,   433,   434,     0,     0,     0,     0,     0,     0,   436,
     437,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   435,   907,     0,   438,
       0,     0,     0,     0,   439,   440,     0,     0,     0,     0,
       0,     0,   436,   437,     0,     0,     0,     0,     0,   417,
       0,   418,   419,   420,   421,   422,   423,     0,     0,     0,
       0,     0,   438,     0,     0,   614,     0,   439,   440,     0,
       0,     0,   435,   424,   425,   426,   427,   428,   429,   430,
     431,   432,     0,     0,     0,     0,     0,     0,   436,   437,
       0,   433,   434,     0,     0,     0,     0,     0,     0,     0,
     439,   440,     0,     0,     0,     0,     0,     0,   438,   417,
       0,   418,   419,   420,   421,   422,   423,     0,     0,     0,
       0,   638,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   425,   426,   427,   428,   429,   430,
     431,   432,     0,     0,     0,     0,   439,   440,     0,     0,
       0,   433,   434,     0,     0,     0,     0,     0,     0,     0,
       0,   417,   435,   418,   419,   420,   421,   422,   423,     0,
       0,     0,     0,   758,     0,     0,     0,     0,   436,   437,
       0,     0,     0,     0,     0,   424,   425,   426,   427,   428,
     429,   430,   431,   432,     0,     0,     0,     0,   438,     0,
       0,     0,     0,   433,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   417,   435,   418,   419,   420,   421,   422,   423,     0,
     759,     0,     0,     0,     0,     0,   439,   440,   436,   437,
       0,     0,     0,     0,     0,   424,   425,   426,   427,   428,
     429,   430,   431,   432,     0,     0,     0,     0,   438,     0,
       0,     0,     0,   433,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   435,   417,     0,   418,   419,   420,
     421,   422,   423,     0,   760,     0,     0,     0,     0,     0,
     436,   437,     0,     0,     0,     0,   439,   440,     0,   424,
     425,   426,   427,   428,   429,   430,   431,   432,     0,     0,
     438,     0,     0,     0,     0,     0,     0,   433,   434,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   435,   417,     0,   418,   419,   420,
     421,   422,   423,     0,     0,     0,     0,   830,   439,   440,
     436,   437,     0,     0,     0,     0,     0,     0,     0,   424,
     425,   426,   427,   428,   429,   430,   431,   432,     0,   417,
     438,   418,   419,   420,   421,   422,   423,   433,   434,     0,
       0,   876,     0,     0,     0,     0,     0,     0,   435,     0,
       0,     0,     0,   424,   425,   426,   427,   428,   429,   430,
     431,   432,     0,     0,   436,   437,     0,     0,   439,   440,
       0,   433,   434,   417,     0,   418,   419,   420,   421,   422,
     423,     0,     0,     0,   438,   877,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   424,   425,   426,
     427,   428,   429,   430,   431,   432,     0,   417,   435,   418,
     419,   420,   421,   422,   423,   433,   434,     0,     0,     0,
       0,     0,   439,   440,   436,   437,     0,     0,     0,     0,
       0,   424,   425,   426,   427,   428,   429,   430,   431,   432,
       0,     0,   435,     0,   438,     0,     0,     0,     0,   433,
     434,     0,     0,     0,     0,     0,     0,     0,   436,   437,
       0,     0,     0,     0,     0,     0,     0,   417,     0,   418,
     419,   420,   421,   422,   423,     0,     0,     0,   438,   948,
       0,     0,   439,   440,     0,     0,   435,     0,     0,     0,
       0,   424,   425,   426,   427,   428,   429,   430,   431,   432,
       0,     0,   436,   437,     0,     0,     0,     0,     0,   433,
     434,     0,     0,     0,     0,     0,   439,   440,     0,     0,
     435,   417,   438,   418,   419,   420,   421,   422,   423,     0,
       0,     0,     0,     0,     0,     0,   436,   437,     0,     0,
       0,     0,     0,     0,     0,   424,   425,   426,   427,   428,
     429,   430,   431,   432,     0,     0,   438,     0,     0,     0,
     439,   440,     0,   433,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     435,   417,     0,   418,   419,   420,   421,   422,   423,     0,
       0,     0,     0,   191,   439,   440,   436,   437,     0,     0,
       0,     0,     0,     0,     0,   424,   425,   426,   427,   428,
     429,   430,   431,     0,     0,   417,   438,   418,   419,   420,
     421,   422,   423,   433,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   435,     0,     0,     0,     0,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
     436,   437,     0,     0,   439,   440,     0,   433,   434,   417,
       0,   418,   419,   420,   421,   422,   423,     0,     0,     0,
     438,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   425,   426,   427,   428,   429,   430,
     431,     0,     0,     0,   435,     0,     0,     0,     0,     0,
       0,   433,   434,     0,     0,     0,     0,     0,   439,   440,
     436,   437,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   592,     0,     0,     0,     0,   435,    76,
     438,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   437,     0,    77,    78,    79,
       0,    80,     0,     0,     0,     0,    81,    82,    83,    84,
       0,     0,     0,     0,   438,    85,     0,    86,   439,   440,
      87,     0,   435,     0,    88,    89,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,   437,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,    94,   439,   440,    95,    96,     0,     0,   438,     0,
       0,     0,     0,    97,     0,    98,     0,     0,     0,     0,
      99,     0,   100,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,     0,   103,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
       0,     0,   107,     0,   108,     0,   109,     0,     0,   110,
       0,   111,    71,   160,     0,     0,    76,     0,     0,     0,
     112,     0,     0,   113,     0,     0,   114,     0,     0,     0,
       0,     0,   115,     0,    77,    78,    79,     0,    80,   161,
       0,     0,     0,    81,    82,    83,    84,   162,     0,     0,
       0,     0,    85,     0,    86,     0,     0,    87,    49,   163,
       0,    88,    89,     0,    90,    91,     0,   164,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,    93,   165,     0,     0,     0,     0,     0,    94,   166,
       0,    95,    96,   167,     0,     0,     0,     0,     0,     0,
      97,   168,    98,     0,   169,     0,     0,    99,   170,   100,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,   103,   104,     0,     0,     0,     0,     0,     0,   171,
       0,   172,     0,     0,   173,   105,   106,     0,     0,   107,
       0,   108,     0,   109,     0,     0,   110,    56,   111,     0,
      58,    71,   312,     0,     0,    76,     0,   112,   174,     0,
     113,    60,     0,   114,   175,     0,     0,     0,     0,   115,
       0,     0,     0,    77,    78,    79,     0,    80,   161,     0,
       0,     0,    81,    82,    83,    84,   162,     0,     0,     0,
       0,    85,     0,    86,     0,     0,    87,    49,   163,     0,
      88,    89,     0,    90,    91,     0,   164,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
      93,   165,     0,     0,     0,     0,     0,    94,   166,     0,
      95,    96,   167,     0,     0,     0,     0,     0,     0,    97,
     168,    98,     0,   169,     0,     0,    99,   170,   100,     0,
       0,     0,     0,     0,     0,   101,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
     103,   104,     0,     0,     0,     0,     0,     0,   171,     0,
     172,     0,     0,   173,   105,   106,     0,     0,   107,     0,
     108,     0,   109,     0,     0,   110,    56,   111,   123,    58,
       0,     0,    76,     0,     0,     0,   112,   174,     0,   113,
      60,     0,   114,   175,     0,     0,     0,     0,   115,     0,
      77,    78,    79,     0,    80,     0,     0,     0,     0,    81,
      82,    83,    84,     0,     0,     0,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,    88,    89,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,    99,     0,   100,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,     0,     0,   107,     0,   108,     0,   109,
       0,     0,   110,     0,   111,   351,     0,     0,    76,     0,
       0,     0,     0,   112,     0,     0,   113,     0,     0,   114,
       0,     0,     0,     0,     0,   115,    77,    78,    79,     0,
      80,     0,     0,     0,     0,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,     0,    86,     0,     0,    87,
       0,     0,     0,    88,    89,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
       0,   100,     0,     0,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,     0,
       0,   107,     0,   108,     0,   109,     0,     0,   110,     0,
     111,     0,   784,     0,    76,     0,     0,     0,     0,   112,
       0,     0,   113,     0,     0,   114,     0,     0,     0,     0,
       0,   115,    77,    78,    79,     0,    80,     0,   785,     0,
       0,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      85,     0,    86,     0,     0,    87,   786,     0,     0,    88,
      89,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,    93,
       0,     0,     0,   787,     0,     0,    94,     0,   788,    95,
      96,     0,     0,     0,     0,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,    99,     0,   100,     0,     0,
       0,     0,     0,   789,   101,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,     0,     0,   107,   790,   108,
       0,   109,     0,     0,   110,   791,   792,     0,     0,     0,
      76,     0,     0,   793,     0,   112,     0,     0,   113,     0,
       0,   114,     0,     0,     0,     0,     0,   115,    77,    78,
      79,   324,    80,     0,     0,     0,     0,    81,    82,    83,
      84,     0,   447,     0,   325,     0,    85,   448,    86,     0,
       0,    87,     0,     0,     0,    88,    89,     0,    90,    91,
       0,     0,   326,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
     327,   328,    94,     0,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,    97,     0,    98,   329,     0,     0,
       0,    99,     0,   100,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,     0,   330,     0,
       0,     0,     0,     0,   331,     0,   332,     0,     0,   105,
     106,     0,     0,   107,     0,   108,     0,   109,     0,     0,
     110,     0,   111,   333,     0,     0,    76,   334,     0,     0,
       0,   112,     0,     0,   113,     0,     0,   114,     0,     0,
       0,     0,     0,   115,    77,    78,    79,   324,    80,     0,
       0,     0,     0,    81,    82,    83,    84,     0,     0,     0,
     325,     0,    85,   448,    86,     0,     0,    87,     0,     0,
       0,    88,    89,     0,    90,    91,     0,     0,   326,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,   327,   328,    94,     0,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    98,   329,     0,     0,     0,    99,     0,   100,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,     0,   330,     0,     0,     0,     0,     0,
     331,     0,   332,     0,     0,   105,   106,     0,     0,   107,
       0,   108,     0,   109,     0,     0,   110,     0,   111,   333,
       0,     0,    76,   334,     0,     0,     0,   112,     0,     0,
     113,     0,     0,   114,     0,     0,     0,     0,     0,   115,
      77,    78,    79,   324,    80,     0,     0,     0,     0,    81,
      82,    83,    84,     0,     0,     0,   325,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,    88,    89,     0,
      90,    91,     0,     0,   326,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,   327,   328,    94,     0,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,   329,
       0,     0,     0,    99,     0,   100,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,     0,
     330,     0,     0,     0,     0,     0,   331,     0,   332,     0,
       0,   105,   106,     0,     0,   107,     0,   108,     0,   109,
       0,     0,   110,     0,   111,   333,     0,     0,    76,   334,
       0,     0,     0,   112,     0,     0,   113,     0,     0,   114,
       0,     0,     0,     0,     0,   115,    77,    78,    79,     0,
      80,     0,     0,     0,     0,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,     0,    86,     0,   134,    87,
       0,     0,     0,    88,    89,     0,    90,    91,     0,     0,
       0,     0,     0,   135,     0,     0,     0,    92,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
       0,   100,     0,     0,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,     0,     0,   103,   104,     0,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,     0,
     138,   107,     0,   108,     0,   109,     0,     0,   110,     0,
     111,     0,     0,     0,    76,     0,     0,     0,   139,   112,
       0,     0,   113,     0,     0,   114,     0,     0,     0,     0,
       0,   115,    77,    78,    79,     0,    80,     0,     0,     0,
       0,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      85,     0,    86,     0,     0,    87,    49,     0,     0,    88,
      89,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,     0,     0,     0,     0,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,    99,     0,   100,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     0,     0,     0,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,     0,     0,   107,     0,   108,
       0,   109,     0,     0,   110,    56,   111,     0,    58,     0,
      76,     0,     0,     0,     0,   112,     0,     0,   113,    60,
       0,   114,     0,     0,     0,     0,     0,   115,    77,    78,
      79,     0,    80,     0,     0,     0,     0,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,     0,    86,     0,
       0,    87,     0,     0,     0,    88,    89,     0,    90,    91,
       0,     0,     0,     0,     0,   505,     0,     0,     0,    92,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,    97,     0,    98,     0,     0,     0,
       0,    99,     0,   100,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,     0,     0,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,     0,   507,   107,     0,   108,     0,   109,     0,     0,
     110,     0,   111,     0,     0,     0,    76,     0,     0,     0,
     508,   112,     0,     0,   113,     0,     0,   114,     0,     0,
       0,     0,     0,   115,    77,    78,    79,     0,    80,     0,
       0,     0,     0,    81,    82,    83,    84,     0,     0,     0,
       0,     0,    85,     0,    86,     0,     0,    87,     0,     0,
       0,    88,    89,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    98,     0,     0,     0,     0,    99,     0,   100,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,     0,     0,   107,
       0,   108,     0,   109,     0,     0,   110,     0,   111,     0,
     692,     0,    76,     0,     0,     0,     0,   112,     0,     0,
     113,     0,     0,   114,     0,     0,     0,     0,     0,   115,
      77,    78,    79,     0,    80,     0,     0,     0,     0,    81,
      82,    83,    84,     0,     0,     0,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,    88,    89,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,    99,     0,   100,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,     0,     0,   107,     0,   108,     0,   109,
       0,     0,   110,     0,   111,     0,     0,     0,    76,     0,
       0,     0,     0,   112,     0,     0,   113,     0,     0,   114,
       0,     0,     0,     0,     0,   115,    77,    78,    79,     0,
     809,     0,     0,     0,     0,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    85,     0,    86,     0,     0,    87,
       0,     0,     0,    88,    89,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,    99,
       0,   100,     0,     0,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,     0,
       0,   107,     0,   108,     0,   109,     0,     0,   110,     0,
     111,     0,     0,     0,    76,     0,     0,     0,     0,   112,
       0,     0,   113,     0,     0,   114,     0,     0,     0,     0,
       0,   115,    77,    78,    79,     0,   811,     0,     0,     0,
       0,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      85,     0,    86,     0,     0,    87,     0,     0,     0,    88,
      89,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,     0,     0,     0,     0,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,    99,     0,   100,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,     0,     0,   107,     0,   108,
       0,   109,     0,     0,   110,     0,   111,     0,     0,     0,
      76,     0,     0,     0,     0,   112,     0,     0,   113,     0,
       0,   114,     0,     0,     0,     0,     0,   115,    77,    78,
      79,     0,   837,     0,     0,     0,     0,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    85,     0,    86,     0,
       0,    87,     0,     0,     0,    88,    89,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,    97,     0,    98,     0,     0,     0,
       0,    99,     0,   100,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,     0,     0,   107,     0,   108,     0,   109,     0,     0,
     110,     0,   111,     0,     0,     0,    76,     0,     0,     0,
       0,   112,     0,     0,   113,     0,     0,   114,     0,     0,
       0,     0,     0,   115,    77,    78,    79,     0,   920,     0,
       0,     0,     0,    81,    82,    83,    84,     0,     0,     0,
       0,     0,    85,     0,    86,     0,     0,    87,     0,     0,
       0,    88,    89,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    98,     0,     0,     0,     0,    99,     0,   100,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,     0,     0,   107,
       0,   108,     0,   109,     0,     0,   110,     0,   111,     0,
       0,     0,    76,     0,     0,     0,     0,   112,     0,     0,
     113,     0,     0,   114,     0,     0,     0,     0,     0,   115,
      77,    78,    79,     0,   922,     0,     0,     0,     0,    81,
      82,    83,    84,     0,     0,     0,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,    88,    89,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,    99,     0,   100,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,     0,     0,   107,     0,   108,     0,   109,
       0,     0,   110,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,   113,     0,     0,   114,
       0,     0,     0,     0,     0,   115
};

static const short int yycheck[] =
{
       9,    44,   203,   177,    71,    28,   205,   245,   388,   224,
     177,   150,   322,   130,   404,   405,   238,   238,    27,     1,
     410,   627,   412,   413,   375,   250,   377,   138,   227,   121,
     170,   376,   378,   218,   174,   116,   128,    46,   223,   597,
      22,   699,    18,   124,   125,    19,    49,   637,     8,    19,
      53,    54,    12,    13,    14,    15,    59,   711,    40,   691,
     305,    43,    20,   155,   764,    22,    48,   601,    71,    51,
     619,    67,    19,    55,   296,    57,    36,    37,    38,    39,
      21,   123,    14,    15,    19,   126,   740,    69,    23,   206,
       8,    51,    41,    23,    12,    13,    14,    15,    94,   216,
     217,   619,   303,     8,    21,   304,    21,    12,    13,    14,
      15,    41,    69,   180,     0,   118,   119,    21,   773,   160,
     123,   164,    17,   768,   241,   770,   684,   208,   114,   774,
     775,    78,    68,    51,   215,    92,   310,   311,    22,    23,
     122,    19,    99,    47,    29,   115,    51,   105,   738,   683,
     108,    67,   134,   135,   136,   137,   138,   139,   380,     7,
     860,   121,    22,    23,   349,   714,   820,     7,    22,    23,
     415,    19,   181,   122,   115,    23,   808,   180,   138,    19,
     115,   139,    31,    23,   166,   102,   278,   169,   280,   121,
     147,    23,   149,    41,    42,   585,   714,   157,    46,    21,
     115,   204,    42,   121,    22,   214,    46,    67,   863,   864,
     213,   185,   867,   868,    18,    93,   121,   123,   194,   222,
     138,   879,   245,   159,   782,   157,   880,    45,   210,   145,
     347,   103,   886,   887,   351,    67,   196,   240,    25,   157,
      69,    22,   245,   115,     8,    93,    45,   250,    12,    13,
      14,    15,   157,    93,    21,   258,   123,   397,    45,    92,
     176,   906,   379,   179,    21,     8,    99,   270,   385,    12,
      13,    14,    15,    22,   190,    22,    22,    58,   196,   934,
      93,    18,   936,    20,   483,   145,    19,   105,   894,   895,
     108,   196,   141,    22,    18,   640,    20,   642,   644,   117,
     955,   486,   383,   948,   313,   445,   105,    65,    51,   108,
      21,   134,    25,   145,   624,   194,   176,   166,   117,   179,
      19,   139,    69,   146,    82,    61,   551,   875,   115,    58,
     190,   180,    45,   181,   105,    93,   134,   108,     7,   188,
     139,   181,    31,   352,   176,    92,    92,   179,   146,    19,
      19,    22,    99,    99,    23,   903,    19,   121,   190,    19,
     119,   120,    21,   366,   589,   188,   914,   592,   139,   187,
     509,   374,   375,   376,   377,   378,    19,    18,   121,   361,
     389,    22,    18,    21,    20,   477,   368,   145,   187,   148,
     188,    42,   743,   157,   745,   506,   507,    18,    21,    20,
     147,   147,   149,   149,     7,    18,    20,    75,    59,    22,
     527,    79,   586,    82,   157,    19,    19,    20,    86,   586,
      23,   179,    19,   645,   645,    19,   648,   648,   650,   650,
      18,     8,    20,    10,    11,    12,    13,    14,    15,    19,
     134,   444,    93,    20,    95,    96,    18,   450,    20,   452,
     453,   454,   146,    65,    20,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   473,    65,   856,   645,   136,    18,
     648,    20,   650,    50,    51,   498,    18,    20,   693,   482,
      22,    93,   176,    85,    18,     8,    20,    10,    11,    12,
      13,    14,    15,    93,   188,   538,    18,    20,    22,    23,
      22,    49,   153,   171,   621,    18,    18,    20,    20,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   635,    67,
      21,   759,   760,   191,   533,    19,    17,    50,    51,   646,
      21,   182,   649,   145,   651,   915,    21,   133,   520,    87,
     522,   584,    21,     7,   121,   145,    94,    18,   551,   133,
      22,    22,    16,   933,     7,    19,   104,     7,   938,    23,
     137,   138,     7,    16,    21,    23,    19,   179,   193,    19,
      23,   141,    19,    23,    19,    25,   124,    41,    23,   179,
     157,   755,    46,    19,    19,   784,   589,   654,   755,   592,
       7,    19,    19,    46,   603,    45,    41,   145,   121,    42,
      19,     7,    19,   720,   721,   141,    23,   724,   611,   632,
     653,   188,   729,    19,   137,   138,    42,    23,   195,   196,
      20,   169,   672,   673,   633,   675,   676,   630,   176,   177,
      18,   179,    20,   750,   157,   752,   184,   640,    18,   642,
      20,   644,   190,     7,   647,    18,    18,    20,   849,    19,
      19,   654,   634,    20,    41,    19,    18,   639,    20,    23,
      18,    18,    20,    20,    18,   188,    20,    18,    24,    19,
      18,   155,   195,   196,    20,    20,   152,    41,    21,    20,
      22,   115,    19,   686,   727,   688,   689,    17,    17,   172,
     807,    22,    19,    31,    22,    29,   103,    19,     8,    19,
      10,    11,    12,    13,    14,    15,   715,   824,   711,   712,
     827,    19,   180,    49,   757,   718,   141,   834,   761,    22,
     166,   730,   725,   162,    34,    35,    36,    37,    38,    39,
     739,    67,   735,    20,    19,   140,    18,   740,    19,    22,
     743,    51,   745,   226,    21,    21,    21,    18,    22,    19,
     135,    24,    24,    21,   125,    20,   759,   760,    94,    82,
     175,    22,    83,    99,   247,   133,    78,   133,   104,   252,
      58,   254,   255,    21,   257,     8,    20,    10,    11,    12,
      13,    14,    15,    20,    29,   160,    22,    21,   124,   272,
     273,    19,   141,    22,   141,    22,   136,   181,    93,    32,
      33,    34,    35,    36,    37,    38,    39,   816,    20,    47,
      21,   121,    47,    18,   857,   298,    19,   820,    51,   302,
     937,    19,   939,   940,   307,   308,   835,    20,   138,    20,
      24,    21,    82,   169,   951,    21,     3,    22,    21,    20,
     176,   177,    22,   714,    26,   811,   883,   157,   184,   212,
     919,   889,   875,   336,   337,   898,   899,   647,   634,   639,
     626,   738,   875,   472,   872,   476,   628,   258,   654,   872,
     761,   180,   482,   916,   213,   494,   766,   880,   767,   239,
     883,   890,   305,   886,   887,   305,   196,   248,   121,   932,
     373,   914,   618,   458,   700,   599,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   386,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   925,    -1,    -1,    -1,
      -1,   404,   405,    -1,   157,    -1,    -1,   410,    -1,   412,
     413,   414,    -1,   936,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    10,
      11,    12,    13,    14,    15,   478,   479,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   535,   536,   537,    -1,    -1,    -1,    -1,   542,
      -1,    -1,    -1,    -1,   547,    -1,     6,    -1,    -1,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,    -1,   585,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,   137,   138,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    71,    -1,    73,    74,    -1,   157,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,   636,    -1,    -1,    -1,    97,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,
      -1,   111,    -1,    -1,   195,   196,   116,    -1,   118,    -1,
      -1,    -1,   122,    -1,    -1,   125,    -1,   127,   128,   129,
     130,   131,   132,    -1,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
     150,   151,    -1,   696,    -1,   698,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,   165,    -1,    -1,   168,    -1,
     170,    -1,   172,   173,   174,   175,    -1,   177,   178,    -1,
     723,    -1,    -1,   183,    -1,    -1,   186,    -1,    -1,   189,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,   771,    -1,
      25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    73,    74,
      -1,    -1,    -1,    78,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,   106,   107,   856,   109,    -1,   111,    -1,    -1,    -1,
      -1,   116,    -1,   118,    -1,    -1,    -1,   122,    -1,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,   150,   151,    -1,    -1,    -1,
      -1,   156,    -1,    -1,   907,    -1,    -1,    -1,    -1,   164,
     165,    -1,    -1,   168,    -1,   170,    -1,   172,   173,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,   183,    -1,
      -1,   186,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      63,    64,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,   106,   107,    -1,   109,    -1,   111,    -1,
      -1,    -1,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,
      -1,    -1,   125,    -1,   127,   128,   129,   130,   131,   132,
      -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
     173,   174,   175,    -1,   177,   178,    -1,    -1,    -1,    -1,
     183,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    64,    -1,    66,    -1,    -1,    -1,    70,
      71,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,
     101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,    -1,
     111,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,    -1,
      -1,   122,    -1,    -1,   125,    -1,   127,   128,   129,   130,
     131,   132,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,   150,
     151,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,   173,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,   183,    -1,    -1,   186,    -1,    -1,   189,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,   202,   203,   204,   205,   206,   207,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    50,
      51,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    50,    51,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,     8,
     121,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,   137,   138,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,   121,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   188,    -1,   157,
      -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    24,    -1,   195,   196,    -1,
      -1,    -1,   121,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   157,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,   121,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,   137,   138,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,   121,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,   195,   196,   137,   138,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,    -1,    -1,    -1,   195,   196,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    20,   195,   196,
     137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,     8,
     157,    10,    11,    12,    13,    14,    15,    50,    51,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,   137,   138,    -1,    -1,   195,   196,
      -1,    50,    51,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,   157,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,     8,   121,    10,
      11,    12,    13,    14,    15,    50,    51,    -1,    -1,    -1,
      -1,    -1,   195,   196,   137,   138,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,   121,    -1,   157,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,   157,    20,
      -1,    -1,   195,   196,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,
     121,     8,   157,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,   157,    -1,    -1,    -1,
     195,   196,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,   194,   195,   196,   137,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,     8,   157,    10,    11,    12,
      13,    14,    15,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
     137,   138,    -1,    -1,   195,   196,    -1,    50,    51,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,   195,   196,
     137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,   121,    25,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,   157,    61,    -1,    63,   195,   196,
      66,    -1,   121,    -1,    70,    71,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,   138,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    97,   195,   196,   100,   101,    -1,    -1,   157,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,
     116,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,   175,
      -1,   177,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
     186,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    43,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    66,    67,    68,
      -1,    70,    71,    -1,    73,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      -1,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,    -1,    -1,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,    -1,   175,   176,   177,    -1,
     179,    21,    22,    -1,    -1,    25,    -1,   186,   187,    -1,
     189,   190,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    43,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    66,    67,    68,    -1,
      70,    71,    -1,    73,    74,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    -1,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,   168,    -1,
     170,    -1,   172,    -1,    -1,   175,   176,   177,    21,   179,
      -1,    -1,    25,    -1,    -1,    -1,   186,   187,    -1,   189,
     190,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,    -1,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,    -1,    -1,   116,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,   175,    -1,   177,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,   116,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,    -1,
      -1,   168,    -1,   170,    -1,   172,    -1,    -1,   175,    -1,
     177,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,   186,
      -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,   198,    43,    44,    45,    -1,    47,    -1,    49,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,    70,
      71,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,    -1,
      -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,    -1,    -1,   168,   169,   170,
      -1,   172,    -1,    -1,   175,   176,   177,    -1,    -1,    -1,
      25,    -1,    -1,   184,    -1,   186,    -1,    -1,   189,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    57,    -1,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      95,    96,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,   112,    -1,    -1,
      -1,   116,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,   151,    -1,   153,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,    -1,    -1,   164,
     165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,
     175,    -1,   177,   178,    -1,    -1,    25,   182,    -1,    -1,
      -1,   186,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,   198,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    -1,    -1,
      -1,    70,    71,    -1,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    95,    96,    97,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,   112,    -1,    -1,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,    -1,   153,    -1,    -1,    -1,    -1,    -1,
     159,    -1,   161,    -1,    -1,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,    -1,   175,    -1,   177,   178,
      -1,    -1,    25,   182,    -1,    -1,    -1,   186,    -1,    -1,
     189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    -1,    61,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    95,    96,    97,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,
      -1,    -1,    -1,   116,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,
     153,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,    -1,
      -1,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,   175,    -1,   177,   178,    -1,    -1,    25,   182,
      -1,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,   116,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,   150,   151,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,    -1,
     167,   168,    -1,   170,    -1,   172,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    25,    -1,    -1,    -1,   185,   186,
      -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,   198,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,    70,
      71,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,    -1,   175,   176,   177,    -1,   179,    -1,
      25,    -1,    -1,    -1,    -1,   186,    -1,    -1,   189,   190,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
      -1,   116,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,    -1,   167,   168,    -1,   170,    -1,   172,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    25,    -1,    -1,    -1,
     185,   186,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,   198,    43,    44,    45,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    66,    -1,    -1,
      -1,    70,    71,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,    -1,    -1,    -1,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,    -1,   175,    -1,   177,    -1,
     179,    -1,    25,    -1,    -1,    -1,    -1,   186,    -1,    -1,
     189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,    -1,    -1,   116,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,   116,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,    -1,
      -1,   168,    -1,   170,    -1,   172,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,   186,
      -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,   198,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    66,    -1,    -1,    -1,    70,
      71,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,   186,    -1,    -1,   189,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
      -1,   116,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,   186,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,   198,    43,    44,    45,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    66,    -1,    -1,
      -1,    70,    71,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,    -1,    -1,    -1,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,    -1,   175,    -1,   177,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,   186,    -1,    -1,
     189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,    -1,    -1,   116,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   123,   209,   210,   211,    25,    45,   295,     0,   211,
      17,   378,   379,   114,   212,   378,    29,   213,   214,    21,
      18,    92,    99,   147,   149,   215,   217,   218,   219,   220,
     221,   222,   267,   270,   271,   272,   273,   278,   279,   214,
     123,   295,    92,    99,    69,   216,   218,   378,    49,    67,
      87,    94,   104,   124,   145,   169,   176,   177,   179,   184,
     190,   284,   285,   286,   287,   288,   289,   295,    21,   123,
     295,    21,   330,    22,   378,   295,    25,    43,    44,    45,
      47,    52,    53,    54,    55,    61,    63,    66,    70,    71,
      73,    74,    84,    90,    97,   100,   101,   109,   111,   116,
     118,   125,   132,   150,   151,   164,   165,   168,   170,   172,
     175,   177,   186,   189,   192,   198,   309,   310,   311,    67,
      94,   295,    93,    21,   309,   309,   295,    19,   290,   295,
     292,   293,   294,   295,    65,    80,   145,   154,   167,   185,
     237,   240,   242,   243,   246,   247,   248,   256,   260,   262,
     309,   134,   146,   176,   188,   351,   352,   215,   295,    21,
      22,    48,    56,    68,    76,    91,    98,   102,   110,   113,
     117,   158,   160,   163,   187,   193,   284,   309,   313,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     343,   194,   296,    19,    65,    93,   145,   179,    65,    93,
     145,   179,    61,     7,    19,    23,   292,   309,   309,    31,
     350,   350,   295,   280,   281,   309,   292,   292,    19,   134,
     146,   188,   350,    19,    18,   296,    23,    41,   295,   295,
     295,   115,   295,   365,   370,   295,   370,   295,   294,    19,
     350,    22,   215,    21,   330,    19,   295,    19,    21,   295,
      19,   325,     6,     9,    12,    13,    14,    19,    21,    27,
      28,    29,    30,    60,    64,    81,    88,    89,   106,   107,
     122,   127,   128,   129,   130,   131,   134,   142,   143,   144,
     156,   173,   174,   178,   183,   202,   203,   204,   205,   206,
     207,   309,   313,   316,   317,   320,   321,   323,    19,   185,
     324,   325,    19,     7,    41,    42,    46,    93,   181,   353,
     358,   359,    22,   332,   378,    21,   105,   108,   139,   274,
     275,   276,   348,   349,    46,    59,    77,    95,    96,   112,
     153,   159,   161,   178,   182,   310,    13,    23,   309,   316,
     319,   326,   327,   328,   329,   319,   296,   292,   295,    19,
     212,    22,   281,   378,   292,   296,   296,   274,    20,    20,
      20,   309,   274,   293,   316,   319,    85,   261,    21,   119,
     120,   148,   264,    19,    21,   133,    21,   133,    21,   241,
     323,   365,   352,   309,   296,    22,    23,   344,   345,   346,
     193,   284,   309,   334,   316,   344,   327,   141,   316,   316,
     316,   316,   318,   326,    19,    19,   309,   316,   316,   350,
      19,   350,    19,    19,    16,    42,   354,     8,    10,    11,
      12,    13,    14,    15,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    50,    51,   121,   137,   138,   157,   195,
     196,   103,   365,   316,    19,   141,   316,    57,    62,   319,
      31,   141,   166,   180,   188,   360,   361,   362,   363,   364,
     316,   316,   353,   353,   378,    75,    79,    86,   136,   171,
     191,   297,   298,   299,   301,    20,    18,   351,    19,    19,
     316,    20,    18,    41,    24,   296,    19,   274,   155,   224,
     296,   378,    20,   295,    20,    24,   309,   312,    21,   258,
     259,   295,   152,   263,   316,    80,   154,   167,   185,   238,
     244,   245,   249,   250,   251,   252,   253,   254,   257,   309,
     238,   252,   238,   253,   296,   365,    20,   292,   296,    78,
     316,   377,    22,   346,   378,    19,    17,    17,    20,    22,
      20,   325,    18,    20,    22,   318,   318,    41,    29,   322,
     318,    19,   318,   318,   316,   361,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     103,    20,   309,   325,    20,    19,    19,   315,   309,    19,
     309,   309,    19,   309,   360,   374,   361,   373,   364,   371,
     362,   372,    22,   299,   378,   140,   300,   162,   355,   366,
     276,   350,   316,   316,    24,   328,   319,   274,    20,    21,
      47,   223,   227,   126,   160,   239,   269,    19,   291,   355,
      18,   282,   283,   284,    18,    22,    19,    21,    20,    21,
      21,   370,    21,   370,    21,   294,    22,    18,   295,    22,
     295,    22,   296,    24,    24,   378,   316,   316,   316,   330,
     316,    20,    20,   316,    20,   327,    20,    20,    21,    20,
     330,   318,    59,    95,    96,   153,   182,   314,   353,   359,
     327,   327,   374,   372,   373,   378,    19,   302,   135,   125,
     356,   367,   179,   277,   309,    20,   188,    20,   188,    20,
     366,    49,    67,    94,    99,   104,   124,   169,   176,   177,
     184,   225,   226,   228,   229,   230,   296,    82,   351,    83,
     268,   268,   275,    41,   317,   175,   357,   368,   309,    22,
     284,   378,   259,   296,   316,    45,   117,   187,   265,   266,
     349,   258,   252,   133,   252,   133,   253,   241,   296,   254,
     241,   296,   241,   296,   330,   309,   333,   347,    20,    17,
      17,    78,    20,    58,   341,   342,    21,    20,   324,   325,
     324,    19,   359,   376,   324,   324,    20,    20,   353,   369,
      20,    20,   373,   374,    23,    49,    67,    94,    99,   124,
     169,   176,   177,   184,   303,   304,   305,   306,   309,    29,
     308,   309,   309,   368,   293,   316,   316,   239,   367,    47,
     312,    47,   232,   233,   309,    22,   230,   378,    21,   309,
      19,   296,   296,    20,   316,   296,   309,   330,   296,   378,
      20,   309,   141,   141,    22,   266,   378,    47,   312,    22,
      22,   238,    22,   238,    22,   136,   255,   296,   296,     7,
      17,   330,   334,   334,   330,   338,    19,    78,    22,   342,
     341,   358,   375,   376,   376,   316,   369,   376,   376,    20,
     374,   319,    18,    20,    47,    21,    20,    20,   296,   368,
      82,   231,   231,    18,    82,   378,   225,   226,   234,   235,
     236,   312,   296,   296,    19,    19,   296,   378,    20,    20,
     318,   330,    22,    21,   369,   369,    20,   188,   369,   369,
      24,   304,    82,   307,   283,   345,   239,   312,   233,    21,
      47,   312,    47,   312,    22,   236,   378,    20,   275,   275,
     330,   330,    20,   345,   376,   316,    21,    22,   345,    22,
     330,   234,   378,    20,    20,   330,    22,   369,    20,   312,
     296,    22,   296,   296,    22,   376,    22,   296,   369
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   208,   209,   210,   210,   211,   212,   212,   213,   213,
     214,   215,   215,   216,   216,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   219,
     219,   219,   219,   220,   220,   221,   221,   222,   223,   223,
     223,   224,   224,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   226,   227,   228,   228,   229,   229,   230,   230,
     230,   230,   231,   231,   232,   232,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   238,   238,   238,   238,   238,
     238,   238,   239,   239,   240,   241,   241,   241,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     252,   253,   253,   254,   255,   255,   256,   257,   258,   258,
     259,   259,   260,   261,   261,   262,   263,   263,   264,   264,
     264,   265,   265,   266,   266,   266,   266,   266,   267,   267,
     268,   268,   269,   270,   271,   272,   273,   273,   273,   274,
     274,   275,   275,   276,   277,   277,   278,   279,   279,   280,
     280,   281,   282,   282,   283,   283,   284,   284,   284,   284,
     284,   285,   286,   287,   288,   289,   289,   290,   290,   290,
     290,   291,   291,   292,   292,   293,   293,   294,   294,   295,
     295,   296,   296,   297,   297,   298,   298,   299,   300,   300,
     301,   301,   301,   301,   301,   301,   302,   302,   303,   303,
     304,   304,   304,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   306,   307,   307,   308,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   311,
     311,   312,   312,   313,   313,   314,   314,   314,   314,   314,
     314,   314,   315,   315,   315,   315,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   317,   318,   318,   319,   319,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   322,   323,   324,   324,   325,   326,   326,   327,
     327,   328,   328,   329,   329,   330,   330,   331,   331,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   333,   333,   333,   333,   333,   333,   333,
     334,   335,   335,   336,   337,   338,   338,   338,   339,   340,
     341,   341,   342,   342,   343,   343,   344,   344,   345,   345,
     346,   346,   346,   347,   348,   348,   349,   349,   349,   350,
     350,   351,   351,   351,   351,   352,   352,   352,   353,   353,
     353,   353,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   363,   364,   365,   366,   366,   367,   367,
     368,   368,   369,   369,   370,   370,   371,   371,   372,   372,
     373,   373,   374,   374,   375,   375,   376,   376,   377,   377,
     378,   378,   379
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     3,     8,     0,     2,     1,     3,
       1,     0,     1,     0,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     0,
       1,     1,     1,     6,     7,     3,     4,     8,     1,     5,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     3,     2,     2,
       3,     3,     0,     2,     1,     3,     1,     5,     0,     1,
       2,     3,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     4,     0,     1,     2,     1,     7,
       7,     4,     4,     6,     6,     6,     4,     4,     4,     0,
       1,     1,     3,     4,     0,     1,     6,     4,     1,     3,
       1,     4,     7,     0,     2,     8,     0,     1,     1,     1,
       1,     2,     3,     2,     5,     5,     2,     2,     9,     9,
       0,     4,     1,    10,    13,    10,    13,    13,    14,     0,
       1,     1,     3,     5,     1,     1,     6,     5,     6,     2,
       3,     2,     0,     1,     2,     3,     1,     1,     1,     1,
       1,     3,     4,     6,     4,     9,     8,     0,     3,     3,
       3,     0,     3,     1,     3,     1,     3,     1,     4,     1,
       1,     0,     4,     0,     1,     2,     3,     4,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     1,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     4,     1,     1,     4,     4,     3,
       6,     8,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     6,     8,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       2,     1,     3,     1,     2,     4,     4,     4,     4,     3,
       6,     8,     0,     3,     4,     3,     1,     2,     1,     2,
       3,     2,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     3,     5,
       1,     3,     1,     3,     0,     1,     3,     0,     1,     1,
       3,     1,     3,     1,     3,     2,     3,     2,     3,     1,
       1,     1,     1,     2,     2,     2,     2,     4,     2,     4,
       7,    10,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     2,     3,     4,
       3,     9,     9,     5,     6,     5,     7,     7,     8,     7,
       1,     2,     5,     3,     4,     4,     0,     1,     2,     3,
       5,     5,     4,     1,     0,     1,     1,     1,     1,     0,
       1,     0,     1,     4,     1,     1,     1,     1,     6,     5,
       4,     3,     2,     2,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   293,     0,   306,     0,   480,     0,   410,     0
};

/* Error token number */
#define YYTERROR 1


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)



#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)


static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser_t *p)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (p);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser_t *p)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, p);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value, Location, p);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static _Noreturn void
yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, parser_t *p, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yylocp, p, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static _Noreturn void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, parser_t *p)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYUSE (p);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (yylocp, p, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
      
#line 3630 "parser.c" /* glr.c:816  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, parser_t *p)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (p);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, parser_t *p)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval, &yys->yyloc, p);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, p);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-701)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule, parser_t *p)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , p);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, parser_t *p)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule, p));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp, yylocp, p);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule, p));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, p);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval, parser_t *p)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval, &yyloc, p);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULLPTR;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp, parser_t *p);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, parser_t *p)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, p));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, p));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, parser_t *p)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, p);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, p);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, p);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, YYLTYPE *yylocp, parser_t *p)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (yylocp, p, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
                    yyGLRStack *yystackp, parser_t *p)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, p);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YYASSERT (yyoption != YY_NULLPTR);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (yynrhs > 0)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, p);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          {
            int yychar_current = yychar;
            YYSTYPE yylval_current = yylval;
            YYLTYPE yylloc_current = yylloc;
            yychar = yyoption->yyrawchar;
            yylval = yyoption->yyval;
            yylloc = yyoption->yyloc;
            YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
            yychar = yychar_current;
            yylval = yylval_current;
            yylloc = yylloc_current;
          }
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, parser_t *p)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, p);
              return yyreportAmbiguity (yybest, yyp, yylocp, p);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, p);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other, &yydummy, p);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval, yylocp, p);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, p);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, parser_t *p)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , p));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn, YYLTYPE *yylocp, parser_t *p)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], p);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex (&yylval, &yylloc, p);
            }

          if (yychar <= YYEOF)
            {
              yychar = yytoken = YYEOF;
              YYDPRINTF ((stderr, "Now at end of input.\n"));
            }
          else
            {
              yytoken = YYTRANSLATE (yychar);
              YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
            }

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], p);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, yylocp, p));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], p);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp, parser_t *p)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (&yylloc, p, YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (&yylloc, p, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (&yylloc, p, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, parser_t *p)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, &yylloc, p, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, p);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex (&yylval, &yylloc, p);
        if (yychar <= YYEOF)
          {
            yychar = yytoken = YYEOF;
            YYDPRINTF ((stderr, "Now at end of input.\n"));
          }
        else
          {
            yytoken = YYTRANSLATE (yychar);
            YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
          }
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, &yylloc, p, YY_NULLPTR);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, p);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, &yylloc, p, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (parser_t *p)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  /* User initialization code.  */
  #line 318 "parser.y" /* glr.c:2270  */
{
    yylloc = loc_init(0);
    if (getenv("K3DEBUG"))
        yydebug=1;
}

#line 5110 "parser.c" /* glr.c:2270  */

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
               yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, p);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, p));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex (&yylval, &yylloc, p);
                }

              if (yychar <= YYEOF)
                {
                  yychar = yytoken = YYEOF;
                  YYDPRINTF ((stderr, "Now at end of input.\n"));
                }
              else
                {
                  yytoken = YYTRANSLATE (yychar);
                  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
                }

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
               yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, p);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, p));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, &yylloc, p));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, &yylloc, p, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, p));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
           yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, p);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, p));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, p);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (&yylloc, p, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, p);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                 yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                  if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, p);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc



#line 1414 "parser.y" /* glr.c:2584  */
 /* Footer */

#include "flyweight.h"
#include "hash.h"

static inline void yyerror(loc_t *loc, parser_t *p, const char *msg)
{
    ++p->errors;
    if (p->err)
        p->err(p->src, loc, msg);
}


/*************************************************************************
 * Lexer support
 *************************************************************************/

struct keyword {
    enum yytokentype  tok;
    const char       *name;
};

static hash_t *keywords;

static void init_keywords()
{
    keywords = HASH_CREATE_PTR(128);
    static struct keyword list[] = {
        { YYTOK_KW_ACTION,      "action"      },
        { YYTOK_KW_ACTIVATE,    "activate"    },
        { YYTOK_KW_ADDRESS,     "address"     },
        { YYTOK_KW_ALIVE,       "alive"       },
        { YYTOK_KW_ALL,         "all"         },
        { YYTOK_KW_ALT,         "alt"         },
        { YYTOK_KW_ALTSTEP,     "altstep"     },
        { YYTOK_KW_AND,         "and"         },
        { YYTOK_KW_AND4B,       "and4b"       },
        { YYTOK_KW_ANY,         "any"         },
        { YYTOK_KW_ANYTYPE,     "anytype"     },
        { YYTOK_KW_BITSTRING,   "bitstring"   },
        { YYTOK_KW_BOOLEAN,     "boolean"     },
        { YYTOK_KW_BREAK,       "break"       },
        { YYTOK_KW_CALL,        "call"        },
        { YYTOK_KW_CASE,        "case"        },
        { YYTOK_KW_CATCH,       "catch"       },
        { YYTOK_KW_CHAR,        "char"        },
        { YYTOK_KW_CHARSTRING,  "charstring"  },
        { YYTOK_KW_CHECK,       "check"       },
        { YYTOK_KW_CLEAR,       "clear"       },
        { YYTOK_KW_COMPLEMENT,  "complement"  },
        { YYTOK_KW_COMPONENT,   "component"   },
        { YYTOK_KW_CONNECT,     "connect"     },
        { YYTOK_KW_CONST,       "const"       },
        { YYTOK_KW_CONTINUE,    "continue"    },
        { YYTOK_KW_CONTROL,     "control"     },
        { YYTOK_KW_CREATE,      "create"      },
        { YYTOK_KW_DEACTIVATE,  "deactivate"  },
        { YYTOK_KW_DECMATCH,    "decmatch"    },
        { YYTOK_KW_DEFAULT,     "default"     },
        { YYTOK_KW_DISCONNECT,  "disconnect"  },
        { YYTOK_KW_DISPLAY,     "display"     },
        { YYTOK_KW_DO,          "do"          },
        { YYTOK_KW_DONE,        "done"        },
        { YYTOK_KW_ELSE,        "else"        },
        { YYTOK_KW_ENCODE,      "encode"      },
        { YYTOK_KW_ENUMERATED,  "enumerated"  },
        { YYTOK_KW_ERROR,       "error"       },
        { YYTOK_KW_EXCEPT,      "except"      },
        { YYTOK_KW_EXCEPTION,   "exception"   },
        { YYTOK_KW_EXECUTE,     "execute"     },
        { YYTOK_KW_EXTENDS,     "extends"     },
        { YYTOK_KW_EXTENSION,   "extension"   },
        { YYTOK_KW_EXTERNAL,    "external"    },
        { YYTOK_KW_FAIL,        "fail"        },
        { YYTOK_KW_FALSE,       "false"       },
        { YYTOK_KW_FLOAT,       "float"       },
        { YYTOK_KW_FOR,         "for"         },
        { YYTOK_KW_FRIEND,      "friend"      },
        { YYTOK_KW_FROM,        "from"        },
        { YYTOK_KW_FUNCTION,    "function"    },
        { YYTOK_KW_GETCALL,     "getcall"     },
        { YYTOK_KW_GETREPLY,    "getreply"    },
        { YYTOK_KW_GETVERDICT,  "getverdict"  },
        { YYTOK_KW_GOTO,        "goto"        },
        { YYTOK_KW_GROUP,       "group"       },
        { YYTOK_KW_HALT,        "halt"        },
        { YYTOK_KW_HEXSTRING,   "hexstring"   },
        { YYTOK_KW_IF,          "if"          },
        { YYTOK_KW_IFPRESENT,   "ifpresent"   },
        { YYTOK_KW_IMPORT,      "import"      },
        { YYTOK_KW_IN,          "in"          },
        { YYTOK_KW_INCONC,      "inconc"      },
        { YYTOK_KW_INFINITY,    "infinity"    },
        { YYTOK_KW_INOUT,       "inout"       },
        { YYTOK_KW_INTEGER,     "integer"     },
        { YYTOK_KW_INTERLEAVE,  "interleave"  },
        { YYTOK_KW_KILL,        "kill"        },
        { YYTOK_KW_KILLED,      "killed"      },
        { YYTOK_KW_LABEL,       "label"       },
        { YYTOK_KW_LANGUAGE,    "language"    },
        { YYTOK_KW_LENGTH,      "length"      },
        { YYTOK_KW_LOG,         "log"         },
        { YYTOK_KW_MAP,         "map"         },
        { YYTOK_KW_MATCH,       "match"       },
        { YYTOK_KW_MESSAGE,     "message"     },
        { YYTOK_KW_MIXED,       "mixed"       },
        { YYTOK_KW_MOD,         "mod"         },
        { YYTOK_KW_MODIFIES,    "modifies"    },
        { YYTOK_KW_MODULE,      "module"      },
        { YYTOK_KW_MODULEPAR,   "modulepar"   },
        { YYTOK_KW_MTC,         "mtc"         },
        { YYTOK_KW_NOBLOCK,     "noblock"     },
        { YYTOK_KW_NONE,        "none"        },
        { YYTOK_KW_NOT,         "not"         },
        { YYTOK_KW_NOT4B,       "not4b"       },
        { YYTOK_KW_NOWAIT,      "nowait"      },
        { YYTOK_KW_NULL,        "null"        },
        { YYTOK_KW_OCTETSTRING, "octetstring" },
        { YYTOK_KW_OF,          "of"          },
        { YYTOK_KW_OMIT,        "omit"        },
        { YYTOK_KW_ON,          "on"          },
        { YYTOK_KW_OPTIONAL,    "optional"    },
        { YYTOK_KW_OR,          "or"          },
        { YYTOK_KW_OR4B,        "or4b"        },
        { YYTOK_KW_OUT,         "out"         },
        { YYTOK_KW_OVERRIDE,    "override"    },
        { YYTOK_KW_PARAM,       "param"       },
        { YYTOK_KW_PASS,        "pass"        },
        { YYTOK_KW_PATTERN,     "pattern"     },
        { YYTOK_KW_PERMUTATION, "permutation" },
        { YYTOK_KW_PORT,        "port"        },
        { YYTOK_KW_PRESENT,     "present"     },
        { YYTOK_KW_PRIVATE,     "private"     },
        { YYTOK_KW_PROCEDURE,   "procedure"   },
        { YYTOK_KW_PUBLIC,      "public"      },
        { YYTOK_KW_RAISE,       "raise"       },
        { YYTOK_KW_READ,        "read"        },
        { YYTOK_KW_REALTIME,    "realtime"    },
        { YYTOK_KW_RECEIVE,     "receive"     },
        { YYTOK_KW_RECORD,      "record"      },
        { YYTOK_KW_RECURSIVE,   "recursive"   },
        { YYTOK_KW_REGEXP,      "regexp"      },
        { YYTOK_KW_REM,         "rem"         },
        { YYTOK_KW_REPEAT,      "repeat"      },
        { YYTOK_KW_REPLY,       "reply"       },
        { YYTOK_KW_RETURN,      "return"      },
        { YYTOK_KW_RUNNING,     "running"     },
        { YYTOK_KW_RUNS,        "runs"        },
        { YYTOK_KW_SELECT,      "select"      },
        { YYTOK_KW_SELF,        "self"        },
        { YYTOK_KW_SEND,        "send"        },
        { YYTOK_KW_SENDER,      "sender"      },
        { YYTOK_KW_SET,         "set"         },
        { YYTOK_KW_SETVERDICT,  "setverdict"  },
        { YYTOK_KW_SIGNATURE,   "signature"   },
        { YYTOK_KW_START,       "start"       },
        { YYTOK_KW_STEPSIZE,    "stepsize"    },
        { YYTOK_KW_STOP,        "stop"        },
        { YYTOK_KW_SUBSET,      "subset"      },
        { YYTOK_KW_SUPERSET,    "superset"    },
        { YYTOK_KW_SYSTEM,      "system"      },
        { YYTOK_KW_TEMPLATE,    "template"    },
        { YYTOK_KW_TESTCASE,    "testcase"    },
        { YYTOK_KW_TIMEOUT,     "timeout"     },
        { YYTOK_KW_TIMER,       "timer"       },
        { YYTOK_KW_TIMESTAMP,   "timestamp"   },
        { YYTOK_KW_TO,          "to"          },
        { YYTOK_KW_TRIGGER,     "trigger"     },
        { YYTOK_KW_TRUE,        "true"        },
        { YYTOK_KW_TYPE,        "type"        },
        { YYTOK_KW_UNION,       "union"       },
        { YYTOK_KW_UNIVERSAL,   "universal"   },
        { YYTOK_KW_UNMAP,       "unmap"       },
        { YYTOK_KW_VALUE,       "value"       },
        { YYTOK_KW_VALUEOF,     "valueof"     },
        { YYTOK_KW_VAR,         "var"         },
        { YYTOK_KW_VARIANT,     "variant"     },
        { YYTOK_KW_VERDICTTYPE, "verdicttype" },
        { YYTOK_KW_WHILE,       "while"       },
        { YYTOK_KW_WITH,        "with"        },
        { YYTOK_KW_XOR,         "xor"         },
        { YYTOK_KW_XOR4B,       "xor4b"       },
        { YYTOK_EOF,            NULL          },
    };
    const struct keyword *kw = list;
    while(kw->tok != YYTOK_EOF) {
        HASH_SET_PTR(keywords, flyweight_insert(kw->name), kw);
        ++kw;
    }
}

static inline enum yytokentype lookup_keyword(const char *str)
{
    struct keyword *kw = HASH_GET_PTR(keywords, str);
    if (kw)
        return kw->tok;
    return ID;
}

static inline const char *make_literal(src_t *src, loc_t *loc)
{
    const char *str = src_addr(src) + loc->begin;
    int n = loc->end - loc->begin;
    return flyweight_insert(strndupa(str, n));
}

static int yylex(YYSTYPE *value, loc_t *loc, parser_t *p)
{
    // map tokenizer tokens to bison tokens
    static int map[TOK_COUNT] = {
        [TOK_ID]             = ID,
        [TOK_TITANID]        = TITANID,
        [TOK_INT]            = INT,
        [TOK_FLOAT]          = FLOAT,
        [TOK_CSTRING]        = CSTRING,
        [TOK_BSTRING]        = BSTRING,
        [TOK_MODIFIER]       = MODIFIER,
        #define DEF_CHAR(Enum, Value)   [Enum] = YY ## Enum,
        #define DEF_TOKEN(Enum, Desc)   [Enum] = YY ## Enum,
        #include "tokens.def"
    };

    enum token_type tok;

redo:
    tok = scan(p->scanner, &loc->begin, &loc->end);

    if (tok == TOK_COMMENT)
        goto redo;

    if (is_literal(tok))
        value->lit = make_literal(p->src, loc);

    if (tok == TOK_ID && (loc->end-loc->begin) > 1) {
        return lookup_keyword(value->lit);
    }

    return map[tok];
}

static void __attribute__((__constructor__)) parser_init()
{
    init_keywords();
}

static void default_error(src_t *src, loc_t *loc, const char *msg)
{
    fprintf(stderr, "%s:%d:%d: [31;1merror[0m: %s\n",
            src_name(src),
            src_line(src, loc->begin),
            src_column(src, loc->end),
            msg);
}

int parse(src_t *src)
{
    scanner_t *scanner = scanner_new(src, NULL);
    if (!scanner)
        return -1;

    parser_t p = {
        .src     = src,
        .scanner = scanner,
        .err     = default_error,
    };

    int ret = yyparse(&p);

    scanner_free(p.scanner);
    src_free(p.src);

    return ret;
}
