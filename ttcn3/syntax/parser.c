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
    YYTOK_EQ = 286,
    YYTOK_NE = 287,
    YYTOK_GE = 288,
    YYTOK_LE = 289,
    YYTOK_SHR = 290,
    YYTOK_SHL = 291,
    YYTOK_ROR = 292,
    YYTOK_ROL = 293,
    YYTOK_RANGE = 294,
    YYTOK_ASSIGN = 295,
    YYTOK_REDIRECT = 296,
    YYTOK_MOD_DECODED = 297,
    YYTOK_MOD_DEFAULT = 298,
    YYTOK_MOD_DETERMINISTIC = 299,
    YYTOK_MOD_FUZZY = 300,
    YYTOK_MOD_INDEX = 301,
    YYTOK_MOD_LAZY = 302,
    YYTOK_MOD_NOCASE = 303,
    YYTOK_KW_ACTION = 304,
    YYTOK_KW_ACTIVATE = 305,
    YYTOK_KW_ADDRESS = 306,
    YYTOK_KW_ALIVE = 307,
    YYTOK_KW_ALL = 308,
    YYTOK_KW_ALT = 309,
    YYTOK_KW_ALTSTEP = 310,
    YYTOK_KW_AND = 311,
    YYTOK_KW_AND4B = 312,
    YYTOK_KW_ANY = 313,
    YYTOK_KW_BREAK = 314,
    YYTOK_KW_CALL = 315,
    YYTOK_KW_CASE = 316,
    YYTOK_KW_CATCH = 317,
    YYTOK_KW_CHARSTRING = 318,
    YYTOK_KW_CHECK = 319,
    YYTOK_KW_COMPLEMENT = 320,
    YYTOK_KW_COMPONENT = 321,
    YYTOK_KW_CONNECT = 322,
    YYTOK_KW_CONST = 323,
    YYTOK_KW_CONTINUE = 324,
    YYTOK_KW_CONTROL = 325,
    YYTOK_KW_DEACTIVATE = 326,
    YYTOK_KW_DECMATCH = 327,
    YYTOK_KW_DISCONNECT = 328,
    YYTOK_KW_DISPLAY = 329,
    YYTOK_KW_DO = 330,
    YYTOK_KW_ELSE = 331,
    YYTOK_KW_ENCODE = 332,
    YYTOK_KW_ENUMERATED = 333,
    YYTOK_KW_ERROR = 334,
    YYTOK_KW_EXCEPT = 335,
    YYTOK_KW_EXCEPTION = 336,
    YYTOK_KW_EXTENDS = 337,
    YYTOK_KW_EXTENSION = 338,
    YYTOK_KW_EXTERNAL = 339,
    YYTOK_KW_FAIL = 340,
    YYTOK_KW_FALSE = 341,
    YYTOK_KW_FOR = 342,
    YYTOK_KW_FRIEND = 343,
    YYTOK_KW_FROM = 344,
    YYTOK_KW_FUNCTION = 345,
    YYTOK_KW_GETCALL = 346,
    YYTOK_KW_GETREPLY = 347,
    YYTOK_KW_GOTO = 348,
    YYTOK_KW_GROUP = 349,
    YYTOK_KW_HALT = 350,
    YYTOK_KW_IF = 351,
    YYTOK_KW_IFPRESENT = 352,
    YYTOK_KW_IMPORT = 353,
    YYTOK_KW_IN = 354,
    YYTOK_KW_INCONC = 355,
    YYTOK_KW_INFINITY = 356,
    YYTOK_KW_INOUT = 357,
    YYTOK_KW_INTERLEAVE = 358,
    YYTOK_KW_KILLED = 359,
    YYTOK_KW_LABEL = 360,
    YYTOK_KW_LANGUAGE = 361,
    YYTOK_KW_LENGTH = 362,
    YYTOK_KW_MAP = 363,
    YYTOK_KW_MESSAGE = 364,
    YYTOK_KW_MIXED = 365,
    YYTOK_KW_MOD = 366,
    YYTOK_KW_MODIFIES = 367,
    YYTOK_KW_MODULE = 368,
    YYTOK_KW_MODULEPAR = 369,
    YYTOK_KW_MTC = 370,
    YYTOK_KW_NOBLOCK = 371,
    YYTOK_KW_NONE = 372,
    YYTOK_KW_NOT = 373,
    YYTOK_KW_NOT4B = 374,
    YYTOK_KW_NOWAIT = 375,
    YYTOK_KW_NULL = 376,
    YYTOK_KW_OF = 377,
    YYTOK_KW_OMIT = 378,
    YYTOK_KW_ON = 379,
    YYTOK_KW_OPTIONAL = 380,
    YYTOK_KW_OR = 381,
    YYTOK_KW_OR4B = 382,
    YYTOK_KW_OUT = 383,
    YYTOK_KW_OVERRIDE = 384,
    YYTOK_KW_PARAM = 385,
    YYTOK_KW_PASS = 386,
    YYTOK_KW_PATTERN = 387,
    YYTOK_KW_PORT = 388,
    YYTOK_KW_PRESENT = 389,
    YYTOK_KW_PRIVATE = 390,
    YYTOK_KW_PROCEDURE = 391,
    YYTOK_KW_PUBLIC = 392,
    YYTOK_KW_RAISE = 393,
    YYTOK_KW_READ = 394,
    YYTOK_KW_REALTIME = 395,
    YYTOK_KW_RECORD = 396,
    YYTOK_KW_RECURSIVE = 397,
    YYTOK_KW_REGEXP = 398,
    YYTOK_KW_REM = 399,
    YYTOK_KW_REPEAT = 400,
    YYTOK_KW_REPLY = 401,
    YYTOK_KW_RETURN = 402,
    YYTOK_KW_RUNS = 403,
    YYTOK_KW_SELECT = 404,
    YYTOK_KW_SELF = 405,
    YYTOK_KW_SEND = 406,
    YYTOK_KW_SENDER = 407,
    YYTOK_KW_SET = 408,
    YYTOK_KW_SIGNATURE = 409,
    YYTOK_KW_STEPSIZE = 410,
    YYTOK_KW_SYSTEM = 411,
    YYTOK_KW_TEMPLATE = 412,
    YYTOK_KW_TESTCASE = 413,
    YYTOK_KW_TIMER = 414,
    YYTOK_KW_TIMESTAMP = 415,
    YYTOK_KW_TO = 416,
    YYTOK_KW_TRIGGER = 417,
    YYTOK_KW_TRUE = 418,
    YYTOK_KW_TYPE = 419,
    YYTOK_KW_UNION = 420,
    YYTOK_KW_UNIVERSAL = 421,
    YYTOK_KW_UNMAP = 422,
    YYTOK_KW_VALUE = 423,
    YYTOK_KW_VAR = 424,
    YYTOK_KW_VARIANT = 425,
    YYTOK_KW_WHILE = 426,
    YYTOK_KW_WITH = 427,
    YYTOK_KW_XOR = 428,
    YYTOK_KW_XOR4B = 429,
    UNARY = 430
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "parser.y" /* glr.c:244  */

    const char *lit;
    ast_t *ast;

#line 310 "parser.c" /* glr.c:244  */
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
#line 289 "parser.y" /* glr.c:263  */


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

