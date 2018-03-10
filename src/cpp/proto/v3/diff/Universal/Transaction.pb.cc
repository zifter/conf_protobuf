// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/diff/Universal/Transaction.proto

#include "v3/diff/Universal/Transaction.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace v3 {
namespace diff {
namespace universal {
class TransactionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Transaction>
      _instance;
  double data_double_;
  float data_float_;
  ::google::protobuf::int32 data_int32_;
  ::google::protobuf::int64 data_int64_;
  ::google::protobuf::uint32 data_uint32_;
  ::google::protobuf::uint64 data_uint64_;
  bool data_bool_;
  ::google::protobuf::internal::ArenaStringPtr data_string_;
  ::google::protobuf::internal::ArenaStringPtr data_bytes_;
} _Transaction_default_instance_;
}  // namespace universal
}  // namespace diff
}  // namespace v3
namespace protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto {
void InitDefaultsTransactionImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::v3::diff::universal::_Transaction_default_instance_;
    new (ptr) ::v3::diff::universal::Transaction();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::v3::diff::universal::Transaction::InitAsDefaultInstance();
}

void InitDefaultsTransaction() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTransactionImpl);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::diff::universal::Transaction, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::diff::universal::Transaction, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::diff::universal::Transaction, path_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_double_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_float_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_int32_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_int64_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_uint32_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_uint64_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_bool_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_string_),
  offsetof(::v3::diff::universal::TransactionDefaultTypeInternal, data_bytes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::diff::universal::Transaction, operation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::diff::universal::Transaction, data_or_key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::diff::universal::Transaction, value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::diff::universal::Transaction, scalar_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::v3::diff::universal::Transaction)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::v3::diff::universal::_Transaction_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "v3/diff/Universal/Transaction.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n#v3/diff/Universal/Transaction.proto\022\021v"
      "3.diff.universal\"\353\002\n\013Transaction\022\014\n\004path"
      "\030\001 \003(\005\022\025\n\013data_double\030\002 \001(\001H\000\022\024\n\ndata_fl"
      "oat\030\003 \001(\002H\000\022\024\n\ndata_int32\030\004 \001(\005H\000\022\024\n\ndat"
      "a_int64\030\005 \001(\003H\000\022\025\n\013data_uint32\030\006 \001(\rH\000\022\025"
      "\n\013data_uint64\030\007 \001(\004H\000\022\023\n\tdata_bool\030\010 \001(\010"
      "H\000\022\025\n\013data_string\030\t \001(\tH\000\022\024\n\ndata_bytes\030"
      "\n \001(\014H\000\0228\n\toperation\030\013 \001(\0162%.v3.diff.uni"
      "versal.Transaction.OpType\022\023\n\013data_or_key"
      "\030\014 \001(\014\022\r\n\005value\030\r \001(\014\"\035\n\006OpType\022\007\n\003ADD\020\000"
      "\022\n\n\006DELETE\020\001B\010\n\006scalarb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 430);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "v3/diff/Universal/Transaction.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto
