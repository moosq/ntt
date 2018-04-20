%glr-parser
%error-verbose
%locations
%define api.pure
%parse-param {parser_t *p}
%lex-param   {parser_t *p}
%debug

%code requires {
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
}

%union {
    const char *lit;
    ast_t *ast;
}


%token YYTOK_EOF 0        "end of file"
%token YYTOK_COMMENT      "comment"
%token YYTOK_ERROR        "error token"
%token YYTOK_PREPROC      "preprocessor directive"

%token YYTOK_EXCLAMATION "!"
%token YYTOK_DOT         "."
%token YYTOK_CONCAT      "&"
%token YYTOK_ANY         "?"
%token YYTOK_GT          ">"
%token YYTOK_LT          "<"
%token YYTOK_PLUS        "+"
%token YYTOK_MINUS       "-"
%token YYTOK_STAR        "*"
%token YYTOK_SLASH       "/"
%token YYTOK_COLON       ":"
%token YYTOK_SEMICOLON   ";"
%token YYTOK_COMMA       ","
%token YYTOK_LPAREN      "("
%token YYTOK_RPAREN      ")"
%token YYTOK_LCURLY      "{"
%token YYTOK_RCURLY      "}"
%token YYTOK_LBRACKET    "["
%token YYTOK_RBRACKET    "]"

%token ID              "identifier"
%token TITANID         "Titan identifier"
%token INT             "integer literal"
%token FLOAT           "float literal"
%token CSTRING         "string literal"
%token BSTRING         "bitstring literal"
%token MODIFIER        "modifier"

%token YYTOK_EQ       "=="
%token YYTOK_NE       "!="
%token YYTOK_GE       ">="
%token YYTOK_LE       "<="
%token YYTOK_SHR      ">>"
%token YYTOK_SHL      "<<"
%token YYTOK_ROR      "@>"
%token YYTOK_ROL      "<@"
%token YYTOK_RANGE    ".."
%token YYTOK_ASSIGN   ":="
%token YYTOK_REDIRECT "->"