#line 373 "parser.c" /* glr.c:263  */

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
#define YYLAST   3854

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  182
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  152
/* YYNRULES -- Number of rules.  */
#define YYNRULES  420
/* YYNRULES -- Number of states.  */
#define YYNSTATES  784
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 12
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   436

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
     175,   176,   177,   178,   179,   180,   181
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   315,   315,   323,   324,   328,   331,   333,   337,   338,
     341,   343,   351,   353,   357,   358,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   376,   378,
     379,   380,   384,   393,   396,   398,   402,   403,   404,   407,
     409,   413,   414,   418,   419,   420,   421,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   436,   438,   442,   443,
     447,   448,   451,   453,   457,   458,   462,   463,   464,   465,
     474,   475,   476,   477,   478,   479,   480,   484,   485,   486,
     487,   497,   500,   502,   503,   504,   513,   517,   518,   522,
     530,   534,   535,   536,   541,   544,   546,   550,   551,   555,
     558,   560,   569,   574,   579,   580,   584,   585,   594,   598,
     600,   609,   613,   614,   615,   618,   620,   624,   625,   629,
     630,   631,   632,   633,   642,   643,   647,   650,   652,   661,
     665,   666,   667,   676,   685,   694,   703,   707,   708,   709,
     717,   719,   723,   724,   728,   732,   733,   741,   743,   747,
     748,   752,   753,   754,   755,   756,   764,   773,   774,   778,
     779,   783,   791,   800,   809,   819,   828,   831,   833,   834,
     835,   838,   840,   844,   845,   853,   855,   858,   860,   864,
     865,   869,   873,   874,   875,   876,   877,   878,   881,   883,
     886,   888,   892,   893,   897,   898,   899,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   915,   918,   920,   930,
     931,   935,   936,   939,   941,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
     986,   987,   988,   989,   990,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1030,  1031,
    1034,  1037,  1038,  1039,  1040,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1064,  1066,
    1070,  1073,  1075,  1079,  1080,  1084,  1085,  1089,  1090,  1099,
    1100,  1104,  1105,  1109,  1110,  1111,  1112,  1113,  1114,  1115,
    1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1129,
    1130,  1131,  1132,  1133,  1134,  1136,  1137,  1143,  1154,  1162,
    1163,  1167,  1171,  1179,  1180,  1181,  1185,  1189,  1193,  1194,
    1198,  1199,  1207,  1208,  1211,  1213,  1217,  1218,  1222,  1223,
    1232,  1233,  1237,  1238,  1242,  1243,  1247,  1248,  1256,  1258,
    1259,  1262,  1264,  1267,  1269,  1277,  1279,  1282,  1284,  1287,
    1289,  1297,  1299,  1313,  1314,  1315,  1316,  1317,  1321,  1322,
    1325,  1327,  1331,  1334,  1336,  1340,  1343,  1345,  1349,  1352,
    1354,  1358,  1366,  1368,  1372,  1373,  1374,  1377,  1379,  1382,
    1384,  1385,  1386,  1390,  1391,  1392,  1395,  1397,  1401,  1404,
    1404
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
  "\"==\"", "\"!=\"", "\">=\"", "\"<=\"", "\">>\"", "\"<<\"", "\"@>\"",
  "\"<@\"", "\"..\"", "\":=\"", "\"->\"", "\"@decoded\"", "\"@default\"",
  "\"@deterministic\"", "\"@fuzzy\"", "\"@index\"", "\"@lazy\"",
  "\"@nocase\"", "\"action\"", "\"activate\"", "\"address\"", "\"alive\"",
  "\"all\"", "\"alt\"", "\"altstep\"", "\"and\"", "\"and4b\"", "\"any\"",
  "\"break\"", "\"call\"", "\"case\"", "\"catch\"", "\"charstring\"",
  "\"check\"", "\"complement\"", "\"component\"", "\"connect\"",
  "\"const\"", "\"continue\"", "\"control\"", "\"deactivate\"",
  "\"decmatch\"", "\"disconnect\"", "\"display\"", "\"do\"", "\"else\"",
  "\"encode\"", "\"enumerated\"", "\"error\"", "\"except\"",
  "\"exception\"", "\"extends\"", "\"extension\"", "\"external\"",
  "\"fail\"", "\"false\"", "\"for\"", "\"friend\"", "\"from\"",
  "\"function\"", "\"getcall\"", "\"getreply\"", "\"goto\"", "\"group\"",
  "\"halt\"", "\"if\"", "\"ifpresent\"", "\"import\"", "\"in\"",
  "\"inconc\"", "\"infinity\"", "\"inout\"", "\"interleave\"",
  "\"killed\"", "\"label\"", "\"language\"", "\"length\"", "\"map\"",
  "\"message\"", "\"mixed\"", "\"mod\"", "\"modifies\"", "\"module\"",
  "\"modulepar\"", "\"mtc\"", "\"noblock\"", "\"none\"", "\"not\"",
  "\"not4b\"", "\"nowait\"", "\"null\"", "\"of\"", "\"omit\"", "\"on\"",
  "\"optional\"", "\"or\"", "\"or4b\"", "\"out\"", "\"override\"",
  "\"param\"", "\"pass\"", "\"pattern\"", "\"port\"", "\"present\"",
  "\"private\"", "\"procedure\"", "\"public\"", "\"raise\"", "\"read\"",
  "\"realtime\"", "\"record\"", "\"recursive\"", "\"regexp\"", "\"rem\"",
  "\"repeat\"", "\"reply\"", "\"return\"", "\"runs\"", "\"select\"",
  "\"self\"", "\"send\"", "\"sender\"", "\"set\"", "\"signature\"",
  "\"stepsize\"", "\"system\"", "\"template\"", "\"testcase\"",
  "\"timer\"", "\"timestamp\"", "\"to\"", "\"trigger\"", "\"true\"",
  "\"type\"", "\"union\"", "\"universal\"", "\"unmap\"", "\"value\"",
  "\"var\"", "\"variant\"", "\"while\"", "\"with\"", "\"xor\"",
  "\"xor4b\"", "UNARY", "\"not_a_number\"", "\"__MODULE__\"",
  "\"__FILE__\"", "\"__BFILE__\"", "\"__LINE__\"", "\"__SCOPE__\"",
  "$accept", "parse", "Modules", "Module", "OptLanguage", "LangSpec",
  "OptControl", "OptModuleDefs", "ModuleDefs", "ModuleDef",
  "OptVisibility", "Group", "Import", "OptRecursive", "ImportBody",
  "OptImportStmts", "ImportStmts", "ImportStmt", "ImportKind", "OptExcept",
  "GroupRefs", "GroupRef", "OptExceptStmts", "ExceptStmts", "ExceptStmt",
  "Type", "NestedType", "SubType", "OptConstraint", "List", "ListKind",
  "NestedList", "Struct", "StructKind", "NestedStruct", "OptStructFields",
  "StructFields", "StructField", "OptOptional", "Enum", "NestedEnum",
  "Enumerations", "Enumeration", "Component", "OptExtends", "Port",
  "PortKind", "OptRealtime", "PortAttributes", "PortAttribute",
  "Signature", "NoBlock", "OptExceptionSpec", "BehaviourType",
  "BehaviourKind", "ExtFunction", "Function", "Testcase", "Altstep",
  "AltstepBody", "OptFormalPars", "FormalPars", "FormalPar",
  "FormalParRef", "OptDecls", "Decls", "Decl", "ExtConst", "ModulePar",
  "ModulePars", "ObsoleteModulePar", "TimerDecl", "PortDecl", "VarDecl",
  "Const", "Template", "OptTemplateRestriction", "OptTemplatePars",
  "TemplateBody", "OptWith", "OptWithStmts", "WithStmts", "WithStmt",
  "WithKind", "OptOverride", "OptWithQualifiers", "WithQualifiers",
  "WithQualifier", "WithSelectorKind", "WithSelector", "OptWithExcept",
  "Exprs", "ExprOrOmit", "OptExpr", "Expr", "Literal", "Refs", "Ref",
  "Primary", "Identifier", "OptParams", "Params", "OptInits", "Inits",
  "InitElement", "Designator", "Block", "BlockStmts", "BlockStmt", "Stmt",
  "Assignment", "ForLoop", "WhileLoop", "DoWhileLoop", "IfConstruct",
  "SelectUnionConstruct", "SelectConstruct", "Cases", "Case",
  "AltConstruct", "OptAltGuards", "AltGuards", "AltGuard", "Declarators",
  "Declarator", "ArrayDef", "Def", "OptLazyFuzzy", "OptDeterministic",
  "OptNoCase", "RunsOnSpec", "MtcSpec", "SystemSpec", "ToSpec", "Redirect",
  "ValueSpec", "OptParamSpec", "ParamSpec", "OptSenderSpec", "SenderSpec",
  "OptIndexSpec", "IndexSpec", "OptTimestamp", "Timestamp", "OptDirection",
  "Direction", "OptReturn", "OptNestedTemplateRestriction",
  "TemplateRestriction", "OptLength", "Length", "Semi", YY_NULLPTR
};
#endif

