// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.24.0
// 	protoc        v3.11.2
// source: value.proto

package protobuf

import (
	proto "github.com/golang/protobuf/proto"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

type Verdict int32

const (
	Verdict_NONE   Verdict = 0
	Verdict_PASS   Verdict = 1
	Verdict_INCONC Verdict = 2
	Verdict_FAIL   Verdict = 3
	Verdict_ERROR  Verdict = 4
)

// Enum value maps for Verdict.
var (
	Verdict_name = map[int32]string{
		0: "NONE",
		1: "PASS",
		2: "INCONC",
		3: "FAIL",
		4: "ERROR",
	}
	Verdict_value = map[string]int32{
		"NONE":   0,
		"PASS":   1,
		"INCONC": 2,
		"FAIL":   3,
		"ERROR":  4,
	}
)

func (x Verdict) Enum() *Verdict {
	p := new(Verdict)
	*p = x
	return p
}

func (x Verdict) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (Verdict) Descriptor() protoreflect.EnumDescriptor {
	return file_value_proto_enumTypes[0].Descriptor()
}

func (Verdict) Type() protoreflect.EnumType {
	return &file_value_proto_enumTypes[0]
}

func (x Verdict) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use Verdict.Descriptor instead.
func (Verdict) EnumDescriptor() ([]byte, []int) {
	return file_value_proto_rawDescGZIP(), []int{0}
}

type Value struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Types that are assignable to Kind:
	//	*Value_ByteValue
	//	*Value_BoolValue
	//	*Value_VerdictValue
	//	*Value_StringValue
	//	*Value_FloatValue
	//	*Value_IntValue
	//	*Value_BigValue
	//	*Value_CompositeValue
	Kind isValue_Kind `protobuf_oneof:"kind"`
}

func (x *Value) Reset() {
	*x = Value{}
	if protoimpl.UnsafeEnabled {
		mi := &file_value_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Value) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Value) ProtoMessage() {}

func (x *Value) ProtoReflect() protoreflect.Message {
	mi := &file_value_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Value.ProtoReflect.Descriptor instead.
func (*Value) Descriptor() ([]byte, []int) {
	return file_value_proto_rawDescGZIP(), []int{0}
}

func (m *Value) GetKind() isValue_Kind {
	if m != nil {
		return m.Kind
	}
	return nil
}

func (x *Value) GetByteValue() []byte {
	if x, ok := x.GetKind().(*Value_ByteValue); ok {
		return x.ByteValue
	}
	return nil
}

func (x *Value) GetBoolValue() bool {
	if x, ok := x.GetKind().(*Value_BoolValue); ok {
		return x.BoolValue
	}
	return false
}

func (x *Value) GetVerdictValue() Verdict {
	if x, ok := x.GetKind().(*Value_VerdictValue); ok {
		return x.VerdictValue
	}
	return Verdict_NONE
}

func (x *Value) GetStringValue() string {
	if x, ok := x.GetKind().(*Value_StringValue); ok {
		return x.StringValue
	}
	return ""
}

func (x *Value) GetFloatValue() float64 {
	if x, ok := x.GetKind().(*Value_FloatValue); ok {
		return x.FloatValue
	}
	return 0
}

func (x *Value) GetIntValue() int32 {
	if x, ok := x.GetKind().(*Value_IntValue); ok {
		return x.IntValue
	}
	return 0
}

func (x *Value) GetBigValue() string {
	if x, ok := x.GetKind().(*Value_BigValue); ok {
		return x.BigValue
	}
	return ""
}

func (x *Value) GetCompositeValue() *Composite {
	if x, ok := x.GetKind().(*Value_CompositeValue); ok {
		return x.CompositeValue
	}
	return nil
}

type isValue_Kind interface {
	isValue_Kind()
}

type Value_ByteValue struct {
	ByteValue []byte `protobuf:"bytes,1,opt,name=byte_value,json=byteValue,proto3,oneof"`
}

type Value_BoolValue struct {
	BoolValue bool `protobuf:"varint,2,opt,name=bool_value,json=boolValue,proto3,oneof"`
}

type Value_VerdictValue struct {
	VerdictValue Verdict `protobuf:"varint,3,opt,name=verdict_value,json=verdictValue,proto3,enum=ntt.Verdict,oneof"`
}

type Value_StringValue struct {
	StringValue string `protobuf:"bytes,4,opt,name=string_value,json=stringValue,proto3,oneof"`
}

type Value_FloatValue struct {
	FloatValue float64 `protobuf:"fixed64,5,opt,name=float_value,json=floatValue,proto3,oneof"`
}

type Value_IntValue struct {
	IntValue int32 `protobuf:"varint,6,opt,name=int_value,json=intValue,proto3,oneof"`
}

type Value_BigValue struct {
	BigValue string `protobuf:"bytes,7,opt,name=big_value,json=bigValue,proto3,oneof"`
}

type Value_CompositeValue struct {
	CompositeValue *Composite `protobuf:"bytes,8,opt,name=composite_value,json=compositeValue,proto3,oneof"`
}

func (*Value_ByteValue) isValue_Kind() {}

func (*Value_BoolValue) isValue_Kind() {}

func (*Value_VerdictValue) isValue_Kind() {}

func (*Value_StringValue) isValue_Kind() {}

func (*Value_FloatValue) isValue_Kind() {}

func (*Value_IntValue) isValue_Kind() {}

func (*Value_BigValue) isValue_Kind() {}

func (*Value_CompositeValue) isValue_Kind() {}

type Composite struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Values []*Value `protobuf:"bytes,1,rep,name=values,proto3" json:"values,omitempty"`
}

