// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/diff/Intrusive/TestMessageIntrusive.proto

#ifndef PROTOBUF_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto__INCLUDED
#define PROTOBUF_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto__INCLUDED

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "v3/diff/Intrusive/IntrusiveDiff.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto {
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
void InitDefaultsTestMessageIntrusive_TestSection1Impl();
void InitDefaultsTestMessageIntrusive_TestSection1();
void InitDefaultsTestMessageIntrusive_TestSection2Impl();
void InitDefaultsTestMessageIntrusive_TestSection2();
void InitDefaultsTestMessageIntrusive_MapValuesEntry_DoNotUseImpl();
void InitDefaultsTestMessageIntrusive_MapValuesEntry_DoNotUse();
void InitDefaultsTestMessageIntrusiveImpl();
void InitDefaultsTestMessageIntrusive();
inline void InitDefaults() {
  InitDefaultsTestMessageIntrusive_TestSection1();
  InitDefaultsTestMessageIntrusive_TestSection2();
  InitDefaultsTestMessageIntrusive_MapValuesEntry_DoNotUse();
  InitDefaultsTestMessageIntrusive();
}
}  // namespace protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto
namespace v3 {
namespace diff {
namespace intrusive {
class TestMessageIntrusive;
class TestMessageIntrusiveDefaultTypeInternal;
extern TestMessageIntrusiveDefaultTypeInternal _TestMessageIntrusive_default_instance_;
class TestMessageIntrusive_MapValuesEntry_DoNotUse;
class TestMessageIntrusive_MapValuesEntry_DoNotUseDefaultTypeInternal;
extern TestMessageIntrusive_MapValuesEntry_DoNotUseDefaultTypeInternal _TestMessageIntrusive_MapValuesEntry_DoNotUse_default_instance_;
class TestMessageIntrusive_TestSection1;
class TestMessageIntrusive_TestSection1DefaultTypeInternal;
extern TestMessageIntrusive_TestSection1DefaultTypeInternal _TestMessageIntrusive_TestSection1_default_instance_;
class TestMessageIntrusive_TestSection2;
class TestMessageIntrusive_TestSection2DefaultTypeInternal;
extern TestMessageIntrusive_TestSection2DefaultTypeInternal _TestMessageIntrusive_TestSection2_default_instance_;
}  // namespace intrusive
}  // namespace diff
}  // namespace v3
namespace v3 {
namespace diff {
namespace intrusive {

// ===================================================================

class TestMessageIntrusive_TestSection1 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.diff.intrusive.TestMessageIntrusive.TestSection1) */ {
 public:
  TestMessageIntrusive_TestSection1();
  virtual ~TestMessageIntrusive_TestSection1();

  TestMessageIntrusive_TestSection1(const TestMessageIntrusive_TestSection1& from);

