// Code generated by go generate; DO NOT EDIT.
// This file was generated by robots at 2022-10-02 15:04:15.008962638 +0200 CEST m=+0.003247007

package syntax

import "fmt"

// Kind describes the kind of a syntax node.
type Kind int32

// IsTerminal returns true if the kind is a terminal. Terminals are also known as leave nodes, lexemes, tokens, ...
func (k Kind) IsTerminal() bool { return k.IsToken() }

// IsToken returns true if the kind is a token. This function is the same as IsTerminal.
func (k Kind) IsToken() bool {
	return __tokens_begin <= k && k <= __tokens_end ||
		k == Unknown ||
		k == Malformed ||
		k == Unterminated
}

// IsNonTerminal returns true if the kind is a non terminal. Non terminals are
// produced by the parser and usually have other non terminals or tokens as
// children.
func (k Kind) IsNonTerminal() bool { return __nodes_begin <= k && k <= __nodes_end }

// IsKeyword returns true if the kind is a keyword.
func (k Kind) IsKeyword() bool { return __keywords_begin <= k && k <= __tokens_end }

// IsLiteral returns true if the kind is a literal token. Literal tokens are
// tokens which have a value, such as identifier, integer, ...
func (k Kind) IsLiteral() bool { return __literals_begin <= k && k <= __literals_end }

// IsTrivia returns true if the kind is either a comment or a preprocessor directive
func (k Kind) IsTrivia() bool { return k == Comment || k == Preproc }

