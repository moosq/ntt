package lsp

import "github.com/nokia/ntt/internal/lsp/protocol"

type PredefFunctionDetails struct {
	Label          string
	InsertText     string
	Signature      string
	Documentation  string
	NrOfParameters int
	TextFormat     protocol.InsertTextFormat
}

var predefinedFunctions = []PredefFunctionDetails{
	{
		Label:          "int2char(...)",
		InsertText:     "int2char(${1:invalue})$0",
		Signature:      "int2char(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __int2char__ function converts an __integer__ value in the range of 0 to 127 (8-bit encoding) into a single-character-length\n __charstring__ value. The __integer__ value describes the 8-bit encoding of the character",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "int2unichar(...)",
		InsertText:     "int2unichar(${1:invalue})$0",
		Signature:      "int2unichar(in integer invalue) return universal charstring",
		Documentation:  "## (TTCN-3)\nThe __int2unichar__ function n converts an __integer__ value in the range of 0 to 2147483647 (32-bit encoding) into a single-character-length __universal charstring__ value. The __integer__ value describes the 32-bit encoding of the character.",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "int2bit(...)",
		InsertText:     "int2bit(${1:invalue}, ${2:length})$0",
		Signature:      "int2bit(in integer invalue, in integer length) return bitstring",
		Documentation:  "## (TTCN-3)\nThe __int2bit__ function converts a single __integer__ value to a single __bitstring__ value. The resulting string is length bits long. Error causes are:\n* invalue is less than zero;\n* the conversion yields a return value with more bits than specified by length.",
		NrOfParameters: 2,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "int2enum(...)",
		InsertText:     "int2enum(${1:invalue}, ${2:outpar})$0",
		Signature:      "int2enum ( in integer inpar, out Enumerated_type outpar)",
		Documentation:  "## (TTCN-3)\nThe __int2enum__ function converts an integer value into an enumerated value of a given enumerated type. The integer value shall be provided as in parameter and the result of the conversion shall be stored in an out parameter. The type of the out parameter determines the type into which the in parameter is converted.",
		NrOfParameters: 2,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "int2hex(...)",
		InsertText:     "int2hex(${1:invalue})$0",
		Signature:      "int2hex(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __int2hex__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "int2oct(...)",
		InsertText:     "int2oct(${1:invalue})$0",
		Signature:      "int2oct(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __int2oct__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "int2str(...)",
		InsertText:     "int2str(${1:invalue})$0",
		Signature:      "int2str(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __int2str__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "int2float(...)",
		InsertText:     "int2float(${1:invalue})$0",
		Signature:      "int2float(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __int2float__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "float2int(...)",
		InsertText:     "float2int(${1:invalue})$0",
		Signature:      "float2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __float2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "char2int(...)",
		InsertText:     "char2int(${1:invalue})$0",
		Signature:      "char2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __char2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "char2oct(...)",
		InsertText:     "char2oct(${1:invalue})$0",
		Signature:      "char2oct(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __char2oct__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "unichar2int(...)",
		InsertText:     "unichar2int(${1:invalue})$0",
		Signature:      "unichar2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __unichar2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "unichar2oct(...)",
		InsertText:     "unichar2oct(${1:invalue})$0",
		Signature:      "unichar2oct(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __unichar2oct__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "bit2int(...)",
		InsertText:     "bit2int(${1:invalue})$0",
		Signature:      "bit2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __bit2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "bit2hex(...)",
		InsertText:     "bit2hex(${1:invalue})$0",
		Signature:      "bit2hex(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __bit2hex__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "bit2oct(...)",
		InsertText:     "bit2oct(${1:invalue})$0",
		Signature:      "bit2oct(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __bit2oct__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "bit2str(...)",
		InsertText:     "bit2str(${1:invalue})$0",
		Signature:      "bit2str(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __bit2str__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "hex2int(...)",
		InsertText:     "hex2int(${1:invalue})$0",
		Signature:      "hex2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __hex2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "hex2bit(...)",
		InsertText:     "hex2bit(${1:invalue})$0",
		Signature:      "hex2bit(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __hex2bit__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "hex2oct(...)",
		InsertText:     "hex2oct(${1:invalue})$0",
		Signature:      "hex2oct(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __hex2oct__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "hex2str(...)",
		InsertText:     "hex2str(${1:invalue})$0",
		Signature:      "hex2str(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __hex2str__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "oct2int(...)",
		InsertText:     "oct2int(${1:invalue})$0",
		Signature:      "oct2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __oct2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "oct2bit(...)",
		InsertText:     "oct2bit(${1:invalue})$0",
		Signature:      "oct2bit(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __oct2bit__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "oct2hex(...)",
		InsertText:     "oct2hex(${1:invalue})$0",
		Signature:      "oct2hex(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __oct2hex__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "oct2str(...)",
		InsertText:     "oct2str(${1:invalue})$0",
		Signature:      "oct2str(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __oct2str__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "oct2char(...)",
		InsertText:     "oct2char(${1:invalue})$0",
		Signature:      "oct2char(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __oct2char__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "oct2unichar(...)",
		InsertText:     "oct2unichar(${1:invalue})$0",
		Signature:      "oct2unichar(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __oct2unichar__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "str2int(...)",
		InsertText:     "str2int(${1:invalue})$0",
		Signature:      "str2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __str2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "str2hex(...)",
		InsertText:     "str2hex(${1:invalue})$0",
		Signature:      "str2hex(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __str2hex__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "str2oct(...)",
		InsertText:     "str2oct(${1:invalue})$0",
		Signature:      "str2oct(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __str2oct__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "str2float(...)",
		InsertText:     "str2float(${1:invalue})$0",
		Signature:      "str2float(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __str2float__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "enum2int(...)",
		InsertText:     "enum2int(${1:invalue})$0",
		Signature:      "enum2int(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __enum2int__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "any2unistr(...)",
		InsertText:     "any2unistr(${1:invalue})$0",
		Signature:      "any2unistr(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __any2unistr__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "lengthof(...)",
		InsertText:     "lengthof(${1:invalue})$0",
		Signature:      "lengthof(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __lengthof__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "sizeof(...)",
		InsertText:     "sizeof(${1:invalue})$0",
		Signature:      "sizeof(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __sizeof__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "ispresent(...)",
		InsertText:     "ispresent(${1:invalue})$0",
		Signature:      "ispresent(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __ispresent__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "ischosen(...)",
		InsertText:     "ischosen(${1:invalue})$0",
		Signature:      "ischosen(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __ischosen__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "isvalue(...)",
		InsertText:     "isvalue(${1:invalue})$0",
		Signature:      "isvalue(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __isvalue__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "isbound(...)",
		InsertText:     "isbound(${1:invalue})$0",
		Signature:      "isbound(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __isbound__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "istemplatekind(...)",
		InsertText:     "istemplatekind(${1:invalue})$0",
		Signature:      "istemplatekind(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __istemplatekind__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "regexp(...)",
		InsertText:     "regexp(${1:invalue})$0",
		Signature:      "regexp(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __regexp__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "substr(...)",
		InsertText:     "substr(${1:invalue})$0",
		Signature:      "substr(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __substr__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "replace(...)",
		InsertText:     "replace(${1:invalue})$0",
		Signature:      "replace(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __replace__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "encvalue(...)",
		InsertText:     "encvalue(${1:invalue})$0",
		Signature:      "encvalue(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __encvalue__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "decvalue(...)",
		InsertText:     "decvalue(${1:invalue})$0",
		Signature:      "decvalue(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __decvalue__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "encvalue_unichar(...)",
		InsertText:     "encvalue_unichar(${1:invalue})$0",
		Signature:      "encvalue_unichar(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __encvalue_unichar__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "decvalue_unichar(...)",
		InsertText:     "decvalue_unichar(${1:invalue})$0",
		Signature:      "decvalue_unichar(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __decvalue_unichar__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:          "encvalue_o(...)",
		InsertText:     "encvalue_o(${1:invalue})$0",
		Signature:      "encvalue_o(in integer invalue) return charstring",
		Documentation:  "## (TTCN-3)\nThe __encvalue_o__ function ",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:      "decvalue_o(...)",
		InsertText: "decvalue_o(${1:encoded_value}, ${2:decoded_value}, ${3:decoding_info}, ${4:dynamic_encoding})$0",
		Signature: `decvalue_o(inout octetstring encoded_value,
out any decoded_value,
in universal charstring decoding_info := "",
in universal charstring dynamic_encoding := "") return integer`,
		Documentation: `## (TTCN-3)
The __decvalue_o__ function decodes an octetstring into a value. The test system shall suppose that the octetstring
_encoded_value_ represents an encoded instance of the actual type of _decoded_value_. The optional
_decoding_info_ parameter is used for passing additional decoding information to the codec and, if it is omitted, no
additional information is sent to the codec.

The optional _dynamic_encoding_ parameter is used for dynamic selection of __encode__ attribute of the
decoded_value parameter for this single __decvalue_o__ call. The rules for dynamic selection of the __encode__
attribute are described in clause 27.9 of the TTCN-3 core language specification.

If the decoding was successful, then the used octets are removed from the parameter _encoded_value_, the rest is
returned (in the parameter _encoded_value_), and the decoded value is returned in the parameter _decoded_value_.
If the decoding was unsuccessful, the actual parameters for _encoded_value_ and _decoded_value_ are not
changed. The function shall return an integer value to indicate success or failure of the decoding below:

* The return value 0 indicates that decoding was successful.
* The return value 1 indicates an unspecified cause of decoding failure. This value is also returned if the
_encoded_value_ parameter contains an unitialized value.
* The return value 2 indicates that decoding could not be completed as _encoded_value_ did not contain
enough octets.
`,
		NrOfParameters: 4,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:      "get_stringencoding(...)",
		InsertText: "get_stringencoding(${1:encoded_value})$0",
		Signature:  "get_stringencoding(in octettstring encoded_value) return octettstring",
		Documentation: `## (TTCN-3)
The __get_stringencoding__ function analyses the encoded_value and returns the UCS encoding scheme according to
clause 10 of ISO/IEC 10646 [2] (see also clause 27.5 of the TTCN-3 core language specification). The identified encoding scheme, or the
value "<unknown>", if the type of encoding cannot be determined unanimously, shall be returned as a character string.

The initial octet sequence (also known as byte order mark, BOM), when present, allows identifying the
encoding scheme unanimously. When it is not present, other symptoms may be used to identify the
encoding scheme unanimously; for example, only UTF-8 may have odd number of octets and bit
distribution according to table 2 of clause 9.1 of ISO/IEC 10646 [2].

Example:

    match ( get_stringencoding('6869C3BA7A'O),charstring:"UTF-8") // true
    //(the octetstring contains the UTF-8 encoding of the character sequence "hiúz")
`,
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:      "remove_bom(...)",
		InsertText: "remove_bom(${1:encoded_value})$0",
		Signature:  "remove_bom(in octettstring encoded_value) return octettstring",
		Documentation: `## (TTCN-3)
The __remove_bom__ function removes the optional FEFF ZERO WIDTH NO-BREAK SPACE sequence that may be
present at the beginning of a stream of serialized (encoded) universal character strings to indicate the order of the octets
within the encoding form, as defined in clause 10 of ISO/IEC 10646 [2]. If no FEFF ZERO WIDTH NO-BREAK
SPACE sequence present in the _encoded_value_ parameter, the function shall return the value of the parameter
without change.`,
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:      "rnd(...)",
		InsertText: "rnd(${1:seed})$0",
		Signature:  "rnd([in float seed]) return float",
		Documentation: `## (TTCN-3)
The __rnd__ function returns a (pseudo) random number less than 1 but greater or equal to 0. The random number
generator is initialized per test component and for the control part by means of an optional seed value (a numerical float
value). If no new seed is provided, the last generated number will be used as seed for the next random number. Without
a previous initialization a value calculated from the system time will be used as seed value when __rnd__ is used the first
time in a test component or the control part.

Each time the __rnd__ function is initialized with the same seed value, it shall repeat the same sequence of random
numbers.

For the purpose of keeping parallel testing deterministic, each test component, as well as the control part
has its own random seed. This allows for better reproducibility of test executions. Thus, the __rnd__ function
will always use the seed of the component or control part which calls it.

To produce a random integers in a given range, the following formula can be used:

    float2int(int2float(upperbound - lowerbound +1)*rnd()) + lowerbound
    // Here, upperbound and lowerbound denote highest and lowest number in range.

`,
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:      "testcasename()",
		InsertText: "testcasename()$0",
		Signature:  "testcasename() return charstring",
		Documentation: `## (TTCN-3)
The __testcasename__ function shall return the unqualified name of the actually executing test case.

When the function __testcasename__ is called if the control part is being executed but no testcase, it shall return the
empty string.`,

		NrOfParameters: 0,
		TextFormat:     protocol.SnippetTextFormat},
	{
		Label:      "hostid(...)",
		InsertText: "hostid($1)$0",
		Signature:  "hostid(in charstring idkind := \"Ipv4orIPv6\") return charstring",
		Documentation: "## (TTCN-3)\nThe __hostid__ function shall return the host id of the test component or module control executing the hostid function	in form of a character string. The in parameter idkind allows to specify the expected id format to be returned.	Predefined _idkind_ values are:\n* \"Ipv4orIPv6\": The contents of the returned character string is an Ipv4 address. If no Ipv4 address, but an	Ipv6 address is available, a character string representation of the Ipv6 address is returned.\n* \"Ipv4\": The contents of the returned character string shall be an Ipv4 address.\n* \"Ipv6\": The contents of the returned characterstring shall be an Ipv6 address.",
		NrOfParameters: 1,
		TextFormat:     protocol.SnippetTextFormat}}