/* keywords */
%token<string> YYTOK_KW_ACTION      "action"
%token<string> YYTOK_KW_ACTIVATE    "activate"
%token<string> YYTOK_KW_ADDRESS     "address"
%token<string> YYTOK_KW_ALIVE       "alive"
%token<string> YYTOK_KW_ALL         "all"
%token<string> YYTOK_KW_ALT         "alt"
%token<string> YYTOK_KW_ALTSTEP     "altstep"
%token<string> YYTOK_KW_AND         "and"
%token<string> YYTOK_KW_AND4B       "and4b"
%token<string> YYTOK_KW_ANY         "any"
%token<string> YYTOK_KW_ANYTYPE     "anytype"
%token<string> YYTOK_KW_BITSTRING   "bitstring"
%token<string> YYTOK_KW_BOOLEAN     "boolean"
%token<string> YYTOK_KW_BREAK       "break"
%token<string> YYTOK_KW_CALL        "call"
%token<string> YYTOK_KW_CASE        "case"
%token<string> YYTOK_KW_CATCH       "catch"
%token<string> YYTOK_KW_CHAR        "char"
%token<string> YYTOK_KW_CHARSTRING  "charstring"
%token<string> YYTOK_KW_CHECK       "check"
%token<string> YYTOK_KW_CLEAR       "clear"
%token<string> YYTOK_KW_COMPLEMENT  "complement"
%token<string> YYTOK_KW_COMPONENT   "component"
%token<string> YYTOK_KW_CONNECT     "connect"
%token<string> YYTOK_KW_CONST       "const"
%token<string> YYTOK_KW_CONTINUE    "continue"
%token<string> YYTOK_KW_CONTROL     "control"
%token<string> YYTOK_KW_CREATE      "create"
%token<string> YYTOK_KW_DEACTIVATE  "deactivate"
%token<string> YYTOK_KW_DECMATCH    "decmatch"
%token<string> YYTOK_KW_DEFAULT     "default"
%token<string> YYTOK_KW_DISCONNECT  "disconnect"
%token<string> YYTOK_KW_DISPLAY     "display"
%token<string> YYTOK_KW_DO          "do"
%token<string> YYTOK_KW_DONE        "done"
%token<string> YYTOK_KW_ELSE        "else"
%token<string> YYTOK_KW_ENCODE      "encode"
%token<string> YYTOK_KW_ENUMERATED  "enumerated"
%token<string> YYTOK_KW_ERROR       "error"
%token<string> YYTOK_KW_EXCEPT      "except"
%token<string> YYTOK_KW_EXCEPTION   "exception"
%token<string> YYTOK_KW_EXECUTE     "execute"
%token<string> YYTOK_KW_EXTENDS     "extends"
%token<string> YYTOK_KW_EXTENSION   "extension"
%token<string> YYTOK_KW_EXTERNAL    "external"
%token<string> YYTOK_KW_FAIL        "fail"
%token<string> YYTOK_KW_FALSE       "false"
%token<string> YYTOK_KW_FLOAT       "float"
%token<string> YYTOK_KW_FOR         "for"
%token<string> YYTOK_KW_FRIEND      "friend"
%token<string> YYTOK_KW_FROM        "from"
%token<string> YYTOK_KW_FUNCTION    "function"
%token<string> YYTOK_KW_GETCALL     "getcall"
%token<string> YYTOK_KW_GETREPLY    "getreply"
%token<string> YYTOK_KW_GETVERDICT  "getverdict"
%token<string> YYTOK_KW_GOTO        "goto"
%token<string> YYTOK_KW_GROUP       "group"
%token<string> YYTOK_KW_HALT        "halt"
%token<string> YYTOK_KW_HEXSTRING   "hexstring"
%token<string> YYTOK_KW_IF          "if"
%token<string> YYTOK_KW_IFPRESENT   "ifpresent"
%token<string> YYTOK_KW_IMPORT      "import"
%token<string> YYTOK_KW_IN          "in"
%token<string> YYTOK_KW_INCONC      "inconc"
%token<string> YYTOK_KW_INFINITY    "infinity"
%token<string> YYTOK_KW_INOUT       "inout"
%token<string> YYTOK_KW_INTEGER     "integer"
%token<string> YYTOK_KW_INTERLEAVE  "interleave"
%token<string> YYTOK_KW_KILL        "kill"
%token<string> YYTOK_KW_KILLED      "killed"
%token<string> YYTOK_KW_LABEL       "label"
%token<string> YYTOK_KW_LANGUAGE    "language"
%token<string> YYTOK_KW_LENGTH      "length"
%token<string> YYTOK_KW_LOG         "log"
%token<string> YYTOK_KW_MAP         "map"
%token<string> YYTOK_KW_MATCH       "match"
%token<string> YYTOK_KW_MESSAGE     "message"
%token<string> YYTOK_KW_MIXED       "mixed"
%token<string> YYTOK_KW_MOD         "mod"
%token<string> YYTOK_KW_MODIFIES    "modifies"
%token<string> YYTOK_KW_MODULE      "module"
%token<string> YYTOK_KW_MODULEPAR   "modulepar"
%token<string> YYTOK_KW_MTC         "mtc"
%token<string> YYTOK_KW_NOBLOCK     "noblock"
%token<string> YYTOK_KW_NONE        "none"
%token<string> YYTOK_KW_NOT         "not"
%token<string> YYTOK_KW_NOT4B       "not4b"
%token<string> YYTOK_KW_NOWAIT      "nowait"
%token<string> YYTOK_KW_NULL        "null"
%token<string> YYTOK_KW_OCTETSTRING "octetstring"
%token<string> YYTOK_KW_OF          "of"
%token<string> YYTOK_KW_OMIT        "omit"
%token<string> YYTOK_KW_ON          "on"
%token<string> YYTOK_KW_OPTIONAL    "optional"
%token<string> YYTOK_KW_OR          "or"
%token<string> YYTOK_KW_OR4B        "or4b"
%token<string> YYTOK_KW_OUT         "out"
%token<string> YYTOK_KW_OVERRIDE    "override"
%token<string> YYTOK_KW_PARAM       "param"
%token<string> YYTOK_KW_PASS        "pass"
%token<string> YYTOK_KW_PATTERN     "pattern"
%token<string> YYTOK_KW_PERMUTATION "permutation"
%token<string> YYTOK_KW_PORT        "port"
%token<string> YYTOK_KW_PRESENT     "present"
%token<string> YYTOK_KW_PRIVATE     "private"
%token<string> YYTOK_KW_PROCEDURE   "procedure"
%token<string> YYTOK_KW_PUBLIC      "public"
%token<string> YYTOK_KW_RAISE       "raise"
%token<string> YYTOK_KW_READ        "read"
%token<string> YYTOK_KW_REALTIME    "realtime"
%token<string> YYTOK_KW_RECEIVE     "receive"
%token<string> YYTOK_KW_RECORD      "record"
%token<string> YYTOK_KW_RECURSIVE   "recursive"
%token<string> YYTOK_KW_REGEXP      "regexp"
%token<string> YYTOK_KW_REM         "rem"
%token<string> YYTOK_KW_REPEAT      "repeat"
%token<string> YYTOK_KW_REPLY       "reply"
%token<string> YYTOK_KW_RETURN      "return"
%token<string> YYTOK_KW_RUNNING     "running"
%token<string> YYTOK_KW_RUNS        "runs"
%token<string> YYTOK_KW_SELECT      "select"
%token<string> YYTOK_KW_SELF        "self"
%token<string> YYTOK_KW_SEND        "send"
%token<string> YYTOK_KW_SENDER      "sender"
%token<string> YYTOK_KW_SET         "set"
%token<string> YYTOK_KW_SETVERDICT  "setverdict"
%token<string> YYTOK_KW_SIGNATURE   "signature"
%token<string> YYTOK_KW_START       "start"
%token<string> YYTOK_KW_STEPSIZE    "stepsize"
%token<string> YYTOK_KW_STOP        "stop"
%token<string> YYTOK_KW_SUBSET      "subset"
%token<string> YYTOK_KW_SUPERSET    "superset"
%token<string> YYTOK_KW_SYSTEM      "system"
%token<string> YYTOK_KW_TEMPLATE    "template"
%token<string> YYTOK_KW_TESTCASE    "testcase"
%token<string> YYTOK_KW_TIMEOUT     "timeout"
%token<string> YYTOK_KW_TIMER       "timer"
%token<string> YYTOK_KW_TIMESTAMP   "timestamp"
%token<string> YYTOK_KW_TO          "to"
%token<string> YYTOK_KW_TRIGGER     "trigger"
%token<string> YYTOK_KW_TRUE        "true"
%token<string> YYTOK_KW_TYPE        "type"
%token<string> YYTOK_KW_UNION       "union"
%token<string> YYTOK_KW_UNIVERSAL   "universal"
%token<string> YYTOK_KW_UNMAP       "unmap"
%token<string> YYTOK_KW_VALUE       "value"
%token<string> YYTOK_KW_VALUEOF     "valueof"
%token<string> YYTOK_KW_VAR         "var"
%token<string> YYTOK_KW_VARIANT     "variant"
%token<string> YYTOK_KW_VERDICTTYPE "verdicttype"
%token<string> YYTOK_KW_WHILE       "while"
%token<string> YYTOK_KW_WITH        "with"
%token<string> YYTOK_KW_XOR         "xor"
%token<string> YYTOK_KW_XOR4B       "xor4b"


