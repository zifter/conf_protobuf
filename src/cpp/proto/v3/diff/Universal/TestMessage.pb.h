// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/diff/Universal/TestMessage.proto

#ifndef PROTOBUF_v3_2fdiff_2fUniversal_2fTestMessage_2eproto__INCLUDED
#define PROTOBUF_v3_2fdiff_2fUniversal_2fTestMessage_2eproto__INCLUDED

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

namespace protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsTestMessage_TestSection1Impl();
void InitDefaultsTestMessage_TestSection1();
void InitDefaultsTestMessage_TestSection2Impl();
void InitDefaultsTestMessage_TestSection2();
void InitDefaultsTestMessageImpl();
void InitDefaultsTestMessage();
inline void InitDefaults() {
  InitDefaultsTestMessage_TestSection1();
  InitDefaultsTestMessage_TestSection2();
  InitDefaultsTestMessage();
}
}  // namespace protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto
namespace v3 {
namespace diff {
namespace universal {
class TestMessage;
class TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
class TestMessage_TestSection1;
class TestMessage_TestSection1DefaultTypeInternal;
extern TestMessage_TestSection1DefaultTypeInternal _TestMessage_TestSection1_default_instance_;
class TestMessage_TestSection2;
class TestMessage_TestSection2DefaultTypeInternal;
extern TestMessage_TestSection2DefaultTypeInternal _TestMessage_TestSection2_default_instance_;
}  // namespace universal
}  // namespace diff
}  // namespace v3
namespace v3 {
namespace diff {
namespace universal {

// ===================================================================

class TestMessage_TestSection1 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.diff.universal.TestMessage.TestSection1) */ {
 public:
  TestMessage_TestSection1();
  virtual ~TestMessage_TestSection1();

  TestMessage_TestSection1(const TestMessage_TestSection1& from);