  inline TestMessageIntrusive_TestSection1& operator=(const TestMessageIntrusive_TestSection1& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessageIntrusive_TestSection1(TestMessageIntrusive_TestSection1&& from) noexcept
    : TestMessageIntrusive_TestSection1() {
    *this = ::std::move(from);
  }

  inline TestMessageIntrusive_TestSection1& operator=(TestMessageIntrusive_TestSection1&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessageIntrusive_TestSection1& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessageIntrusive_TestSection1* internal_default_instance() {
    return reinterpret_cast<const TestMessageIntrusive_TestSection1*>(
               &_TestMessageIntrusive_TestSection1_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(TestMessageIntrusive_TestSection1* other);
  friend void swap(TestMessageIntrusive_TestSection1& a, TestMessageIntrusive_TestSection1& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessageIntrusive_TestSection1* New() const PROTOBUF_FINAL { return New(NULL); }

  TestMessageIntrusive_TestSection1* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestMessageIntrusive_TestSection1& from);
  void MergeFrom(const TestMessageIntrusive_TestSection1& from);
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
  void InternalSwap(TestMessageIntrusive_TestSection1* other);
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

  // .v3.diff.intrusive.OperationType diff_type = 1;
  void clear_diff_type();
  static const int kDiffTypeFieldNumber = 1;
  ::v3::diff::intrusive::OperationType diff_type() const;
  void set_diff_type(::v3::diff::intrusive::OperationType value);

  // uint32 value1 = 2;
  void clear_value1();
  static const int kValue1FieldNumber = 2;
  ::google::protobuf::uint32 value1() const;
  void set_value1(::google::protobuf::uint32 value);

  // uint32 value2 = 3;
  void clear_value2();
  static const int kValue2FieldNumber = 3;
  ::google::protobuf::uint32 value2() const;
  void set_value2(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:v3.diff.intrusive.TestMessageIntrusive.TestSection1)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int diff_type_;
  ::google::protobuf::uint32 value1_;
  ::google::protobuf::uint32 value2_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto::TableStruct;
  friend void ::protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto::InitDefaultsTestMessageIntrusive_TestSection1Impl();
};
// -------------------------------------------------------------------

class TestMessageIntrusive_TestSection2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.diff.intrusive.TestMessageIntrusive.TestSection2) */ {
 public:
  TestMessageIntrusive_TestSection2();
  virtual ~TestMessageIntrusive_TestSection2();

  TestMessageIntrusive_TestSection2(const TestMessageIntrusive_TestSection2& from);

  inline TestMessageIntrusive_TestSection2& operator=(const TestMessageIntrusive_TestSection2& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessageIntrusive_TestSection2(TestMessageIntrusive_TestSection2&& from) noexcept
    : TestMessageIntrusive_TestSection2() {
    *this = ::std::move(from);
  }

  inline TestMessageIntrusive_TestSection2& operator=(TestMessageIntrusive_TestSection2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessageIntrusive_TestSection2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessageIntrusive_TestSection2* internal_default_instance() {
    return reinterpret_cast<const TestMessageIntrusive_TestSection2*>(
               &_TestMessageIntrusive_TestSection2_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TestMessageIntrusive_TestSection2* other);
  friend void swap(TestMessageIntrusive_TestSection2& a, TestMessageIntrusive_TestSection2& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessageIntrusive_TestSection2* New() const PROTOBUF_FINAL { return New(NULL); }

  TestMessageIntrusive_TestSection2* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestMessageIntrusive_TestSection2& from);
  void MergeFrom(const TestMessageIntrusive_TestSection2& from);
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
  void InternalSwap(TestMessageIntrusive_TestSection2* other);
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

  // .v3.diff.intrusive.OperationType diff_type = 1;
  void clear_diff_type();
  static const int kDiffTypeFieldNumber = 1;
  ::v3::diff::intrusive::OperationType diff_type() const;
  void set_diff_type(::v3::diff::intrusive::OperationType value);

  // int32 diff_order = 2;
  void clear_diff_order();
  static const int kDiffOrderFieldNumber = 2;
  ::google::protobuf::int32 diff_order() const;
  void set_diff_order(::google::protobuf::int32 value);

  // double value3 = 3;
  void clear_value3();
  static const int kValue3FieldNumber = 3;
  double value3() const;
  void set_value3(double value);

  // double value4 = 4;
  void clear_value4();
  static const int kValue4FieldNumber = 4;
  double value4() const;
  void set_value4(double value);

  // @@protoc_insertion_point(class_scope:v3.diff.intrusive.TestMessageIntrusive.TestSection2)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int diff_type_;
  ::google::protobuf::int32 diff_order_;
  double value3_;
  double value4_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto::TableStruct;
  friend void ::protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto::InitDefaultsTestMessageIntrusive_TestSection2Impl();
};
// -------------------------------------------------------------------

class TestMessageIntrusive_MapValuesEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<TestMessageIntrusive_MapValuesEntry_DoNotUse, 
    ::google::protobuf::int32, ::v3::diff::intrusive::TestMessageIntrusive_TestSection2,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<TestMessageIntrusive_MapValuesEntry_DoNotUse, 
    ::google::protobuf::int32, ::v3::diff::intrusive::TestMessageIntrusive_TestSection2,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  TestMessageIntrusive_MapValuesEntry_DoNotUse();
  TestMessageIntrusive_MapValuesEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const TestMessageIntrusive_MapValuesEntry_DoNotUse& other);
  static const TestMessageIntrusive_MapValuesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const TestMessageIntrusive_MapValuesEntry_DoNotUse*>(&_TestMessageIntrusive_MapValuesEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class TestMessageIntrusive : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.diff.intrusive.TestMessageIntrusive) */ {
 public:
  TestMessageIntrusive();
  virtual ~TestMessageIntrusive();

  TestMessageIntrusive(const TestMessageIntrusive& from);

  inline TestMessageIntrusive& operator=(const TestMessageIntrusive& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessageIntrusive(TestMessageIntrusive&& from) noexcept
    : TestMessageIntrusive() {
    *this = ::std::move(from);
  }

  inline TestMessageIntrusive& operator=(TestMessageIntrusive&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessageIntrusive& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessageIntrusive* internal_default_instance() {
    return reinterpret_cast<const TestMessageIntrusive*>(
               &_TestMessageIntrusive_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(TestMessageIntrusive* other);
  friend void swap(TestMessageIntrusive& a, TestMessageIntrusive& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessageIntrusive* New() const PROTOBUF_FINAL { return New(NULL); }

  TestMessageIntrusive* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestMessageIntrusive& from);
  void MergeFrom(const TestMessageIntrusive& from);
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
  void InternalSwap(TestMessageIntrusive* other);
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

  typedef TestMessageIntrusive_TestSection1 TestSection1;
  typedef TestMessageIntrusive_TestSection2 TestSection2;

  // accessors -------------------------------------------------------

  // repeated .v3.diff.intrusive.TestMessageIntrusive.TestSection1 array_values = 6;
  int array_values_size() const;
  void clear_array_values();
  static const int kArrayValuesFieldNumber = 6;
  const ::v3::diff::intrusive::TestMessageIntrusive_TestSection1& array_values(int index) const;
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* mutable_array_values(int index);
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* add_array_values();
  ::google::protobuf::RepeatedPtrField< ::v3::diff::intrusive::TestMessageIntrusive_TestSection1 >*
      mutable_array_values();
  const ::google::protobuf::RepeatedPtrField< ::v3::diff::intrusive::TestMessageIntrusive_TestSection1 >&
      array_values() const;

  // map<int32, .v3.diff.intrusive.TestMessageIntrusive.TestSection2> map_values = 7;
  int map_values_size() const;
  void clear_map_values();
  static const int kMapValuesFieldNumber = 7;
  const ::google::protobuf::Map< ::google::protobuf::int32, ::v3::diff::intrusive::TestMessageIntrusive_TestSection2 >&
      map_values() const;
  ::google::protobuf::Map< ::google::protobuf::int32, ::v3::diff::intrusive::TestMessageIntrusive_TestSection2 >*
      mutable_map_values();

  // .v3.diff.intrusive.TestMessageIntrusive.TestSection1 section1 = 2;
  bool has_section1() const;
  void clear_section1();
  static const int kSection1FieldNumber = 2;
  const ::v3::diff::intrusive::TestMessageIntrusive_TestSection1& section1() const;
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* release_section1();
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* mutable_section1();
  void set_allocated_section1(::v3::diff::intrusive::TestMessageIntrusive_TestSection1* section1);

  // .v3.diff.intrusive.TestMessageIntrusive.TestSection2 section2 = 3;
  bool has_section2() const;
  void clear_section2();
  static const int kSection2FieldNumber = 3;
  const ::v3::diff::intrusive::TestMessageIntrusive_TestSection2& section2() const;
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection2* release_section2();
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection2* mutable_section2();
  void set_allocated_section2(::v3::diff::intrusive::TestMessageIntrusive_TestSection2* section2);

  // .v3.diff.intrusive.MessageType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::v3::diff::intrusive::MessageType type() const;
  void set_type(::v3::diff::intrusive::MessageType value);

  // uint32 value5 = 4;
  void clear_value5();
  static const int kValue5FieldNumber = 4;
  ::google::protobuf::uint32 value5() const;
  void set_value5(::google::protobuf::uint32 value);

  // double value6 = 5;
  void clear_value6();
  static const int kValue6FieldNumber = 5;
  double value6() const;
  void set_value6(double value);

  // @@protoc_insertion_point(class_scope:v3.diff.intrusive.TestMessageIntrusive)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::v3::diff::intrusive::TestMessageIntrusive_TestSection1 > array_values_;
  ::google::protobuf::internal::MapField<
      TestMessageIntrusive_MapValuesEntry_DoNotUse,
      ::google::protobuf::int32, ::v3::diff::intrusive::TestMessageIntrusive_TestSection2,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > map_values_;
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* section1_;
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection2* section2_;
  int type_;
  ::google::protobuf::uint32 value5_;
  double value6_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto::TableStruct;
  friend void ::protobuf_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto::InitDefaultsTestMessageIntrusiveImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessageIntrusive_TestSection1

// .v3.diff.intrusive.OperationType diff_type = 1;
inline void TestMessageIntrusive_TestSection1::clear_diff_type() {
  diff_type_ = 0;
}
inline ::v3::diff::intrusive::OperationType TestMessageIntrusive_TestSection1::diff_type() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.TestSection1.diff_type)
  return static_cast< ::v3::diff::intrusive::OperationType >(diff_type_);
}
inline void TestMessageIntrusive_TestSection1::set_diff_type(::v3::diff::intrusive::OperationType value) {
  
  diff_type_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.TestSection1.diff_type)
}

// uint32 value1 = 2;
inline void TestMessageIntrusive_TestSection1::clear_value1() {
  value1_ = 0u;
}
inline ::google::protobuf::uint32 TestMessageIntrusive_TestSection1::value1() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.TestSection1.value1)
  return value1_;
}
inline void TestMessageIntrusive_TestSection1::set_value1(::google::protobuf::uint32 value) {
  
  value1_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.TestSection1.value1)
}

// uint32 value2 = 3;
inline void TestMessageIntrusive_TestSection1::clear_value2() {
  value2_ = 0u;
}
inline ::google::protobuf::uint32 TestMessageIntrusive_TestSection1::value2() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.TestSection1.value2)
  return value2_;
}
inline void TestMessageIntrusive_TestSection1::set_value2(::google::protobuf::uint32 value) {
  
  value2_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.TestSection1.value2)
}

// -------------------------------------------------------------------

// TestMessageIntrusive_TestSection2

// .v3.diff.intrusive.OperationType diff_type = 1;
inline void TestMessageIntrusive_TestSection2::clear_diff_type() {
  diff_type_ = 0;
}
inline ::v3::diff::intrusive::OperationType TestMessageIntrusive_TestSection2::diff_type() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.TestSection2.diff_type)
  return static_cast< ::v3::diff::intrusive::OperationType >(diff_type_);
}
inline void TestMessageIntrusive_TestSection2::set_diff_type(::v3::diff::intrusive::OperationType value) {
  
  diff_type_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.TestSection2.diff_type)
}

