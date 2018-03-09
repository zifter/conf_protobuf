// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/diff/Transaction.proto

#ifndef PROTOBUF_v3_2fdiff_2fTransaction_2eproto__INCLUDED
#define PROTOBUF_v3_2fdiff_2fTransaction_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_v3_2fdiff_2fTransaction_2eproto {
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
void InitDefaultsTransactionImpl();
void InitDefaultsTransaction();
inline void InitDefaults() {
  InitDefaultsTransaction();
}
}  // namespace protobuf_v3_2fdiff_2fTransaction_2eproto
namespace v3 {
namespace diff {
class Transaction;
class TransactionDefaultTypeInternal;
extern TransactionDefaultTypeInternal _Transaction_default_instance_;
}  // namespace diff
}  // namespace v3
namespace v3 {
namespace diff {

enum Transaction_OpType {
  Transaction_OpType_ADD = 0,
  Transaction_OpType_DELETE = 1,
  Transaction_OpType_Transaction_OpType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Transaction_OpType_Transaction_OpType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Transaction_OpType_IsValid(int value);
const Transaction_OpType Transaction_OpType_OpType_MIN = Transaction_OpType_ADD;
const Transaction_OpType Transaction_OpType_OpType_MAX = Transaction_OpType_DELETE;
const int Transaction_OpType_OpType_ARRAYSIZE = Transaction_OpType_OpType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Transaction_OpType_descriptor();
inline const ::std::string& Transaction_OpType_Name(Transaction_OpType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Transaction_OpType_descriptor(), value);
}
inline bool Transaction_OpType_Parse(
    const ::std::string& name, Transaction_OpType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Transaction_OpType>(
    Transaction_OpType_descriptor(), name, value);
}
// ===================================================================

class Transaction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3.diff.Transaction) */ {
 public:
  Transaction();
  virtual ~Transaction();

  Transaction(const Transaction& from);