  inline TestMessage_TestSection1& operator=(const TestMessage_TestSection1& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessage_TestSection1(TestMessage_TestSection1&& from) noexcept
    : TestMessage_TestSection1() {
    *this = ::std::move(from);
  }

  inline TestMessage_TestSection1& operator=(TestMessage_TestSection1&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessage_TestSection1& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessage_TestSection1* internal_default_instance() {
    return reinterpret_cast<const TestMessage_TestSection1*>(
               &_TestMessage_TestSection1_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(TestMessage_TestSection1* other);
  friend void swap(TestMessage_TestSection1& a, TestMessage_TestSection1& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessage_TestSection1* New() const PROTOBUF_FINAL { return New(NULL); }

  TestMessage_TestSection1* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestMessage_TestSection1& from);
  void MergeFrom(const TestMessage_TestSection1& from);
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
  void InternalSwap(TestMessage_TestSection1* other);
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

  // uint32 value1 = 1;
  void clear_value1();
  static const int kValue1FieldNumber = 1;
  ::google::protobuf::uint32 value1() const;
  void set_value1(::google::protobuf::uint32 value);

  // uint32 value2 = 2;
  void clear_value2();
  static const int kValue2FieldNumber = 2;
  ::google::protobuf::uint32 value2() const;
  void set_value2(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:v3.diff.universal.TestMessage.TestSection1)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 value1_;
  ::google::protobuf::uint32 value2_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto::TableStruct;
  friend void ::protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto::InitDefaultsTestMessage_TestSection1Impl();
};
// -------------------------------------------------------------------

class TestMessage_TestSection2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.diff.universal.TestMessage.TestSection2) */ {
 public:
  TestMessage_TestSection2();
  virtual ~TestMessage_TestSection2();

  TestMessage_TestSection2(const TestMessage_TestSection2& from);

  inline TestMessage_TestSection2& operator=(const TestMessage_TestSection2& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessage_TestSection2(TestMessage_TestSection2&& from) noexcept
    : TestMessage_TestSection2() {
    *this = ::std::move(from);
  }

  inline TestMessage_TestSection2& operator=(TestMessage_TestSection2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessage_TestSection2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessage_TestSection2* internal_default_instance() {
    return reinterpret_cast<const TestMessage_TestSection2*>(
               &_TestMessage_TestSection2_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TestMessage_TestSection2* other);
  friend void swap(TestMessage_TestSection2& a, TestMessage_TestSection2& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessage_TestSection2* New() const PROTOBUF_FINAL { return New(NULL); }

  TestMessage_TestSection2* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestMessage_TestSection2& from);
  void MergeFrom(const TestMessage_TestSection2& from);
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
  void InternalSwap(TestMessage_TestSection2* other);
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

  // double value3 = 1;
  void clear_value3();
  static const int kValue3FieldNumber = 1;
  double value3() const;
  void set_value3(double value);

  // double value4 = 2;
  void clear_value4();
  static const int kValue4FieldNumber = 2;
  double value4() const;
  void set_value4(double value);

  // @@protoc_insertion_point(class_scope:v3.diff.universal.TestMessage.TestSection2)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double value3_;
  double value4_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto::TableStruct;
  friend void ::protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto::InitDefaultsTestMessage_TestSection2Impl();
};
// -------------------------------------------------------------------

class TestMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.diff.universal.TestMessage) */ {
 public:
  TestMessage();
  virtual ~TestMessage();

  TestMessage(const TestMessage& from);

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessage(TestMessage&& from) noexcept
    : TestMessage() {
    *this = ::std::move(from);
  }

  inline TestMessage& operator=(TestMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessage* internal_default_instance() {
    return reinterpret_cast<const TestMessage*>(
               &_TestMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(TestMessage* other);
  friend void swap(TestMessage& a, TestMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  TestMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestMessage& from);
  void MergeFrom(const TestMessage& from);
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
  void InternalSwap(TestMessage* other);
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

  typedef TestMessage_TestSection1 TestSection1;
  typedef TestMessage_TestSection2 TestSection2;

  // accessors -------------------------------------------------------

  // repeated .v3.diff.universal.TestMessage.TestSection1 array_values = 5;
  int array_values_size() const;
  void clear_array_values();
  static const int kArrayValuesFieldNumber = 5;
  const ::v3::diff::universal::TestMessage_TestSection1& array_values(int index) const;
  ::v3::diff::universal::TestMessage_TestSection1* mutable_array_values(int index);
  ::v3::diff::universal::TestMessage_TestSection1* add_array_values();
  ::google::protobuf::RepeatedPtrField< ::v3::diff::universal::TestMessage_TestSection1 >*
      mutable_array_values();
  const ::google::protobuf::RepeatedPtrField< ::v3::diff::universal::TestMessage_TestSection1 >&
      array_values() const;

  // .v3.diff.universal.TestMessage.TestSection1 section1 = 1;
  bool has_section1() const;
  void clear_section1();
  static const int kSection1FieldNumber = 1;
  const ::v3::diff::universal::TestMessage_TestSection1& section1() const;
  ::v3::diff::universal::TestMessage_TestSection1* release_section1();
  ::v3::diff::universal::TestMessage_TestSection1* mutable_section1();
  void set_allocated_section1(::v3::diff::universal::TestMessage_TestSection1* section1);

  // .v3.diff.universal.TestMessage.TestSection2 section2 = 2;
  bool has_section2() const;
  void clear_section2();
  static const int kSection2FieldNumber = 2;
  const ::v3::diff::universal::TestMessage_TestSection2& section2() const;
  ::v3::diff::universal::TestMessage_TestSection2* release_section2();
  ::v3::diff::universal::TestMessage_TestSection2* mutable_section2();
  void set_allocated_section2(::v3::diff::universal::TestMessage_TestSection2* section2);

  // double value6 = 4;
  void clear_value6();
  static const int kValue6FieldNumber = 4;
  double value6() const;
  void set_value6(double value);

  // uint32 value5 = 3;
  void clear_value5();
  static const int kValue5FieldNumber = 3;
  ::google::protobuf::uint32 value5() const;
  void set_value5(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:v3.diff.universal.TestMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::v3::diff::universal::TestMessage_TestSection1 > array_values_;
  ::v3::diff::universal::TestMessage_TestSection1* section1_;
  ::v3::diff::universal::TestMessage_TestSection2* section2_;
  double value6_;
  ::google::protobuf::uint32 value5_;
  mutable int _cached_size_;
  friend struct ::protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto::TableStruct;
  friend void ::protobuf_v3_2fdiff_2fUniversal_2fTestMessage_2eproto::InitDefaultsTestMessageImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessage_TestSection1

// uint32 value1 = 1;
inline void TestMessage_TestSection1::clear_value1() {
  value1_ = 0u;
}
inline ::google::protobuf::uint32 TestMessage_TestSection1::value1() const {
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.TestSection1.value1)
  return value1_;
}
inline void TestMessage_TestSection1::set_value1(::google::protobuf::uint32 value) {
  
  value1_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.universal.TestMessage.TestSection1.value1)
}

// uint32 value2 = 2;
inline void TestMessage_TestSection1::clear_value2() {
  value2_ = 0u;
}
inline ::google::protobuf::uint32 TestMessage_TestSection1::value2() const {
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.TestSection1.value2)
  return value2_;
}
inline void TestMessage_TestSection1::set_value2(::google::protobuf::uint32 value) {
  
  value2_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.universal.TestMessage.TestSection1.value2)
}

// -------------------------------------------------------------------

// TestMessage_TestSection2

// double value3 = 1;
inline void TestMessage_TestSection2::clear_value3() {
  value3_ = 0;
}
inline double TestMessage_TestSection2::value3() const {
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.TestSection2.value3)
  return value3_;
}
inline void TestMessage_TestSection2::set_value3(double value) {
  
  value3_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.universal.TestMessage.TestSection2.value3)
}

// double value4 = 2;
inline void TestMessage_TestSection2::clear_value4() {
  value4_ = 0;
}
inline double TestMessage_TestSection2::value4() const {
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.TestSection2.value4)
  return value4_;
}
inline void TestMessage_TestSection2::set_value4(double value) {
  
  value4_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.universal.TestMessage.TestSection2.value4)
}

// -------------------------------------------------------------------

// TestMessage

// .v3.diff.universal.TestMessage.TestSection1 section1 = 1;
inline bool TestMessage::has_section1() const {
  return this != internal_default_instance() && section1_ != NULL;
}
inline void TestMessage::clear_section1() {
  if (GetArenaNoVirtual() == NULL && section1_ != NULL) {
    delete section1_;
  }
  section1_ = NULL;
}
inline const ::v3::diff::universal::TestMessage_TestSection1& TestMessage::section1() const {
  const ::v3::diff::universal::TestMessage_TestSection1* p = section1_;
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.section1)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::diff::universal::TestMessage_TestSection1*>(
      &::v3::diff::universal::_TestMessage_TestSection1_default_instance_);
}
inline ::v3::diff::universal::TestMessage_TestSection1* TestMessage::release_section1() {
  // @@protoc_insertion_point(field_release:v3.diff.universal.TestMessage.section1)
  
  ::v3::diff::universal::TestMessage_TestSection1* temp = section1_;
  section1_ = NULL;
  return temp;
}
inline ::v3::diff::universal::TestMessage_TestSection1* TestMessage::mutable_section1() {
  
  if (section1_ == NULL) {
    section1_ = new ::v3::diff::universal::TestMessage_TestSection1;
  }
  // @@protoc_insertion_point(field_mutable:v3.diff.universal.TestMessage.section1)
  return section1_;
}
inline void TestMessage::set_allocated_section1(::v3::diff::universal::TestMessage_TestSection1* section1) {
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
  // @@protoc_insertion_point(field_set_allocated:v3.diff.universal.TestMessage.section1)
}

// .v3.diff.universal.TestMessage.TestSection2 section2 = 2;
inline bool TestMessage::has_section2() const {
  return this != internal_default_instance() && section2_ != NULL;
}
inline void TestMessage::clear_section2() {
  if (GetArenaNoVirtual() == NULL && section2_ != NULL) {
    delete section2_;
  }
  section2_ = NULL;
}
inline const ::v3::diff::universal::TestMessage_TestSection2& TestMessage::section2() const {
  const ::v3::diff::universal::TestMessage_TestSection2* p = section2_;
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.section2)
  return p != NULL ? *p : *reinterpret_cast<const ::v3::diff::universal::TestMessage_TestSection2*>(
      &::v3::diff::universal::_TestMessage_TestSection2_default_instance_);
}
inline ::v3::diff::universal::TestMessage_TestSection2* TestMessage::release_section2() {
  // @@protoc_insertion_point(field_release:v3.diff.universal.TestMessage.section2)
  
  ::v3::diff::universal::TestMessage_TestSection2* temp = section2_;
  section2_ = NULL;
  return temp;
}
inline ::v3::diff::universal::TestMessage_TestSection2* TestMessage::mutable_section2() {
  
  if (section2_ == NULL) {
    section2_ = new ::v3::diff::universal::TestMessage_TestSection2;
  }
  // @@protoc_insertion_point(field_mutable:v3.diff.universal.TestMessage.section2)
  return section2_;
}
inline void TestMessage::set_allocated_section2(::v3::diff::universal::TestMessage_TestSection2* section2) {
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
  // @@protoc_insertion_point(field_set_allocated:v3.diff.universal.TestMessage.section2)
}

// uint32 value5 = 3;
inline void TestMessage::clear_value5() {
  value5_ = 0u;
}
inline ::google::protobuf::uint32 TestMessage::value5() const {
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.value5)
  return value5_;
}
inline void TestMessage::set_value5(::google::protobuf::uint32 value) {
  
  value5_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.universal.TestMessage.value5)
}

