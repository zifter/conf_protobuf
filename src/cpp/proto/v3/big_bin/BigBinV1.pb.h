// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/big_bin/BigBinV1.proto

#ifndef PROTOBUF_v3_2fbig_5fbin_2fBigBinV1_2eproto__INCLUDED
#define PROTOBUF_v3_2fbig_5fbin_2fBigBinV1_2eproto__INCLUDED

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

namespace protobuf_v3_2fbig_5fbin_2fBigBinV1_2eproto {
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
void InitDefaultsBigBinV1Impl();
void InitDefaultsBigBinV1();
inline void InitDefaults() {
  InitDefaultsBigBinV1();
}
}  // namespace protobuf_v3_2fbig_5fbin_2fBigBinV1_2eproto
namespace v3 {
class BigBinV1;
class BigBinV1DefaultTypeInternal;
extern BigBinV1DefaultTypeInternal _BigBinV1_default_instance_;
}  // namespace v3
namespace v3 {

// ===================================================================

class BigBinV1 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.BigBinV1) */ {
 public:
  BigBinV1();
  virtual ~BigBinV1();

  BigBinV1(const BigBinV1& from);

  inline BigBinV1& operator=(const BigBinV1& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BigBinV1(BigBinV1&& from) noexcept
    : BigBinV1() {
    *this = ::std::move(from);
  }

  inline BigBinV1& operator=(BigBinV1&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BigBinV1& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BigBinV1* internal_default_instance() {
    return reinterpret_cast<const BigBinV1*>(
               &_BigBinV1_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BigBinV1* other);
  friend void swap(BigBinV1& a, BigBinV1& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BigBinV1* New() const PROTOBUF_FINAL { return New(NULL); }

  BigBinV1* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BigBinV1& from);
  void MergeFrom(const BigBinV1& from);
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
  void InternalSwap(BigBinV1* other);
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

  // string binData = 2;
  void clear_bindata();
  static const int kBinDataFieldNumber = 2;
  const ::std::string& bindata() const;
  void set_bindata(const ::std::string& value);
  #if LANG_CXX11
  void set_bindata(::std::string&& value);
  #endif
  void set_bindata(const char* value);
  void set_bindata(const char* value, size_t size);
  ::std::string* mutable_bindata();
  ::std::string* release_bindata();
  void set_allocated_bindata(::std::string* bindata);

  // int32 status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:v3.BigBinV1)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr bindata_;
  ::google::protobuf::int32 status_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fbig_5fbin_2fBigBinV1_2eproto::TableStruct;
  friend void ::protobuf_v3_2fbig_5fbin_2fBigBinV1_2eproto::InitDefaultsBigBinV1Impl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BigBinV1

// int32 status = 1;
inline void BigBinV1::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 BigBinV1::status() const {
  // @@protoc_insertion_point(field_get:v3.BigBinV1.status)
  return status_;
}
inline void BigBinV1::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:v3.BigBinV1.status)
}

// string binData = 2;
inline void BigBinV1::clear_bindata() {
  bindata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BigBinV1::bindata() const {
  // @@protoc_insertion_point(field_get:v3.BigBinV1.binData)
  return bindata_.GetNoArena();
}
inline void BigBinV1::set_bindata(const ::std::string& value) {
  
  bindata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:v3.BigBinV1.binData)
}
#if LANG_CXX11
inline void BigBinV1::set_bindata(::std::string&& value) {
  
  bindata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3.BigBinV1.binData)
}
#endif
inline void BigBinV1::set_bindata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  bindata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3.BigBinV1.binData)
}
inline void BigBinV1::set_bindata(const char* value, size_t size) {
  
  bindata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3.BigBinV1.binData)
}
inline ::std::string* BigBinV1::mutable_bindata() {
  
  // @@protoc_insertion_point(field_mutable:v3.BigBinV1.binData)
  return bindata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BigBinV1::release_bindata() {
  // @@protoc_insertion_point(field_release:v3.BigBinV1.binData)
  
  return bindata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BigBinV1::set_allocated_bindata(::std::string* bindata) {
  if (bindata != NULL) {
    
  } else {
    
  }
  bindata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bindata);
  // @@protoc_insertion_point(field_set_allocated:v3.BigBinV1.binData)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v3_2fbig_5fbin_2fBigBinV1_2eproto__INCLUDED