  inline Transaction& operator=(const Transaction& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Transaction(Transaction&& from) noexcept
    : Transaction() {
    *this = ::std::move(from);
  }

  inline Transaction& operator=(Transaction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Transaction& default_instance();

  enum ScalarCase {
    kDataDouble = 2,
    kDataFloat = 3,
    kDataInt32 = 4,
    kDataInt64 = 5,
    kDataUint32 = 6,
    kDataUint64 = 7,
    kDataSint32 = 8,
    kDataSint64 = 9,
    kDataFixed32 = 10,
    kDataFixed64 = 11,
    kDataSfixed32 = 12,
    kDataSfixed = 13,
    kDataBool = 14,
    kDataString = 15,
    kDataBytes = 16,
    SCALAR_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Transaction* internal_default_instance() {
    return reinterpret_cast<const Transaction*>(
               &_Transaction_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Transaction* other);
  friend void swap(Transaction& a, Transaction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Transaction* New() const PROTOBUF_FINAL { return New(NULL); }

  Transaction* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Transaction& from);
  void MergeFrom(const Transaction& from);
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
  void InternalSwap(Transaction* other);
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

  typedef Transaction_OpType OpType;
  static const OpType ADD =
    Transaction_OpType_ADD;
  static const OpType DELETE =
    Transaction_OpType_DELETE;
  static inline bool OpType_IsValid(int value) {
    return Transaction_OpType_IsValid(value);
  }
  static const OpType OpType_MIN =
    Transaction_OpType_OpType_MIN;
  static const OpType OpType_MAX =
    Transaction_OpType_OpType_MAX;
  static const int OpType_ARRAYSIZE =
    Transaction_OpType_OpType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  OpType_descriptor() {
    return Transaction_OpType_descriptor();
  }
  static inline const ::std::string& OpType_Name(OpType value) {
    return Transaction_OpType_Name(value);
  }
  static inline bool OpType_Parse(const ::std::string& name,
      OpType* value) {
    return Transaction_OpType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated int32 path = 1;
  int path_size() const;
  void clear_path();
  static const int kPathFieldNumber = 1;
  ::google::protobuf::int32 path(int index) const;
  void set_path(int index, ::google::protobuf::int32 value);
  void add_path(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      path() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_path();

  // .v3.diff.Transaction.OpType operation = 17;
  void clear_operation();
  static const int kOperationFieldNumber = 17;
  ::v3::diff::Transaction_OpType operation() const;
  void set_operation(::v3::diff::Transaction_OpType value);

  // double data_double = 2;
  private:
  bool has_data_double() const;
  public:
  void clear_data_double();
  static const int kDataDoubleFieldNumber = 2;
  double data_double() const;
  void set_data_double(double value);

  // float data_float = 3;
  private:
  bool has_data_float() const;
  public:
  void clear_data_float();
  static const int kDataFloatFieldNumber = 3;
  float data_float() const;
  void set_data_float(float value);

  // int32 data_int32 = 4;
  private:
  bool has_data_int32() const;
  public:
  void clear_data_int32();
  static const int kDataInt32FieldNumber = 4;
  ::google::protobuf::int32 data_int32() const;
  void set_data_int32(::google::protobuf::int32 value);

  // int64 data_int64 = 5;
  private:
  bool has_data_int64() const;
  public:
  void clear_data_int64();
  static const int kDataInt64FieldNumber = 5;
  ::google::protobuf::int64 data_int64() const;
  void set_data_int64(::google::protobuf::int64 value);

  // uint32 data_uint32 = 6;
  private:
  bool has_data_uint32() const;
  public:
  void clear_data_uint32();
  static const int kDataUint32FieldNumber = 6;
  ::google::protobuf::uint32 data_uint32() const;
  void set_data_uint32(::google::protobuf::uint32 value);

  // uint64 data_uint64 = 7;
  private:
  bool has_data_uint64() const;
  public:
  void clear_data_uint64();
  static const int kDataUint64FieldNumber = 7;
  ::google::protobuf::uint64 data_uint64() const;
  void set_data_uint64(::google::protobuf::uint64 value);

  // sint32 data_sint32 = 8;
  private:
  bool has_data_sint32() const;
  public:
  void clear_data_sint32();
  static const int kDataSint32FieldNumber = 8;
  ::google::protobuf::int32 data_sint32() const;
  void set_data_sint32(::google::protobuf::int32 value);

  // sint64 data_sint64 = 9;
  private:
  bool has_data_sint64() const;
  public:
  void clear_data_sint64();
  static const int kDataSint64FieldNumber = 9;
  ::google::protobuf::int64 data_sint64() const;
  void set_data_sint64(::google::protobuf::int64 value);

  // fixed32 data_fixed32 = 10;
  private:
  bool has_data_fixed32() const;
  public:
  void clear_data_fixed32();
  static const int kDataFixed32FieldNumber = 10;
  ::google::protobuf::uint32 data_fixed32() const;
  void set_data_fixed32(::google::protobuf::uint32 value);

  // fixed64 data_fixed64 = 11;
  private:
  bool has_data_fixed64() const;
  public:
  void clear_data_fixed64();
  static const int kDataFixed64FieldNumber = 11;
  ::google::protobuf::uint64 data_fixed64() const;
  void set_data_fixed64(::google::protobuf::uint64 value);

  // sfixed32 data_sfixed32 = 12;
  private:
  bool has_data_sfixed32() const;
  public:
  void clear_data_sfixed32();
  static const int kDataSfixed32FieldNumber = 12;
  ::google::protobuf::int32 data_sfixed32() const;
  void set_data_sfixed32(::google::protobuf::int32 value);

  // sfixed64 data_sfixed = 13;
  private:
  bool has_data_sfixed() const;
  public:
  void clear_data_sfixed();
  static const int kDataSfixedFieldNumber = 13;
  ::google::protobuf::int64 data_sfixed() const;
  void set_data_sfixed(::google::protobuf::int64 value);

  // bool data_bool = 14;
  private:
  bool has_data_bool() const;
  public:
  void clear_data_bool();
  static const int kDataBoolFieldNumber = 14;
  bool data_bool() const;
  void set_data_bool(bool value);

  // string data_string = 15;
  private:
  bool has_data_string() const;
  public:
  void clear_data_string();
  static const int kDataStringFieldNumber = 15;
  const ::std::string& data_string() const;
  void set_data_string(const ::std::string& value);
  #if LANG_CXX11
  void set_data_string(::std::string&& value);
  #endif
  void set_data_string(const char* value);
  void set_data_string(const char* value, size_t size);
  ::std::string* mutable_data_string();
  ::std::string* release_data_string();
  void set_allocated_data_string(::std::string* data_string);

  // bytes data_bytes = 16;
  private:
  bool has_data_bytes() const;
  public:
  void clear_data_bytes();
  static const int kDataBytesFieldNumber = 16;
  const ::std::string& data_bytes() const;
  void set_data_bytes(const ::std::string& value);
  #if LANG_CXX11
  void set_data_bytes(::std::string&& value);
  #endif
  void set_data_bytes(const char* value);
  void set_data_bytes(const void* value, size_t size);
  ::std::string* mutable_data_bytes();
  ::std::string* release_data_bytes();
  void set_allocated_data_bytes(::std::string* data_bytes);

  ScalarCase scalar_case() const;
  // @@protoc_insertion_point(class_scope:v3.diff.Transaction)
 private:
  void set_has_data_double();
  void set_has_data_float();
  void set_has_data_int32();
  void set_has_data_int64();
  void set_has_data_uint32();
  void set_has_data_uint64();
  void set_has_data_sint32();
  void set_has_data_sint64();
  void set_has_data_fixed32();
  void set_has_data_fixed64();
  void set_has_data_sfixed32();
  void set_has_data_sfixed();
  void set_has_data_bool();
  void set_has_data_string();
  void set_has_data_bytes();

  inline bool has_scalar() const;
  void clear_scalar();
  inline void clear_has_scalar();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > path_;
  mutable int _path_cached_byte_size_;
  int operation_;
  union ScalarUnion {
    ScalarUnion() {}
    double data_double_;
    float data_float_;
    ::google::protobuf::int32 data_int32_;
    ::google::protobuf::int64 data_int64_;
    ::google::protobuf::uint32 data_uint32_;
    ::google::protobuf::uint64 data_uint64_;
    ::google::protobuf::int32 data_sint32_;
    ::google::protobuf::int64 data_sint64_;
    ::google::protobuf::uint32 data_fixed32_;
    ::google::protobuf::uint64 data_fixed64_;
    ::google::protobuf::int32 data_sfixed32_;
    ::google::protobuf::int64 data_sfixed_;
    bool data_bool_;
    ::google::protobuf::internal::ArenaStringPtr data_string_;
    ::google::protobuf::internal::ArenaStringPtr data_bytes_;
  } scalar_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_v3_2fdiff_2fTransaction_2eproto::TableStruct;
  friend void ::protobuf_v3_2fdiff_2fTransaction_2eproto::InitDefaultsTransactionImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Transaction

// repeated int32 path = 1;
inline int Transaction::path_size() const {
  return path_.size();
}
inline void Transaction::clear_path() {
  path_.Clear();
}
inline ::google::protobuf::int32 Transaction::path(int index) const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.path)
  return path_.Get(index);
}
inline void Transaction::set_path(int index, ::google::protobuf::int32 value) {
  path_.Set(index, value);
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.path)
}
inline void Transaction::add_path(::google::protobuf::int32 value) {
  path_.Add(value);
  // @@protoc_insertion_point(field_add:v3.diff.Transaction.path)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Transaction::path() const {
  // @@protoc_insertion_point(field_list:v3.diff.Transaction.path)
  return path_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Transaction::mutable_path() {
  // @@protoc_insertion_point(field_mutable_list:v3.diff.Transaction.path)
  return &path_;
}

// double data_double = 2;
inline bool Transaction::has_data_double() const {
  return scalar_case() == kDataDouble;
}
inline void Transaction::set_has_data_double() {
  _oneof_case_[0] = kDataDouble;
}
inline void Transaction::clear_data_double() {
  if (has_data_double()) {
    scalar_.data_double_ = 0;
    clear_has_scalar();
  }
}
inline double Transaction::data_double() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_double)
  if (has_data_double()) {
    return scalar_.data_double_;
  }
  return 0;
}
inline void Transaction::set_data_double(double value) {
  if (!has_data_double()) {
    clear_scalar();
    set_has_data_double();
  }
  scalar_.data_double_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_double)
}

// float data_float = 3;
inline bool Transaction::has_data_float() const {
  return scalar_case() == kDataFloat;
}
inline void Transaction::set_has_data_float() {
  _oneof_case_[0] = kDataFloat;
}
inline void Transaction::clear_data_float() {
  if (has_data_float()) {
    scalar_.data_float_ = 0;
    clear_has_scalar();
  }
}
inline float Transaction::data_float() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_float)
  if (has_data_float()) {
    return scalar_.data_float_;
  }
  return 0;
}
inline void Transaction::set_data_float(float value) {
  if (!has_data_float()) {
    clear_scalar();
    set_has_data_float();
  }
  scalar_.data_float_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_float)
}

