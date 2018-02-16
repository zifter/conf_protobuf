// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status2.proto

#include "status2.pb.h"

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
namespace v2 {
class Status2DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Status2>
      _instance;
} _Status2_default_instance_;
}  // namespace v2
namespace protobuf_status2_2eproto {
void InitDefaultsStatus2Impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::v2::_Status2_default_instance_;
    new (ptr) ::v2::Status2();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::v2::Status2::InitAsDefaultInstance();
}

void InitDefaultsStatus2() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStatus2Impl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v2::Status2, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v2::Status2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v2::Status2, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::v2::Status2, lang_),
  1,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::v2::Status2)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::v2::_Status2_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "status2.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\rstatus2.proto\022\002v2\"\'\n\007Status2\022\016\n\006status"
      "\030\001 \002(\005\022\014\n\004lang\030\002 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 60);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "status2.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_status2_2eproto
namespace v2 {

// ===================================================================

void Status2::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Status2::kStatusFieldNumber;
const int Status2::kLangFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Status2::Status2()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_status2_2eproto::InitDefaultsStatus2();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:v2.Status2)
}
Status2::Status2(const Status2& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  lang_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_lang()) {
    lang_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.lang_);
  }
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:v2.Status2)
}

void Status2::SharedCtor() {
  _cached_size_ = 0;
  lang_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
}

Status2::~Status2() {
  // @@protoc_insertion_point(destructor:v2.Status2)
  SharedDtor();
}

void Status2::SharedDtor() {
  lang_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Status2::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Status2::descriptor() {
  ::protobuf_status2_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_status2_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Status2& Status2::default_instance() {
  ::protobuf_status2_2eproto::InitDefaultsStatus2();
  return *internal_default_instance();
}

Status2* Status2::New(::google::protobuf::Arena* arena) const {
  Status2* n = new Status2;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Status2::Clear() {
// @@protoc_insertion_point(message_clear_start:v2.Status2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!lang_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*lang_.UnsafeRawStringPointer())->clear();
  }
  status_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Status2::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:v2.Status2)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_status();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string lang = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_lang()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->lang().data(), static_cast<int>(this->lang().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "v2.Status2.lang");
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
  // @@protoc_insertion_point(parse_success:v2.Status2)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:v2.Status2)
  return false;
#undef DO_
}

void Status2::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:v2.Status2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 status = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  // optional string lang = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lang().data(), static_cast<int>(this->lang().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "v2.Status2.lang");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->lang(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:v2.Status2)
}

::google::protobuf::uint8* Status2::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:v2.Status2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 status = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  // optional string lang = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lang().data(), static_cast<int>(this->lang().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "v2.Status2.lang");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->lang(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:v2.Status2)
  return target;
}

size_t Status2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:v2.Status2)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required int32 status = 1;
  if (has_status()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->status());
  }
  // optional string lang = 2;
  if (has_lang()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->lang());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Status2::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:v2.Status2)
  GOOGLE_DCHECK_NE(&from, this);
  const Status2* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Status2>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:v2.Status2)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:v2.Status2)
    MergeFrom(*source);
  }
}

void Status2::MergeFrom(const Status2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:v2.Status2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_lang();
      lang_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.lang_);
    }
    if (cached_has_bits & 0x00000002u) {
      status_ = from.status_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Status2::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:v2.Status2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Status2::CopyFrom(const Status2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:v2.Status2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Status2::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  return true;
}

void Status2::Swap(Status2* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Status2::InternalSwap(Status2* other) {
  using std::swap;
  lang_.Swap(&other->lang_);
  swap(status_, other->status_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Status2::GetMetadata() const {
  protobuf_status2_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_status2_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v2

// @@protoc_insertion_point(global_scope)