#define YYPACT_NINF -575
#define YYTABLE_NINF -281

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     -47,    54,    82,   -47,    84,  -575,  -575,    19,  -575,    84,
    -575,  -575,   131,   168,  -575,  -575,   178,    58,   185,   117,
    -575,  -575,   169,   378,    84,  1177,  -575,    54,   229,   231,
      84,  -575,    54,   616,    13,    54,    54,   172,   256,   616,
      54,   245,    54,    54,  3685,   108,  -575,  -575,  -575,  -575,
    -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,
    -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,
     933,  -575,   119,  -575,   261,  -575,  -575,   -39,    70,  -575,
    -575,  -575,  -575,   242,    54,   276,  -575,   616,   267,   267,
     295,    54,   616,    54,    54,   310,   -50,   243,   315,     1,
    -575,    83,  -575,  -575,    54,    54,  -575,    54,   114,   153,
    -575,  -575,   228,    54,    54,    54,  -575,  -575,   323,  -575,
     243,  -575,  1647,  -575,  1647,  1647,  -575,  1647,  1432,  -575,
    -575,  -575,  -575,  -575,   325,  -575,   328,  -575,   336,   229,
    -575,  -575,  -575,   358,   342,   359,  -575,  -575,   353,   362,
     328,  -575,  1647,  1647,  -575,  -575,  -575,  -575,   349,   349,
    -575,  1730,     9,  -575,   377,   383,  -575,  -575,  -575,  -575,
    -575,  -575,  -575,  2882,  -575,    69,   197,  1123,    84,  -575,
    -575,  -575,  -575,  -575,  -575,  -575,  -575,   384,  -575,   106,
    -575,  -575,  -575,  -575,  -575,  -575,  -575,     1,   616,  1432,
    1862,    54,  -575,    54,   389,    43,    19,   257,    84,    54,
       1,     1,   106,   391,   407,   413,  -575,  -575,   616,   106,
      54,  -575,  1647,  1862,   357,   426,   148,   432,   330,  -575,
     433,   436,    49,   110,   616,  3406,   560,   166,   166,   286,
    2914,  1945,  1647,  -575,  3034,  -575,   434,   441,  -575,   421,
     437,  1432,  -575,  -575,  -575,   292,   502,  -575,  1647,   437,
    -575,   337,  3614,  1073,  -575,   444,   446,  3066,  1647,   455,
    -575,   345,  1647,  1647,  1647,  1647,  1647,  1647,  1647,  1647,
    1647,  1647,  1647,  1647,  1647,  1647,  1647,  1647,  1647,  -575,
    1647,  1647,  -575,  1647,  1647,  1647,  1647,  1647,  1647,  -575,
     327,  1647,  1647,    24,  -575,  -575,    84,  -575,   403,  -575,
    -575,  -575,   456,   464,  -575,   108,  -575,  -575,  -575,   463,
     460,     1,   468,   106,   466,   352,   119,    84,  -575,   477,
    -575,  -575,   476,  -575,  -575,  -575,    54,   478,  -575,  2104,
    -575,   616,   479,    54,  -575,  -575,  -575,   363,  1647,   612,
     612,   106,  1647,   119,  -575,   486,    54,  1647,  -575,  2138,
    -575,  1432,  1862,  1515,   485,   437,    84,   334,   489,   494,
     474,   495,  2261,   496,   328,  -575,  1432,  2295,   616,   328,
    2418,    22,   288,   288,    22,    22,   166,   166,  3680,  3680,
     288,   288,    75,    75,    75,    75,  3406,  3614,  1073,   166,
    3526,    41,   166,  3557,   324,   328,  3186,   166,   616,   498,
     616,   616,    44,   390,   369,   483,   371,  -575,  -575,  -575,
    -575,  -575,  -575,  -575,  -575,   500,   403,    84,   405,   388,
     146,   243,  -575,  -575,  -575,   106,   518,   119,  -575,    57,
    -575,  -575,   -56,   520,   388,  -575,   522,  -575,   184,    39,
    -575,   523,  -575,   526,  2452,   527,    54,   228,  -575,   529,
    -575,  -575,  -575,    54,   535,   541,  -575,   542,   341,  -575,
    -575,     1,  2914,  -575,  -575,  -575,   537,   540,  2914,  -575,
      84,  -575,  -575,  1647,  1647,  1862,  1647,   229,  -575,  -575,
     348,   547,   551,  -575,   229,   411,  -575,  1432,  -575,  -575,
    1432,  -575,   369,  -575,   483,  -575,   371,  -575,  -575,  -575,
    -575,    84,  -575,  -575,   555,   457,   467,  -575,   472,   568,
     388,  -575,   885,   509,   119,  -575,   108,   511,   511,   146,
      45,   439,   616,   571,   184,    84,    54,   119,  1647,    99,
    -575,    54,    27,   480,   612,    49,   119,   612,   388,   228,
    -575,   229,  1300,  -575,  2575,  2607,  -575,  2727,   514,  -575,
     538,   575,  -575,  1647,  -575,   355,   374,   483,   371,  -575,
    -575,   335,   569,   616,   616,   439,  -575,    54,  -575,   459,
     467,  -575,  -575,  -575,   629,  -575,  -575,  -575,  -575,  -575,
    -575,   581,   885,    84,   656,   587,  -575,   616,   588,   119,
     119,   396,  1647,   616,   119,   616,   229,  -575,   119,    84,
    -575,  -575,  -575,  2762,   616,   481,   490,    89,    84,   785,
     233,   119,   612,   597,   499,  -575,  -575,   459,  -575,  -575,
     229,  -575,   616,   616,    46,    28,    53,  -575,   538,  3218,
    -575,  -575,   371,  -575,  1862,  -575,  -575,  -575,  -575,  -575,
    -575,  -575,  -575,  -575,   399,  -575,   570,  -575,  -575,  -575,
    -575,  -575,   600,  -575,   119,   439,   232,   608,  -575,   549,
    -575,    84,  -575,   232,   522,  1003,  -575,   616,  -575,  -575,
    -575,  3338,   590,  -575,  -575,   119,  -575,  -575,  -575,  -575,
     613,   614,   119,    84,  -575,   -39,   522,  -575,  -575,  -575,
    -575,  -575,  -575,  -575,  -575,   619,   620,  -575,  -575,  1647,
     229,  -575,  -575,   161,  -575,   610,   335,  -575,   556,    18,
    -575,   459,   616,  -575,   616,   621,  -575,  -575,   861,   874,
     623,  1003,    84,   410,  1647,  -575,   146,   146,  -575,  -575,
     229,   229,   420,  -575,  -575,  -575,  -575,   622,  -575,   624,
      18,   437,   229,   522,  -575,  1003,   -39,   522,   -39,   522,
    -575,    84,  -575,  -575,  3370,   424,   425,  -575,  -575,   229,
     616,   119,   437,   119,   625,  -575,  -575,  -575,  -575,   309,
    -575,  -575,  -575,  -575
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     2,   419,   366,   367,     6,     1,   419,
     420,     3,     0,     0,     4,     8,     7,    28,     0,    30,
      31,    29,    10,    28,   419,     0,     9,     0,     0,     0,
     419,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,     0,     0,     0,   409,    26,    25,    21,    72,
      74,    75,    73,    70,    71,    20,    76,    16,    17,    18,
      19,    23,    22,    24,   151,   152,   153,   155,   154,    27,
       0,    11,   175,    15,     0,   285,   286,     0,     0,   296,
     293,   294,   295,     0,     0,   280,   281,     0,   371,   371,
       0,     0,     0,     0,     0,     0,     0,   368,     0,   175,
     360,   362,   364,   132,     0,     0,   131,     0,    91,    92,
     130,    93,   416,     0,     0,     0,   413,   415,   410,   414,
     368,   412,     0,   271,     0,     0,   272,     0,   301,   309,
     257,   258,   255,   256,     0,   316,     0,   317,   298,     0,
     263,   260,   264,     0,     0,     0,   261,   269,     0,     0,
       0,   262,     0,     0,   270,   266,   267,   259,   373,   373,
     315,   318,     0,   265,   298,     0,   268,   273,   274,   275,
     276,   277,   313,   335,   215,     0,   216,     0,   419,   314,
     322,   323,   324,   325,   326,   327,   328,     0,     5,   402,
     287,   288,   289,   290,   291,   292,   297,   175,     0,   301,
       0,     0,   372,     0,     0,    28,     6,     0,   419,     0,
     175,   175,   402,     0,     0,     0,   370,   369,     0,   402,
       0,   162,     0,     0,   109,     0,     0,     0,     0,   417,
       0,     0,    82,     0,     0,   252,   216,   253,   254,     0,
     209,   212,     0,   305,   211,   307,     0,   302,   303,     0,
     354,     0,   329,   330,   299,     0,     0,   320,     0,   354,
     321,   331,   250,   251,   374,     0,     0,   319,     0,     0,
     333,   299,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,   220,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,     0,   218,   310,   419,   311,   177,   404,
     406,   405,     0,   141,   142,   409,   403,   165,   284,     0,
       0,   175,     0,   402,     0,    34,   175,   419,   159,   161,
     157,   163,     0,   168,   170,   169,     0,     0,   361,     0,
     363,     0,     0,     0,   113,   114,   112,   115,     0,     0,
      95,   402,     0,   175,    85,     0,     0,     0,   224,     0,
     225,     0,     0,   213,     0,   355,   419,     0,     0,     0,
       0,     0,     0,     0,     0,   222,     0,     0,     0,     0,
       0,   244,   232,   231,   242,   243,   245,   246,   229,   230,
     233,   234,   236,   235,   238,   237,   249,   228,   241,   247,
     226,   239,   248,   227,   240,     0,   336,   217,     0,     0,
       0,     0,     0,   390,   393,   396,   399,   387,   312,   184,
     182,   185,   186,   187,   183,     0,   178,   419,   188,   375,
     402,   368,   283,   282,   156,   402,     0,   175,    35,     0,
     158,   160,   407,   171,   375,   365,   110,   278,   147,     0,
     104,   106,   116,     0,     0,     0,     0,   416,    78,     0,
      79,    80,    77,     0,     0,    96,    97,     0,     0,    81,
     411,   175,   210,   308,   304,   306,     0,     0,   214,   352,
     419,   356,   300,     0,     0,     0,     0,     0,   353,   332,
       0,     0,     0,   334,     0,   381,   398,     0,   395,   401,
       0,   388,   393,   391,   396,   394,   399,   397,   386,   400,
     176,   419,   179,   189,   190,     0,   377,   143,     0,     0,
     375,    32,    39,    36,   175,   126,   409,   127,   127,   402,
       0,   379,     0,     0,   148,   419,     0,   175,     0,     0,
     418,     0,    82,     0,    95,    82,   175,     0,   375,    83,
     164,     0,     0,   357,     0,     0,   338,     0,   343,   223,
       0,     0,   341,     0,   337,     0,     0,   396,   399,   385,
     180,     0,     0,     0,     0,   379,   146,     0,   145,   407,
     377,    47,    48,    49,     0,    50,    51,    52,    53,    54,
      55,     0,    40,   419,     0,     0,    33,     0,     0,   175,
     175,     0,     0,     0,   175,     0,     0,   279,   175,   419,
     149,   105,   102,     0,     0,     0,     0,     0,   419,     0,
       0,   175,     0,     0,   100,    90,    98,   407,    84,   359,
       0,   342,     0,     0,     0,     0,     0,   348,     0,   382,
     392,   389,   399,   384,     0,   201,   200,   203,   197,   205,
     204,   199,   202,   198,     0,   192,     0,   196,   194,   181,
     376,   378,     0,   144,   175,   379,    56,    44,    58,    60,
      38,   419,    41,    56,    43,    62,   408,     0,   125,   124,
     172,   173,     0,   166,   380,   175,   108,   150,   107,   119,
       0,     0,   175,   419,   117,   122,   123,   103,    86,    89,
      94,   101,    99,   129,   358,     0,     0,   345,   344,     0,
       0,   347,   349,     0,   383,     0,     0,   191,   207,     0,
     133,   407,     0,    46,     0,     0,    42,    45,     0,     0,
       0,    63,   419,     0,     0,   135,   402,   402,   111,   118,
       0,     0,     0,   351,   346,   195,   193,     0,   206,     0,
     137,   139,     0,    57,    59,    62,    69,    68,    67,    66,
      37,   419,    64,   128,   174,     0,     0,   339,   340,     0,
       0,   175,   138,   175,     0,    65,   120,   121,   350,     0,
     136,   134,    61,   208
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -575,  -575,  -575,   645,   445,  -575,  -575,   448,  -575,   627,
    -575,  -575,  -575,  -575,  -575,  -575,  -575,    63,  -430,   -16,
    -575,   -60,   -95,  -575,   -65,  -575,  -337,  -575,  -387,  -575,
     628,  -575,  -575,   632,  -575,   129,  -575,   130,  -575,  -575,
    -575,   137,   147,  -575,  -575,  -575,  -575,  -575,  -575,    68,
    -575,  -575,   158,  -575,  -575,  -575,  -575,  -575,  -575,  -575,
    -188,  -511,   259,  -575,  -575,   -26,   -24,  -575,  -575,  -575,
     484,  -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,   -67,
    -575,  -575,   271,  -575,  -575,  -575,  -575,   -18,  -575,  -575,
    -575,  -346,  -198,  -575,   586,  -575,  -561,   202,   -28,   505,
     548,  -112,   506,  -229,   354,  -575,  -125,  -575,   539,   165,
    -363,  -575,  -575,  -575,    87,  -575,  -575,    80,  -574,  -575,
     465,  -507,  -362,   -64,  -213,  -107,     8,  -103,   633,   566,
    -367,   149,  -524,  -575,  -575,  -575,  -575,   317,   226,   429,
    -459,   430,  -472,   438,  -575,  -500,  -556,  -302,   503,   278,
    -108,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     2,     3,     4,    13,    16,    29,    22,    23,    24,
      25,    46,    47,   439,   524,   591,   592,   593,   729,   723,
     667,   668,   730,   731,   732,    48,   463,    49,   353,    50,
     457,   458,    51,   459,   460,   464,   465,   466,   702,    52,
     461,   449,   450,    53,   342,    54,   347,   453,   617,   618,
      55,   527,   599,    56,   114,    57,    58,    59,    60,   749,
     312,   313,   314,   577,   533,   534,   172,    62,    63,   207,
     208,    64,    65,    66,    67,    68,    97,   530,   604,   188,
     425,   426,   427,   428,   514,   572,   654,   655,   656,   657,
     748,   239,   243,   477,   244,   174,   446,   447,   236,    86,
     253,   252,   246,   247,   248,   249,    71,   177,   178,   179,
     371,   180,   181,   182,   183,   184,   185,   636,   637,   186,
     364,   365,   366,    99,   100,   101,   102,   218,   203,   265,
     516,   575,   606,   564,   304,   413,   502,   414,   504,   505,
     506,   507,   508,   509,   315,   316,   528,   120,   121,   228,
     299,    11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      14,    61,   320,   480,   229,    85,   468,   338,   232,     7,
      85,    85,   456,   431,   255,    31,    85,   234,   601,   220,
     197,    73,   367,   664,   332,   340,   254,   190,   268,   210,
     211,   337,   221,   674,   569,    69,   278,   279,   261,   619,
      74,   363,   176,    89,    90,   568,   352,   709,    95,   273,
      98,   662,   271,   276,   277,   278,   279,   536,   696,    85,
     525,   537,   712,   500,    85,   -12,     1,    70,   352,    75,
     408,   703,   222,   213,   289,   711,   300,   531,   522,     5,
     -12,    87,     8,   273,   214,   602,    33,   276,   277,   278,
     279,   526,   594,   289,   191,    76,   643,    77,   291,   206,
     176,    10,    78,    88,   710,     6,   222,    79,   642,   301,
     523,   692,   224,   225,   635,   226,   733,   619,   215,   292,
     192,   230,   231,   223,   354,    12,  -140,   289,   -12,   227,
     317,    19,   291,   293,   227,   436,   193,   321,   292,   712,
     614,   721,   145,   330,   331,   329,    19,   490,   227,   176,
     614,    39,   293,   580,   409,   621,   227,   603,   624,    80,
      15,   753,   594,   467,   475,   752,   296,   757,   759,   307,
     714,   176,   292,   187,   269,    41,   410,    43,    20,    85,
      21,   627,   227,   744,   411,   296,   293,    45,   309,    17,
      85,   310,   412,    20,    81,    21,    18,   615,   309,   328,
      82,   310,   295,   194,   198,   309,    85,   615,   310,   779,
      83,   322,   751,   302,    26,   298,   199,   311,   289,   296,
     200,   -87,   635,   176,   597,   765,   766,   311,    85,   195,
      27,   116,   369,   116,   311,    84,   -87,  -280,   303,    28,
      93,    94,   117,   772,   117,   309,   115,   519,   310,   298,
      70,   536,    33,    72,   434,   697,   616,   344,   345,   440,
     -88,    91,   489,   292,    96,   118,   616,   493,   565,   705,
     706,   566,   175,   227,   311,   -88,   119,    92,   119,   326,
     189,    75,    75,   198,   346,   699,   469,   556,   216,   201,
     217,   187,   471,   495,   209,   199,   273,   418,   190,   200,
     276,   277,   278,   279,   357,   196,   358,    76,    76,    77,
      77,   202,   722,    85,    78,    78,   205,    39,   441,    79,
      79,    85,    85,   284,   285,   286,   287,   532,   518,   212,
     245,   783,   273,   176,   219,   227,   276,   277,   278,   279,
     289,    41,   233,    43,   443,   291,   250,   251,   176,   229,
      85,   451,   361,    45,   482,   251,   545,   481,   644,   357,
      75,   549,   558,   742,   663,   191,   361,   257,   559,   562,
     521,    80,    80,   361,   259,   640,   289,   256,   258,   175,
      85,   291,    85,    85,    85,   292,    76,   260,    77,   480,
     645,   192,   361,    78,   641,   227,   251,   264,    79,   293,
     -13,   245,   272,   646,   550,   308,    81,    81,   323,   209,
     480,   333,    82,    82,   430,   295,   680,   716,   512,   717,
     336,   292,    83,    83,   535,   647,   629,   334,   532,   648,
     763,   227,   296,   335,   354,   293,   356,   354,   357,   341,
     769,   628,   430,   430,   776,   777,   715,   343,   -13,   649,
      80,   348,   349,   245,   350,   351,   360,   596,   370,   361,
     363,   362,   298,   368,   542,   376,    19,   374,   296,   176,
     612,   553,   176,   375,   378,   379,   429,   419,   405,   625,
     420,   685,   430,   432,   433,    81,   421,   435,   437,   650,
      85,    82,   651,   652,   438,   220,   442,    75,   444,   653,
     448,    83,   570,   452,    85,   704,   470,   479,   483,   707,
     609,   484,   486,    20,   485,    21,    85,   497,   488,    85,
     409,   410,   510,    76,   176,    77,   610,    75,   422,   408,
      78,   411,   678,   679,   513,    79,   515,   683,   520,   529,
     532,   686,   538,    85,   451,    85,    85,   539,   541,   451,
     544,   462,   462,    76,   698,    77,    85,   546,   423,   547,
      78,   551,   548,   245,   552,    79,    85,   198,   560,    85,
      33,   561,   563,   424,   571,    85,   302,    85,   245,   199,
     492,   573,   574,   200,   672,   743,    85,    80,   579,   595,
     634,    85,   598,   608,    85,   605,   638,   720,   659,   635,
     687,   303,   622,   670,    85,    85,   526,   677,   675,   694,
     496,   690,   498,   499,   501,   767,   768,    80,   735,   700,
     691,   719,    81,   718,   701,   738,   724,   773,    82,   725,
     734,   576,   736,   737,   745,    39,   747,    75,    83,   740,
     741,    75,   755,   770,   778,   760,   771,   782,     9,    85,
      30,   325,    81,   324,    75,   671,   173,   727,    82,    41,
     774,    43,   726,    76,   754,    77,   761,    76,    83,    77,
      78,    45,   112,   623,    78,    79,   113,   626,   620,    79,
      76,    75,   666,   611,   739,   693,   600,    78,    85,   517,
     455,   327,    79,   750,    85,   535,    85,   511,   746,   245,
      85,    85,   245,   318,   780,   319,   781,    76,   235,   673,
     237,   238,   270,   240,    78,   474,   306,   630,   713,    79,
     578,   708,   204,   762,   373,   266,   609,    80,   567,   665,
     503,    80,   415,   416,   607,   543,   355,     0,   262,   263,
       0,   417,    85,     0,    80,     0,   462,   267,     0,   462,
       0,     0,   775,   108,   175,     0,     0,     0,     0,     0,
       0,     0,    81,   173,     0,   109,    81,     0,    82,     0,
       0,    80,    82,   658,     0,   660,   661,   111,    83,    81,
       0,     0,    83,     0,     0,    82,   669,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,   676,
       0,     0,     0,     0,     0,   682,    81,   684,   339,     0,
      75,     0,    82,     0,     0,     0,   689,     0,     0,     0,
       0,     0,    83,     0,   462,     0,     0,   238,   359,     0,
       0,     0,     0,     0,   370,   370,    76,     0,   695,     0,
       0,     0,     0,    78,   372,     0,     0,     0,    79,     0,
       0,     0,     0,     0,   377,     0,     0,     0,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,     0,   397,   398,     0,   399,
     400,   401,   402,   403,   404,     0,    75,   406,   407,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,   756,     0,     0,     0,   658,    78,
       0,     0,     0,     0,    79,    76,   669,   758,     0,     0,
       0,     0,    78,     0,   454,    81,     0,    79,   240,   122,
     581,    82,   123,   472,     0,   124,   125,   126,     0,   478,
       0,    83,   127,   582,   128,   129,     0,     0,    75,     0,
     130,   131,   132,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   583,    80,     0,     0,   584,
       0,     0,     0,   585,    76,     0,    77,   134,     0,    80,
       0,    78,   135,     0,     0,     0,    79,     0,     0,   586,
     136,    33,   137,     0,     0,     0,   138,     0,   139,     0,
       0,    81,   140,     0,     0,     0,     0,    82,   141,   142,
     143,     0,     0,     0,    81,     0,   144,    83,     0,   145,
      82,     0,     0,   146,   147,     0,   148,     0,   149,   587,
      83,   150,   588,   589,     0,     0,     0,     0,    80,   590,
     151,   152,   153,   154,   155,     0,   156,     0,   581,     0,
       0,     0,     0,     0,   157,   158,    39,     0,     0,   554,
     555,   582,   557,     0,     0,     0,   159,     0,   160,     0,
     161,   273,   162,    81,     0,   276,   277,   278,   279,    82,
      41,     0,    43,   583,     0,     0,   163,   728,     0,    83,
     164,   585,    45,     0,   165,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,     0,     0,   586,     0,     0,
       0,     0,     0,     0,   613,   289,     0,     0,     0,   122,
       0,     0,   123,     0,     0,   124,   125,   126,   173,     0,
       0,     0,   127,     0,   128,   305,     0,     0,    75,   639,
     130,   131,   132,   133,     0,     0,     0,   587,     0,     0,
     588,   589,     0,     0,     0,     0,     0,   590,     0,     0,
     292,     0,     0,     0,    76,     0,    77,   134,     0,     0,
     227,    78,   135,     0,   293,     0,    79,     0,   681,     0,
     136,    33,   137,     0,     0,     0,   138,     0,   139,     0,
       0,     0,   140,     0,     0,     0,     0,     0,   141,   142,
     143,     0,     0,     0,     0,     0,   144,   296,     0,   145,
       0,     0,     0,   146,   147,     0,   148,     0,   149,     0,
       0,   150,    32,     0,     0,     0,     0,     0,    80,     0,
     151,   152,   153,   154,   155,    33,   156,     0,     0,     0,
       0,     0,     0,     0,   157,   158,    39,     0,     0,     0,
       0,    34,     0,     0,     0,     0,   159,    35,   160,     0,
     161,    36,   162,    81,     0,    37,     0,     0,     0,    82,
      41,     0,    43,     0,     0,     0,   163,     0,     0,    83,
     164,    38,    45,     0,   165,   240,     0,     0,     0,   166,
     167,   168,   169,   170,   171,     0,   122,     0,     0,   123,
      39,     0,   124,   125,   126,     0,     0,     0,     0,   127,
     764,   128,     0,     0,     0,    75,     0,   130,   131,   132,
     133,    40,     0,     0,    41,    42,    43,     0,     0,     0,
       0,    44,     0,     0,     0,     0,    45,     0,     0,     0,
       0,    76,     0,    77,     0,     0,     0,     0,    78,     0,
       0,     0,     0,    79,     0,     0,     0,   136,     0,     0,
       0,     0,     0,   138,     0,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     0,   141,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,   147,     0,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,     0,     0,    80,     0,   151,   152,   153,
     154,   155,     0,   156,     0,     0,     0,     0,     0,     0,
       0,   157,   158,     0,     0,     0,     0,     0,   122,     0,
       0,   123,     0,   159,   124,   241,   126,     0,     0,     0,
      81,   127,     0,   128,     0,   242,    82,    75,     0,   130,
     131,   132,   133,   163,     0,     0,    83,   164,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,     0,    76,     0,    77,     0,     0,     0,     0,
      78,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,     0,     0,     0,     0,     0,   141,   142,     0,
       0,   122,     0,     0,   123,     0,     0,   124,   125,   126,
       0,     0,   146,   147,   127,     0,   128,     0,     0,     0,
      75,     0,   130,   131,   132,   133,     0,    80,     0,   151,
     152,   153,   154,   155,     0,   156,     0,     0,     0,     0,
       0,     0,     0,   157,   158,     0,    76,     0,    77,     0,
       0,     0,     0,    78,     0,   159,     0,     0,    79,     0,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,   476,     0,     0,   140,   163,     0,     0,    83,     0,
     141,   142,     0,     0,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,     0,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,   151,   152,   153,   154,   155,     0,   156,     0,
       0,     0,     0,     0,     0,     0,   157,   158,     0,     0,
       0,     0,     0,   122,     0,     0,   123,     0,   159,   124,
     125,   126,     0,     0,     0,    81,   127,     0,   128,     0,
       0,    82,    75,     0,   130,   131,   132,   133,   163,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,     0,    76,     0,
      77,     0,     0,     0,     0,    78,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   140,     0,     0,     0,
       0,     0,   141,   142,     0,     0,   122,     0,     0,   123,
       0,     0,   124,   125,   126,     0,     0,   146,   147,   127,
       0,   128,     0,     0,     0,    75,     0,   130,   131,   132,
     133,     0,    80,     0,   151,   152,   153,   154,   155,     0,
     156,     0,     0,     0,     0,     0,     0,     0,   157,   158,
       0,    76,     0,    77,     0,     0,     0,     0,    78,     0,
     159,     0,     0,    79,     0,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,   140,
     163,     0,     0,    83,     0,   141,   142,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,     0,
     146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,   151,   152,   153,
     154,   155,     0,   156,     0,     0,     0,     0,     0,     0,
       0,   157,   158,     0,     0,     0,     0,     0,   122,     0,
       0,   123,     0,   159,   124,   241,   126,     0,     0,     0,
      81,   127,     0,   128,     0,     0,    82,    75,     0,   130,
     131,   132,   133,   163,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,     0,    76,     0,    77,     0,     0,     0,     0,
      78,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,     0,     0,     0,     0,     0,   141,   142,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,   126,
       0,     0,   146,   147,   127,     0,   128,     0,     0,     0,
      75,     0,   130,   131,   132,   133,     0,    80,     0,   151,
     152,   153,   154,   155,     0,   156,     0,     0,     0,     0,
       0,     0,     0,   157,   158,     0,    76,     0,    77,     0,
       0,     0,     0,    78,     0,   159,     0,     0,    79,     0,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,     0,   140,   163,     0,     0,    83,     0,
     141,   142,     0,     0,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,     0,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,   151,     0,     0,   154,   155,     0,   156,     0,
       0,     0,     0,     0,     0,     0,   157,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   159,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,   163,     0,
       0,    83,   273,     0,   274,   275,   276,   277,   278,   279,
       0,   166,   167,   168,   169,   170,   171,     0,   445,     0,
       0,     0,     0,     0,     0,   280,   281,   282,   283,   284,
     285,   286,   287,   288,     0,     0,   273,     0,   274,   275,
     276,   277,   278,   279,     0,     0,   289,     0,     0,     0,
     290,   291,   473,     0,     0,     0,     0,     0,     0,   280,
     281,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,     0,     0,     0,   290,   291,     0,     0,     0,     0,
       0,   292,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     294,   295,     0,     0,     0,   292,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,   296,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,   295,     0,     0,     0,   273,
       0,   274,   275,   276,   277,   278,   279,   297,   298,     0,
       0,   487,   296,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,   281,   282,   283,   284,   285,   286,   287,
     288,     0,     0,   273,     0,   274,   275,   276,   277,   278,
     279,   297,   298,   289,     0,   491,     0,   290,   291,     0,
       0,     0,     0,     0,     0,     0,   280,   281,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   289,     0,     0,
       0,   290,   291,     0,     0,     0,     0,     0,   292,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   227,     0,
       0,     0,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   294,   295,     0,
       0,     0,   292,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,   296,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   294,   295,     0,     0,     0,   273,     0,   274,   275,
     276,   277,   278,   279,   297,   298,     0,     0,   494,   296,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
     281,   282,   283,   284,   285,   286,   287,   288,     0,     0,
     273,     0,   274,   275,   276,   277,   278,   279,   297,   298,
     289,     0,   540,     0,   290,   291,     0,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,     0,     0,     0,   290,   291,
       0,     0,     0,     0,     0,   292,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,   295,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,     0,   296,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,   295,
       0,     0,     0,   273,     0,   274,   275,   276,   277,   278,
     279,   297,   298,     0,     0,   631,   296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   273,     0,   274,   275,   276,
     277,   278,   279,     0,   632,   297,   298,   289,     0,     0,
       0,   290,   291,     0,     0,     0,     0,     0,   280,   281,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   289,
       0,     0,     0,   290,   291,     0,     0,     0,     0,     0,
       0,     0,   292,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,     0,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   294,   295,     0,   292,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,     0,     0,     0,   293,   296,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,   295,   273,     0,   274,   275,   276,
     277,   278,   279,     0,   633,     0,     0,     0,   297,   298,
       0,   296,     0,     0,     0,     0,     0,     0,   280,   281,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     273,     0,   274,   275,   276,   277,   278,   279,     0,   289,
     297,   298,   688,   290,   291,     0,     0,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,     0,     0,     0,   290,   291,
       0,     0,     0,     0,   292,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,     0,     0,     0,   293,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,   295,     0,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,   296,     0,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,   295,
     273,     0,   274,   275,   276,   277,   278,   279,     0,     0,
     297,   298,     0,     0,     0,     0,   296,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   273,     0,   274,   275,   276,   277,   278,   279,
       0,     0,     0,     0,   289,   297,   298,     0,   290,   291,
       0,     0,     0,     0,     0,   280,   281,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   289,     0,     0,     0,
     290,   291,     0,     0,     0,     0,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,     0,     0,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,   295,
       0,   292,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,   293,   296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     294,   295,   273,     0,   274,   275,   276,   277,   278,   279,
       0,     0,     0,     0,     0,   297,   298,     0,   296,     0,
       0,     0,     0,     0,     0,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   273,     0,   274,   275,   276,   277,
     278,   279,     0,     0,     0,     0,   289,   297,   298,     0,
     290,   291,     0,     0,     0,     0,     0,   280,   281,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   289,     0,
       0,     0,   290,   291,     0,     0,     0,     0,     0,     0,
       0,   292,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     294,   295,     0,   292,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   227,     0,     0,     0,   293,   296,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   294,   295,   273,     0,   274,   275,   276,   277,
     278,   279,     0,     0,     0,     0,     0,   297,   298,     0,
     296,     0,     0,     0,     0,     0,     0,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   273,     0,   274,   275,
     276,   277,   278,   279,     0,     0,     0,     0,   289,   297,
     298,     0,   290,   291,     0,     0,     0,     0,     0,   280,
     281,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,     0,     0,     0,   290,   291,     0,     0,     0,     0,
       0,     0,     0,   292,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   227,     0,     0,     0,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   294,   295,     0,   292,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,   293,
     296,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,   295,   273,     0,   274,   275,
     276,   277,   278,   279,     0,     0,     0,     0,     0,   297,
     298,     0,   296,     0,     0,     0,     0,     0,     0,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   273,     0,
     274,   275,   276,   277,   278,   279,     0,     0,     0,     0,
     289,   297,   298,     0,   290,   291,     0,     0,     0,     0,
       0,   280,   281,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,     0,   273,     0,   274,   275,   276,   277,
     278,   279,   289,     0,     0,     0,   290,   291,     0,     0,
       0,     0,     0,     0,     0,   292,     0,   280,   281,   282,
     283,   284,   285,   286,   287,   227,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,     0,     0,   289,     0,
       0,     0,   290,   291,   294,   295,     0,   292,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,     0,
       0,   293,   296,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   294,   295,     0,     0,
       0,     0,     0,   292,     0,     0,     0,     0,     0,     0,
       0,   297,   298,   227,   296,     0,     0,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   294,   295,   273,     0,   274,   275,   276,   277,
     278,   279,     0,   297,   298,     0,     0,     0,     0,     0,
     296,     0,     0,     0,     0,     0,     0,   280,   281,   282,
     283,   284,   285,   286,   287,   273,     0,   274,   275,   276,
     277,   278,   279,     0,     0,     0,     0,     0,   289,   297,
     298,     0,   290,   291,     0,     0,     0,     0,   280,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   289,
       0,     0,     0,   290,   291,     0,     0,     0,     0,     0,
       0,     0,   273,   292,   274,   275,   276,   277,   278,   279,
       0,     0,     0,   227,     0,     0,     0,   293,     0,     0,
       0,     0,     0,     0,     0,   280,   281,   282,   283,   284,
     285,   286,   287,   295,   292,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,     0,   289,     0,   293,     0,
     296,   291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,     0,     0,     0,   273,     0,
     274,   275,   276,   277,   278,   279,     0,     0,     0,   297,
     298,   296,     0,     0,     0,     0,     0,     0,     0,     0,
      75,   292,     0,   282,   283,   284,   285,   286,   287,     0,
       0,   227,     0,     0,     0,   293,     0,     0,     0,     0,
       0,   298,   289,     0,     0,     0,    76,   291,    77,     0,
     103,   295,     0,    78,     0,     0,     0,     0,    79,     0,
       0,   104,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,   292,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,   298,     0,
       0,   293,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,   295,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,   296,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,   109,     0,
       0,    82,     0,   110,     0,     0,     0,     0,     0,     0,
     111,    83,     0,     0,   298
};