// int32 data_int32 = 4;
inline bool Transaction::has_data_int32() const {
  return scalar_case() == kDataInt32;
}
inline void Transaction::set_has_data_int32() {
  _oneof_case_[0] = kDataInt32;
}
inline void Transaction::clear_data_int32() {
  if (has_data_int32()) {
    scalar_.data_int32_ = 0;
    clear_has_scalar();
  }
}
inline ::google::protobuf::int32 Transaction::data_int32() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_int32)
  if (has_data_int32()) {
    return scalar_.data_int32_;
  }
  return 0;
}
inline void Transaction::set_data_int32(::google::protobuf::int32 value) {
  if (!has_data_int32()) {
    clear_scalar();
    set_has_data_int32();
  }
  scalar_.data_int32_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_int32)
}

// int64 data_int64 = 5;
inline bool Transaction::has_data_int64() const {
  return scalar_case() == kDataInt64;
}
inline void Transaction::set_has_data_int64() {
  _oneof_case_[0] = kDataInt64;
}
inline void Transaction::clear_data_int64() {
  if (has_data_int64()) {
    scalar_.data_int64_ = GOOGLE_LONGLONG(0);
    clear_has_scalar();
  }
}
inline ::google::protobuf::int64 Transaction::data_int64() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_int64)
  if (has_data_int64()) {
    return scalar_.data_int64_;
  }
  return GOOGLE_LONGLONG(0);
}
inline void Transaction::set_data_int64(::google::protobuf::int64 value) {
  if (!has_data_int64()) {
    clear_scalar();
    set_has_data_int64();
  }
  scalar_.data_int64_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_int64)
}

