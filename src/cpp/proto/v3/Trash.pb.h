// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/Trash.proto

#ifndef PROTOBUF_v3_2fTrash_2eproto__INCLUDED
#define PROTOBUF_v3_2fTrash_2eproto__INCLUDED

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

namespace protobuf_v3_2fTrash_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsLevel0_Level1_Level2_Level3Impl();
void InitDefaultsLevel0_Level1_Level2_Level3();
void InitDefaultsLevel0_Level1_Level2Impl();
void InitDefaultsLevel0_Level1_Level2();
void InitDefaultsLevel0_Level1Impl();
void InitDefaultsLevel0_Level1();
void InitDefaultsLevel0Impl();
void InitDefaultsLevel0();
inline void InitDefaults() {
  InitDefaultsLevel0_Level1_Level2_Level3();
  InitDefaultsLevel0_Level1_Level2();
  InitDefaultsLevel0_Level1();
  InitDefaultsLevel0();
}
}  // namespace protobuf_v3_2fTrash_2eproto
namespace v3 {
namespace trash {
class Level0;
class Level0DefaultTypeInternal;
extern Level0DefaultTypeInternal _Level0_default_instance_;
class Level0_Level1;
class Level0_Level1DefaultTypeInternal;
extern Level0_Level1DefaultTypeInternal _Level0_Level1_default_instance_;
class Level0_Level1_Level2;
class Level0_Level1_Level2DefaultTypeInternal;
extern Level0_Level1_Level2DefaultTypeInternal _Level0_Level1_Level2_default_instance_;
class Level0_Level1_Level2_Level3;
class Level0_Level1_Level2_Level3DefaultTypeInternal;
extern Level0_Level1_Level2_Level3DefaultTypeInternal _Level0_Level1_Level2_Level3_default_instance_;
}  // namespace trash
}  // namespace v3
namespace v3 {
namespace trash {

// ===================================================================

class Level0_Level1_Level2_Level3 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.trash.Level0.Level1.Level2.Level3) */ {
 public:
  Level0_Level1_Level2_Level3();
  virtual ~Level0_Level1_Level2_Level3();

  Level0_Level1_Level2_Level3(const Level0_Level1_Level2_Level3& from);

