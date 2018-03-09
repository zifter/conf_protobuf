// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/big_message/BigMessage.proto

#ifndef PROTOBUF_v3_2fbig_5fmessage_2fBigMessage_2eproto__INCLUDED
#define PROTOBUF_v3_2fbig_5fmessage_2fBigMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "v3/AllFieldsMessage.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_v3_2fbig_5fmessage_2fBigMessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsBigMessageImpl();
void InitDefaultsBigMessage();
inline void InitDefaults() {
  InitDefaultsBigMessage();
}
}  // namespace protobuf_v3_2fbig_5fmessage_2fBigMessage_2eproto
namespace v3 {
class BigMessage;
class BigMessageDefaultTypeInternal;
extern BigMessageDefaultTypeInternal _BigMessage_default_instance_;
}  // namespace v3
namespace v3 {

// ===================================================================

class BigMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.BigMessage) */ {
 public:
  BigMessage();
  virtual ~BigMessage();

  BigMessage(const BigMessage& from);

  inline BigMessage& operator=(const BigMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BigMessage(BigMessage&& from) noexcept
    : BigMessage() {
    *this = ::std::move(from);
  }

  inline BigMessage& operator=(BigMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BigMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BigMessage* internal_default_instance() {
    return reinterpret_cast<const BigMessage*>(
               &_BigMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BigMessage* other);
  friend void swap(BigMessage& a, BigMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BigMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  BigMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BigMessage& from);
  void MergeFrom(const BigMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BigMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .v3.AllFieldsMessage all_fields = 2;
  bool has_all_fields() const;
  void clear_all_fields();
  static const int kAllFieldsFieldNumber = 2;
  const ::v3::AllFieldsMessage& all_fields() const;
  ::v3::AllFieldsMessage* release_all_fields();
  ::v3::AllFieldsMessage* mutable_all_fields();
  void set_allocated_all_fields(::v3::AllFieldsMessage* all_fields);

  // int32 field1 = 1;
  void clear_field1();
  static const int kField1FieldNumber = 1;
  ::google::protobuf::int32 field1() const;
  void set_field1(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:v3.BigMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::v3::AllFieldsMessage* all_fields_;
  ::google::protobuf::int32 field1_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fbig_5fmessage_2fBigMessage_2eproto::TableStruct;
  friend void ::protobuf_v3_2fbig_5fmessage_2fBigMessage_2eproto::InitDefaultsBigMessageImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BigMessage

// int32 field1 = 1;
inline void BigMessage::clear_field1() {
  field1_ = 0;
}
inline ::google::protobuf::int32 BigMessage::field1() const {
  // @@protoc_insertion_point(field_get:v3.BigMessage.field1)
  return field1_;
}
inline void BigMessage::set_field1(::google::protobuf::int32 value) {
  
  field1_ = value;
  // @@protoc_insertion_point(field_set:v3.BigMessage.field1)
}

// .v3.AllFieldsMessage all_fields = 2;
inline bool BigMessage::has_all_fields() const {
  return this != internal_default_instance() && all_fields_ != NULL;
}
inline const ::v3::AllFieldsMessage& BigMessage::all_fields() const {
  const ::v3::AllFieldsMessage* p = all_fields_;
  // @@protoc_insertion_point(field_get:v3.BigMessage.all_fields)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::AllFieldsMessage*>(
      &::v3::_AllFieldsMessage_default_instance_);
}
inline ::v3::AllFieldsMessage* BigMessage::release_all_fields() {
  // @@protoc_insertion_point(field_release:v3.BigMessage.all_fields)
  
  ::v3::AllFieldsMessage* temp = all_fields_;
  all_fields_ = NULL;
  return temp;
}
inline ::v3::AllFieldsMessage* BigMessage::mutable_all_fields() {
  
  if (all_fields_ == NULL) {
    all_fields_ = new ::v3::AllFieldsMessage;
  }
  // @@protoc_insertion_point(field_mutable:v3.BigMessage.all_fields)
  return all_fields_;
}
inline void BigMessage::set_allocated_all_fields(::v3::AllFieldsMessage* all_fields) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(all_fields_);
  }
  if (all_fields) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      all_fields = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, all_fields, submessage_arena);
    }
    
  } else {
    
  }
  all_fields_ = all_fields;
  // @@protoc_insertion_point(field_set_allocated:v3.BigMessage.all_fields)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v3_2fbig_5fmessage_2fBigMessage_2eproto__INCLUDED