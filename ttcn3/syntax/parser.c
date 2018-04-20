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
    UNARY = 452
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "parser.y" /* glr.c:244  */

    const char *lit;
    ast_t *ast;

#line 332 "parser.c" /* glr.c:244  */
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
#line 279 "parser.y" /* glr.c:263  */


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

#line 395 "parser.c" /* glr.c:263  */

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
#define YYLAST   3697

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  205
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  419
/* YYNRULES -- Number of states.  */
#define YYNSTATES  777
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 12
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   459

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
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   305,   305,   313,   314,   318,   321,   323,   327,   328,
     331,   333,   341,   343,   347,   348,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   366,   368,
     369,   370,   374,   383,   386,   388,   392,   393,   394,   397,
     399,   403,   404,   408,   409,   410,   411,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   426,   428,   432,   433,
     437,   438,   441,   443,   447,   448,   452,   453,   454,   455,
     464,   465,   466,   467,   468,   469,   470,   474,   475,   476,
     477,   485,   487,   496,   499,   501,   502,   503,   512,   516,
     517,   521,   529,   533,   534,   535,   540,   543,   545,   549,
     550,   554,   557,   559,   568,   573,   578,   579,   583,   584,
     593,   597,   599,   608,   612,   613,   614,   617,   619,   623,
     624,   628,   629,   630,   631,   632,   641,   642,   646,   649,
     651,   660,   664,   665,   666,   675,   684,   693,   702,   706,
     707,   708,   716,   718,   722,   723,   727,   731,   732,   740,
     742,   746,   747,   751,   752,   753,   754,   755,   763,   772,
     773,   777,   778,   782,   790,   799,   808,   818,   827,   830,
     832,   833,   834,   837,   839,   843,   844,   852,   854,   857,
     859,   863,   864,   868,   872,   873,   874,   875,   876,   877,
     880,   882,   885,   887,   891,   892,   896,   897,   898,   902,
     903,   904,   905,   906,   907,   908,   909,   910,   914,   917,
     919,   929,   930,   934,   935,   940,   941,   942,   943,   944,
     947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   973,   974,   975,   976,   977,   985,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1025,  1029,  1038,  1039,  1043,  1044,  1048,
    1049,  1050,  1051,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,
    1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,
    1082,  1083,  1086,  1088,  1092,  1095,  1097,  1101,  1102,  1106,
    1107,  1111,  1112,  1121,  1122,  1126,  1127,  1131,  1132,  1133,
    1134,  1135,  1136,  1137,  1139,  1140,  1141,  1142,  1144,  1146,
    1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1164,
    1172,  1173,  1177,  1181,  1189,  1190,  1191,  1195,  1199,  1203,
    1204,  1208,  1209,  1217,  1218,  1221,  1223,  1227,  1228,  1232,
    1233,  1234,  1238,  1241,  1243,  1247,  1248,  1249,  1252,  1254,
    1257,  1259,  1260,  1261,  1265,  1266,  1267,  1271,  1272,  1273,
    1275,  1279,  1280,  1284,  1285,  1289,  1290,  1294,  1295,  1300,
    1300,  1301,  1301,  1302,  1302,  1304,  1304,  1305,  1305,  1308
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
  "UNARY", "\"not_a_number\"", "\"__MODULE__\"", "\"__FILE__\"",
  "\"__BFILE__\"", "\"__LINE__\"", "\"__SCOPE__\"", "\"checkstate\"",
  "$accept", "parse", "Modules", "Module", "OptLanguage", "LangSpec",
  "OptControl", "OptModuleDefs", "ModuleDefs", "ModuleDef",
  "OptVisibility", "Group", "Import", "OptRecursive", "ImportBody",
  "OptImportStmts", "ImportStmts", "ImportStmt", "ImportKind", "OptExcept",
  "GroupRefs", "GroupRef", "OptExceptStmts", "ExceptStmts", "ExceptStmt",
  "Type", "NestedType", "OptReturn", "SubType", "OptConstraint", "List",
  "ListKind", "NestedList", "Struct", "StructKind", "NestedStruct",
  "OptStructFields", "StructFields", "StructField", "OptOptional", "Enum",
  "NestedEnum", "Enumerations", "Enumeration", "Component", "OptExtends",
  "Port", "PortKind", "OptRealtime", "PortAttributes", "PortAttribute",
  "Signature", "NoBlock", "OptExceptionSpec", "BehaviourType",
  "BehaviourKind", "ExtFunction", "Function", "Testcase", "Altstep",
  "AltstepBody", "OptFormalPars", "FormalPars", "FormalPar",
  "FormalParRef", "OptDecls", "Decls", "Decl", "ExtConst", "ModulePar",
  "ModulePars", "ObsoleteModulePar", "TimerDecl", "PortDecl", "VarDecl",
  "Const", "Template", "OptTemplateRestriction", "OptTemplatePars",
  "TemplateBody", "OptWith", "OptWithStmts", "WithStmts", "WithStmt",
  "WithKind", "OptOverride", "OptWithQualifiers", "WithQualifiers",
  "WithQualifier", "WithSelectorKind", "WithSelector", "OptWithExcept",
  "Exprs", "ExprOrOmit", "Expr", "Literal", "Value", "PatternValue",
  "SetValue", "Primary", "Refs", "Ref", "RefElem", "OptParams", "Params",
  "OptInits", "Inits", "InitElement", "Designator", "Block", "Stmts",
  "Stmt", "Assignment", "ForLoop", "WhileLoop", "DoWhileLoop",
  "IfConstruct", "SelectUnionConstruct", "SelectConstruct", "Cases",
  "Case", "AltConstruct", "OptAltGuards", "AltGuards", "AltGuard",
  "GuardOp", "OptDirection", "Direction", "OptModifier",
  "OptNestedTemplateRestriction", "TemplateRestriction", "RunsOnSpec",
  "MtcSpec", "SystemSpec", "Length", "Declarators", "Declarator",
  "ArrayDef", "Def", "OptRunsOnSpec", "OptMtcSpec", "OptSystemSpec",
  "OptLength", "OptExpr", "Semi", YY_NULLPTR
};
#endif