// int32 diff_order = 2;
inline void TestMessageIntrusive_TestSection2::clear_diff_order() {
  diff_order_ = 0;
}
inline ::google::protobuf::int32 TestMessageIntrusive_TestSection2::diff_order() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.TestSection2.diff_order)
  return diff_order_;
}
inline void TestMessageIntrusive_TestSection2::set_diff_order(::google::protobuf::int32 value) {
  
  diff_order_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.TestSection2.diff_order)
}

// double value3 = 3;
inline void TestMessageIntrusive_TestSection2::clear_value3() {
  value3_ = 0;
}
inline double TestMessageIntrusive_TestSection2::value3() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.TestSection2.value3)
  return value3_;
}
inline void TestMessageIntrusive_TestSection2::set_value3(double value) {
  
  value3_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.TestSection2.value3)
}

// double value4 = 4;
inline void TestMessageIntrusive_TestSection2::clear_value4() {
  value4_ = 0;
}
inline double TestMessageIntrusive_TestSection2::value4() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.TestSection2.value4)
  return value4_;
}
inline void TestMessageIntrusive_TestSection2::set_value4(double value) {
  
  value4_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.TestSection2.value4)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// TestMessageIntrusive

// .v3.diff.intrusive.MessageType type = 1;
inline void TestMessageIntrusive::clear_type() {
  type_ = 0;
}
inline ::v3::diff::intrusive::MessageType TestMessageIntrusive::type() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.type)
  return static_cast< ::v3::diff::intrusive::MessageType >(type_);
}
inline void TestMessageIntrusive::set_type(::v3::diff::intrusive::MessageType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.type)
}