/* precedence table */

%left ".."
%right "!"
%left "or"
%left "xor"
%left "and"
%right "not"
%left "==" "!="
%left "<" ">" ">=" "<="
%left "<<" ">>" "<@" "@>"
%left "or4b"
%left "xor4b"
%left "and4b"
%right "not4b"
%left "+" "-" "&"
%left "*" "/" "mod" "rem"
%right UNARY

%{

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
%}

%initial-action
{
    @$ = loc_init(0);
    if (getenv("K3DEBUG"))
        yydebug=1;
}

%% /* Grammar */

parse
    : Modules
    ;

/*************************************************************************
 * Module
 *************************************************************************/

Modules
    :         Module Semi
    | Modules Module Semi
    ;

Module
     : "module" Def OptLanguage "{" OptModuleDefs OptControl "}" OptWith
     ;

OptLanguage
    : /* empty */
    | "language" LangSpec
    ;

LangSpec
    :              CSTRING
    | LangSpec "," CSTRING
    ;

OptControl
    : /* empty */
    | "control" Block
    ;


/*************************************************************************
 * Module Definitions
 *************************************************************************/

OptModuleDefs
    : /* empty */
    | ModuleDefs
    ;

ModuleDefs
    :            ModuleDef Semi
    | ModuleDefs ModuleDef Semi
    ;

ModuleDef
    : OptVisibility ExtFunction
    | OptVisibility Function
    | OptVisibility Testcase
    | OptVisibility Altstep
    | OptVisibility Signature
    | OptVisibility Type
    | OptVisibility ExtConst
    | OptVisibility Decl
    | OptVisibility ModulePar
    | OptVisibility Import
    | OptVisibility Group
    | "friend" "module" Def
    ;