// uint32 data_uint32 = 6;
inline bool Transaction::has_data_uint32() const {
  return scalar_case() == kDataUint32;
}
inline void Transaction::set_has_data_uint32() {
  _oneof_case_[0] = kDataUint32;
}
inline void Transaction::clear_data_uint32() {
  if (has_data_uint32()) {
    scalar_.data_uint32_ = 0u;
    clear_has_scalar();
  }
}
inline ::google::protobuf::uint32 Transaction::data_uint32() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_uint32)
  if (has_data_uint32()) {
    return scalar_.data_uint32_;
  }
  return 0u;
}
inline void Transaction::set_data_uint32(::google::protobuf::uint32 value) {
  if (!has_data_uint32()) {
    clear_scalar();
    set_has_data_uint32();
  }
  scalar_.data_uint32_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_uint32)
}

// uint64 data_uint64 = 7;
inline bool Transaction::has_data_uint64() const {
  return scalar_case() == kDataUint64;
}
inline void Transaction::set_has_data_uint64() {
  _oneof_case_[0] = kDataUint64;
}
inline void Transaction::clear_data_uint64() {
  if (has_data_uint64()) {
    scalar_.data_uint64_ = GOOGLE_ULONGLONG(0);
    clear_has_scalar();
  }
}
inline ::google::protobuf::uint64 Transaction::data_uint64() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_uint64)
  if (has_data_uint64()) {
    return scalar_.data_uint64_;
  }
  return GOOGLE_ULONGLONG(0);
}
inline void Transaction::set_data_uint64(::google::protobuf::uint64 value) {
  if (!has_data_uint64()) {
    clear_scalar();
    set_has_data_uint64();
  }
  scalar_.data_uint64_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_uint64)
}