namespace v3 {
namespace diff {
namespace universal {
const ::google::protobuf::EnumDescriptor* Transaction_OpType_descriptor() {
  protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::file_level_enum_descriptors[0];
}
bool Transaction_OpType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Transaction_OpType Transaction::ADD;
const Transaction_OpType Transaction::DELETE;
const Transaction_OpType Transaction::OpType_MIN;
const Transaction_OpType Transaction::OpType_MAX;
const int Transaction::OpType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Transaction::InitAsDefaultInstance() {
  ::v3::diff::universal::_Transaction_default_instance_.data_double_ = 0;
  ::v3::diff::universal::_Transaction_default_instance_.data_float_ = 0;
  ::v3::diff::universal::_Transaction_default_instance_.data_int32_ = 0;
  ::v3::diff::universal::_Transaction_default_instance_.data_int64_ = GOOGLE_LONGLONG(0);
  ::v3::diff::universal::_Transaction_default_instance_.data_uint32_ = 0u;
  ::v3::diff::universal::_Transaction_default_instance_.data_uint64_ = GOOGLE_ULONGLONG(0);
  ::v3::diff::universal::_Transaction_default_instance_.data_bool_ = false;
  ::v3::diff::universal::_Transaction_default_instance_.data_string_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::v3::diff::universal::_Transaction_default_instance_.data_bytes_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Transaction::kPathFieldNumber;
const int Transaction::kDataDoubleFieldNumber;
const int Transaction::kDataFloatFieldNumber;
const int Transaction::kDataInt32FieldNumber;
const int Transaction::kDataInt64FieldNumber;
const int Transaction::kDataUint32FieldNumber;
const int Transaction::kDataUint64FieldNumber;
const int Transaction::kDataBoolFieldNumber;
const int Transaction::kDataStringFieldNumber;
const int Transaction::kDataBytesFieldNumber;
const int Transaction::kOperationFieldNumber;
const int Transaction::kDataOrKeyFieldNumber;
const int Transaction::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Transaction::Transaction()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::InitDefaultsTransaction();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:v3.diff.universal.Transaction)
}
Transaction::Transaction(const Transaction& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      path_(from.path_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_or_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data_or_key().size() > 0) {
    data_or_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_or_key_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  operation_ = from.operation_;
  clear_has_scalar();
  switch (from.scalar_case()) {
    case kDataDouble: {
      set_data_double(from.data_double());
      break;
    }
    case kDataFloat: {
      set_data_float(from.data_float());
      break;
    }
    case kDataInt32: {
      set_data_int32(from.data_int32());
      break;
    }
    case kDataInt64: {
      set_data_int64(from.data_int64());
      break;
    }
    case kDataUint32: {
      set_data_uint32(from.data_uint32());
      break;
    }
    case kDataUint64: {
      set_data_uint64(from.data_uint64());
      break;
    }
    case kDataBool: {
      set_data_bool(from.data_bool());
      break;
    }
    case kDataString: {
      set_data_string(from.data_string());
      break;
    }
    case kDataBytes: {
      set_data_bytes(from.data_bytes());
      break;
    }
    case SCALAR_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:v3.diff.universal.Transaction)
}

void Transaction::SharedCtor() {
  data_or_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  operation_ = 0;
  clear_has_scalar();
  _cached_size_ = 0;
}

Transaction::~Transaction() {
  // @@protoc_insertion_point(destructor:v3.diff.universal.Transaction)
  SharedDtor();
}

void Transaction::SharedDtor() {
  data_or_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (has_scalar()) {
    clear_scalar();
  }
}

void Transaction::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transaction::descriptor() {
  ::protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Transaction& Transaction::default_instance() {
  ::protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::InitDefaultsTransaction();
  return *internal_default_instance();
}

Transaction* Transaction::New(::google::protobuf::Arena* arena) const {
  Transaction* n = new Transaction;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Transaction::clear_scalar() {
// @@protoc_insertion_point(one_of_clear_start:v3.diff.universal.Transaction)
  switch (scalar_case()) {
    case kDataDouble: {
      // No need to clear
      break;
    }
    case kDataFloat: {
      // No need to clear
      break;
    }
    case kDataInt32: {
      // No need to clear
      break;
    }
    case kDataInt64: {
      // No need to clear
      break;
    }
    case kDataUint32: {
      // No need to clear
      break;
    }
    case kDataUint64: {
      // No need to clear
      break;
    }
    case kDataBool: {
      // No need to clear
      break;
    }
    case kDataString: {
      scalar_.data_string_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kDataBytes: {
      scalar_.data_bytes_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case SCALAR_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = SCALAR_NOT_SET;
}


void Transaction::Clear() {
// @@protoc_insertion_point(message_clear_start:v3.diff.universal.Transaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  path_.Clear();
  data_or_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  operation_ = 0;
  clear_scalar();
  _internal_metadata_.Clear();
}

bool Transaction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:v3.diff.universal.Transaction)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 path = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_path())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 10u, input, this->mutable_path())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double data_double = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {
          clear_scalar();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &scalar_.data_double_)));
          set_has_data_double();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float data_float = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {
          clear_scalar();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &scalar_.data_float_)));
          set_has_data_float();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 data_int32 = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          clear_scalar();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &scalar_.data_int32_)));
          set_has_data_int32();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 data_int64 = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          clear_scalar();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &scalar_.data_int64_)));
          set_has_data_int64();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 data_uint32 = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          clear_scalar();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scalar_.data_uint32_)));
          set_has_data_uint32();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 data_uint64 = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          clear_scalar();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &scalar_.data_uint64_)));
          set_has_data_uint64();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool data_bool = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          clear_scalar();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &scalar_.data_bool_)));
          set_has_data_bool();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string data_string = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_data_string()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->data_string().data(), static_cast<int>(this->data_string().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "v3.diff.universal.Transaction.data_string"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes data_bytes = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data_bytes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .v3.diff.universal.Transaction.OpType operation = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operation(static_cast< ::v3::diff::universal::Transaction_OpType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes data_or_key = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data_or_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes value = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:v3.diff.universal.Transaction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:v3.diff.universal.Transaction)
  return false;
#undef DO_
}