#define YYPACT_NINF -587
#define YYTABLE_NINF -332

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     -40,   155,    90,   -40,    83,  -587,  -587,    -8,  -587,    83,
    -587,  -587,    94,   195,  -587,  -587,   134,    28,   228,   137,
    -587,  -587,   107,    34,    83,   895,  -587,   155,   285,   292,
      83,  -587,   155,  3096,     7,   155,   155,   229,  2452,  3096,
     155,   311,   155,   155,  2782,   247,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    2199,  -587,   142,  -587,   320,  -587,   -20,    27,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,   281,  -587,  -587,  -587,
     431,  -587,  3096,   346,   346,   374,   155,  3096,   431,   431,
     377,   -59,   346,   398,    10,  -587,   172,  -587,  -587,   155,
     155,  -587,   155,   165,   196,  -587,  -587,   299,   155,   155,
     431,  -587,  -587,   399,  -587,   346,  -587,  -587,   407,  -587,
    -587,   285,   420,   424,   428,   432,   433,   456,  -587,  1123,
      14,   458,   456,   468,  -587,   429,  -587,  2358,    83,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,   470,  -587,   117,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  3096,   725,  1322,
      10,   431,  -587,   155,   473,    54,    -8,  2542,    83,   431,
      10,    10,   117,   469,   474,   478,  3096,   117,   155,  -587,
    1123,  1322,   414,   481,   144,   484,  -587,   371,   488,   486,
      99,   147,  3096,   487,   318,  2909,  -587,  1123,   487,  -587,
     725,   373,  1123,  -587,  1123,  1123,  -587,  1123,   725,  -587,
    -587,  -587,  -587,   497,   498,  -587,  -587,  -587,  -587,  -587,
    -587,  1123,  1123,  -587,  -587,  -587,  -587,   346,   499,   346,
     500,   501,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    2007,  -587,   170,  -587,  -587,   423,  1123,   502,   351,  -587,
     384,  1123,  1322,  -587,    83,  -587,   280,  -587,  -587,  -587,
     506,   509,  -587,   247,  -587,  -587,  1123,  1123,  -587,  2007,
     422,   508,   511,  -587,   489,   510,  -587,    10,   516,   117,
     515,   389,   142,    83,  -587,   522,  -587,  -587,   521,  -587,
    -587,  -587,   431,   525,  -587,   336,  -587,  3096,   527,   155,
    -587,  -587,  -587,   390,  1123,  2950,  2950,   117,   142,   299,
    -587,   526,   431,   924,   529,   487,    83,   530,   535,   536,
    1519,   532,   189,   456,  2041,  -587,  -587,   197,  2007,   533,
    1123,  1123,  2119,   276,   528,  1123,   539,  1123,  1123,  1123,
    1123,  1123,  1123,  1123,  1123,  1123,  1123,  1123,  1123,  1123,
    1123,  1123,  1123,  1123,  1123,  1123,  1123,  1123,  1123,  1123,
    1123,  1123,  1123,  -587,   459,  -587,  1552,  3096,   456,   456,
    1585,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,   537,
     280,    83,   425,   402,    -1,   346,  1631,  -587,   725,  1322,
    -587,  -587,   117,   546,   142,  -587,    92,  -587,  -587,   -27,
     548,   402,  -587,   552,   309,    76,   290,  -587,   554,  -587,
     553,  1721,   555,   155,   299,  -587,   557,  -587,  -587,   309,
     155,   561,   566,  -587,   559,  -587,  -587,  -587,    10,   563,
    2007,   564,  -587,    83,  -587,  1123,  1123,  1123,   285,  -587,
    -587,  -587,  1123,  -587,  -587,   279,   289,  -587,  -587,   334,
     725,   343,   344,    53,   264,   264,    53,    53,  -587,  -587,
    1353,  1353,   264,   264,   305,   305,   305,   305,  2041,  2119,
     276,  -587,   609,   386,  -587,  2085,   376,  -587,   569,   360,
    -587,  -587,  -587,   285,  -587,    83,  -587,  -587,   572,   450,
    -587,   467,  -587,  3055,  -587,  -587,  -587,   573,   402,  -587,
     -15,   512,   142,  -587,   247,   519,   519,    -1,   -10,   434,
    3096,   576,    76,    83,   155,   142,  1123,    -3,  -587,   155,
      63,   462,  2950,    99,   142,  2950,   402,  -587,   285,   578,
    -587,  1781,  1833,  1893,   534,  2007,  -587,  -587,  -587,   391,
    -587,  -587,   549,   583,  -587,  -587,  2636,   579,  3096,  3096,
    -587,   434,  -587,   155,   309,   451,   467,  -587,  -587,  -587,
    3201,  -587,  -587,  -587,  -587,  -587,  -587,   588,   -15,    83,
    3242,   592,  -587,  3096,   595,   142,   142,   395,  1123,  3096,
     142,  3096,  -587,   285,   309,   142,    83,  -587,  -587,  -587,
    1947,  3096,   475,   477,   166,    83,  3347,   315,   142,  2950,
     593,   490,  -587,  -587,   451,  -587,  -587,   387,  -587,  3096,
    3096,    45,  -587,    52,    15,  -587,   549,  1322,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,   404,  -587,   580,
    -587,   309,  -587,   309,   309,   604,  -587,   142,   434,   -21,
     610,  -587,   263,  -587,    83,  -587,   -21,   552,   781,   309,
    3096,  -587,  -587,  -587,  2007,   465,  -587,   309,   142,  -587,
    -587,  -587,   309,   611,   612,   142,    83,  -587,   -20,   552,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,   613,
     614,  -587,  -587,  1123,   285,  -587,  -587,   131,   605,  2636,
    -587,   550,    18,  -587,   451,  3096,  -587,  3096,   615,  -587,
    -587,  3388,  3493,   616,   781,    83,   441,  1123,  -587,    -1,
      -1,  -587,  -587,   285,   285,   446,  -587,  -587,  -587,  -587,
     618,  -587,   627,    18,   487,   285,   552,  -587,   781,   -20,
     552,   -20,   552,  -587,    83,  -587,  -587,  2007,   460,   461,
    -587,  -587,   285,  3096,   142,   487,   142,   628,  -587,  -587,
    -587,  -587,   385,  -587,  -587,  -587,  -587
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     2,     0,   407,   408,     6,     1,     0,
     419,     3,     0,     0,     4,     8,     7,    28,     0,    30,
      31,    29,    10,    28,     0,     0,     9,     0,     0,     0,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,   390,    26,    25,    21,    72,
      74,    75,    73,    70,    71,    20,    76,    16,    17,    18,
      19,    23,    22,    24,   153,   154,   155,   157,   156,    27,
       0,    11,   177,    15,     0,   293,     0,     0,   300,   301,
     302,   303,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,     0,   320,   321,   304,
       0,   289,     0,   388,   388,     0,     0,     0,     0,     0,
       0,     0,   388,     0,   177,   401,   403,   405,   134,     0,
       0,   133,     0,    93,    94,   132,    95,   415,     0,     0,
       0,   394,   396,   391,   395,   388,   393,   333,     0,   338,
     339,     0,     0,     0,     0,     0,     0,     0,   337,   340,
       0,     0,   322,     0,   350,     0,   358,     0,     0,   349,
     351,   352,   353,   354,   355,   356,   357,     0,     5,   383,
     294,   295,   296,   297,   298,   299,   319,     0,   325,     0,
     177,     0,   389,     0,     0,    28,     6,     0,     0,     0,
     177,   177,   383,     0,     0,     0,     0,   383,     0,   164,
       0,     0,   111,     0,     0,     0,   416,     0,     0,     0,
      84,     0,     0,   375,     0,     0,   342,     0,   375,   343,
       0,   344,     0,   266,     0,     0,   267,     0,   325,   251,
     252,   249,   250,     0,     0,   257,   254,   258,   255,   264,
     256,     0,     0,   265,   260,   261,   253,   388,     0,   388,
       0,     0,   262,   259,   263,   268,   269,   270,   271,   272,
     341,   273,   216,   281,   215,   285,     0,     0,     0,   346,
     323,     0,     0,   334,     0,   335,   179,   385,   387,   386,
       0,   143,   144,   390,   384,   292,   214,     0,   329,   213,
     285,     0,   326,   327,     0,     0,   167,   177,     0,   383,
       0,    34,   177,     0,   161,   163,   159,   165,     0,   170,
     172,   171,     0,     0,   402,     0,   404,     0,     0,     0,
     115,   116,   114,   117,     0,     0,    97,   383,   177,    85,
      87,     0,     0,   417,     0,   376,     0,     0,     0,     0,
       0,     0,     0,     0,   246,   247,   248,     0,   211,     0,
       0,     0,   244,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   217,   286,     0,     0,   322,     0,
       0,   359,   336,   186,   184,   187,   188,   189,   185,     0,
     180,     0,   190,   409,   383,   388,     0,   291,     0,     0,
     290,   158,   383,     0,   177,    35,     0,   160,   162,    81,
     173,     0,   406,   112,   287,   149,     0,   106,   108,   118,
       0,     0,     0,     0,   415,    78,     0,    79,    80,    77,
       0,     0,    98,    99,     0,    83,    86,   392,   177,     0,
     418,     0,   373,     0,   377,     0,     0,     0,     0,   374,
     324,   345,     0,   284,   282,     0,     0,   283,   279,     0,
       0,     0,     0,   238,   226,   225,   236,   237,   239,   240,
     223,   224,   227,   228,   230,   229,   232,   231,   243,   222,
     235,   241,   220,   233,   242,   221,   234,   218,     0,     0,
     348,   323,   347,     0,   178,     0,   181,   191,   192,     0,
     410,   411,   145,     0,   332,   328,   330,     0,   409,    32,
      39,    36,   177,   128,   390,   129,   129,   383,     0,   413,
       0,     0,   150,     0,     0,   177,     0,     0,   400,     0,
      84,     0,    97,    84,   177,     0,   409,   166,     0,     0,
     378,     0,     0,     0,   364,   212,   274,   275,   276,     0,
     277,   278,     0,     0,   362,   182,     0,     0,     0,     0,
     412,   413,   148,     0,   147,    81,   411,    47,    48,    49,
       0,    50,    51,    52,    53,    54,    55,     0,    40,     0,
       0,     0,    33,     0,     0,   177,   177,     0,     0,     0,
     177,     0,   414,     0,   288,   177,     0,   151,   107,   104,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,   102,    92,   100,    81,   381,   382,     0,   363,     0,
       0,     0,   280,     0,     0,   369,     0,     0,   203,   202,
     205,   199,   207,   206,   201,   204,   200,     0,   194,     0,
     198,   196,   183,   397,   398,     0,   146,   177,   413,    56,
      44,    58,    60,    38,     0,    41,    56,    43,    62,    82,
       0,   126,   127,   174,   175,     0,   168,   399,   177,   110,
     152,   109,   121,     0,     0,   177,     0,   119,   124,   125,
     105,    88,    91,    96,   103,   101,   131,   380,   379,     0,
       0,   366,   365,     0,     0,   368,   370,     0,     0,     0,
     193,   209,     0,   135,    81,     0,    46,     0,     0,    42,
      45,     0,     0,     0,    63,     0,     0,     0,   137,   383,
     383,   113,   120,     0,     0,     0,   372,   367,   197,   195,
       0,   208,     0,   139,   141,     0,    57,    59,    62,    69,
      68,    67,    66,    37,     0,    64,   130,   176,     0,     0,
     360,   361,     0,     0,   177,   140,   177,     0,    65,   122,
     123,   371,     0,   138,   136,    61,   210
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -587,  -587,  -587,   632,   466,  -587,  -587,   452,  -587,   630,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,    69,  -457,    -5,
    -587,   -66,   -90,  -587,   -62,  -587,  -309,  -546,  -587,  -445,
    -587,   619,  -587,  -587,   620,  -587,   123,  -587,   121,  -587,
    -587,  -587,   128,   135,  -587,  -587,  -587,  -587,  -587,  -587,
      56,  -587,  -587,   145,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,  -154,  -468,   268,  -587,  -587,   -44,   -19,  -587,  -587,
    -587,   493,  -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    -110,  -587,  -587,   273,  -587,  -587,  -587,  -587,   -35,  -587,
    -587,  -587,  -338,  -155,  -131,  -587,  -587,  -587,  -200,  -587,
    -551,   -30,   504,   287,  -120,   448,  -195,   274,  -587,   -26,
    -587,   531,  -210,  -587,  -587,  -587,    55,  -587,  -587,    47,
    -586,  -587,   471,  -552,  -334,  -587,  -587,  -482,   -82,  -257,
     479,   275,  -587,  -587,   -76,   -73,  -191,  -119,    22,  -458,
     108,  -524,   260,  -587,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     2,     3,     4,    13,    16,    29,    22,    23,    24,
      25,    46,    47,   416,   522,   587,   588,   589,   722,   716,
     660,   661,   723,   724,   725,    48,   440,   525,    49,   328,
      50,   434,   435,    51,   436,   437,   441,   442,   443,   695,
      52,   438,   426,   427,    53,   318,    54,   323,   430,   614,
     615,    55,   526,   595,    56,   129,    57,    58,    59,    60,
     742,   280,   281,   282,   573,   531,   532,   154,    62,    63,
     187,   188,    64,    65,    66,    67,    68,   112,   528,   600,
     168,   399,   400,   401,   402,   508,   567,   647,   648,   649,
     650,   741,   347,   288,   289,   261,   262,   468,   263,   264,
     423,   265,   101,   269,   221,   291,   292,   293,   294,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   634,
     635,   166,   334,   335,   336,   627,   283,   284,   183,   135,
     136,   510,   570,   602,   330,   114,   115,   116,   117,   511,
     571,   603,   207,   451,    11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      14,   453,    71,   100,   199,   339,    61,   314,   108,   109,
     329,   210,   465,   466,   130,    31,   433,   469,   260,   471,
     472,    73,   184,     7,   295,   342,   405,   180,   198,   657,
     196,   598,   270,   266,   577,   190,   191,   705,   308,   667,
     155,   333,   611,   313,   170,   170,   316,   655,   706,    69,
     -12,   206,   578,   212,    74,   616,   -13,   104,   105,   597,
     576,   715,   110,   590,   113,   689,    70,   364,   365,   315,
     296,   703,   181,   633,   102,   193,   -12,   189,   696,   579,
     306,   307,   227,     1,   580,    33,   340,   194,   624,   581,
       8,   344,   173,   345,   346,   618,   348,   -12,   621,   523,
      10,   103,   277,   -13,   277,   278,    12,   278,   297,   582,
     352,   353,   599,   520,   612,   214,   305,   391,   227,   726,
      19,   706,   200,    15,   171,   171,    19,   155,   186,   195,
     704,   590,   616,   524,   714,   386,   279,  -142,   279,   521,
     390,   202,   203,    33,   204,   413,    19,   144,   290,   275,
     208,   209,    18,   737,   583,   346,   406,   189,   172,   172,
     744,   584,   585,    39,   746,   354,   312,   356,   745,   586,
     750,   752,   174,   444,   377,    20,    28,    21,   205,   304,
       5,    20,   332,    21,   613,   155,   384,   411,   685,   633,
     290,   765,   417,   431,    41,   200,   338,    43,   290,   267,
       6,    20,   450,    21,   167,   298,   175,   408,    45,   460,
     380,   611,   772,   201,   205,   462,    17,   463,   445,   348,
     348,    39,   277,   461,   348,   278,   348,   348,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,    41,   446,   516,    43,   279,    26,   517,   448,
      27,   758,   759,   320,   321,   392,    45,   593,   501,   502,
     177,   277,   359,   383,   278,   559,   362,   363,   364,   365,
     -89,   131,   178,   612,   359,   205,   179,   424,   362,   363,
     364,   365,   322,   132,   418,   439,   439,   462,   -89,   556,
     370,   371,   372,   373,   519,   279,    70,   462,   534,   557,
     692,   -90,   535,   359,    72,   376,   177,   362,   363,   364,
     365,   543,   106,   513,   551,   552,   553,   454,   178,   -90,
     111,   555,   179,   534,   420,   134,   167,   690,   547,   169,
     329,   428,   176,   329,   359,   718,   360,   361,   362,   363,
     364,   365,   462,   613,   558,   393,   376,   499,   206,   394,
     422,   462,   462,   560,   561,   735,   395,   177,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   182,   290,   178,
     563,   131,   656,   179,   359,   377,   375,   376,   362,   363,
     364,   365,   506,   132,   359,   185,   192,   377,   362,   363,
     364,   365,   379,   530,   697,   610,   533,   776,    70,   408,
     453,   632,   592,   404,   205,   673,   396,   197,   211,   699,
     700,   380,   709,   133,   710,   609,   377,   376,   213,   177,
     177,   453,   554,   380,   622,   134,   177,   376,   177,   215,
     290,   178,   178,   379,   550,   179,   179,   217,   178,   216,
     178,   397,   179,   218,   179,   540,     5,   377,   219,   530,
     382,   756,   380,  -331,   462,   268,   762,   674,   385,   385,
     272,   398,   177,   378,   379,   220,     6,   564,   404,   404,
     769,   770,   708,   574,   178,   671,   672,   271,   179,   309,
     676,   276,   299,   380,   310,   679,   565,   377,   311,   317,
     604,   382,   319,   324,   325,   327,   727,   377,   691,   326,
     333,   337,   439,   606,   343,   439,   350,   351,   355,   357,
     358,   387,   625,   388,   607,   389,   403,   404,   407,   408,
     409,   381,   382,   380,   410,   412,   651,   414,   653,   654,
     198,   419,   429,   380,   415,   421,   447,   713,   425,   455,
     662,   452,   456,   457,   459,   464,   428,   467,   470,   504,
     424,   428,   497,   669,   509,   507,   518,   527,   728,   675,
     530,   677,   348,   536,   537,   731,   539,   678,   542,   546,
     665,   682,   382,   544,   545,   568,   424,   548,   549,   439,
     562,   566,   569,   575,   591,   619,   757,   680,   605,   155,
     155,   698,   594,   626,   636,   701,   687,   633,   652,   601,
     663,   524,   631,   668,   670,   693,   683,   359,   684,   360,
     361,   362,   363,   364,   365,   712,   694,   711,   717,   738,
     729,   730,   740,   733,   734,     9,   748,   300,   753,   763,
     424,   366,   367,   368,   369,   370,   371,   372,   373,   764,
     775,   747,   301,    30,   773,   719,   774,   664,   767,   375,
     376,   720,   754,   127,   128,   620,   623,   617,   743,   608,
     686,   596,   512,   505,   739,   500,   349,   732,   736,   651,
     303,   285,   515,   707,   658,   424,   702,   662,   274,   341,
     331,   424,   424,   533,   541,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   760,   761,     0,
       0,     0,     0,     0,     0,     0,   755,     0,     0,   766,
       0,     0,     0,     0,   606,     0,     0,     0,     0,     0,
     377,   222,     0,   424,   223,     0,   771,   224,   286,   226,
       0,     0,     0,     0,   227,   768,   228,   379,   287,     0,
      75,     0,   229,   230,   231,   232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   380,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    79,
      80,     0,     0,     0,     0,   233,    81,     0,    82,   234,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,   381,   382,   235,     0,     0,     0,
       0,     0,     0,   236,   237,    84,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,    86,     0,     0,     0,
     577,   238,   239,     0,    87,     0,    88,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,   578,     0,
      90,     0,   240,   241,   242,   243,   244,    91,     0,   245,
       0,     0,     0,     0,     0,     0,     0,   246,   247,   248,
       0,     0,     0,     0,     0,   579,     0,     0,     0,     0,
     721,   249,     0,     0,     0,   581,     0,     0,     0,    92,
       0,     0,     0,     0,     0,    93,     0,    94,   250,   251,
      95,     0,     0,   252,     0,   582,     0,     0,   253,     0,
       0,    96,     0,     0,    97,     0,     0,    98,     0,     0,
       0,     0,     0,   254,   255,   256,   257,   258,   259,    99,
     222,     0,     0,   223,     0,     0,   224,   225,   226,     0,
       0,     0,     0,   227,    32,   228,     0,     0,     0,    75,
     583,   229,   230,   231,   232,     0,     0,   584,   585,     0,
       0,     0,    33,     0,     0,   586,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,    77,    78,    79,    80,
       0,     0,    34,     0,   233,    81,     0,    82,   234,    35,
       0,     0,     0,     0,    36,     0,     0,    83,     0,    37,
       0,     0,   449,     0,     0,   235,     0,     0,     0,     0,
       0,     0,   236,   237,    84,     0,     0,     0,     0,    38,
       0,    85,     0,     0,     0,    86,     0,     0,     0,     0,
     238,   239,     0,    87,     0,    88,     0,     0,     0,     0,
      39,     0,    89,     0,     0,     0,     0,     0,     0,    90,
       0,   240,   241,   242,   243,   244,    91,     0,   245,     0,
       0,     0,     0,     0,    40,     0,   246,   247,   248,     0,
       0,    41,    42,     0,    43,     0,     0,     0,     0,    44,
     249,     0,     0,     0,     0,    45,     0,     0,    92,     0,
       0,     0,     0,     0,    93,     0,    94,   250,   251,    95,
       0,     0,   252,     0,     0,     0,     0,   253,     0,     0,
      96,     0,     0,    97,     0,     0,    98,     0,     0,     0,
       0,     0,   254,   255,   256,   257,   258,   259,    99,   222,
       0,     0,   223,     0,     0,   224,   225,   226,     0,     0,
       0,     0,   227,     0,   228,     0,     0,     0,    75,     0,
     229,   230,   231,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,     0,    77,    78,    79,    80,     0,
       0,     0,     0,   233,    81,     0,    82,   234,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   236,   237,    84,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,    86,     0,     0,     0,     0,   238,
     239,     0,    87,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,    90,     0,
     240,   241,   242,   243,   244,    91,     0,   245,     0,     0,
       0,     0,     0,     0,     0,   246,   247,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,    93,     0,    94,   250,   251,    95,     0,
       0,   252,     0,     0,     0,     0,   253,     0,     0,    96,
       0,     0,    97,     0,     0,    98,     0,     0,     0,     0,
       0,   254,   255,   256,   257,   258,   259,    99,   222,     0,
       0,   223,     0,     0,   224,   286,   226,     0,     0,     0,
       0,   227,     0,   228,     0,     0,     0,    75,     0,   229,
     230,   231,   232,     0,     0,     0,     0,     0,     0,     0,
       0,   359,     0,   360,   361,   362,   363,   364,   365,    76,
       0,     0,     0,     0,    77,    78,    79,    80,     0,     0,
       0,     0,   233,    81,     0,    82,   234,   368,   369,   370,
     371,   372,   373,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,   235,   376,     0,     0,     0,     0,     0,
     236,   237,    84,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,    86,     0,     0,     0,     0,   238,   239,
       0,    87,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    90,     0,   240,
     241,   242,   243,   244,    91,     0,   245,     0,     0,     0,
       0,     0,     0,     0,   246,   247,   248,     0,     0,     0,
       0,     0,     0,     0,   377,     0,     0,     0,   249,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,   379,    93,     0,    94,   250,   251,    95,     0,     0,
     252,     0,     0,     0,     0,   253,     0,     0,    96,     0,
     380,    97,     0,     0,    98,     0,     0,     0,     0,     0,
     254,   255,   256,   257,   258,   259,    99,   359,     0,   360,
     361,   362,   363,   364,   365,     0,     0,     0,     0,   458,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   382,
       0,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     359,     0,   360,   361,   362,   363,   364,   365,     0,   375,
     376,     0,   498,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   359,     0,   360,   361,   362,   363,   364,
     365,     0,   375,   376,     0,   503,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   366,   367,   368,
     369,   370,   371,   372,   373,   374,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   375,   376,     0,     0,   359,
     377,   360,   361,   362,   363,   364,   365,     0,     0,     0,
       0,     0,     0,     0,     0,   514,   378,   379,     0,     0,
       0,     0,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,     0,   377,     0,     0,   380,     0,     0,     0,
       0,   375,   376,     0,     0,     0,     0,     0,     0,   378,
     379,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   377,     0,     0,   380,
       0,     0,     0,     0,   381,   382,     0,     0,     0,     0,
       0,     0,   378,   379,     0,     0,     0,     0,     0,   359,
       0,   360,   361,   362,   363,   364,   365,     0,     0,     0,
       0,   538,   380,     0,     0,     0,     0,   381,   382,     0,
       0,     0,   377,   366,   367,   368,   369,   370,   371,   372,
     373,   374,     0,     0,     0,     0,     0,     0,   378,   379,
       0,   375,   376,     0,     0,     0,     0,     0,     0,     0,
     381,   382,     0,     0,     0,     0,     0,     0,   380,   359,
       0,   360,   361,   362,   363,   364,   365,     0,     0,     0,
       0,   628,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,     0,     0,     0,     0,   381,   382,     0,     0,
       0,   375,   376,     0,     0,     0,     0,     0,     0,     0,
       0,   359,   377,   360,   361,   362,   363,   364,   365,     0,
     629,     0,     0,     0,     0,     0,     0,     0,   378,   379,
       0,     0,     0,     0,     0,   366,   367,   368,   369,   370,
     371,   372,   373,   374,     0,     0,     0,     0,   380,     0,
       0,     0,     0,   375,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   359,   377,   360,   361,   362,   363,   364,   365,     0,
     630,     0,     0,     0,     0,     0,   381,   382,   378,   379,
       0,     0,     0,     0,     0,   366,   367,   368,   369,   370,
     371,   372,   373,   374,     0,     0,     0,     0,   380,     0,
       0,     0,     0,   375,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   377,   359,     0,   360,   361,   362,
     363,   364,   365,     0,     0,     0,     0,   681,     0,     0,
     378,   379,     0,     0,     0,     0,   381,   382,     0,   366,
     367,   368,   369,   370,   371,   372,   373,   374,     0,     0,
     380,     0,     0,     0,     0,     0,     0,   375,   376,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   377,   359,     0,   360,   361,   362,
     363,   364,   365,     0,     0,     0,     0,     0,   381,   382,
     378,   379,     0,     0,     0,     0,     0,     0,     0,   366,
     367,   368,   369,   370,   371,   372,   373,   374,     0,   359,
     380,   360,   361,   362,   363,   364,   365,   375,   376,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,     0,
       0,     0,     0,   366,   367,   368,   369,   370,   371,   372,
     373,     0,     0,     0,   378,   379,     0,     0,   381,   382,
       0,   375,   376,   359,     0,   360,   361,   362,   363,   364,
     365,     0,     0,     0,   380,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   366,   367,   368,
     369,   370,   371,   372,   373,     0,     0,   359,   377,   360,
     361,   362,   363,   364,   365,   375,   376,     0,     0,     0,
       0,     0,   381,   382,   378,   379,     0,     0,     0,     0,
       0,   366,   367,   368,   369,   370,   371,   372,   373,     0,
       0,     0,   377,     0,   380,     0,     0,     0,     0,     0,
     376,     0,     0,     0,     0,     0,     0,     0,   378,   379,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   380,     0,
       0,     0,   381,   382,     0,     0,   377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,   137,     0,   379,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   381,   382,     0,     0,
     377,     0,   380,     0,     0,     0,    76,   138,     0,     0,
       0,    77,    78,    79,    80,   139,     0,   379,     0,     0,
      81,     0,    82,     0,     0,     0,    33,   140,     0,     0,
       0,     0,    83,     0,     0,   141,   380,     0,     0,     0,
       0,   382,     0,     0,     0,     0,     0,     0,     0,    84,
     142,     0,     0,     0,     0,     0,    85,   143,     0,     0,
      86,   144,     0,     0,     0,     0,     0,     0,    87,   145,
      88,     0,   146,     0,     0,   382,   147,    89,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,     0,   149,
       0,     0,   150,    92,     0,     0,     0,     0,     0,    93,
       0,    94,     0,     0,    95,    41,   151,     0,    43,    70,
     273,     0,     0,    75,     0,    96,   152,     0,    97,    45,
       0,    98,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,    76,   138,     0,     0,     0,
      77,    78,    79,    80,   139,     0,     0,     0,     0,    81,
       0,    82,     0,     0,     0,    33,   140,     0,     0,     0,
       0,    83,     0,     0,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,   142,
       0,     0,     0,     0,     0,    85,   143,     0,     0,    86,
     144,     0,     0,     0,     0,     0,     0,    87,   145,    88,
       0,   146,     0,   107,     0,   147,    89,    75,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    39,    77,    78,    79,    80,     0,     0,
       0,     0,     0,    81,     0,    82,   148,     0,   149,     0,
       0,   150,    92,     0,     0,    83,     0,     0,    93,     0,
      94,     0,     0,    95,    41,   151,     0,    43,     0,     0,
       0,     0,    84,     0,    96,   152,     0,    97,    45,    85,
      98,   153,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,    99,    88,   302,     0,     0,    75,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,    76,
       0,     0,     0,     0,    77,    78,    79,    80,     0,     0,
       0,     0,     0,    81,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    92,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,    95,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,    96,    85,
       0,    97,     0,    86,    98,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,    99,     0,     0,   637,
      89,    75,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,   638,     0,     0,    77,    78,
      79,    80,     0,     0,     0,     0,     0,    81,     0,    82,
       0,     0,     0,   639,     0,     0,    92,     0,     0,    83,
       0,     0,    93,     0,    94,     0,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,    96,     0,
     640,    97,     0,    85,    98,   641,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,    99,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
     642,    90,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   643,    93,    75,    94,     0,
       0,    95,   644,   645,     0,     0,     0,     0,     0,     0,
     646,     0,    96,     0,     0,    97,     0,     0,    98,    76,
       0,   118,     0,     0,    77,    78,    79,    80,     0,     0,
      99,     0,     0,    81,     0,    82,     0,   119,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,   121,     0,     0,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,     0,    75,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,   124,
       0,     0,    93,     0,    94,     0,    76,    95,     0,   125,
       0,    77,    78,    79,    80,     0,     0,   126,    96,     0,
      81,    97,    82,     0,    98,    75,    33,     0,     0,     0,
       0,     0,    83,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,    84,
       0,     0,    77,    78,    79,    80,    85,     0,     0,     0,
      86,    81,     0,    82,     0,     0,     0,     0,    87,     0,
      88,     0,     0,    83,     0,     0,     0,    89,     0,     0,
     432,     0,     0,     0,    90,     0,     0,     0,     0,     0,
      84,    91,     0,     0,     0,     0,     0,    85,     0,     0,
       0,    86,     0,     0,    39,     0,     0,     0,     0,    87,
       0,    88,     0,     0,     0,     0,     0,     0,    89,     0,
       0,     0,     0,    92,     0,    90,     0,     0,     0,    93,
      75,    94,    91,     0,    95,    41,     0,     0,    43,     0,
       0,     0,     0,     0,     0,    96,     0,     0,    97,    45,
       0,    98,    76,     0,   123,     0,     0,    77,    78,    79,
      80,     0,     0,    99,    92,     0,    81,   124,    82,     0,
      93,    75,    94,     0,     0,    95,     0,     0,    83,     0,
       0,     0,     0,     0,     0,   126,    96,     0,     0,    97,
       0,     0,    98,    76,     0,    84,     0,     0,    77,    78,
      79,    80,    85,     0,    99,     0,    86,    81,     0,    82,
       0,     0,     0,     0,    87,     0,    88,     0,     0,    83,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,    84,    91,     0,     0,
       0,     0,     0,    85,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    92,
       0,    90,     0,     0,     0,    93,    75,    94,    91,     0,
      95,     0,     0,     0,   572,     0,     0,     0,     0,     0,
       0,    96,     0,     0,    97,     0,     0,    98,   659,     0,
       0,     0,     0,    77,    78,    79,    80,     0,     0,    99,
      92,     0,    81,     0,    82,     0,    93,    75,    94,     0,
       0,    95,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,    97,     0,     0,    98,   666,
       0,    84,     0,     0,    77,    78,    79,    80,    85,     0,
      99,     0,    86,    81,     0,    82,     0,     0,     0,     0,
      87,     0,    88,     0,     0,    83,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,    84,    91,     0,     0,     0,     0,     0,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,    92,     0,    90,     0,     0,
       0,    93,    75,    94,    91,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
      97,     0,     0,    98,   688,     0,     0,     0,     0,    77,
      78,    79,    80,     0,     0,    99,    92,     0,    81,     0,
      82,     0,    93,    75,    94,     0,     0,    95,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    97,     0,     0,    98,   749,     0,    84,     0,     0,
      77,    78,    79,    80,    85,     0,    99,     0,    86,    81,
       0,    82,     0,     0,     0,     0,    87,     0,    88,     0,
       0,    83,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,    84,    91,
       0,     0,     0,     0,     0,    85,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    92,     0,    90,     0,     0,     0,    93,    75,    94,
      91,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,     0,     0,    97,     0,     0,    98,
     751,     0,     0,     0,     0,    77,    78,    79,    80,     0,
       0,    99,    92,     0,    81,     0,    82,     0,    93,     0,
      94,     0,     0,    95,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,    97,     0,     0,
      98,     0,     0,    84,     0,     0,     0,     0,     0,     0,
      85,     0,    99,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,    93,     0,    94,     0,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,    97,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99
};