OptVisibility
    : /* empty */
    | "public"
    | "friend"
    | "private"
    ;

Group
    : "group" Def "{" OptModuleDefs "}" OptWith
    ;


/*************************************************************************
 * Import
 *************************************************************************/

Import
    : "import" "from" Def OptLanguage OptRecursive ImportBody OptWith
    ;

OptRecursive
    : /* empty */
    | "recursive"
    ;

ImportBody
    : "all"
    | "all" "except" "{" OptExceptStmts "}"
    |                "{" OptImportStmts "}"
    ;

OptImportStmts
    : /* empty */
    | ImportStmts
    ;

ImportStmts
    :             ImportStmt Semi
    | ImportStmts ImportStmt Semi
    ;

ImportStmt
    : ImportKind Refs
    | "group"    GroupRefs
    | ImportKind "all" OptExcept
    | "group"    "all" OptExcept
    ;

ImportKind
    : "altstep"
    | "const"
    | "function"
    | "import"
    | "modulepar"
    | "signature"
    | "template"
    | "testcase"
    | "type"
    ;

OptExcept
    : /* empy */
    | "except" Refs
    ;

GroupRefs
    :               GroupRef
    | GroupRefs "," GroupRef
    ;

GroupRef
    : Ref
    | Ref "except" "{" OptExceptStmts "}"
    ;

OptExceptStmts
    : /* empty */
    | ExceptStmts
    ;

ExceptStmts
    :             ExceptStmt Semi
    | ExceptStmts ExceptStmt Semi
    ;

ExceptStmt
    : ImportKind Refs
    | ImportKind "all"
    | "group"    Refs
    | "group"    "all"
    ;


/*************************************************************************
 * Type
 *************************************************************************/

Type
    : Component
    | Port
    | SubType
    | Enum
    | List
    | Struct
    | BehaviourType
    ;

NestedType
    : Ref
    | NestedList
    | NestedStruct
    | NestedEnum
    ;


/*************************************************************************
 * Return Type
 *************************************************************************/

OptReturn
    : /* empty */
    | "return" OptNestedTemplateRestriction Ref
    ;


/*************************************************************************
 * SubType
 *************************************************************************/

SubType
    : "type" Ref ArrayDef OptConstraint OptWith
    ;

OptConstraint
    : /* empty */
    | SetValue         /* TODO */
    | SetValue Length  /* TODO */
    |          Length  /* TODO */
    ;


/*************************************************************************
 * List Type
 *************************************************************************/

List
    : "type" ListKind OptLength "of" NestedType Def OptConstraint OptWith
    ;

ListKind
    : "record"
    | "set"
    ;

NestedList
    : ListKind OptLength "of" NestedType
    ;

/*************************************************************************
 * Struct Type
 *************************************************************************/

Struct
    : "type" StructKind Def "{" OptStructFields "}" OptWith
    ;

StructKind
    : "record"
    | "set"
    | "union"
    ;


NestedStruct
    : StructKind "{" OptStructFields "}"
    ;

OptStructFields
    : /* empty */
    | StructFields
    ;

StructFields
    :                  StructField
    | StructFields "," StructField
    ;

StructField
    : NestedType ArrayDef OptConstraint OptOptional
    ;

OptOptional
    : /* empty */
    | "optional"
    ;


/*************************************************************************
 * Enumeration
 *************************************************************************/

Enum
    : "type" "enumerated" Def "{" Enumerations "}" OptWith

    ;

NestedEnum
    : "enumerated" "{" Enumerations "}"

    ;

Enumerations
    :                  Enumeration
    | Enumerations "," Enumeration
    ;

Enumeration
    : Def
    | Def "(" Expr ")"
    ;


/*************************************************************************
 * Component Type
 *************************************************************************/

Component
    : "type" "component" Def OptExtends "{" OptDecls "}" OptWith

    ;

OptExtends
    : /* empty */
    | "extends" Refs
    ;


/*************************************************************************
 * Port Type
 *************************************************************************/

Port
    : "type" "port" Def PortKind OptRealtime "{" PortAttributes"}" OptWith
    ;

PortKind
    : "procedure"
    | "message"
    | "mixed"
    ;

OptRealtime
    : /* empty */
    | "realtime"
    ;

PortAttributes
    :                PortAttribute Semi
    | PortAttributes PortAttribute Semi
    ;