// .v3.diff.intrusive.TestMessageIntrusive.TestSection1 section1 = 2;
inline bool TestMessageIntrusive::has_section1() const {
  return this != internal_default_instance() && section1_ != NULL;
}
inline void TestMessageIntrusive::clear_section1() {
  if (GetArenaNoVirtual() == NULL && section1_ != NULL) {
    delete section1_;
  }
  section1_ = NULL;
}
inline const ::v3::diff::intrusive::TestMessageIntrusive_TestSection1& TestMessageIntrusive::section1() const {
  const ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* p = section1_;
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.section1)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::diff::intrusive::TestMessageIntrusive_TestSection1*>(
      &::v3::diff::intrusive::_TestMessageIntrusive_TestSection1_default_instance_);
}
inline ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* TestMessageIntrusive::release_section1() {
  // @@protoc_insertion_point(field_release:v3.diff.intrusive.TestMessageIntrusive.section1)
  
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* temp = section1_;
  section1_ = NULL;
  return temp;
}
inline ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* TestMessageIntrusive::mutable_section1() {
  
  if (section1_ == NULL) {
    section1_ = new ::v3::diff::intrusive::TestMessageIntrusive_TestSection1;
  }
  // @@protoc_insertion_point(field_mutable:v3.diff.intrusive.TestMessageIntrusive.section1)
  return section1_;
}
inline void TestMessageIntrusive::set_allocated_section1(::v3::diff::intrusive::TestMessageIntrusive_TestSection1* section1) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete section1_;
  }
  if (section1) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      section1 = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, section1, submessage_arena);
    }
    
  } else {
    
  }
  section1_ = section1;
  // @@protoc_insertion_point(field_set_allocated:v3.diff.intrusive.TestMessageIntrusive.section1)
}