// String returns a human readable name for the kind.
func (k Kind) String() string {
	m := map[Kind]string{
		EOF:                  "EOF",
		Root:                 "Root",
		Unknown:              "unknown token",
		Malformed:            "malformed token",
		Unterminated:         "unterminated string",
		Identifier:           "identifier",
		Comment:              "comment",
		Preproc:              "preprocessor directive",
		Modifier:             "modifier",
		Integer:              "integer",
		Float:                "float",
		String:               "string",
		Bitstring:            "bitstring",
		Unused:               "-",
		Add:                  "+",
		AddressKeyword:       "address",
		AllKeyword:           "all",
		AltKeyword:           "alt",
		AltstepKeyword:       "altstep",
		And4bKeyword:         "and4b",
		AndKeyword:           "and",
		Any:                  "?",
		AnyKeyword:           "any",
		Arrow:                "->",
		Assign:               ":=",
		AtDefault:            "@default",
		AtLocal:              "@local",
		CaseKeyword:          "case",
		CatchKeyword:         "catch",
		CharstringKeyword:    "charstring",
		ClassKeyword:         "class",
		Colon:                ":",
		ColonColon:           "::",
		Comma:                ",",
		ComponentKeyword:     "component",
		Concat:               "&",
		ConfigurationKeyword: "configuration",
		ConnectKeyword:       "connect",
		ConstKeyword:         "const",
		ControlKeyword:       "control",
		CreateKeyword:        "create",
		DisplayKeyword:       "display",
		Div:                  "/",
		DoKeyword:            "do",
		Dot:                  ".",
		DotDot:               "..",
		DoubleArrow:          "=>",
		ElseKeyword:          "else",
		EncodeKeyword:        "encode",
		EnumeratedKeyword:    "enumerated",
		Equal:                "==",
		ErrorLiteral:         "error",
		ExceptKeyword:        "except",
		ExceptionKeyword:     "exception",
		Exclude:              "!",
		ExecuteKeyword:       "execute",
		ExtendsKeyword:       "extends",
		ExtensionKeyword:     "extension",
		ExternalKeyword:      "external",
		FailLiteral:          "fail",
		FalseLiteral:         "false",
		FinallyKeyword:       "finally",
		ForKeyword:           "for",
		FriendKeyword:        "friend",
		FromKeyword:          "from",
		FunctionKeyword:      "function",
		GotoKeyword:          "goto",
		Greater:              ">",
		GreaterEqual:         ">=",
		GroupKeyword:         "group",
		IfKeyword:            "if",
		ImportKeyword:        "import",
		InKeyword:            "in",
		InconcLiteral:        "inconc",
		InoutKeyword:         "inout",
		InterleaveKeyword:    "interleave",
		LabelKeyword:         "label",
		LanguageKeyword:      "language",
		LeftBrace:            "{",
		LeftBracket:          "[",
		LeftParen:            "(",
		LengthKeyword:        "length",
		Less:                 "<",
		LessEqual:            "<=",
		MapKeyword:           "map",
		MessageKeyword:       "message",
		ModKeyword:           "mod",
		ModifiesKeyword:      "modifies",
		ModuleKeyword:        "module",
		ModuleparKeyword:     "modulepar",
		MtcKeyword:           "mtc",
		Mul:                  "*",
		NoblockKeyword:       "noblock",
		NoneLiteral:          "none",
		Not4bKeyword:         "not4b",
		NotANumber:           "not_a_number",
		NotEqual:             "!=",
		NotKeyword:           "not",
		NullKeyword:          "null",
		OfKeyword:            "of",
		OmitKeyword:          "omit",
		OnKeyword:            "on",
		OptionalKeyword:      "optional",
		Or4bKeyword:          "or4b",
		OrKeyword:            "or",
		OutKeyword:           "out",
		OverrideKeyword:      "override",
		ParamKeyword:         "param",
		PassLiteral:          "pass",
		PortKeyword:          "port",
		PresentKeyword:       "present",
		PrivateKeyword:       "private",
		ProcedureKeyword:     "procedure",
		PublicKeyword:        "public",
		RealtimeKeyword:      "realtime",
		RecordKeyword:        "record",
		RemKeyword:           "rem",
		ReturnKeyword:        "return",
		RightBrace:           "}",
		RightBracket:         "]",
		RightParen:           ")",
		RotateLeft:           "<@",
		RotateRight:          "@>",
		RunsKeyword:          "runs",
		SelectKeyword:        "select",
		SelfKeyword:          "self",
		Semicolon:            ";",
		SetKeyword:           "set",
		ShiftLeft:            "<<",
		ShiftRight:           ">>",
		SignatureKeyword:     "signature",
		StreamKeyword:        "stream",
		Sub:                  "-",
		SystemKeyword:        "system",
		TemplateKeyword:      "template",
		TestcaseKeyword:      "testcase",
		ThisKeyword:          "this",
		TimerKeyword:         "timer",
		ToKeyword:            "to",
		TrueLiteral:          "true",
		TypeKeyword:          "type",
		UnionKeyword:         "union",
		UniversalKeyword:     "universal",
		UnmapKeyword:         "unmap",
		ValueKeyword:         "value",
		VarKeyword:           "var",
		VariantKeyword:       "variant",
		WhileKeyword:         "while",
		WithKeyword:          "with",
		Xor4bKeyword:         "xor4b",
		XorKeyword:           "xor",

		Module:              "Module",
		Decls:               "Decls",
		Decl:                "Decl",
		Group:               "Group",
		Friend:              "Friend",
		Import:              "Import",
		ExceptSpec:          "ExceptSpec",
		ExceptStmt:          "ExceptStmt",
		ImportSpec:          "ImportSpec",
		ImportStmt:          "ImportStmt",
		ImportKind:          "ImportKind",
		Signature:           "Signature",
		Component:           "Component",
		Port:                "Port",
		PortKind:            "PortKind",
		PortSpec:            "PortSpec",
		PortAttribute:       "PortAttribute",
		PortElement:         "PortElement",
		PortTranslation:     "PortTranslation",
		SubType:             "SubType",
		Struct:              "Struct",
		StructKind:          "StructKind",
		StructMember:        "StructMember",
		List:                "List",
		ListKind:            "ListKind",
		Enum:                "Enum",
		EnumLabel:           "EnumLabel",
		Map:                 "Map",
		Class:               "Class",
		Constructor:         "Constructor",
		Control:             "Control",
		Destructor:          "Destructor",
		TestcaseType:        "TestcaseType",
		FunctionType:        "FunctionType",
		AltstepType:         "AltstepType",
		VarDecl:             "VarDecl",
		TimerDecl:           "TimerDecl",
		PortDecl:            "PortDecl",
		Template:            "Template",
		Testcase:            "Testcase",
		Function:            "Function",
		Configuration:       "Configuration",
		Altstep:             "Altstep",
		Stmt:                "Stmt",
		IfStmt:              "IfStmt",
		SelectStmt:          "SelectStmt",
		ForStmt:             "ForStmt",
		WhileStmt:           "WhileStmt",
		DoStmt:              "DoStmt",
		GotoStmt:            "GotoStmt",
		LabelStmt:           "LabelStmt",
		ReturnStmt:          "ReturnStmt",
		AltStmt:             "AltStmt",
		AssignStmt:          "AssignStmt",
		GuardStmt:           "GuardStmt",
		Block:               "Block",
		BasicBlock:          "BasicBlock",
		Exprs:               "Exprs",
		Expr:                "Expr",
		PrimaryExpr:         "PrimaryExpr",
		Literal:             "Literal",
		UnaryExpr:           "UnaryExpr",
		BinaryExpr:          "BinaryExpr",
		Ref:                 "Ref",
		TypePars:            "TypePars",
		TypePar:             "TypePar",
		With:                "With",
		WithStmt:            "WithStmt",
		WithQualifier:       "WithQualifier",
		WithKind:            "WithKind",
		Refs:                "Refs",
		Extends:             "Extends",
		Language:            "Language",
		Return:              "Return",
		ValueConstraints:    "ValueConstraints",
		ConfigSpec:          "ConfigSpec",
		Exception:           "Exception",
		Visibility:          "Visibility",
		Name:                "Name",
		FormalTypePars:      "FormalTypePars",
		FormalTypePar:       "FormalTypePar",
		FormalPars:          "FormalPars",
		FormalPar:           "FormalPar",
		Declarator:          "Declarator",
		ArrayDef:            "ArrayDef",
		TemplateRestriction: "TemplateRestriction",
		NestedTemplate:      "NestedTemplate",
		NestedType:          "NestedType",
		NestedStruct:        "NestedStruct",
		NestedList:          "NestedList",
		NestedEnum:          "NestedEnum",
	}
	if s, ok := m[k]; ok {
		return s
	}
	return fmt.Sprintf("unknown kind %d", int32(k))
}