func (x *Composite) Reset() {
	*x = Composite{}
	if protoimpl.UnsafeEnabled {
		mi := &file_value_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Composite) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Composite) ProtoMessage() {}

func (x *Composite) ProtoReflect() protoreflect.Message {
	mi := &file_value_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Composite.ProtoReflect.Descriptor instead.
func (*Composite) Descriptor() ([]byte, []int) {
	return file_value_proto_rawDescGZIP(), []int{1}
}

func (x *Composite) GetValues() []*Value {
	if x != nil {
		return x.Values
	}
	return nil
}

var File_value_proto protoreflect.FileDescriptor

var file_value_proto_rawDesc = []byte{
	0x0a, 0x0b, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x03, 0x6e,
	0x74, 0x74, 0x22, 0xc7, 0x02, 0x0a, 0x05, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x1f, 0x0a, 0x0a,
	0x62, 0x79, 0x74, 0x65, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0c,
	0x48, 0x00, 0x52, 0x09, 0x62, 0x79, 0x74, 0x65, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x1f, 0x0a,
	0x0a, 0x62, 0x6f, 0x6f, 0x6c, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28,
	0x08, 0x48, 0x00, 0x52, 0x09, 0x62, 0x6f, 0x6f, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x33,
	0x0a, 0x0d, 0x76, 0x65, 0x72, 0x64, 0x69, 0x63, 0x74, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18,
	0x03, 0x20, 0x01, 0x28, 0x0e, 0x32, 0x0c, 0x2e, 0x6e, 0x74, 0x74, 0x2e, 0x56, 0x65, 0x72, 0x64,
	0x69, 0x63, 0x74, 0x48, 0x00, 0x52, 0x0c, 0x76, 0x65, 0x72, 0x64, 0x69, 0x63, 0x74, 0x56, 0x61,
	0x6c, 0x75, 0x65, 0x12, 0x23, 0x0a, 0x0c, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x5f, 0x76, 0x61,
	0x6c, 0x75, 0x65, 0x18, 0x04, 0x20, 0x01, 0x28, 0x09, 0x48, 0x00, 0x52, 0x0b, 0x73, 0x74, 0x72,
	0x69, 0x6e, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x21, 0x0a, 0x0b, 0x66, 0x6c, 0x6f, 0x61,
	0x74, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x05, 0x20, 0x01, 0x28, 0x01, 0x48, 0x00, 0x52,
	0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x1d, 0x0a, 0x09, 0x69,
	0x6e, 0x74, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x06, 0x20, 0x01, 0x28, 0x05, 0x48, 0x00,
	0x52, 0x08, 0x69, 0x6e, 0x74, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x1d, 0x0a, 0x09, 0x62, 0x69,
	0x67, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x07, 0x20, 0x01, 0x28, 0x09, 0x48, 0x00, 0x52,
	0x08, 0x62, 0x69, 0x67, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x39, 0x0a, 0x0f, 0x63, 0x6f, 0x6d,
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x65, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x08, 0x20, 0x01,
	0x28, 0x0b, 0x32, 0x0e, 0x2e, 0x6e, 0x74, 0x74, 0x2e, 0x43, 0x6f, 0x6d, 0x70, 0x6f, 0x73, 0x69,
	0x74, 0x65, 0x48, 0x00, 0x52, 0x0e, 0x63, 0x6f, 0x6d, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x65, 0x56,
	0x61, 0x6c, 0x75, 0x65, 0x42, 0x06, 0x0a, 0x04, 0x6b, 0x69, 0x6e, 0x64, 0x22, 0x2f, 0x0a, 0x09,
	0x43, 0x6f, 0x6d, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x65, 0x12, 0x22, 0x0a, 0x06, 0x76, 0x61, 0x6c,
	0x75, 0x65, 0x73, 0x18, 0x01, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x0a, 0x2e, 0x6e, 0x74, 0x74, 0x2e,
	0x56, 0x61, 0x6c, 0x75, 0x65, 0x52, 0x06, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x73, 0x2a, 0x3e, 0x0a,
	0x07, 0x56, 0x65, 0x72, 0x64, 0x69, 0x63, 0x74, 0x12, 0x08, 0x0a, 0x04, 0x4e, 0x4f, 0x4e, 0x45,
	0x10, 0x00, 0x12, 0x08, 0x0a, 0x04, 0x50, 0x41, 0x53, 0x53, 0x10, 0x01, 0x12, 0x0a, 0x0a, 0x06,
	0x49, 0x4e, 0x43, 0x4f, 0x4e, 0x43, 0x10, 0x02, 0x12, 0x08, 0x0a, 0x04, 0x46, 0x41, 0x49, 0x4c,
	0x10, 0x03, 0x12, 0x09, 0x0a, 0x05, 0x45, 0x52, 0x52, 0x4f, 0x52, 0x10, 0x04, 0x42, 0x1f, 0x5a,
	0x1d, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x6e, 0x6f, 0x6b, 0x69,
	0x61, 0x2f, 0x6e, 0x74, 0x74, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x62, 0x06,
	0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_value_proto_rawDescOnce sync.Once
	file_value_proto_rawDescData = file_value_proto_rawDesc
)

func file_value_proto_rawDescGZIP() []byte {
	file_value_proto_rawDescOnce.Do(func() {
		file_value_proto_rawDescData = protoimpl.X.CompressGZIP(file_value_proto_rawDescData)
	})
	return file_value_proto_rawDescData
}

var file_value_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_value_proto_msgTypes = make([]protoimpl.MessageInfo, 2)
var file_value_proto_goTypes = []interface{}{
	(Verdict)(0),      // 0: ntt.Verdict
	(*Value)(nil),     // 1: ntt.Value
	(*Composite)(nil), // 2: ntt.Composite
}
var file_value_proto_depIdxs = []int32{
	0, // 0: ntt.Value.verdict_value:type_name -> ntt.Verdict
	2, // 1: ntt.Value.composite_value:type_name -> ntt.Composite
	1, // 2: ntt.Composite.values:type_name -> ntt.Value
	3, // [3:3] is the sub-list for method output_type
	3, // [3:3] is the sub-list for method input_type
	3, // [3:3] is the sub-list for extension type_name
	3, // [3:3] is the sub-list for extension extendee
	0, // [0:3] is the sub-list for field type_name
}

func init() { file_value_proto_init() }
func file_value_proto_init() {
	if File_value_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_value_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Value); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_value_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Composite); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	file_value_proto_msgTypes[0].OneofWrappers = []interface{}{
		(*Value_ByteValue)(nil),
		(*Value_BoolValue)(nil),
		(*Value_VerdictValue)(nil),
		(*Value_StringValue)(nil),
		(*Value_FloatValue)(nil),
		(*Value_IntValue)(nil),
		(*Value_BigValue)(nil),
		(*Value_CompositeValue)(nil),
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_value_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   2,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_value_proto_goTypes,
		DependencyIndexes: file_value_proto_depIdxs,
		EnumInfos:         file_value_proto_enumTypes,
		MessageInfos:      file_value_proto_msgTypes,
	}.Build()
	File_value_proto = out.File
	file_value_proto_rawDesc = nil
	file_value_proto_goTypes = nil
	file_value_proto_depIdxs = nil
}