// double value6 = 4;
inline void TestMessage::clear_value6() {
  value6_ = 0;
}
inline double TestMessage::value6() const {
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.value6)
  return value6_;
}
inline void TestMessage::set_value6(double value) {
  
  value6_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.universal.TestMessage.value6)
}

// repeated .v3.diff.universal.TestMessage.TestSection1 array_values = 5;
inline int TestMessage::array_values_size() const {
  return array_values_.size();
}
inline void TestMessage::clear_array_values() {
  array_values_.Clear();
}
inline const ::v3::diff::universal::TestMessage_TestSection1& TestMessage::array_values(int index) const {
  // @@protoc_insertion_point(field_get:v3.diff.universal.TestMessage.array_values)
  return array_values_.Get(index);
}
inline ::v3::diff::universal::TestMessage_TestSection1* TestMessage::mutable_array_values(int index) {
  // @@protoc_insertion_point(field_mutable:v3.diff.universal.TestMessage.array_values)
  return array_values_.Mutable(index);
}
inline ::v3::diff::universal::TestMessage_TestSection1* TestMessage::add_array_values() {
  // @@protoc_insertion_point(field_add:v3.diff.universal.TestMessage.array_values)
  return array_values_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::v3::diff::universal::TestMessage_TestSection1 >*
TestMessage::mutable_array_values() {
  // @@protoc_insertion_point(field_mutable_list:v3.diff.universal.TestMessage.array_values)
  return &array_values_;
}
inline const ::google::protobuf::RepeatedPtrField< ::v3::diff::universal::TestMessage_TestSection1 >&
TestMessage::array_values() const {
  // @@protoc_insertion_point(field_list:v3.diff.universal.TestMessage.array_values)
  return array_values_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace universal
}  // namespace diff
}  // namespace v3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v3_2fdiff_2fUniversal_2fTestMessage_2eproto__INCLUDED