PortAttribute
    : "address" Ref
    | "map"   "param" "(" FormalPars ")"
    | "unmap" "param" "(" FormalPars ")"
    | Direction "all"
    | Direction Refs
    ;


/*************************************************************************
 * Signature
 *************************************************************************/

Signature
    : "signature" Def "(" OptFormalPars ")" OptReturn OptExceptionSpec OptWith
    | "signature" Def "(" OptFormalPars ")" NoBlock OptExceptionSpec OptWith
    ;

NoBlock
    : "noblock"
    ;

OptExceptionSpec
    : /* empty */
    | "exception" "(" Refs ")"
    ;


/*************************************************************************
 * Behaviour Type
 *************************************************************************/

BehaviourType
    : "type" BehaviourKind Def "(" OptFormalPars ")" OptRunsOnSpec OptReturn
    ;

BehaviourKind
    : "testcase"
    | "function"
    | "altstep"
    ;


/*************************************************************************
 * External Function
 *************************************************************************/

ExtFunction
    : "external" "function" OptModifier Def "(" OptFormalPars ")" OptReturn OptWith
    ;


/*************************************************************************
 * Function
 *************************************************************************/

Function
    : "function" Def OptModifier "(" OptFormalPars ")" OptRunsOnSpec OptMtcSpec OptSystemSpec OptReturn Block OptWith
    ;


/*************************************************************************
 * Testcase
 *************************************************************************/

Testcase
    : "testcase" Def "(" OptFormalPars ")" RunsOnSpec OptSystemSpec Block OptWith
    ;


/*************************************************************************
 * Altstep
 *************************************************************************/

Altstep
    : "altstep" Def "(" OptFormalPars ")" OptRunsOnSpec OptMtcSpec OptSystemSpec "{" AltstepBody "}" OptWith
    ;

AltstepBody
    : Decls
    | Decls AltGuards
    |       AltGuards
    ;


/*************************************************************************
 * Formal Parameter
 *************************************************************************/

OptFormalPars
    : /* empty */
    | FormalPars
    ;

FormalPars
    : FormalPar
    | FormalPars "," FormalPar
    ;

FormalPar
    : OptDirection OptNestedTemplateRestriction OptModifier FormalParRef Declarator
    ;

FormalParRef
    : Ref
    | "timer"
    ;


/*************************************************************************
 * Value Declarations
 *************************************************************************/

OptDecls
    : /* empty */
    | Decls
    ;

Decls
    :       Decl Semi
    | Decls Decl Semi
    ;

Decl
    : TimerDecl
    | PortDecl
    | VarDecl
    | Template
    | Const
    ;

/*************************************************************************
 * External Const
 *************************************************************************/

ExtConst
    : "external" "const" Ref Declarators OptWith
    ;


/*************************************************************************
 * Module Parameter
 *************************************************************************/

ModulePar
    : "modulepar" Ref Declarators    OptWith
    | "modulepar" "{" ModulePars "}" OptWith
    ;

ModulePars
    :            ObsoleteModulePar Semi
    | ModulePars ObsoleteModulePar Semi
    ;

ObsoleteModulePar
    : Ref Declarators
    ;

/*************************************************************************
 * Timer Declaration
 *************************************************************************/

TimerDecl
    : "timer" Declarators OptWith
    ;


/*************************************************************************
 * Port Declaration
 *************************************************************************/

PortDecl
    : "port" Ref Declarators OptWith
    ;


/*************************************************************************
 * Variable Declaration
 *************************************************************************/

VarDecl
    : "var" OptNestedTemplateRestriction OptModifier Ref Declarators OptWith

    ;


/*************************************************************************
 * Const Declaration
 *************************************************************************/

Const
    : "const" Ref Declarators OptWith
    ;


/*************************************************************************
 * Template Declaration
 *************************************************************************/

Template
    : "template" OptTemplateRestriction OptModifier Ref Def OptTemplatePars TemplateBody OptWith
    ;

OptTemplateRestriction
    : /* empty */
    | "(" "omit"    ")"
    | "(" "value"   ")"
    | "(" "present" ")"
    ;

OptTemplatePars
    : /* empty */
    | "(" FormalPars ")"
    ;

TemplateBody
    :                ":=" Expr
    | "modifies" Ref ":=" Expr
    ;


/*************************************************************************
 * With Attributes
 *************************************************************************/

OptWith
    : /* empty */
    | "with" "{" OptWithStmts "}"
    ;