  inline Level0_Level1_Level2_Level3& operator=(const Level0_Level1_Level2_Level3& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Level0_Level1_Level2_Level3(Level0_Level1_Level2_Level3&& from) noexcept
    : Level0_Level1_Level2_Level3() {
    *this = ::std::move(from);
  }

  inline Level0_Level1_Level2_Level3& operator=(Level0_Level1_Level2_Level3&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Level0_Level1_Level2_Level3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Level0_Level1_Level2_Level3* internal_default_instance() {
    return reinterpret_cast<const Level0_Level1_Level2_Level3*>(
               &_Level0_Level1_Level2_Level3_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Level0_Level1_Level2_Level3* other);
  friend void swap(Level0_Level1_Level2_Level3& a, Level0_Level1_Level2_Level3& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Level0_Level1_Level2_Level3* New() const PROTOBUF_FINAL { return New(NULL); }

  Level0_Level1_Level2_Level3* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Level0_Level1_Level2_Level3& from);
  void MergeFrom(const Level0_Level1_Level2_Level3& from);
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
  void InternalSwap(Level0_Level1_Level2_Level3* other);
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

  // int32 field = 1;
  void clear_field();
  static const int kFieldFieldNumber = 1;
  ::google::protobuf::int32 field() const;
  void set_field(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:v3.trash.Level0.Level1.Level2.Level3)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 field_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fTrash_2eproto::TableStruct;
  friend void ::protobuf_v3_2fTrash_2eproto::InitDefaultsLevel0_Level1_Level2_Level3Impl();
};
// -------------------------------------------------------------------

class Level0_Level1_Level2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.trash.Level0.Level1.Level2) */ {
 public:
  Level0_Level1_Level2();
  virtual ~Level0_Level1_Level2();

  Level0_Level1_Level2(const Level0_Level1_Level2& from);

  inline Level0_Level1_Level2& operator=(const Level0_Level1_Level2& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Level0_Level1_Level2(Level0_Level1_Level2&& from) noexcept
    : Level0_Level1_Level2() {
    *this = ::std::move(from);
  }

  inline Level0_Level1_Level2& operator=(Level0_Level1_Level2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Level0_Level1_Level2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Level0_Level1_Level2* internal_default_instance() {
    return reinterpret_cast<const Level0_Level1_Level2*>(
               &_Level0_Level1_Level2_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Level0_Level1_Level2* other);
  friend void swap(Level0_Level1_Level2& a, Level0_Level1_Level2& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Level0_Level1_Level2* New() const PROTOBUF_FINAL { return New(NULL); }

  Level0_Level1_Level2* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Level0_Level1_Level2& from);
  void MergeFrom(const Level0_Level1_Level2& from);
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
  void InternalSwap(Level0_Level1_Level2* other);
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

  typedef Level0_Level1_Level2_Level3 Level3;

  // accessors -------------------------------------------------------

  // .v3.trash.Level0.Level1.Level2.Level3 level3 = 1;
  bool has_level3() const;
  void clear_level3();
  static const int kLevel3FieldNumber = 1;
  const ::v3::trash::Level0_Level1_Level2_Level3& level3() const;
  ::v3::trash::Level0_Level1_Level2_Level3* release_level3();
  ::v3::trash::Level0_Level1_Level2_Level3* mutable_level3();
  void set_allocated_level3(::v3::trash::Level0_Level1_Level2_Level3* level3);

  // int32 field = 2;
  void clear_field();
  static const int kFieldFieldNumber = 2;
  ::google::protobuf::int32 field() const;
  void set_field(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:v3.trash.Level0.Level1.Level2)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::v3::trash::Level0_Level1_Level2_Level3* level3_;
  ::google::protobuf::int32 field_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fTrash_2eproto::TableStruct;
  friend void ::protobuf_v3_2fTrash_2eproto::InitDefaultsLevel0_Level1_Level2Impl();
};
// -------------------------------------------------------------------

class Level0_Level1 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.trash.Level0.Level1) */ {
 public:
  Level0_Level1();
  virtual ~Level0_Level1();

  Level0_Level1(const Level0_Level1& from);

  inline Level0_Level1& operator=(const Level0_Level1& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Level0_Level1(Level0_Level1&& from) noexcept
    : Level0_Level1() {
    *this = ::std::move(from);
  }

  inline Level0_Level1& operator=(Level0_Level1&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Level0_Level1& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Level0_Level1* internal_default_instance() {
    return reinterpret_cast<const Level0_Level1*>(
               &_Level0_Level1_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Level0_Level1* other);
  friend void swap(Level0_Level1& a, Level0_Level1& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Level0_Level1* New() const PROTOBUF_FINAL { return New(NULL); }

  Level0_Level1* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Level0_Level1& from);
  void MergeFrom(const Level0_Level1& from);
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
  void InternalSwap(Level0_Level1* other);
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

  typedef Level0_Level1_Level2 Level2;

  // accessors -------------------------------------------------------

  // .v3.trash.Level0.Level1.Level2 level2 = 1;
  bool has_level2() const;
  void clear_level2();
  static const int kLevel2FieldNumber = 1;
  const ::v3::trash::Level0_Level1_Level2& level2() const;
  ::v3::trash::Level0_Level1_Level2* release_level2();
  ::v3::trash::Level0_Level1_Level2* mutable_level2();
  void set_allocated_level2(::v3::trash::Level0_Level1_Level2* level2);

  // int32 field = 2;
  void clear_field();
  static const int kFieldFieldNumber = 2;
  ::google::protobuf::int32 field() const;
  void set_field(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:v3.trash.Level0.Level1)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::v3::trash::Level0_Level1_Level2* level2_;
  ::google::protobuf::int32 field_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fTrash_2eproto::TableStruct;
  friend void ::protobuf_v3_2fTrash_2eproto::InitDefaultsLevel0_Level1Impl();
};
// -------------------------------------------------------------------

class Level0 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.trash.Level0) */ {
 public:
  Level0();
  virtual ~Level0();

  Level0(const Level0& from);

  inline Level0& operator=(const Level0& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Level0(Level0&& from) noexcept
    : Level0() {
    *this = ::std::move(from);
  }

  inline Level0& operator=(Level0&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Level0& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Level0* internal_default_instance() {
    return reinterpret_cast<const Level0*>(
               &_Level0_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Level0* other);
  friend void swap(Level0& a, Level0& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Level0* New() const PROTOBUF_FINAL { return New(NULL); }

  Level0* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Level0& from);
  void MergeFrom(const Level0& from);
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
  void InternalSwap(Level0* other);
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

  typedef Level0_Level1 Level1;

  // accessors -------------------------------------------------------

  // .v3.trash.Level0.Level1 level1 = 1;
  bool has_level1() const;
  void clear_level1();
  static const int kLevel1FieldNumber = 1;
  const ::v3::trash::Level0_Level1& level1() const;
  ::v3::trash::Level0_Level1* release_level1();
  ::v3::trash::Level0_Level1* mutable_level1();
  void set_allocated_level1(::v3::trash::Level0_Level1* level1);

  // int32 field = 2;
  void clear_field();
  static const int kFieldFieldNumber = 2;
  ::google::protobuf::int32 field() const;
  void set_field(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:v3.trash.Level0)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::v3::trash::Level0_Level1* level1_;
  ::google::protobuf::int32 field_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fTrash_2eproto::TableStruct;
  friend void ::protobuf_v3_2fTrash_2eproto::InitDefaultsLevel0Impl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Level0_Level1_Level2_Level3

// int32 field = 1;
inline void Level0_Level1_Level2_Level3::clear_field() {
  field_ = 0;
}
inline ::google::protobuf::int32 Level0_Level1_Level2_Level3::field() const {
  // @@protoc_insertion_point(field_get:v3.trash.Level0.Level1.Level2.Level3.field)
  return field_;
}
inline void Level0_Level1_Level2_Level3::set_field(::google::protobuf::int32 value) {
  
  field_ = value;
  // @@protoc_insertion_point(field_set:v3.trash.Level0.Level1.Level2.Level3.field)
}

// -------------------------------------------------------------------

// Level0_Level1_Level2

// .v3.trash.Level0.Level1.Level2.Level3 level3 = 1;
inline bool Level0_Level1_Level2::has_level3() const {
  return this != internal_default_instance() && level3_ != NULL;
}
inline void Level0_Level1_Level2::clear_level3() {
  if (GetArenaNoVirtual() == NULL && level3_ != NULL) {
    delete level3_;
  }
  level3_ = NULL;
}
inline const ::v3::trash::Level0_Level1_Level2_Level3& Level0_Level1_Level2::level3() const {
  const ::v3::trash::Level0_Level1_Level2_Level3* p = level3_;
  // @@protoc_insertion_point(field_get:v3.trash.Level0.Level1.Level2.level3)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::trash::Level0_Level1_Level2_Level3*>(
      &::v3::trash::_Level0_Level1_Level2_Level3_default_instance_);
}
inline ::v3::trash::Level0_Level1_Level2_Level3* Level0_Level1_Level2::release_level3() {
  // @@protoc_insertion_point(field_release:v3.trash.Level0.Level1.Level2.level3)
  
  ::v3::trash::Level0_Level1_Level2_Level3* temp = level3_;
  level3_ = NULL;
  return temp;
}
inline ::v3::trash::Level0_Level1_Level2_Level3* Level0_Level1_Level2::mutable_level3() {
  
  if (level3_ == NULL) {
    level3_ = new ::v3::trash::Level0_Level1_Level2_Level3;
  }
  // @@protoc_insertion_point(field_mutable:v3.trash.Level0.Level1.Level2.level3)
  return level3_;
}
inline void Level0_Level1_Level2::set_allocated_level3(::v3::trash::Level0_Level1_Level2_Level3* level3) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete level3_;
  }
  if (level3) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      level3 = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, level3, submessage_arena);
    }
    
  } else {
    
  }
  level3_ = level3;
  // @@protoc_insertion_point(field_set_allocated:v3.trash.Level0.Level1.Level2.level3)
}

// int32 field = 2;
inline void Level0_Level1_Level2::clear_field() {
  field_ = 0;
}
inline ::google::protobuf::int32 Level0_Level1_Level2::field() const {
  // @@protoc_insertion_point(field_get:v3.trash.Level0.Level1.Level2.field)
  return field_;
}
inline void Level0_Level1_Level2::set_field(::google::protobuf::int32 value) {
  
  field_ = value;
  // @@protoc_insertion_point(field_set:v3.trash.Level0.Level1.Level2.field)
}

// -------------------------------------------------------------------

// Level0_Level1

// .v3.trash.Level0.Level1.Level2 level2 = 1;
inline bool Level0_Level1::has_level2() const {
  return this != internal_default_instance() && level2_ != NULL;
}
inline void Level0_Level1::clear_level2() {
  if (GetArenaNoVirtual() == NULL && level2_ != NULL) {
    delete level2_;
  }
  level2_ = NULL;
}
inline const ::v3::trash::Level0_Level1_Level2& Level0_Level1::level2() const {
  const ::v3::trash::Level0_Level1_Level2* p = level2_;
  // @@protoc_insertion_point(field_get:v3.trash.Level0.Level1.level2)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::trash::Level0_Level1_Level2*>(
      &::v3::trash::_Level0_Level1_Level2_default_instance_);
}
inline ::v3::trash::Level0_Level1_Level2* Level0_Level1::release_level2() {
  // @@protoc_insertion_point(field_release:v3.trash.Level0.Level1.level2)
  
  ::v3::trash::Level0_Level1_Level2* temp = level2_;
  level2_ = NULL;
  return temp;
}
inline ::v3::trash::Level0_Level1_Level2* Level0_Level1::mutable_level2() {
  
  if (level2_ == NULL) {
    level2_ = new ::v3::trash::Level0_Level1_Level2;
  }
  // @@protoc_insertion_point(field_mutable:v3.trash.Level0.Level1.level2)
  return level2_;
}
inline void Level0_Level1::set_allocated_level2(::v3::trash::Level0_Level1_Level2* level2) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete level2_;
  }
  if (level2) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      level2 = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, level2, submessage_arena);
    }
    
  } else {
    
  }
  level2_ = level2;
  // @@protoc_insertion_point(field_set_allocated:v3.trash.Level0.Level1.level2)
}