// .v3.diff.intrusive.TestMessageIntrusive.TestSection2 section2 = 3;
inline bool TestMessageIntrusive::has_section2() const {
  return this != internal_default_instance() && section2_ != NULL;
}
inline void TestMessageIntrusive::clear_section2() {
  if (GetArenaNoVirtual() == NULL && section2_ != NULL) {
    delete section2_;
  }
  section2_ = NULL;
}
inline const ::v3::diff::intrusive::TestMessageIntrusive_TestSection2& TestMessageIntrusive::section2() const {
  const ::v3::diff::intrusive::TestMessageIntrusive_TestSection2* p = section2_;
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.section2)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::diff::intrusive::TestMessageIntrusive_TestSection2*>(
      &::v3::diff::intrusive::_TestMessageIntrusive_TestSection2_default_instance_);
}
inline ::v3::diff::intrusive::TestMessageIntrusive_TestSection2* TestMessageIntrusive::release_section2() {
  // @@protoc_insertion_point(field_release:v3.diff.intrusive.TestMessageIntrusive.section2)
  
  ::v3::diff::intrusive::TestMessageIntrusive_TestSection2* temp = section2_;
  section2_ = NULL;
  return temp;
}
inline ::v3::diff::intrusive::TestMessageIntrusive_TestSection2* TestMessageIntrusive::mutable_section2() {
  
  if (section2_ == NULL) {
    section2_ = new ::v3::diff::intrusive::TestMessageIntrusive_TestSection2;
  }
  // @@protoc_insertion_point(field_mutable:v3.diff.intrusive.TestMessageIntrusive.section2)
  return section2_;
}
inline void TestMessageIntrusive::set_allocated_section2(::v3::diff::intrusive::TestMessageIntrusive_TestSection2* section2) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete section2_;
  }
  if (section2) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      section2 = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, section2, submessage_arena);
    }
    
  } else {
    
  }
  section2_ = section2;
  // @@protoc_insertion_point(field_set_allocated:v3.diff.intrusive.TestMessageIntrusive.section2)
}