OptWithStmts
    : /* empty */
    | WithStmts
    ;

WithStmts
    :           WithStmt Semi
    | WithStmts WithStmt Semi
    ;

WithStmt
    : WithKind OptOverride OptWithQualifiers CSTRING
    ;

WithKind
    : "encode"
    | "variant"
    | "display"
    | "extension"
    | "optional"
    | "stepsize"
    ;

OptOverride
    : /* empty */
    | "override"
    ;

OptWithQualifiers
    : /* empty */
    | "("  WithQualifiers ")"
    ;

WithQualifiers
    :                    WithQualifier
    | WithQualifiers "," WithQualifier
    ;

WithQualifier
    : Ref
    | "[" ExprOrOmit "]"
    | WithSelector
    ;

WithSelectorKind
    : "group"
    | "type"
    | "template"
    | "const"
    | "altstep"
    | "testcase"
    | "function"
    | "signature"
    | "modulepar"
    ;

WithSelector
    : WithSelectorKind "all" OptWithExcept
    ;

OptWithExcept
    : /* empty */
    | "except" "{" Refs "}"
    ;



/*************************************************************************
 * Expression
 *************************************************************************/

Exprs
    :           Expr
    | Exprs "," Expr
    ;

ExprOrOmit
    : Expr
    | "-" //%prec OMIT
    ;


Expr
    : Primary
    | Value
    | Value Length              /* TODO */
    | Value Length "ifpresent"  /* TODO */
    | Value        "ifpresent"  /* TODO */

    /* Binary operators */
    | Expr "or"    Expr
    | Expr "xor"   Expr
    | Expr "and"   Expr
    | Expr "=="    Expr
    | Expr "!="    Expr
    | Expr "<"     Expr
    | Expr ">"     Expr
    | Expr ">="    Expr
    | Expr "<="    Expr
    | Expr "<<"    Expr
    | Expr ">>"    Expr
    | Expr "<@"    Expr
    | Expr "@>"    Expr
    | Expr "or4b"  Expr
    | Expr "xor4b" Expr
    | Expr "and4b" Expr
    | Expr "+"     Expr
    | Expr "-"     Expr
    | Expr "&"     Expr
    | Expr "*"     Expr
    | Expr "/"     Expr
    | Expr "mod"   Expr
    | Expr "rem"   Expr
    | Expr ".."    Expr

    /* Unary operators */
    | "not"   Expr
    | "not4b" Expr
    | "!"     Expr
    | "+"     Expr %prec UNARY
    | "-"     Expr %prec UNARY
    ;

/*************************************************************************
 * Literal
 *************************************************************************/

Literal
    : CSTRING
    | BSTRING
    | INT
    | FLOAT
    | "pass"
    | "fail"
    | "inconc"
    | "none"
    | "error"
    | "false"
    | "true"
    | "null"
    | "omit"
    | "timeout"
    | "not_a_number"
    | "infinity"
    | "nowait"
    | "?"
    | "*"
    | "__MODULE__"
    | "__FILE__"
    | "__BFILE__"
    | "__LINE__"
    | "__SCOPE__"
    ;

Value
    : Literal
    | "char"        "(" Exprs ")"
    | "complement"  "(" Exprs ")"
    | "permutation" "(" Exprs ")"
    | "subset"      "(" Exprs ")"
    | "superset"    "(" Exprs ")"
    | "pattern" OptModifier PatternValue
    | "regexp" OptModifier "(" Inits ")"
    | SetValue
    | "{" OptInits "}"
    ;

PatternValue
    : CSTRING
    ;

SetValue
    : "(" Exprs ")"
    ;


/*************************************************************************
 * Referencing Expressions
 *************************************************************************/

Primary
    : Ref
    | Ref "alive"
    ;

Refs
    :          Ref
    | Refs "," Ref
    ;

Ref
    : RefElem
    | Ref "[" ExprOrOmit "]"
    | Ref "(" OptInits ")"
    | Ref "." RefElem
    ;

RefElem
    : ID
    | "all" "component"
    | "all" "port"
    | "all" "timer"
    | "any" "component"
    | "any" "port"
    | "any" "timer"
    | "anytype"
    | "bitstring"
    | "boolean"
    | "charstring"
    | "checkstate"
    | "clear"
    | "default"
    | "float"
    | "getverdict"
    | "hexstring"
    | "integer"
    | "kill"
    | "match"
    | "mtc"
    | "octetstring"
    | "self"
    | "start"
    | "stop"
    | "system"
    | "universal" "charstring"
    | "valueof"
    | "verdicttype"
    ;

