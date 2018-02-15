// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#include "status.pb.h"

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
class StatusDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Status>
      _instance;
} _Status_default_instance_;
namespace protobuf_status_2eproto {
void InitDefaultsStatusImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_Status_default_instance_;
    new (ptr) ::Status();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Status::InitAsDefaultInstance();
}

void InitDefaultsStatus() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStatusImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Status, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Status, lang_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Status)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Status_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "status.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\014status.proto\"&\n\006Status\022\016\n\006status\030\001 \001(\005"
      "\022\014\n\004lang\030\002 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 62);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "status.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_status_2eproto

// ===================================================================

void Status::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Status::kStatusFieldNumber;
const int Status::kLangFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Status::Status()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_status_2eproto::InitDefaultsStatus();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Status)
}
Status::Status(const Status& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  lang_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.lang().size() > 0) {
    lang_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.lang_);
  }
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:Status)
}

void Status::SharedCtor() {
  lang_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
  _cached_size_ = 0;
}

Status::~Status() {
  // @@protoc_insertion_point(destructor:Status)
  SharedDtor();
}

void Status::SharedDtor() {
  lang_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Status::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Status::descriptor() {
  ::protobuf_status_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_status_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Status& Status::default_instance() {
  ::protobuf_status_2eproto::InitDefaultsStatus();
  return *internal_default_instance();
}

Status* Status::New(::google::protobuf::Arena* arena) const {
  Status* n = new Status;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Status::Clear() {
// @@protoc_insertion_point(message_clear_start:Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  lang_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
  _internal_metadata_.Clear();
}

bool Status::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Status)
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

      // string lang = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_lang()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->lang().data(), static_cast<int>(this->lang().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Status.lang"));
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
  // @@protoc_insertion_point(parse_success:Status)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Status)
  return false;
#undef DO_
}

void Status::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  // string lang = 2;
  if (this->lang().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->lang().data(), static_cast<int>(this->lang().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Status.lang");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->lang(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Status)
}

::google::protobuf::uint8* Status::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Status)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  // string lang = 2;
  if (this->lang().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->lang().data(), static_cast<int>(this->lang().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Status.lang");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->lang(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Status)
  return target;
}

size_t Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Status)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string lang = 2;
  if (this->lang().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->lang());
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

void Status::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Status)
  GOOGLE_DCHECK_NE(&from, this);
  const Status* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Status>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Status)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Status)
    MergeFrom(*source);
  }
}

void Status::MergeFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Status)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.lang().size() > 0) {

    lang_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.lang_);
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
}

void Status::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Status::CopyFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Status::IsInitialized() const {
  return true;
}

void Status::Swap(Status* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Status::InternalSwap(Status* other) {
  using std::swap;
  lang_.Swap(&other->lang_);
  swap(status_, other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Status::GetMetadata() const {
  protobuf_status_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_status_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