void Transaction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:v3.diff.universal.Transaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 path = 1;
  if (this->path_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _path_cached_byte_size_));
  }
  for (int i = 0, n = this->path_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->path(i), output);
  }

  // double data_double = 2;
  if (has_data_double()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->data_double(), output);
  }

  // float data_float = 3;
  if (has_data_float()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->data_float(), output);
  }

  // int32 data_int32 = 4;
  if (has_data_int32()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->data_int32(), output);
  }

  // int64 data_int64 = 5;
  if (has_data_int64()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->data_int64(), output);
  }

  // uint32 data_uint32 = 6;
  if (has_data_uint32()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->data_uint32(), output);
  }

  // uint64 data_uint64 = 7;
  if (has_data_uint64()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->data_uint64(), output);
  }

  // bool data_bool = 8;
  if (has_data_bool()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->data_bool(), output);
  }

  // string data_string = 9;
  if (has_data_string()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->data_string().data(), static_cast<int>(this->data_string().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "v3.diff.universal.Transaction.data_string");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->data_string(), output);
  }

  // bytes data_bytes = 10;
  if (has_data_bytes()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      10, this->data_bytes(), output);
  }

  // .v3.diff.universal.Transaction.OpType operation = 11;
  if (this->operation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      11, this->operation(), output);
  }

  // bytes data_or_key = 12;
  if (this->data_or_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      12, this->data_or_key(), output);
  }

  // bytes value = 13;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      13, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:v3.diff.universal.Transaction)
}

::google::protobuf::uint8* Transaction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:v3.diff.universal.Transaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 path = 1;
  if (this->path_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _path_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->path_, target);
  }

  // double data_double = 2;
  if (has_data_double()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->data_double(), target);
  }

  // float data_float = 3;
  if (has_data_float()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->data_float(), target);
  }

  // int32 data_int32 = 4;
  if (has_data_int32()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->data_int32(), target);
  }

  // int64 data_int64 = 5;
  if (has_data_int64()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->data_int64(), target);
  }

  // uint32 data_uint32 = 6;
  if (has_data_uint32()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->data_uint32(), target);
  }

  // uint64 data_uint64 = 7;
  if (has_data_uint64()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->data_uint64(), target);
  }

  // bool data_bool = 8;
  if (has_data_bool()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->data_bool(), target);
  }

  // string data_string = 9;
  if (has_data_string()) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->data_string().data(), static_cast<int>(this->data_string().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "v3.diff.universal.Transaction.data_string");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->data_string(), target);
  }

  // bytes data_bytes = 10;
  if (has_data_bytes()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        10, this->data_bytes(), target);
  }

  // .v3.diff.universal.Transaction.OpType operation = 11;
  if (this->operation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      11, this->operation(), target);
  }

  // bytes data_or_key = 12;
  if (this->data_or_key().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        12, this->data_or_key(), target);
  }

  // bytes value = 13;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        13, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:v3.diff.universal.Transaction)
  return target;
}