const (
	EOF Kind = iota
	__errors_begin
	Unknown
	Malformed
	Unterminated
	__errors_end
	__tokens_begin
	__literals_begin
	Identifier
	Comment
	Preproc
	Modifier
	Integer
	Float
	String
	Bitstring
	__literals_end

	__literal_values_begin
	Unused
	ErrorLiteral
	FailLiteral
	FalseLiteral
	InconcLiteral
	NoneLiteral
	PassLiteral
	TrueLiteral

	__literal_values_end

	__keywords_begin
	AddressKeyword
	AllKeyword
	AltKeyword
	AltstepKeyword
	And4bKeyword
	AndKeyword
	AnyKeyword
	CaseKeyword
	CatchKeyword
	CharstringKeyword
	ClassKeyword
	ComponentKeyword
	ConfigurationKeyword
	ConnectKeyword
	ConstKeyword
	ControlKeyword
	CreateKeyword
	DisplayKeyword
	DoKeyword
	ElseKeyword
	EncodeKeyword
	EnumeratedKeyword
	ExceptKeyword
	ExceptionKeyword
	ExecuteKeyword
	ExtendsKeyword
	ExtensionKeyword
	ExternalKeyword
	FinallyKeyword
	ForKeyword
	FriendKeyword
	FromKeyword
	FunctionKeyword
	GotoKeyword
	GroupKeyword
	IfKeyword
	ImportKeyword
	InKeyword
	InoutKeyword
	InterleaveKeyword
	LabelKeyword
	LanguageKeyword
	LengthKeyword
	MapKeyword
	MessageKeyword
	ModKeyword
	ModifiesKeyword
	ModuleKeyword
	ModuleparKeyword
	MtcKeyword
	NoblockKeyword
	Not4bKeyword
	NotKeyword
	NullKeyword
	OfKeyword
	OmitKeyword
	OnKeyword
	OptionalKeyword
	Or4bKeyword
	OrKeyword
	OutKeyword
	OverrideKeyword
	ParamKeyword
	PortKeyword
	PresentKeyword
	PrivateKeyword
	ProcedureKeyword
	PublicKeyword
	RealtimeKeyword
	RecordKeyword
	RemKeyword
	ReturnKeyword
	RunsKeyword
	SelectKeyword
	SelfKeyword
	SetKeyword
	SignatureKeyword
	StreamKeyword
	SystemKeyword
	TemplateKeyword
	TestcaseKeyword
	ThisKeyword
	TimerKeyword
	ToKeyword
	TypeKeyword
	UnionKeyword
	UniversalKeyword
	UnmapKeyword
	ValueKeyword
	VarKeyword
	VariantKeyword
	WhileKeyword
	WithKeyword
	Xor4bKeyword
	XorKeyword

	__keywords_end

	Add
	Any
	Arrow
	Assign
	AtDefault
	AtLocal
	Colon
	ColonColon
	Comma
	Concat
	Div
	Dot
	DotDot
	DoubleArrow
	Equal
	Exclude
	Greater
	GreaterEqual
	LeftBrace
	LeftBracket
	LeftParen
	Less
	LessEqual
	Mul
	NotANumber
	NotEqual
	RightBrace
	RightBracket
	RightParen
	RotateLeft
	RotateRight
	Semicolon
	ShiftLeft
	ShiftRight
	Sub

	__tokens_end

	__nodes_begin
	Root
	Module
	Decls
	Decl
	Group
	Friend
	Import
	ExceptSpec
	ExceptStmt
	ImportSpec
	ImportStmt
	ImportKind
	Signature
	Component
	Port
	PortKind
	PortSpec
	PortAttribute
	PortElement
	PortTranslation
	SubType
	Struct
	StructKind
	StructMember
	List
	ListKind
	Enum
	EnumLabel
	Map
	Class
	Constructor
	Control
	Destructor
	TestcaseType
	FunctionType
	AltstepType
	VarDecl
	TimerDecl
	PortDecl
	Template
	Testcase
	Function
	Configuration
	Altstep
	Stmt
	IfStmt
	SelectStmt
	ForStmt
	WhileStmt
	DoStmt
	GotoStmt
	LabelStmt
	ReturnStmt
	AltStmt
	AssignStmt
	GuardStmt
	Block
	BasicBlock
	Exprs
	Expr
	PrimaryExpr
	Literal
	UnaryExpr
	BinaryExpr
	Ref
	TypePars
	TypePar
	With
	WithStmt
	WithQualifier
	WithKind
	Refs
	Extends
	Language
	Return
	ValueConstraints
	ConfigSpec
	Exception
	Visibility
	Name
	FormalTypePars
	FormalTypePar
	FormalPars
	FormalPar
	Declarator
	ArrayDef
	TemplateRestriction
	NestedTemplate
	NestedType
	NestedStruct
	NestedList
	NestedEnum

	__nodes_end
)