// sint32 data_sint32 = 8;
inline bool Transaction::has_data_sint32() const {
  return scalar_case() == kDataSint32;
}
inline void Transaction::set_has_data_sint32() {
  _oneof_case_[0] = kDataSint32;
}
inline void Transaction::clear_data_sint32() {
  if (has_data_sint32()) {
    scalar_.data_sint32_ = 0;
    clear_has_scalar();
  }
}
inline ::google::protobuf::int32 Transaction::data_sint32() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_sint32)
  if (has_data_sint32()) {
    return scalar_.data_sint32_;
  }
  return 0;
}
inline void Transaction::set_data_sint32(::google::protobuf::int32 value) {
  if (!has_data_sint32()) {
    clear_scalar();
    set_has_data_sint32();
  }
  scalar_.data_sint32_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_sint32)
}

// sint64 data_sint64 = 9;
inline bool Transaction::has_data_sint64() const {
  return scalar_case() == kDataSint64;
}
inline void Transaction::set_has_data_sint64() {
  _oneof_case_[0] = kDataSint64;
}
inline void Transaction::clear_data_sint64() {
  if (has_data_sint64()) {
    scalar_.data_sint64_ = GOOGLE_LONGLONG(0);
    clear_has_scalar();
  }
}
inline ::google::protobuf::int64 Transaction::data_sint64() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_sint64)
  if (has_data_sint64()) {
    return scalar_.data_sint64_;
  }
  return GOOGLE_LONGLONG(0);
}
inline void Transaction::set_data_sint64(::google::protobuf::int64 value) {
  if (!has_data_sint64()) {
    clear_scalar();
    set_has_data_sint64();
  }
  scalar_.data_sint64_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_sint64)
}

// fixed32 data_fixed32 = 10;
inline bool Transaction::has_data_fixed32() const {
  return scalar_case() == kDataFixed32;
}
inline void Transaction::set_has_data_fixed32() {
  _oneof_case_[0] = kDataFixed32;
}
inline void Transaction::clear_data_fixed32() {
  if (has_data_fixed32()) {
    scalar_.data_fixed32_ = 0u;
    clear_has_scalar();
  }
}
inline ::google::protobuf::uint32 Transaction::data_fixed32() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_fixed32)
  if (has_data_fixed32()) {
    return scalar_.data_fixed32_;
  }
  return 0u;
}
inline void Transaction::set_data_fixed32(::google::protobuf::uint32 value) {
  if (!has_data_fixed32()) {
    clear_scalar();
    set_has_data_fixed32();
  }
  scalar_.data_fixed32_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_fixed32)
}

// fixed64 data_fixed64 = 11;
inline bool Transaction::has_data_fixed64() const {
  return scalar_case() == kDataFixed64;
}
inline void Transaction::set_has_data_fixed64() {
  _oneof_case_[0] = kDataFixed64;
}
inline void Transaction::clear_data_fixed64() {
  if (has_data_fixed64()) {
    scalar_.data_fixed64_ = GOOGLE_ULONGLONG(0);
    clear_has_scalar();
  }
}
inline ::google::protobuf::uint64 Transaction::data_fixed64() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_fixed64)
  if (has_data_fixed64()) {
    return scalar_.data_fixed64_;
  }
  return GOOGLE_ULONGLONG(0);
}
inline void Transaction::set_data_fixed64(::google::protobuf::uint64 value) {
  if (!has_data_fixed64()) {
    clear_scalar();
    set_has_data_fixed64();
  }
  scalar_.data_fixed64_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_fixed64)
}

