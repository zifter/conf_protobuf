// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BigBinV2.proto

#include "BigBinV2.pb.h"

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
class BigBinV2DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BigBinV2>
      _instance;
} _BigBinV2_default_instance_;
}  // namespace v3
namespace protobuf_BigBinV2_2eproto {
void InitDefaultsBigBinV2Impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::v3::_BigBinV2_default_instance_;
    new (ptr) ::v3::BigBinV2();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::v3::BigBinV2::InitAsDefaultInstance();
}

void InitDefaultsBigBinV2() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBigBinV2Impl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::BigBinV2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::BigBinV2, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v3::BigBinV2, newbindata_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::v3::BigBinV2)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::v3::_BigBinV2_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "BigBinV2.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
      "\n\016BigBinV2.proto\022\002v3\"4\n\010BigBinV2\022\016\n\006stat"
      "us\030\001 \001(\005\022\022\n\nnewBinData\030\003 \001(\tJ\004\010\002\020\003b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 82);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BigBinV2.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_BigBinV2_2eproto
namespace v3 {

// ===================================================================

void BigBinV2::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BigBinV2::kStatusFieldNumber;
const int BigBinV2::kNewBinDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BigBinV2::BigBinV2()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_BigBinV2_2eproto::InitDefaultsBigBinV2();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:v3.BigBinV2)
}
BigBinV2::BigBinV2(const BigBinV2& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  newbindata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.newbindata().size() > 0) {
    newbindata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.newbindata_);
  }
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:v3.BigBinV2)
}

void BigBinV2::SharedCtor() {
  newbindata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
  _cached_size_ = 0;
}

BigBinV2::~BigBinV2() {
  // @@protoc_insertion_point(destructor:v3.BigBinV2)
  SharedDtor();
}

void BigBinV2::SharedDtor() {
  newbindata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BigBinV2::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BigBinV2::descriptor() {
  ::protobuf_BigBinV2_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_BigBinV2_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BigBinV2& BigBinV2::default_instance() {
  ::protobuf_BigBinV2_2eproto::InitDefaultsBigBinV2();
  return *internal_default_instance();
}

BigBinV2* BigBinV2::New(::google::protobuf::Arena* arena) const {
  BigBinV2* n = new BigBinV2;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BigBinV2::Clear() {
// @@protoc_insertion_point(message_clear_start:v3.BigBinV2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  newbindata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
  _internal_metadata_.Clear();
}

bool BigBinV2::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:v3.BigBinV2)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string newBinData = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_newbindata()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->newbindata().data(), static_cast<int>(this->newbindata().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "v3.BigBinV2.newBinData"));
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
  // @@protoc_insertion_point(parse_success:v3.BigBinV2)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:v3.BigBinV2)
  return false;
#undef DO_
}

void BigBinV2::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:v3.BigBinV2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  // string newBinData = 3;
  if (this->newbindata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->newbindata().data(), static_cast<int>(this->newbindata().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "v3.BigBinV2.newBinData");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->newbindata(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:v3.BigBinV2)
}

::google::protobuf::uint8* BigBinV2::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:v3.BigBinV2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  // string newBinData = 3;
  if (this->newbindata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->newbindata().data(), static_cast<int>(this->newbindata().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "v3.BigBinV2.newBinData");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->newbindata(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:v3.BigBinV2)
  return target;
}

size_t BigBinV2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:v3.BigBinV2)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string newBinData = 3;
  if (this->newbindata().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->newbindata());
  }

  // int32 status = 1;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BigBinV2::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:v3.BigBinV2)
  GOOGLE_DCHECK_NE(&from, this);
  const BigBinV2* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BigBinV2>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:v3.BigBinV2)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:v3.BigBinV2)
    MergeFrom(*source);
  }
}

void BigBinV2::MergeFrom(const BigBinV2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:v3.BigBinV2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.newbindata().size() > 0) {

    newbindata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.newbindata_);
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
}

void BigBinV2::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:v3.BigBinV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BigBinV2::CopyFrom(const BigBinV2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:v3.BigBinV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BigBinV2::IsInitialized() const {
  return true;
}

void BigBinV2::Swap(BigBinV2* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BigBinV2::InternalSwap(BigBinV2* other) {
  using std::swap;
  newbindata_.Swap(&other->newbindata_);
  swap(status_, other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BigBinV2::GetMetadata() const {
  protobuf_BigBinV2_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_BigBinV2_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v3

// @@protoc_insertion_point(global_scope)