static const short int yycheck[] =
{
       9,   335,    28,    33,   114,   215,    25,   198,    38,    39,
     210,   130,   350,   351,    44,    24,   325,   355,   149,   357,
     358,    30,   104,     1,   179,   220,   283,   100,    18,   575,
     112,    41,   152,    19,    49,   108,   109,    22,   192,   590,
      70,    23,    45,   197,    65,    65,   201,   571,   634,    27,
      22,   127,    67,   135,    32,   537,    22,    35,    36,   527,
     518,    82,    40,   520,    42,   616,    21,    14,    15,   200,
     180,    19,   102,    58,    67,   134,    22,   107,   624,    94,
     190,   191,    19,   123,    99,    67,   217,   146,   546,   104,
       0,   222,    65,   224,   225,   540,   227,    69,   543,   126,
      17,    94,   105,    69,   105,   108,   114,   108,   181,   124,
     241,   242,   122,    21,   117,   141,   189,   272,    19,   670,
      92,   707,    23,    29,   145,   145,    92,   157,   106,   188,
      78,   588,   614,   160,   658,   266,   139,    20,   139,    47,
     271,   119,   120,    67,   122,   299,    92,   102,   178,   158,
     128,   129,    18,    22,   169,   286,   287,   187,   179,   179,
     712,   176,   177,   145,   715,   247,   196,   249,   714,   184,
     721,   722,   145,   327,   121,   147,    69,   149,   115,   188,
      25,   147,   212,   149,   187,   215,   262,   297,    22,    58,
     220,   743,   302,   324,   176,    23,   215,   179,   228,   185,
      45,   147,   333,   149,   194,   183,   179,    18,   190,    20,
     157,    45,   763,    41,   115,    18,    21,    20,   328,   350,
     351,   145,   105,   343,   355,   108,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   176,   329,   409,   179,   139,    29,   412,   332,
     123,   729,   730,   119,   120,   274,   190,   524,   388,   389,
       7,   105,     8,   103,   108,   470,    12,    13,    14,    15,
     115,   134,    19,   117,     8,   115,    23,   317,    12,    13,
      14,    15,   148,   146,   303,   325,   326,    18,   133,    20,
      36,    37,    38,    39,   414,   139,    21,    18,    18,    20,
     619,   115,    22,     8,    22,    51,     7,    12,    13,    14,
      15,   440,    93,   405,   455,   456,   457,   336,    19,   133,
      19,   462,    23,    18,   312,   188,   194,    22,   448,    19,
     540,   319,    61,   543,     8,    82,    10,    11,    12,    13,
      14,    15,    18,   187,    20,    75,    51,   387,   434,    79,
      24,    18,    18,    20,    20,   703,    86,     7,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    31,   408,    19,
      20,   134,   573,    23,     8,   121,    50,    51,    12,    13,
      14,    15,   401,   146,     8,    21,    19,   121,    12,    13,
      14,    15,   138,    18,    17,   536,   425,    22,    21,    18,
     744,    20,   522,    18,   115,    20,   136,    19,    19,   629,
     630,   157,    18,   176,    20,   535,   121,    51,    21,     7,
       7,   765,   458,   157,   544,   188,     7,    51,     7,    19,
     470,    19,    19,   138,   453,    23,    23,    19,    19,    25,
      19,   171,    23,    21,    23,   433,    25,   121,    25,    18,
     196,    20,   157,    41,    18,     7,    20,   598,    46,    46,
      41,   191,     7,   137,   138,    19,    45,   503,    18,    18,
      20,    20,   637,   513,    19,   595,   596,    19,    23,    20,
     600,    21,    19,   157,    20,   605,   505,   121,    20,    85,
     530,   196,    21,    19,   133,    19,    41,   121,   618,    21,
      23,   193,   542,   532,   141,   545,    19,    19,    19,    19,
      19,    19,   548,   172,   533,   141,    20,    18,    20,    18,
      41,   195,   196,   157,    24,    19,   566,    22,   568,   569,
      18,    20,   152,   157,   155,    20,    20,   657,    21,    19,
     580,    22,    17,    17,    22,    22,   534,    29,    19,    22,
     590,   539,   103,   593,   162,   140,    20,    19,   678,   599,
      18,   601,   703,    19,    21,   685,    21,   603,    21,    20,
     589,   611,   196,    22,    18,   135,   616,    24,    24,   619,
      21,    19,   125,    20,    82,   133,   727,   606,    22,   629,
     630,   627,    83,    25,    21,   631,   615,    58,    29,   175,
      22,   160,    78,    21,    19,    22,   141,     8,   141,    10,
      11,    12,    13,    14,    15,    21,   136,    47,    18,    24,
      19,    19,    82,    20,    20,     3,    21,   185,    22,    21,
     670,    32,    33,    34,    35,    36,    37,    38,    39,    22,
      22,   717,   186,    23,   764,   664,   766,   588,   748,    50,
      51,   666,   724,    44,    44,   542,   545,   539,   712,   534,
     614,   526,   404,   400,   709,   388,   228,   686,   704,   709,
     187,   177,   408,   636,   576,   715,   631,   717,   157,   218,
     211,   721,   722,   712,   434,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   733,   734,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   725,    -1,    -1,   745,
      -1,    -1,    -1,    -1,   743,    -1,    -1,    -1,    -1,    -1,
     121,     6,    -1,   763,     9,    -1,   762,    12,    13,    14,
      -1,    -1,    -1,    -1,    19,   754,    21,   138,    23,    -1,
      25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,   195,   196,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      49,   106,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    67,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,   156,    -1,    -1,    -1,   104,    -1,    -1,    -1,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,   174,
     175,    -1,    -1,   178,    -1,   124,    -1,    -1,   183,    -1,
      -1,   186,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,   198,   199,   200,   201,   202,   203,   204,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    19,    49,    21,    -1,    -1,    -1,    25,
     169,    27,    28,    29,    30,    -1,    -1,   176,   177,    -1,
      -1,    -1,    67,    -1,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    87,    -1,    60,    61,    -1,    63,    64,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    73,    -1,   104,
      -1,    -1,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,    -1,    -1,   124,
      -1,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     106,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,
     145,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,   127,   128,   129,   130,   131,   132,    -1,   134,    -1,
      -1,    -1,    -1,    -1,   169,    -1,   142,   143,   144,    -1,
      -1,   176,   177,    -1,   179,    -1,    -1,    -1,    -1,   184,
     156,    -1,    -1,    -1,    -1,   190,    -1,    -1,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,   173,   174,   175,
      -1,    -1,   178,    -1,    -1,    -1,    -1,   183,    -1,    -1,
     186,    -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,   198,   199,   200,   201,   202,   203,   204,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     127,   128,   129,   130,   131,   132,    -1,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,   174,   175,    -1,
      -1,   178,    -1,    -1,    -1,    -1,   183,    -1,    -1,   186,
      -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,   198,   199,   200,   201,   202,   203,   204,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    14,    15,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    34,    35,    36,
      37,    38,    39,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    51,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,
      -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,   127,
     128,   129,   130,   131,   132,    -1,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,   138,   170,    -1,   172,   173,   174,   175,    -1,    -1,
     178,    -1,    -1,    -1,    -1,   183,    -1,    -1,   186,    -1,
     157,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
     198,   199,   200,   201,   202,   203,   204,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
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
      -1,    -1,    -1,    -1,    -1,    24,   137,   138,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,   121,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,   157,
      -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,   157,    -1,    -1,    -1,    -1,   195,   196,    -1,
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
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
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
      13,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,
     137,   138,    -1,    -1,    -1,    -1,   195,   196,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,   195,   196,
     137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,     8,
     157,    10,    11,    12,    13,    14,    15,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,   137,   138,    -1,    -1,   195,   196,
      -1,    50,    51,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,     8,   121,    10,
      11,    12,    13,    14,    15,    50,    51,    -1,    -1,    -1,
      -1,    -1,   195,   196,   137,   138,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,   121,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,   195,   196,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    -1,   138,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,
     121,    -1,   157,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    -1,   138,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    76,   157,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    -1,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,    -1,    -1,   196,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,    -1,    -1,   175,   176,   177,    -1,   179,    21,
      22,    -1,    -1,    25,    -1,   186,   187,    -1,   189,   190,
      -1,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,    -1,    47,    48,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    -1,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
      -1,   113,    -1,    21,    -1,   117,   118,    25,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,   145,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,   158,    -1,   160,    -1,
      -1,   163,   164,    -1,    -1,    73,    -1,    -1,   170,    -1,
     172,    -1,    -1,   175,   176,   177,    -1,   179,    -1,    -1,
      -1,    -1,    90,    -1,   186,   187,    -1,   189,   190,    97,
     192,   193,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   204,   111,    22,    -1,    -1,    25,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,   186,    97,
      -1,   189,    -1,   101,   192,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,    -1,   204,    -1,    -1,    23,
     118,    25,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,   164,    -1,    -1,    73,
      -1,    -1,   170,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,   186,    -1,
      94,   189,    -1,    97,   192,    99,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   204,   111,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,   169,   170,    25,   172,    -1,
      -1,   175,   176,   177,    -1,    -1,    -1,    -1,    -1,    -1,
     184,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,    47,
      -1,    49,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
     204,    -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,   167,
      -1,    -1,   170,    -1,   172,    -1,    47,   175,    -1,   177,
      -1,    52,    53,    54,    55,    -1,    -1,   185,   186,    -1,
      61,   189,    63,    -1,   192,    25,    67,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    90,
      -1,    -1,    52,    53,    54,    55,    97,    -1,    -1,    -1,
     101,    61,    -1,    63,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,    73,    -1,    -1,    -1,   118,    -1,    -1,
      80,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      90,   132,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,   101,    -1,    -1,   145,    -1,    -1,    -1,    -1,   109,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,   164,    -1,   125,    -1,    -1,    -1,   170,
      25,   172,   132,    -1,   175,   176,    -1,    -1,   179,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,   189,   190,
      -1,   192,    47,    -1,   154,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,   204,   164,    -1,    61,   167,    63,    -1,
     170,    25,   172,    -1,    -1,   175,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,   185,   186,    -1,    -1,   189,
      -1,    -1,   192,    47,    -1,    90,    -1,    -1,    52,    53,
      54,    55,    97,    -1,   204,    -1,   101,    61,    -1,    63,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    73,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    90,   132,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,   164,
      -1,   125,    -1,    -1,    -1,   170,    25,   172,   132,    -1,
     175,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,   189,    -1,    -1,   192,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,   204,
     164,    -1,    61,    -1,    63,    -1,   170,    25,   172,    -1,
      -1,   175,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,    47,
      -1,    90,    -1,    -1,    52,    53,    54,    55,    97,    -1,
     204,    -1,   101,    61,    -1,    63,    -1,    -1,    -1,    -1,
     109,    -1,   111,    -1,    -1,    73,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    90,   132,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,   164,    -1,   125,    -1,    -1,
      -1,   170,    25,   172,   132,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
     189,    -1,    -1,   192,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,   204,   164,    -1,    61,    -1,
      63,    -1,   170,    25,   172,    -1,    -1,   175,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,   189,    -1,    -1,   192,    47,    -1,    90,    -1,    -1,
      52,    53,    54,    55,    97,    -1,   204,    -1,   101,    61,
      -1,    63,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,    73,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    90,   132,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,   164,    -1,   125,    -1,    -1,    -1,   170,    25,   172,
     132,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,   192,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,   204,   164,    -1,    61,    -1,    63,    -1,   170,    -1,
     172,    -1,    -1,   175,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,
     192,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,   204,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   123,   206,   207,   208,    25,    45,   343,     0,   208,
      17,   349,   114,   209,   349,    29,   210,    21,    18,    92,
     147,   149,   212,   213,   214,   215,    29,   123,    69,   211,
     214,   349,    49,    67,    87,    94,    99,   104,   124,   145,
     169,   176,   177,   179,   184,   190,   216,   217,   230,   233,
     235,   238,   245,   249,   251,   256,   259,   261,   262,   263,
     264,   272,   273,   274,   277,   278,   279,   280,   281,   343,
      21,   314,    22,   349,   343,    25,    47,    52,    53,    54,
      55,    61,    63,    73,    90,    97,   101,   109,   111,   118,
     125,   132,   164,   170,   172,   175,   186,   189,   192,   204,
     306,   307,    67,    94,   343,   343,    93,    21,   306,   306,
     343,    19,   282,   343,   340,   341,   342,   343,    49,    65,
      80,    94,   145,   154,   167,   177,   185,   236,   239,   260,
     306,   134,   146,   176,   188,   334,   335,    22,    48,    56,
      68,    76,    91,    98,   102,   110,   113,   117,   158,   160,
     163,   177,   187,   193,   272,   306,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   326,   194,   285,    19,
      65,   145,   179,    65,   145,   179,    61,     7,    19,    23,
     340,   306,    31,   333,   333,    21,   343,   275,   276,   306,
     340,   340,    19,   134,   146,   188,   333,    19,    18,   285,
      23,    41,   343,   343,   343,   115,   339,   347,   343,   343,
     342,    19,   333,    21,   314,    19,    25,    19,    21,    25,
      19,   309,     6,     9,    12,    13,    14,    19,    21,    27,
      28,    29,    30,    60,    64,    81,    88,    89,   106,   107,
     127,   128,   129,   130,   131,   134,   142,   143,   144,   156,
     173,   174,   178,   183,   198,   199,   200,   201,   202,   203,
     299,   300,   301,   303,   304,   306,    19,   185,     7,   308,
     309,    19,    41,    22,   316,   349,    21,   105,   108,   139,
     266,   267,   268,   331,   332,   307,    13,    23,   298,   299,
     306,   310,   311,   312,   313,   298,   285,   340,   343,    19,
     212,   209,    22,   276,   349,   340,   285,   285,   266,    20,
      20,    20,   306,   266,   341,   299,   298,    85,   250,    21,
     119,   120,   148,   252,    19,   133,    21,    19,   234,   303,
     339,   335,   306,    23,   327,   328,   329,   193,   272,   317,
     299,   327,   311,   141,   299,   299,   299,   297,   299,   310,
      19,    19,   299,   299,   333,    19,   333,    19,    19,     8,
      10,    11,    12,    13,    14,    15,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    50,    51,   121,   137,   138,
     157,   195,   196,   103,   339,    46,   299,    19,   172,   141,
     299,   298,   349,    75,    79,    86,   136,   171,   191,   286,
     287,   288,   289,    20,    18,   334,   299,    20,    18,    41,
      24,   285,    19,   266,    22,   155,   218,   285,   349,    20,
     343,    20,    24,   305,   306,    21,   247,   248,   343,   152,
     253,   299,    80,   231,   236,   237,   239,   240,   246,   306,
     231,   241,   242,   243,   266,   285,   339,    20,   340,    78,
     299,   348,    22,   329,   349,    19,    17,    17,    20,    22,
      20,   309,    18,    20,    22,   297,   297,    29,   302,   297,
      19,   297,   297,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   103,    20,   306,
     308,   309,   309,    20,    22,   288,   349,   140,   290,   162,
     336,   344,   268,   333,    24,   312,   298,   266,    20,   285,
      21,    47,   219,   126,   160,   232,   257,    19,   283,   336,
      18,   270,   271,   272,    18,    22,    19,    21,    20,    21,
     343,   347,    21,   342,    22,    18,    20,   285,    24,    24,
     349,   299,   299,   299,   314,   299,    20,    20,    20,   311,
      20,    20,    21,    20,   314,   349,    19,   291,   135,   125,
     337,   345,   179,   269,   306,    20,   344,    49,    67,    94,
      99,   104,   124,   169,   176,   177,   184,   220,   221,   222,
     223,    82,   285,   334,    83,   258,   258,   267,    41,   122,
     284,   175,   338,   346,   306,    22,   272,   349,   248,   285,
     299,    45,   117,   187,   254,   255,   332,   247,   234,   133,
     241,   234,   285,   243,   344,   314,    25,   330,    20,    17,
      17,    78,    20,    58,   324,   325,    21,    23,    49,    67,
      94,    99,   124,   169,   176,   177,   184,   292,   293,   294,
     295,   306,    29,   306,   306,   346,   341,   232,   345,    47,
     225,   226,   306,    22,   222,   349,    47,   305,    21,   306,
      19,   285,   285,    20,   299,   306,   285,   306,   314,   285,
     349,    20,   306,   141,   141,    22,   255,   349,    47,   305,
      22,   285,   231,    22,   136,   244,   232,    17,   314,   317,
     317,   314,   321,    19,    78,    22,   325,   324,   298,    18,
      20,    47,    21,   285,   346,    82,   224,    18,    82,   349,
     224,    99,   223,   227,   228,   229,   305,    41,   285,    19,
      19,   285,   349,    20,    20,   297,   314,    22,    24,   293,
      82,   296,   265,   271,   328,   232,   305,   226,    21,    47,
     305,    47,   305,    22,   229,   349,    20,   299,   267,   267,
     314,   314,    20,    21,    22,   328,   314,   227,   349,    20,
      20,   314,   305,   285,   285,    22,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   205,   206,   207,   207,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   215,   215,
     215,   215,   216,   217,   218,   218,   219,   219,   219,   220,
     220,   221,   221,   222,   222,   222,   222,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   229,   229,
     230,   230,   230,   230,   230,   230,   230,   231,   231,   231,
     231,   232,   232,   233,   234,   234,   234,   234,   235,   236,
     236,   237,   238,   239,   239,   239,   240,   241,   241,   242,
     242,   243,   244,   244,   245,   246,   247,   247,   248,   248,
     249,   250,   250,   251,   252,   252,   252,   253,   253,   254,
     254,   255,   255,   255,   255,   255,   256,   256,   257,   258,
     258,   259,   260,   260,   260,   261,   262,   263,   264,   265,
     265,   265,   266,   266,   267,   267,   268,   269,   269,   270,
     270,   271,   271,   272,   272,   272,   272,   272,   273,   274,
     274,   275,   275,   276,   277,   278,   279,   280,   281,   282,
     282,   282,   282,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   287,   288,   289,   289,   289,   289,   289,   289,
     290,   290,   291,   291,   292,   292,   293,   293,   293,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   302,   303,   304,   304,   305,   305,   306,
     306,   306,   306,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   308,   308,   309,   310,   310,   311,   311,   312,
     312,   313,   313,   314,   314,   315,   315,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   317,
     318,   318,   319,   320,   321,   321,   321,   322,   323,   324,
     324,   325,   325,   326,   326,   327,   327,   328,   328,   329,
     329,   329,   330,   331,   331,   332,   332,   332,   333,   333,
     334,   334,   334,   334,   335,   335,   335,   336,   337,   338,
     339,   340,   340,   341,   341,   342,   342,   343,   343,   344,
     344,   345,   345,   346,   346,   347,   347,   348,   348,   349
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     3,     8,     0,     2,     1,     3,
       0,     2,     0,     1,     2,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     0,     1,
       1,     1,     6,     7,     0,     1,     1,     5,     3,     0,
       1,     2,     3,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     3,
       1,     5,     0,     1,     2,     3,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     5,     0,     1,     2,     1,     8,     1,
       1,     4,     7,     1,     1,     1,     4,     0,     1,     1,
       3,     4,     0,     1,     7,     4,     1,     3,     1,     4,
       8,     0,     2,     9,     1,     1,     1,     0,     1,     2,
       3,     2,     5,     5,     2,     2,     8,     8,     1,     0,
       4,     8,     1,     1,     1,     9,    12,     9,    12,     1,
       2,     1,     0,     1,     1,     3,     5,     1,     1,     0,
       1,     2,     3,     1,     1,     1,     1,     1,     5,     4,
       5,     2,     3,     2,     3,     4,     6,     4,     8,     0,
       3,     3,     3,     0,     3,     2,     4,     0,     4,     0,
       1,     2,     3,     4,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       4,     1,     3,     1,     1,     1,     1,     2,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     3,
       5,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       4,     4,     3,     1,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     0,     1,     3,     0,     1,     1,     3,     1,
       3,     1,     3,     2,     3,     2,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     4,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       9,     9,     5,     6,     5,     7,     7,     8,     7,     1,
       2,     5,     3,     4,     4,     0,     1,     2,     3,     5,
       5,     4,     1,     0,     1,     1,     1,     1,     0,     1,
       0,     1,     4,     1,     1,     1,     1,     3,     2,     2,
       4,     1,     3,     1,     3,     1,     4,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
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
      
#line 2872 "parser.c" /* glr.c:816  */
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
  (!!((Yystate) == (-587)))

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
  #line 296 "parser.y" /* glr.c:2270  */
{
    yylloc = loc_init(0);
    if (getenv("K3DEBUG"))
        yydebug=1;
}

#line 4352 "parser.c" /* glr.c:2270  */

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



#line 1310 "parser.y" /* glr.c:2584  */
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