// int32 field = 2;
inline void Level0_Level1::clear_field() {
  field_ = 0;
}
inline ::google::protobuf::int32 Level0_Level1::field() const {
  // @@protoc_insertion_point(field_get:v3.trash.Level0.Level1.field)
  return field_;
}
inline void Level0_Level1::set_field(::google::protobuf::int32 value) {
  
  field_ = value;
  // @@protoc_insertion_point(field_set:v3.trash.Level0.Level1.field)
}

// -------------------------------------------------------------------

// Level0

// .v3.trash.Level0.Level1 level1 = 1;
inline bool Level0::has_level1() const {
  return this != internal_default_instance() && level1_ != NULL;
}
inline void Level0::clear_level1() {
  if (GetArenaNoVirtual() == NULL && level1_ != NULL) {
    delete level1_;
  }
  level1_ = NULL;
}
inline const ::v3::trash::Level0_Level1& Level0::level1() const {
  const ::v3::trash::Level0_Level1* p = level1_;
  // @@protoc_insertion_point(field_get:v3.trash.Level0.level1)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::trash::Level0_Level1*>(
      &::v3::trash::_Level0_Level1_default_instance_);
}
inline ::v3::trash::Level0_Level1* Level0::release_level1() {
  // @@protoc_insertion_point(field_release:v3.trash.Level0.level1)
  
  ::v3::trash::Level0_Level1* temp = level1_;
  level1_ = NULL;
  return temp;
}
inline ::v3::trash::Level0_Level1* Level0::mutable_level1() {
  
  if (level1_ == NULL) {
    level1_ = new ::v3::trash::Level0_Level1;
  }
  // @@protoc_insertion_point(field_mutable:v3.trash.Level0.level1)
  return level1_;
}
inline void Level0::set_allocated_level1(::v3::trash::Level0_Level1* level1) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete level1_;
  }
  if (level1) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      level1 = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, level1, submessage_arena);
    }
    
  } else {
    
  }
  level1_ = level1;
  // @@protoc_insertion_point(field_set_allocated:v3.trash.Level0.level1)
}

// int32 field = 2;
inline void Level0::clear_field() {
  field_ = 0;
}
inline ::google::protobuf::int32 Level0::field() const {
  // @@protoc_insertion_point(field_get:v3.trash.Level0.field)
  return field_;
}
inline void Level0::set_field(::google::protobuf::int32 value) {
  
  field_ = value;
  // @@protoc_insertion_point(field_set:v3.trash.Level0.field)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace trash
}  // namespace v3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v3_2fTrash_2eproto__INCLUDED
