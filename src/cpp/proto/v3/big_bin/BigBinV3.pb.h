// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BigBinV3.proto

#ifndef PROTOBUF_BigBinV3_2eproto__INCLUDED
#define PROTOBUF_BigBinV3_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace protobuf_BigBinV3_2eproto {
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
void InitDefaultsBigBinV3Impl();
void InitDefaultsBigBinV3();
inline void InitDefaults() {
  InitDefaultsBigBinV3();
}
}  // namespace protobuf_BigBinV3_2eproto
namespace v3 {
class BigBinV3;
class BigBinV3DefaultTypeInternal;
extern BigBinV3DefaultTypeInternal _BigBinV3_default_instance_;
}  // namespace v3
namespace v3 {

// ===================================================================

class BigBinV3 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.BigBinV3) */ {
 public:
  BigBinV3();
  virtual ~BigBinV3();

  BigBinV3(const BigBinV3& from);

  inline BigBinV3& operator=(const BigBinV3& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BigBinV3(BigBinV3&& from) noexcept
    : BigBinV3() {
    *this = ::std::move(from);
  }

  inline BigBinV3& operator=(BigBinV3&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BigBinV3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BigBinV3* internal_default_instance() {
    return reinterpret_cast<const BigBinV3*>(
               &_BigBinV3_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BigBinV3* other);
  friend void swap(BigBinV3& a, BigBinV3& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BigBinV3* New() const PROTOBUF_FINAL { return New(NULL); }

  BigBinV3* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BigBinV3& from);
  void MergeFrom(const BigBinV3& from);
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
  void InternalSwap(BigBinV3* other);
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

  // string newBinData = 3;
  void clear_newbindata();
  static const int kNewBinDataFieldNumber = 3;
  const ::std::string& newbindata() const;
  void set_newbindata(const ::std::string& value);
  #if LANG_CXX11
  void set_newbindata(::std::string&& value);
  #endif
  void set_newbindata(const char* value);
  void set_newbindata(const char* value, size_t size);
  ::std::string* mutable_newbindata();
  ::std::string* release_newbindata();
  void set_allocated_newbindata(::std::string* newbindata);

  // int32 status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:v3.BigBinV3)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr newbindata_;
  ::google::protobuf::int32 status_;
  mutable int _cached_size_;
  friend struct ::protobuf_BigBinV3_2eproto::TableStruct;
  friend void ::protobuf_BigBinV3_2eproto::InitDefaultsBigBinV3Impl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BigBinV3

// int32 status = 1;
inline void BigBinV3::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 BigBinV3::status() const {
  // @@protoc_insertion_point(field_get:v3.BigBinV3.status)
  return status_;
}
inline void BigBinV3::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:v3.BigBinV3.status)
}

// string newBinData = 3;
inline void BigBinV3::clear_newbindata() {
  newbindata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BigBinV3::newbindata() const {
  // @@protoc_insertion_point(field_get:v3.BigBinV3.newBinData)
  return newbindata_.GetNoArena();
}
inline void BigBinV3::set_newbindata(const ::std::string& value) {
  
  newbindata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:v3.BigBinV3.newBinData)
}
#if LANG_CXX11
inline void BigBinV3::set_newbindata(::std::string&& value) {
  
  newbindata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3.BigBinV3.newBinData)
}
#endif
inline void BigBinV3::set_newbindata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  newbindata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3.BigBinV3.newBinData)
}
inline void BigBinV3::set_newbindata(const char* value, size_t size) {
  
  newbindata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3.BigBinV3.newBinData)
}
inline ::std::string* BigBinV3::mutable_newbindata() {
  
  // @@protoc_insertion_point(field_mutable:v3.BigBinV3.newBinData)
  return newbindata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BigBinV3::release_newbindata() {
  // @@protoc_insertion_point(field_release:v3.BigBinV3.newBinData)
  
  return newbindata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BigBinV3::set_allocated_newbindata(::std::string* newbindata) {
  if (newbindata != NULL) {
    
  } else {
    
  }
  newbindata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), newbindata);
  // @@protoc_insertion_point(field_set_allocated:v3.BigBinV3.newBinData)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BigBinV3_2eproto__INCLUDED