size_t Transaction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:v3.diff.universal.Transaction)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int32 path = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->path_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _path_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // bytes data_or_key = 12;
  if (this->data_or_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data_or_key());
  }

  // bytes value = 13;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  // .v3.diff.universal.Transaction.OpType operation = 11;
  if (this->operation() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operation());
  }

  switch (scalar_case()) {
    // double data_double = 2;
    case kDataDouble: {
      total_size += 1 + 8;
      break;
    }
    // float data_float = 3;
    case kDataFloat: {
      total_size += 1 + 4;
      break;
    }
    // int32 data_int32 = 4;
    case kDataInt32: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->data_int32());
      break;
    }
    // int64 data_int64 = 5;
    case kDataInt64: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->data_int64());
      break;
    }
    // uint32 data_uint32 = 6;
    case kDataUint32: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->data_uint32());
      break;
    }
    // uint64 data_uint64 = 7;
    case kDataUint64: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->data_uint64());
      break;
    }
    // bool data_bool = 8;
    case kDataBool: {
      total_size += 1 + 1;
      break;
    }
    // string data_string = 9;
    case kDataString: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->data_string());
      break;
    }
    // bytes data_bytes = 10;
    case kDataBytes: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data_bytes());
      break;
    }
    case SCALAR_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Transaction::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:v3.diff.universal.Transaction)
  GOOGLE_DCHECK_NE(&from, this);
  const Transaction* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Transaction>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:v3.diff.universal.Transaction)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:v3.diff.universal.Transaction)
    MergeFrom(*source);
  }
}

void Transaction::MergeFrom(const Transaction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:v3.diff.universal.Transaction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  path_.MergeFrom(from.path_);
  if (from.data_or_key().size() > 0) {

    data_or_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_or_key_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.operation() != 0) {
    set_operation(from.operation());
  }
  switch (from.scalar_case()) {
    case kDataDouble: {
      set_data_double(from.data_double());
      break;
    }
    case kDataFloat: {
      set_data_float(from.data_float());
      break;
    }
    case kDataInt32: {
      set_data_int32(from.data_int32());
      break;
    }
    case kDataInt64: {
      set_data_int64(from.data_int64());
      break;
    }
    case kDataUint32: {
      set_data_uint32(from.data_uint32());
      break;
    }
    case kDataUint64: {
      set_data_uint64(from.data_uint64());
      break;
    }
    case kDataBool: {
      set_data_bool(from.data_bool());
      break;
    }
    case kDataString: {
      set_data_string(from.data_string());
      break;
    }
    case kDataBytes: {
      set_data_bytes(from.data_bytes());
      break;
    }
    case SCALAR_NOT_SET: {
      break;
    }
  }
}

void Transaction::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:v3.diff.universal.Transaction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transaction::CopyFrom(const Transaction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:v3.diff.universal.Transaction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transaction::IsInitialized() const {
  return true;
}

void Transaction::Swap(Transaction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Transaction::InternalSwap(Transaction* other) {
  using std::swap;
  path_.InternalSwap(&other->path_);
  data_or_key_.Swap(&other->data_or_key_);
  value_.Swap(&other->value_);
  swap(operation_, other->operation_);
  swap(scalar_, other->scalar_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Transaction::GetMetadata() const {
  protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_v3_2fdiff_2fUniversal_2fTransaction_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace universal
}  // namespace diff
}  // namespace v3

// @@protoc_insertion_point(global_scope)