OptParams
    : /* empty */
    | Params
    ;

Params
    : "(" Inits ")"
    ;

OptInits
    : /* empty */
    | Inits
    ;

Inits
    :           InitElement
    | Inits "," InitElement
    ;

InitElement
    : ExprOrOmit
    | Designator ":=" ExprOrOmit
    ;

Designator
    : Ref
    | "[" Expr "]"
    ;


/*************************************************************************
 * Statements
 *************************************************************************/

Block
    : "{" "}"
    | "{" Stmts "}"
    ;

Stmts
    :       Stmt Semi
    | Stmts Stmt Semi
    ;

Stmt
    : "repeat"
    | "break"
    | "continue"
    | "return"
    | "return"     Expr
    | "goto"       ID
    | "label"      ID

    | "map"        Params
    | "map"        Params "param" Params
    | "unmap"      OptParams
    | "unmap"      Params "param" Params

    | "testcase" "." "stop" OptParams

    | Assignment
    | Decl
    | ForLoop
    | WhileLoop
    | DoWhileLoop
    | IfConstruct
    | SelectUnionConstruct
    | SelectConstruct
    | AltConstruct
    | Block
    ;



/*************************************************************************
 * Assignment
 *************************************************************************/

Assignment : Ref ":=" ExprOrOmit  ;


/*************************************************************************
 * Loops
 *************************************************************************/

ForLoop
    : "for" "(" Decl       ";" Expr ";" Assignment ")" Block
    | "for" "(" Assignment ";" Expr ";" Assignment ")" Block
    ;

WhileLoop
    : "while" "(" Expr ")"  Block
    ;

DoWhileLoop
    : "do" Block "while" "(" Expr ")"
    ;

/*************************************************************************
 * Condition Statements
 *************************************************************************/

IfConstruct
    : "if" "(" Expr ")" Block
    | "if" "(" Expr ")" Block "else" IfConstruct
    | "if" "(" Expr ")" Block "else" Block
    ;

SelectUnionConstruct
    : "select" "union" "(" Ref ")" "{" Cases "}"
    ;

SelectConstruct
    : "select" "(" Expr ")" "{" Cases "}"
    ;

Cases
    :       Case
    | Cases Case
    ;

Case
    : "case" "(" Exprs ")" Block
    | "case"    "else"     Block
    ;

/*************************************************************************
 * Alt/Interleave Statement
 *************************************************************************/

AltConstruct
    : "alt"        "{" OptAltGuards "}"
    | "interleave" "{" OptAltGuards "}"
    ;

OptAltGuards
    : /* empty */
    | AltGuards
    ;

AltGuards
    :           AltGuard Semi
    | AltGuards AltGuard Semi
    ;

AltGuard
    : "[" OptExpr "]" GuardOp Block
    | "[" OptExpr "]" GuardOp ";"
    | "[" "else"  "]" Block
    ;

GuardOp
    : ID /* TODO */
    ;

OptDirection
    : /* empty */
    | Direction
    ;

Direction
    : "in"
    | "out"
    | "inout"
    ;

OptModifier
    : /* empty */
    | MODIFIER
    ;

OptNestedTemplateRestriction
    : /* empty */
    | "template"
    | "template" "(" TemplateRestriction ")"
    | TemplateRestriction
    ;

TemplateRestriction
    : "omit"
    | "value"
    | "present"
    ;


RunsOnSpec : "runs" "on" Ref;
MtcSpec    : "mtc"       Ref;
SystemSpec : "system"    Ref;

Length     : "length" "(" Expr  ")"


Declarators
    :                 Declarator
    | Declarators "," Declarator
    ;

Declarator
    : ArrayDef //%prec ARRAYDEF
    | ArrayDef ":=" ExprOrOmit
    ;

ArrayDef
    : Def
    | ArrayDef "[" Expr "]"
    ;

Def
    : ID
    | "address"
    ;



OptRunsOnSpec : /* empty */  | RunsOnSpec;
OptMtcSpec    : /* empty */  | MtcSpec;
OptSystemSpec : /* empty */  | SystemSpec;

OptLength     : /* empty */  | Length;
OptExpr       : /* empty */  | Expr;


Semi  : /* empty */    ";" ;

%% /* Footer */

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