// sfixed32 data_sfixed32 = 12;
inline bool Transaction::has_data_sfixed32() const {
  return scalar_case() == kDataSfixed32;
}
inline void Transaction::set_has_data_sfixed32() {
  _oneof_case_[0] = kDataSfixed32;
}
inline void Transaction::clear_data_sfixed32() {
  if (has_data_sfixed32()) {
    scalar_.data_sfixed32_ = 0;
    clear_has_scalar();
  }
}
inline ::google::protobuf::int32 Transaction::data_sfixed32() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_sfixed32)
  if (has_data_sfixed32()) {
    return scalar_.data_sfixed32_;
  }
  return 0;
}
inline void Transaction::set_data_sfixed32(::google::protobuf::int32 value) {
  if (!has_data_sfixed32()) {
    clear_scalar();
    set_has_data_sfixed32();
  }
  scalar_.data_sfixed32_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_sfixed32)
}

// sfixed64 data_sfixed = 13;
inline bool Transaction::has_data_sfixed() const {
  return scalar_case() == kDataSfixed;
}
inline void Transaction::set_has_data_sfixed() {
  _oneof_case_[0] = kDataSfixed;
}
inline void Transaction::clear_data_sfixed() {
  if (has_data_sfixed()) {
    scalar_.data_sfixed_ = GOOGLE_LONGLONG(0);
    clear_has_scalar();
  }
}
inline ::google::protobuf::int64 Transaction::data_sfixed() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_sfixed)
  if (has_data_sfixed()) {
    return scalar_.data_sfixed_;
  }
  return GOOGLE_LONGLONG(0);
}
inline void Transaction::set_data_sfixed(::google::protobuf::int64 value) {
  if (!has_data_sfixed()) {
    clear_scalar();
    set_has_data_sfixed();
  }
  scalar_.data_sfixed_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_sfixed)
}

// bool data_bool = 14;
inline bool Transaction::has_data_bool() const {
  return scalar_case() == kDataBool;
}
inline void Transaction::set_has_data_bool() {
  _oneof_case_[0] = kDataBool;
}
inline void Transaction::clear_data_bool() {
  if (has_data_bool()) {
    scalar_.data_bool_ = false;
    clear_has_scalar();
  }
}
inline bool Transaction::data_bool() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_bool)
  if (has_data_bool()) {
    return scalar_.data_bool_;
  }
  return false;
}
inline void Transaction::set_data_bool(bool value) {
  if (!has_data_bool()) {
    clear_scalar();
    set_has_data_bool();
  }
  scalar_.data_bool_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_bool)
}