static const short int yycheck[] =
{
       9,    25,   200,   365,   112,    33,   352,   220,   115,     1,
      38,    39,   349,   315,   139,    24,    44,   120,   529,    18,
      84,    30,   251,   579,   212,   223,   138,    66,    19,    93,
      94,   219,    99,   594,   506,    27,    14,    15,   150,   539,
      32,    23,    70,    35,    36,   504,    19,    19,    40,     8,
      42,   575,   164,    12,    13,    14,    15,    18,   619,    87,
     116,    22,   636,    19,    92,    22,   113,    21,    19,    25,
      46,   627,    23,   123,    52,    22,     7,   444,    21,    25,
      22,    68,     0,     8,   134,    40,    68,    12,    13,    14,
      15,   147,   522,    52,   133,    51,   568,    53,    57,    91,
     128,    17,    58,    90,    76,    51,    23,    63,   567,    40,
      53,    22,   104,   105,    61,   107,   677,   617,   168,    97,
     159,   113,   114,    40,   232,   106,    20,    52,    70,   107,
     197,    88,    57,   111,   107,   323,    66,   201,    97,   713,
      51,   665,    96,   210,   211,   209,    88,   376,   107,   177,
      51,   133,   111,   520,   130,   542,   107,   112,   545,   115,
      29,   722,   592,   351,   362,   721,   144,   728,   729,   178,
     642,   199,    97,   172,   165,   157,   152,   159,   135,   207,
     137,   548,   107,    22,   160,   144,   111,   169,    99,    21,
     218,   102,   168,   135,   150,   137,    18,   108,    99,   208,
     156,   102,   127,   133,     7,    99,   234,   108,   102,   770,
     166,   203,   719,    16,    29,   174,    19,   128,    52,   144,
      23,   107,    61,   251,   526,   736,   737,   128,   256,   159,
     113,   123,   256,   123,   128,    33,   122,    40,    41,    70,
      38,    39,   134,   750,   134,    99,    44,   435,   102,   174,
      21,    18,    68,    22,   321,    22,   167,   109,   110,   326,
     107,    89,   374,    97,    19,   157,   167,   379,   497,   632,
     633,   500,    70,   107,   128,   122,   168,    21,   168,    22,
      19,    25,    25,     7,   136,   622,   353,   485,    45,    87,
      47,   172,   356,   405,    92,    19,     8,   306,    66,    23,
      12,    13,    14,    15,    18,    63,    20,    51,    51,    53,
      53,    44,    80,   341,    58,    58,    21,   133,   327,    63,
      63,   349,   350,    35,    36,    37,    38,    18,   431,    19,
     128,    22,     8,   361,    19,   107,    12,    13,    14,    15,
      52,   157,    19,   159,   336,    57,    21,    19,   376,   457,
     378,   343,    18,   169,    20,    19,   463,   366,    23,    18,
      25,    20,   487,   709,   577,   133,    18,    25,    20,   494,
     437,   115,   115,    18,    21,    20,    52,    19,    19,   177,
     408,    57,   410,   411,   412,    97,    51,    25,    53,   751,
      55,   159,    18,    58,    20,   107,    19,    48,    63,   111,
      22,   199,    19,    68,   471,    21,   150,   150,    19,   207,
     772,    20,   156,   156,    18,   127,    20,    18,   427,    20,
     218,    97,   166,   166,   448,    90,   551,    20,    18,    94,
      20,   107,   144,    20,   542,   111,   234,   545,    18,    82,
      20,   549,    18,    18,    20,    20,   644,    21,    70,   114,
     115,    19,   122,   251,    21,    19,    22,   524,   256,    18,
      23,    40,   174,   171,   456,    19,    88,   130,   144,   497,
     537,   480,   500,    29,    19,   130,    20,    74,   151,   546,
      77,   606,    18,    20,    24,   150,    83,    19,    22,   154,
     518,   156,   157,   158,   142,    18,    20,    25,    20,   164,
      21,   166,   511,   140,   532,   630,    20,    22,    19,   634,
     534,    17,    17,   135,    40,   137,   544,    19,    22,   547,
     130,   152,    22,    51,   552,    53,   535,    25,   125,    46,
      58,   160,   599,   600,   129,    63,   148,   604,    20,    19,
      18,   608,    19,   571,   536,   573,   574,    21,    21,   541,
      21,   349,   350,    51,   621,    53,   584,    22,   155,    18,
      58,    24,    20,   361,    24,    63,   594,     7,    21,   597,
      68,    20,   161,   170,    19,   603,    16,   605,   376,    19,
     378,   124,   115,    23,   593,   710,   614,   115,    20,    80,
      76,   619,    81,    22,   622,   156,    21,   664,    29,    61,
     609,    41,   122,    22,   632,   633,   147,    19,    21,   618,
     408,   130,   410,   411,   412,   740,   741,   115,   685,    22,
     130,    21,   150,    53,   125,   692,    18,   752,   156,    80,
      40,   159,    19,    19,    24,   133,    80,    25,   166,    20,
      20,    25,    21,    21,   769,    22,    22,    22,     3,   677,
      23,   206,   150,   205,    25,   592,    70,   673,   156,   157,
     755,   159,   671,    51,   724,    53,   731,    51,   166,    53,
      58,   169,    44,   544,    58,    63,    44,   547,   541,    63,
      51,    25,    53,   536,   693,   617,   528,    58,   716,   430,
      78,   207,    63,   719,   722,   719,   724,   426,   716,   497,
     728,   729,   500,   198,   771,   199,   773,    51,   122,    53,
     124,   125,   164,   127,    58,   361,   177,   552,   638,    63,
     518,   634,    89,   732,   259,   159,   750,   115,   502,   580,
     413,   115,   303,   303,   532,   457,   233,    -1,   152,   153,
      -1,   303,   770,    -1,   115,    -1,   544,   161,    -1,   547,
      -1,    -1,   761,   141,   552,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   177,    -1,   153,   150,    -1,   156,    -1,
      -1,   115,   156,   571,    -1,   573,   574,   165,   166,   150,
      -1,    -1,   166,    -1,    -1,   156,   584,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,   597,
      -1,    -1,    -1,    -1,    -1,   603,   150,   605,   222,    -1,
      25,    -1,   156,    -1,    -1,    -1,   614,    -1,    -1,    -1,
      -1,    -1,   166,    -1,   622,    -1,    -1,   241,   242,    -1,
      -1,    -1,    -1,    -1,   632,   633,    51,    -1,    53,    -1,
      -1,    -1,    -1,    58,   258,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,    -1,   290,   291,    -1,   293,
     294,   295,   296,   297,   298,    -1,    25,   301,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,   716,    58,
      -1,    -1,    -1,    -1,    63,    51,   724,    53,    -1,    -1,
      -1,    -1,    58,    -1,   348,   150,    -1,    63,   352,     6,
      55,   156,     9,   357,    -1,    12,    13,    14,    -1,   363,
      -1,   166,    19,    68,    21,    22,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,   115,    -1,    -1,    94,
      -1,    -1,    -1,    98,    51,    -1,    53,    54,    -1,   115,
      -1,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,   114,
      67,    68,    69,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,   150,    79,    -1,    -1,    -1,    -1,   156,    85,    86,
      87,    -1,    -1,    -1,   150,    -1,    93,   166,    -1,    96,
     156,    -1,    -1,   100,   101,    -1,   103,    -1,   105,   154,
     166,   108,   157,   158,    -1,    -1,    -1,    -1,   115,   164,
     117,   118,   119,   120,   121,    -1,   123,    -1,    55,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,   483,
     484,    68,   486,    -1,    -1,    -1,   143,    -1,   145,    -1,
     147,     8,   149,   150,    -1,    12,    13,    14,    15,   156,
     157,    -1,   159,    90,    -1,    -1,   163,    94,    -1,   166,
     167,    98,   169,    -1,   171,    -1,    -1,    -1,    -1,   176,
     177,   178,   179,   180,   181,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,   538,    52,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,   552,    -1,
      -1,    -1,    19,    -1,    21,    22,    -1,    -1,    25,   563,
      27,    28,    29,    30,    -1,    -1,    -1,   154,    -1,    -1,
     157,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      97,    -1,    -1,    -1,    51,    -1,    53,    54,    -1,    -1,
     107,    58,    59,    -1,   111,    -1,    63,    -1,   602,    -1,
      67,    68,    69,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    93,   144,    -1,    96,
      -1,    -1,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,   108,    55,    -1,    -1,    -1,    -1,    -1,   115,    -1,
     117,   118,   119,   120,   121,    68,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,   143,    90,   145,    -1,
     147,    94,   149,   150,    -1,    98,    -1,    -1,    -1,   156,
     157,    -1,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,
     167,   114,   169,    -1,   171,   709,    -1,    -1,    -1,   176,
     177,   178,   179,   180,   181,    -1,     6,    -1,    -1,     9,
     133,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    19,
     734,    21,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,   154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,   119,
     120,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,   143,    12,    13,    14,    -1,    -1,    -1,
     150,    19,    -1,    21,    -1,    23,   156,    25,    -1,    27,
      28,    29,    30,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,   177,   178,   179,
     180,   181,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,
      -1,    -1,   100,   101,    19,    -1,    21,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    -1,   115,    -1,   117,
     118,   119,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,   143,    -1,    -1,    63,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    76,    -1,    -1,    79,   163,    -1,    -1,   166,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
     178,   179,   180,   181,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,   117,   118,   119,   120,   121,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,   143,    12,
      13,    14,    -1,    -1,    -1,   150,    19,    -1,    21,    -1,
      -1,   156,    25,    -1,    27,    28,    29,    30,   163,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,   177,   178,   179,   180,   181,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,   100,   101,    19,
      -1,    21,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    -1,   115,    -1,   117,   118,   119,   120,   121,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
     143,    -1,    -1,    63,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    79,
     163,    -1,    -1,   166,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,   176,   177,   178,   179,   180,   181,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,   119,
     120,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,   143,    12,    13,    14,    -1,    -1,    -1,
     150,    19,    -1,    21,    -1,    -1,   156,    25,    -1,    27,
      28,    29,    30,   163,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,   177,   178,   179,
     180,   181,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    14,
      -1,    -1,   100,   101,    19,    -1,    21,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    -1,   115,    -1,   117,
     118,   119,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,   143,    -1,    -1,    63,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    79,   163,    -1,    -1,   166,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
     178,   179,   180,   181,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,   117,    -1,    -1,   120,   121,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,   166,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,   176,   177,   178,   179,   180,   181,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,   127,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,   144,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,     8,
      -1,    10,    11,    12,    13,    14,    15,   173,   174,    -1,
      -1,    20,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,     8,    -1,    10,    11,    12,    13,    14,
      15,   173,   174,    52,    -1,    20,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,   144,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,   127,    -1,    -1,    -1,     8,    -1,    10,    11,
      12,    13,    14,    15,   173,   174,    -1,    -1,    20,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
       8,    -1,    10,    11,    12,    13,    14,    15,   173,   174,
      52,    -1,    20,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,   144,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,     8,    -1,    10,    11,    12,    13,    14,
      15,   173,   174,    -1,    -1,    20,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,   173,   174,    52,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,   127,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,   173,   174,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    52,
     173,   174,    20,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   144,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    -1,
     173,   174,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    52,   173,   174,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,   111,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,   127,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    52,   173,   174,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,   127,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,   111,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,   127,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    52,   173,
     174,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,   127,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,   173,
     174,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      52,   173,   174,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,     8,    -1,    10,    11,    12,    13,
      14,    15,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,   107,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,   126,   127,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,   111,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,   174,   107,   144,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,   127,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,   173,   174,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    52,   173,
     174,    -1,    56,    57,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    97,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,   127,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    52,    -1,   111,    -1,
     144,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,   173,
     174,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    97,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,   174,    52,    -1,    -1,    -1,    51,    57,    53,    -1,
      55,   127,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   174,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,   144,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,   153,    -1,
      -1,   156,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
     165,   166,    -1,    -1,   174
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   113,   183,   184,   185,    25,    51,   308,     0,   185,
      17,   333,   106,   186,   333,    29,   187,    21,    18,    88,
     135,   137,   189,   190,   191,   192,    29,   113,    70,   188,
     191,   333,    55,    68,    84,    90,    94,    98,   114,   133,
     154,   157,   158,   159,   164,   169,   193,   194,   207,   209,
     211,   214,   221,   225,   227,   232,   235,   237,   238,   239,
     240,   248,   249,   250,   253,   254,   255,   256,   257,   308,
      21,   288,    22,   333,   308,    25,    51,    53,    58,    63,
     115,   150,   156,   166,   279,   280,   281,    68,    90,   308,
     308,    89,    21,   279,   279,   308,    19,   258,   308,   305,
     306,   307,   308,    55,    66,    78,    90,   133,   141,   153,
     158,   165,   212,   215,   236,   279,   123,   134,   157,   168,
     329,   330,     6,     9,    12,    13,    14,    19,    21,    22,
      27,    28,    29,    30,    54,    59,    67,    69,    73,    75,
      79,    85,    86,    87,    93,    96,   100,   101,   103,   105,
     108,   117,   118,   119,   120,   121,   123,   131,   132,   143,
     145,   147,   149,   163,   167,   171,   176,   177,   178,   179,
     180,   181,   248,   276,   277,   279,   280,   289,   290,   291,
     293,   294,   295,   296,   297,   298,   301,   172,   261,    19,
      66,   133,   159,    66,   133,   159,    63,   305,     7,    19,
      23,   279,    44,   310,   310,    21,   308,   251,   252,   279,
     305,   305,    19,   123,   134,   168,    45,    47,   309,    19,
      18,   261,    23,    40,   308,   308,   308,   107,   331,   332,
     308,   308,   307,    19,   309,   276,   280,   276,   276,   273,
     276,    13,    23,   274,   276,   279,   284,   285,   286,   287,
      21,    19,   283,   282,   283,   288,    19,    25,    19,    21,
      25,   283,   276,   276,    48,   311,   311,   276,    19,   165,
     282,   283,    19,     8,    10,    11,    12,    13,    14,    15,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    52,
      56,    57,    97,   111,   126,   127,   144,   173,   174,   332,
       7,    40,    16,    41,   316,    22,   290,   333,    21,    99,
     102,   128,   242,   243,   244,   326,   327,   261,   281,   284,
     274,   305,   308,    19,   189,   186,    22,   252,   333,   305,
     261,   261,   242,    20,    20,    20,   279,   242,   306,   276,
     274,    82,   226,    21,   109,   110,   136,   228,    19,   122,
      21,    19,    19,   210,   332,   330,   279,    18,    20,   276,
      22,    18,    40,    23,   302,   303,   304,   285,   171,   248,
     279,   292,   276,   302,   130,    29,    19,   276,    19,   130,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   151,   276,   276,    46,   130,
     152,   160,   168,   317,   319,   321,   323,   325,   333,    74,
      77,    83,   125,   155,   170,   262,   263,   264,   265,    20,
      18,   329,    20,    24,   261,    19,   242,    22,   142,   195,
     261,   333,    20,   308,    20,    24,   278,   279,    21,   223,
     224,   308,   140,   229,   276,    78,   208,   212,   213,   215,
     216,   222,   279,   208,   217,   218,   219,   242,   273,   261,
      20,   305,   276,    24,   286,   274,    76,   275,   276,    22,
     304,   333,    20,    19,    17,    40,    17,    20,    22,   283,
     285,    20,   279,   283,    20,   283,   279,    19,   279,   279,
      19,   279,   318,   319,   320,   321,   322,   323,   324,   325,
      22,   264,   333,   129,   266,   148,   312,   244,   309,   242,
      20,   261,    21,    53,   196,   116,   147,   233,   328,    19,
     259,   312,    18,   246,   247,   248,    18,    22,    19,    21,
      20,    21,   308,   331,    21,   307,    22,    18,    20,    20,
     261,    24,    24,   333,   276,   276,   274,   276,   288,    20,
      21,    20,   288,   161,   315,   285,   285,   320,   322,   324,
     333,    19,   267,   124,   115,   313,   159,   245,   279,    20,
     312,    55,    68,    90,    94,    98,   114,   154,   157,   158,
     164,   197,   198,   199,   200,    80,   261,   329,    81,   234,
     234,   243,    40,   112,   260,   156,   314,   279,    22,   248,
     333,   224,   261,   276,    51,   108,   167,   230,   231,   327,
     223,   210,   122,   217,   210,   261,   219,   312,   332,   288,
     291,    20,    17,    17,    76,    61,   299,   300,    21,   276,
      20,    20,   322,   324,    23,    55,    68,    90,    94,   114,
     154,   157,   158,   164,   268,   269,   270,   271,   279,    29,
     279,   279,   314,   306,   328,   313,    53,   202,   203,   279,
      22,   199,   333,    53,   278,    21,   279,    19,   261,   261,
      20,   276,   279,   261,   279,   288,   261,   333,    20,   279,
     130,   130,    22,   231,   333,    53,   278,    22,   261,   208,
      22,   125,   220,   328,   288,   292,   292,   288,   296,    19,
      76,    22,   300,   299,   324,   274,    18,    20,    53,    21,
     261,   314,    80,   201,    18,    80,   333,   201,    94,   200,
     204,   205,   206,   278,    40,   261,    19,    19,   261,   333,
      20,    20,   273,   288,    22,    24,   269,    80,   272,   241,
     247,   303,   328,   278,   203,    21,    53,   278,    53,   278,
      22,   206,   333,    20,   276,   243,   243,   288,   288,    20,
      21,    22,   303,   288,   204,   333,    20,    20,   288,   278,
     261,   261,    22,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   182,   183,   184,   184,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   192,   192,
     192,   192,   193,   194,   195,   195,   196,   196,   196,   197,
     197,   198,   198,   199,   199,   199,   199,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   206,   206,
     207,   207,   207,   207,   207,   207,   207,   208,   208,   208,
     208,   209,   210,   210,   210,   210,   211,   212,   212,   213,
     214,   215,   215,   215,   216,   217,   217,   218,   218,   219,
     220,   220,   221,   222,   223,   223,   224,   224,   225,   226,
     226,   227,   228,   228,   228,   229,   229,   230,   230,   231,
     231,   231,   231,   231,   232,   232,   233,   234,   234,   235,
     236,   236,   236,   237,   238,   239,   240,   241,   241,   241,
     242,   242,   243,   243,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   248,   248,   248,   249,   250,   250,   251,
     251,   252,   253,   254,   255,   256,   257,   258,   258,   258,
     258,   259,   259,   260,   260,   261,   261,   262,   262,   263,
     263,   264,   265,   265,   265,   265,   265,   265,   266,   266,
     267,   267,   268,   268,   269,   269,   269,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   271,   272,   272,   273,
     273,   274,   274,   275,   275,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   278,   278,
     279,   280,   280,   280,   280,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   282,   282,
     283,   284,   284,   285,   285,   286,   286,   287,   287,   288,
     288,   289,   289,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   292,   293,
     293,   294,   295,   296,   296,   296,   297,   298,   299,   299,
     300,   300,   301,   301,   302,   302,   303,   303,   304,   304,
     305,   305,   306,   306,   307,   307,   308,   308,   309,   309,
     309,   310,   310,   311,   311,   312,   312,   313,   313,   314,
     314,   315,   315,   316,   316,   316,   316,   316,   317,   317,
     318,   318,   319,   320,   320,   321,   322,   322,   323,   324,
     324,   325,   326,   326,   327,   327,   327,   328,   328,   329,
     329,   329,   329,   330,   330,   330,   331,   331,   332,   333,
     333
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
       1,     5,     0,     3,     4,     1,     8,     1,     1,     4,
       7,     1,     1,     1,     4,     0,     1,     1,     3,     4,
       0,     1,     7,     4,     1,     3,     1,     4,     8,     0,
       2,     9,     1,     1,     1,     0,     1,     2,     3,     2,
       5,     5,     2,     2,     8,     8,     1,     0,     4,     8,
       1,     1,     1,     9,    12,     9,    12,     1,     2,     1,
       0,     1,     1,     3,     5,     1,     1,     0,     1,     2,
       3,     1,     1,     1,     1,     1,     5,     4,     5,     2,
       3,     2,     3,     4,     6,     4,     8,     0,     3,     3,
       3,     0,     3,     2,     4,     0,     4,     0,     1,     2,
       3,     4,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     4,     1,
       3,     1,     1,     0,     1,     1,     1,     3,     2,     2,
       2,     2,     3,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     4,     4,     3,     1,     1,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     2,     0,     1,
       3,     0,     1,     1,     3,     1,     3,     1,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     4,     2,     4,     1,     3,     5,     3,     9,
       9,     5,     6,     5,     7,     7,     8,     7,     1,     2,
       5,     3,     4,     4,     0,     1,     2,     3,     5,     4,
       1,     3,     1,     3,     1,     4,     1,     1,     0,     1,
       1,     0,     1,     0,     1,     0,     3,     0,     2,     0,
       2,     0,     2,     6,     5,     4,     3,     2,     2,     4,
       0,     1,     4,     0,     1,     2,     0,     1,     2,     0,
       1,     2,     0,     1,     1,     1,     1,     0,     3,     0,
       1,     4,     1,     1,     1,     1,     0,     1,     4,     0,
       1
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
       0
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
       0
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
       0
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
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,    11,
       0,     0,    13,    15,    17,     0,     0,     0,     0,    19,
       0,    21,     0,     0,     0,    23,     0,    25,    27,    29,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,    35,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,    43,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    53,    55,    57,
      59,    61,     0,    63,     0,     0,     0,     0,     0,     0,
       0,    65,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    81,    83,    85,
      87,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,   111,     0,     0,     0,
     113,     0,   115,   117,   119,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,   125,     0,
       0,     0,     0,   127,     0,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,     0,
     133,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,     0,   143,     0,     0,   145,   147,     0,   149,     0,
       0,     0,     0,     0,     0,     0,   151,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,     0,
       0,     0,     0,     0,     0,   157,     0,     0,     0,     0,
       0,   159,     0,     0,     0,     0,     0,     0,   161,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,   167,   169,   171,   173,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    95,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,   179,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   185,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   191,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   197,   199,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   203,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,   209,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   280,     0,   280,     0,   362,     0,   298,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   318,     0,   318,     0,   318,     0,   318,     0,   318,
       0,   298,     0,   335,     0,   335,     0,   335,     0,   280,
       0,   216,     0,   216,     0,   216,     0,   212,     0,   212,
       0,   212,     0,   212,     0,   212,     0,   212,     0,   212,
       0,   212,     0,   212,     0,   212,     0,   212,     0,   212,
       0,   212,     0,   212,     0,   212,     0,   212,     0,   212,
       0,   212,     0,   212,     0,   212,     0,   212,     0,   212,
       0,   212,     0,   212,     0,   212,     0,   212,     0,   212,
       0,   212,     0,   212,     0,   212,     0,   212,     0,   212,
       0,   212,     0,   212,     0,   212,     0,   211,     0,   211,
       0,   211,     0,   319,     0,   319,     0,   319,     0,   336,
       0,   336,     0,   336,     0,   382,     0,   382,     0,   382,
       0,   173,     0,   173,     0,   173,     0,   174,     0,   174,
       0,   174,     0
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
      
#line 2924 "parser.c" /* glr.c:816  */
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
  (!!((Yystate) == (-575)))

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
  #line 306 "parser.y" /* glr.c:2270  */
{
    yylloc = loc_init(0);
    if (getenv("K3DEBUG"))
        yydebug=1;
}

#line 4404 "parser.c" /* glr.c:2270  */

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



#line 1406 "parser.y" /* glr.c:2584  */
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

        { YYTOK_MOD_DECODED,       "@decoded"       },
        { YYTOK_MOD_DEFAULT,       "@default"       },
        { YYTOK_MOD_DETERMINISTIC, "@deterministic" },
        { YYTOK_MOD_FUZZY,         "@fuzzy"         },
        { YYTOK_MOD_INDEX,         "@index"         },
        { YYTOK_MOD_LAZY,          "@lazy"          },
        { YYTOK_MOD_NOCASE,        "@nocase"        },
        { YYTOK_KW_ACTION,        "action"         },
        { YYTOK_KW_ACTIVATE,      "activate"       },
        { YYTOK_KW_ADDRESS,       "address"        },
        { YYTOK_KW_ALIVE,         "alive"          },
        { YYTOK_KW_ALL,           "all"            },
        { YYTOK_KW_ALT,           "alt"            },
        { YYTOK_KW_ALTSTEP,       "altstep"        },
        { YYTOK_KW_AND,           "and"            },
        { YYTOK_KW_AND4B,         "and4b"          },
        { YYTOK_KW_ANY,           "any"            },
        //{ YYTOK_KW_ANYTYPE,       "anytype"        },
        //{ YYTOK_KW_BITSTRING,     "bitstring"      },
        //{ YYTOK_KW_BOOLEAN,       "boolean"        },
        { YYTOK_KW_BREAK,         "break"          },
        { YYTOK_KW_CALL,          "call"           },
        { YYTOK_KW_CASE,          "case"           },
        { YYTOK_KW_CATCH,         "catch"          },
        //{ YYTOK_KW_CHAR,          "char"           },
        { YYTOK_KW_CHARSTRING,    "charstring"     },
        { YYTOK_KW_CHECK,         "check"          },
        //{ YYTOK_KW_CLEAR,         "clear"          },
        { YYTOK_KW_COMPLEMENT,    "complement"     },
        { YYTOK_KW_COMPONENT,     "component"      },
        { YYTOK_KW_CONNECT,       "connect"        },
        { YYTOK_KW_CONST,         "const"          },
        { YYTOK_KW_CONTINUE,      "continue"       },
        { YYTOK_KW_CONTROL,       "control"        },
        //{ YYTOK_KW_CREATE,        "create"         },
        { YYTOK_KW_DEACTIVATE,    "deactivate"     },
        { YYTOK_KW_DECMATCH,      "decmatch"       },
        //{ YYTOK_KW_DEFAULT,       "default"        },
        { YYTOK_KW_DISCONNECT,    "disconnect"     },
        { YYTOK_KW_DISPLAY,       "display"        },
        { YYTOK_KW_DO,            "do"             },
        //{ YYTOK_KW_DONE,          "done"           },
        { YYTOK_KW_ELSE,          "else"           },
        { YYTOK_KW_ENCODE,        "encode"         },
        { YYTOK_KW_ENUMERATED,    "enumerated"     },
        { YYTOK_KW_ERROR,         "error"          },
        { YYTOK_KW_EXCEPT,        "except"         },
        { YYTOK_KW_EXCEPTION,     "exception"      },
        //{ YYTOK_KW_EXECUTE,       "execute"        },
        { YYTOK_KW_EXTENDS,       "extends"        },
        { YYTOK_KW_EXTENSION,     "extension"      },
        { YYTOK_KW_EXTERNAL,      "external"       },
        { YYTOK_KW_FAIL,          "fail"           },
        { YYTOK_KW_FALSE,         "false"          },
        //{ YYTOK_KW_FLOAT,         "float"          },
        { YYTOK_KW_FOR,           "for"            },
        { YYTOK_KW_FRIEND,        "friend"         },
        { YYTOK_KW_FROM,          "from"           },
        { YYTOK_KW_FUNCTION,      "function"       },
        { YYTOK_KW_GETCALL,       "getcall"        },
        { YYTOK_KW_GETREPLY,      "getreply"       },
        //{ YYTOK_KW_GETVERDICT,    "getverdict"     },
        { YYTOK_KW_GOTO,          "goto"           },
        { YYTOK_KW_GROUP,         "group"          },
        { YYTOK_KW_HALT,          "halt"           },
        //{ YYTOK_KW_HEXSTRING,     "hexstring"      },
        { YYTOK_KW_IF,            "if"             },
        { YYTOK_KW_IFPRESENT,     "ifpresent"      },
        { YYTOK_KW_IMPORT,        "import"         },
        { YYTOK_KW_IN,            "in"             },
        { YYTOK_KW_INCONC,        "inconc"         },
        { YYTOK_KW_INFINITY,      "infinity"       },
        { YYTOK_KW_INOUT,         "inout"          },
        //{ YYTOK_KW_INTEGER,       "integer"        },
        { YYTOK_KW_INTERLEAVE,    "interleave"     },
        //{ YYTOK_KW_KILL,          "kill"           },
        { YYTOK_KW_KILLED,        "killed"         },
        { YYTOK_KW_LABEL,         "label"          },
        { YYTOK_KW_LANGUAGE,      "language"       },
        { YYTOK_KW_LENGTH,        "length"         },
        //{ YYTOK_KW_LOG,           "log"            },
        { YYTOK_KW_MAP,           "map"            },
        //{ YYTOK_KW_MATCH,         "match"          },
        { YYTOK_KW_MESSAGE,       "message"        },
        { YYTOK_KW_MIXED,         "mixed"          },
        { YYTOK_KW_MOD,           "mod"            },
        { YYTOK_KW_MODIFIES,      "modifies"       },
        { YYTOK_KW_MODULE,        "module"         },
        { YYTOK_KW_MODULEPAR,     "modulepar"      },
        { YYTOK_KW_MTC,           "mtc"            },
        { YYTOK_KW_NOBLOCK,       "noblock"        },
        { YYTOK_KW_NONE,          "none"           },
        { YYTOK_KW_NOT,           "not"            },
        { YYTOK_KW_NOT4B,         "not4b"          },
        { YYTOK_KW_NOWAIT,        "nowait"         },
        { YYTOK_KW_NULL,          "null"           },
        //{ YYTOK_KW_OCTETSTRING,   "octetstring"    },
        { YYTOK_KW_OF,            "of"             },
        { YYTOK_KW_OMIT,          "omit"           },
        { YYTOK_KW_ON,            "on"             },
        { YYTOK_KW_OPTIONAL,      "optional"       },
        { YYTOK_KW_OR,            "or"             },
        { YYTOK_KW_OR4B,          "or4b"           },
        { YYTOK_KW_OUT,           "out"            },
        { YYTOK_KW_OVERRIDE,      "override"       },
        { YYTOK_KW_PARAM,         "param"          },
        { YYTOK_KW_PASS,          "pass"           },
        { YYTOK_KW_PATTERN,       "pattern"        },
        //{ YYTOK_KW_PERMUTATION,   "permutation"    },
        { YYTOK_KW_PORT,          "port"           },
        { YYTOK_KW_PRESENT,       "present"        },
        { YYTOK_KW_PRIVATE,       "private"        },
        { YYTOK_KW_PROCEDURE,     "procedure"      },
        { YYTOK_KW_PUBLIC,        "public"         },
        { YYTOK_KW_RAISE,         "raise"          },
        { YYTOK_KW_READ,          "read"           },
        { YYTOK_KW_REALTIME,      "realtime"       },
        //{ YYTOK_KW_RECEIVE,       "receive"        },
        { YYTOK_KW_RECORD,        "record"         },
        { YYTOK_KW_RECURSIVE,     "recursive"      },
        { YYTOK_KW_REGEXP,        "regexp"         },
        { YYTOK_KW_REM,           "rem"            },
        { YYTOK_KW_REPEAT,        "repeat"         },
        { YYTOK_KW_REPLY,         "reply"          },
        { YYTOK_KW_RETURN,        "return"         },
        //{ YYTOK_KW_RUNNING,       "running"        },
        { YYTOK_KW_RUNS,          "runs"           },
        { YYTOK_KW_SELECT,        "select"         },
        { YYTOK_KW_SELF,          "self"           },
        { YYTOK_KW_SEND,          "send"           },
        { YYTOK_KW_SENDER,        "sender"         },
        { YYTOK_KW_SET,           "set"            },
        //{ YYTOK_KW_SETVERDICT,    "setverdict"     },
        { YYTOK_KW_SIGNATURE,     "signature"      },
        //{ YYTOK_KW_START,         "start"          },
        { YYTOK_KW_STEPSIZE,      "stepsize"       },
        //{ YYTOK_KW_STOP,          "stop"           },
        //{ YYTOK_KW_SUBSET,        "subset"         },
        //{ YYTOK_KW_SUPERSET,      "superset"       },
        { YYTOK_KW_SYSTEM,        "system"         },
        { YYTOK_KW_TEMPLATE,      "template"       },
        { YYTOK_KW_TESTCASE,      "testcase"       },
        //{ YYTOK_KW_TIMEOUT,       "timeout"        },
        { YYTOK_KW_TIMER,         "timer"          },
        { YYTOK_KW_TIMESTAMP,     "timestamp"      },
        { YYTOK_KW_TO,            "to"             },
        { YYTOK_KW_TRIGGER,       "trigger"        },
        { YYTOK_KW_TRUE,          "true"           },
        { YYTOK_KW_TYPE,          "type"           },
        { YYTOK_KW_UNION,         "union"          },
        { YYTOK_KW_UNIVERSAL,     "universal"      },
        { YYTOK_KW_UNMAP,         "unmap"          },
        { YYTOK_KW_VALUE,         "value"          },
        //{ YYTOK_KW_VALUEOF,       "valueof"        },
        { YYTOK_KW_VAR,           "var"            },
        { YYTOK_KW_VARIANT,       "variant"        },
        //{ YYTOK_KW_VERDICTTYPE,   "verdicttype"    },
        { YYTOK_KW_WHILE,         "while"          },
        { YYTOK_KW_WITH,          "with"           },
        { YYTOK_KW_XOR,           "xor"            },
        { YYTOK_KW_XOR4B,         "xor4b"          },
        { YYTOK_EOF,              NULL             },
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