// uint32 value5 = 4;
inline void TestMessageIntrusive::clear_value5() {
  value5_ = 0u;
}
inline ::google::protobuf::uint32 TestMessageIntrusive::value5() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.value5)
  return value5_;
}
inline void TestMessageIntrusive::set_value5(::google::protobuf::uint32 value) {
  
  value5_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.value5)
}

// double value6 = 5;
inline void TestMessageIntrusive::clear_value6() {
  value6_ = 0;
}
inline double TestMessageIntrusive::value6() const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.value6)
  return value6_;
}
inline void TestMessageIntrusive::set_value6(double value) {
  
  value6_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.intrusive.TestMessageIntrusive.value6)
}

// repeated .v3.diff.intrusive.TestMessageIntrusive.TestSection1 array_values = 6;
inline int TestMessageIntrusive::array_values_size() const {
  return array_values_.size();
}
inline void TestMessageIntrusive::clear_array_values() {
  array_values_.Clear();
}
inline const ::v3::diff::intrusive::TestMessageIntrusive_TestSection1& TestMessageIntrusive::array_values(int index) const {
  // @@protoc_insertion_point(field_get:v3.diff.intrusive.TestMessageIntrusive.array_values)
  return array_values_.Get(index);
}
inline ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* TestMessageIntrusive::mutable_array_values(int index) {
  // @@protoc_insertion_point(field_mutable:v3.diff.intrusive.TestMessageIntrusive.array_values)
  return array_values_.Mutable(index);
}
inline ::v3::diff::intrusive::TestMessageIntrusive_TestSection1* TestMessageIntrusive::add_array_values() {
  // @@protoc_insertion_point(field_add:v3.diff.intrusive.TestMessageIntrusive.array_values)
  return array_values_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::v3::diff::intrusive::TestMessageIntrusive_TestSection1 >*
TestMessageIntrusive::mutable_array_values() {
  // @@protoc_insertion_point(field_mutable_list:v3.diff.intrusive.TestMessageIntrusive.array_values)
  return &array_values_;
}
inline const ::google::protobuf::RepeatedPtrField< ::v3::diff::intrusive::TestMessageIntrusive_TestSection1 >&
TestMessageIntrusive::array_values() const {
  // @@protoc_insertion_point(field_list:v3.diff.intrusive.TestMessageIntrusive.array_values)
  return array_values_;
}

// map<int32, .v3.diff.intrusive.TestMessageIntrusive.TestSection2> map_values = 7;
inline int TestMessageIntrusive::map_values_size() const {
  return map_values_.size();
}
inline void TestMessageIntrusive::clear_map_values() {
  map_values_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int32, ::v3::diff::intrusive::TestMessageIntrusive_TestSection2 >&
TestMessageIntrusive::map_values() const {
  // @@protoc_insertion_point(field_map:v3.diff.intrusive.TestMessageIntrusive.map_values)
  return map_values_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int32, ::v3::diff::intrusive::TestMessageIntrusive_TestSection2 >*
TestMessageIntrusive::mutable_map_values() {
  // @@protoc_insertion_point(field_mutable_map:v3.diff.intrusive.TestMessageIntrusive.map_values)
  return map_values_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace intrusive
}  // namespace diff
}  // namespace v3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v3_2fdiff_2fIntrusive_2fTestMessageIntrusive_2eproto__INCLUDED