// string data_string = 15;
inline bool Transaction::has_data_string() const {
  return scalar_case() == kDataString;
}
inline void Transaction::set_has_data_string() {
  _oneof_case_[0] = kDataString;
}
inline void Transaction::clear_data_string() {
  if (has_data_string()) {
    scalar_.data_string_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_scalar();
  }
}
inline const ::std::string& Transaction::data_string() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_string)
  if (has_data_string()) {
    return scalar_.data_string_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Transaction::set_data_string(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_string)
  if (!has_data_string()) {
    clear_scalar();
    set_has_data_string();
    scalar_.data_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_string)
}
#if LANG_CXX11
inline void Transaction::set_data_string(::std::string&& value) {
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_string)
  if (!has_data_string()) {
    clear_scalar();
    set_has_data_string();
    scalar_.data_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_string_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3.diff.Transaction.data_string)
}
#endif
inline void Transaction::set_data_string(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_data_string()) {
    clear_scalar();
    set_has_data_string();
    scalar_.data_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3.diff.Transaction.data_string)
}
inline void Transaction::set_data_string(const char* value, size_t size) {
  if (!has_data_string()) {
    clear_scalar();
    set_has_data_string();
    scalar_.data_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3.diff.Transaction.data_string)
}
inline ::std::string* Transaction::mutable_data_string() {
  if (!has_data_string()) {
    clear_scalar();
    set_has_data_string();
    scalar_.data_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:v3.diff.Transaction.data_string)
  return scalar_.data_string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Transaction::release_data_string() {
  // @@protoc_insertion_point(field_release:v3.diff.Transaction.data_string)
  if (has_data_string()) {
    clear_has_scalar();
    return scalar_.data_string_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Transaction::set_allocated_data_string(::std::string* data_string) {
  if (!has_data_string()) {
    scalar_.data_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_scalar();
  if (data_string != NULL) {
    set_has_data_string();
    scalar_.data_string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        data_string);
  }
  // @@protoc_insertion_point(field_set_allocated:v3.diff.Transaction.data_string)
}

// bytes data_bytes = 16;
inline bool Transaction::has_data_bytes() const {
  return scalar_case() == kDataBytes;
}
inline void Transaction::set_has_data_bytes() {
  _oneof_case_[0] = kDataBytes;
}
inline void Transaction::clear_data_bytes() {
  if (has_data_bytes()) {
    scalar_.data_bytes_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_scalar();
  }
}
inline const ::std::string& Transaction::data_bytes() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.data_bytes)
  if (has_data_bytes()) {
    return scalar_.data_bytes_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Transaction::set_data_bytes(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_bytes)
  if (!has_data_bytes()) {
    clear_scalar();
    set_has_data_bytes();
    scalar_.data_bytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_bytes)
}
#if LANG_CXX11
inline void Transaction::set_data_bytes(::std::string&& value) {
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.data_bytes)
  if (!has_data_bytes()) {
    clear_scalar();
    set_has_data_bytes();
    scalar_.data_bytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_bytes_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3.diff.Transaction.data_bytes)
}
#endif
inline void Transaction::set_data_bytes(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_data_bytes()) {
    clear_scalar();
    set_has_data_bytes();
    scalar_.data_bytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3.diff.Transaction.data_bytes)
}
inline void Transaction::set_data_bytes(const void* value, size_t size) {
  if (!has_data_bytes()) {
    clear_scalar();
    set_has_data_bytes();
    scalar_.data_bytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  scalar_.data_bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3.diff.Transaction.data_bytes)
}
inline ::std::string* Transaction::mutable_data_bytes() {
  if (!has_data_bytes()) {
    clear_scalar();
    set_has_data_bytes();
    scalar_.data_bytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:v3.diff.Transaction.data_bytes)
  return scalar_.data_bytes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Transaction::release_data_bytes() {
  // @@protoc_insertion_point(field_release:v3.diff.Transaction.data_bytes)
  if (has_data_bytes()) {
    clear_has_scalar();
    return scalar_.data_bytes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Transaction::set_allocated_data_bytes(::std::string* data_bytes) {
  if (!has_data_bytes()) {
    scalar_.data_bytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_scalar();
  if (data_bytes != NULL) {
    set_has_data_bytes();
    scalar_.data_bytes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        data_bytes);
  }
  // @@protoc_insertion_point(field_set_allocated:v3.diff.Transaction.data_bytes)
}

// .v3.diff.Transaction.OpType operation = 17;
inline void Transaction::clear_operation() {
  operation_ = 0;
}
inline ::v3::diff::Transaction_OpType Transaction::operation() const {
  // @@protoc_insertion_point(field_get:v3.diff.Transaction.operation)
  return static_cast< ::v3::diff::Transaction_OpType >(operation_);
}
inline void Transaction::set_operation(::v3::diff::Transaction_OpType value) {
  
  operation_ = value;
  // @@protoc_insertion_point(field_set:v3.diff.Transaction.operation)
}

inline bool Transaction::has_scalar() const {
  return scalar_case() != SCALAR_NOT_SET;
}
inline void Transaction::clear_has_scalar() {
  _oneof_case_[0] = SCALAR_NOT_SET;
}
inline Transaction::ScalarCase Transaction::scalar_case() const {
  return Transaction::ScalarCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace diff
}  // namespace v3

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::v3::diff::Transaction_OpType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::v3::diff::Transaction_OpType>() {
  return ::v3::diff::Transaction_OpType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v3_2fdiff_2fTransaction_2eproto__INCLUDED
