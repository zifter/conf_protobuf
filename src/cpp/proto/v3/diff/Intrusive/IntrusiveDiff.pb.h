// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/diff/Intrusive/IntrusiveDiff.proto

#ifndef PROTOBUF_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto__INCLUDED
#define PROTOBUF_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto {
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
inline void InitDefaults() {
}
}  // namespace protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto
namespace v3 {
namespace diff {
namespace intrusive {
}  // namespace intrusive
}  // namespace diff
}  // namespace v3
namespace v3 {
namespace diff {
namespace intrusive {

enum OperationType {
  ADD = 0,
  DELETE = 1,
  OperationType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  OperationType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool OperationType_IsValid(int value);
const OperationType OperationType_MIN = ADD;
const OperationType OperationType_MAX = DELETE;
const int OperationType_ARRAYSIZE = OperationType_MAX + 1;

const ::google::protobuf::EnumDescriptor* OperationType_descriptor();
inline const ::std::string& OperationType_Name(OperationType value) {
  return ::google::protobuf::internal::NameOfEnum(
    OperationType_descriptor(), value);
}
inline bool OperationType_Parse(
    const ::std::string& name, OperationType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OperationType>(
    OperationType_descriptor(), name, value);
}
enum MessageType {
  DIFF = 0,
  FULL = 1,
  MessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MessageType_IsValid(int value);
const MessageType MessageType_MIN = DIFF;
const MessageType MessageType_MAX = FULL;
const int MessageType_ARRAYSIZE = MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageType_descriptor();
inline const ::std::string& MessageType_Name(MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageType_descriptor(), value);
}
inline bool MessageType_Parse(
    const ::std::string& name, MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageType>(
    MessageType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace intrusive
}  // namespace diff
}  // namespace v3

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::v3::diff::intrusive::OperationType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::v3::diff::intrusive::OperationType>() {
  return ::v3::diff::intrusive::OperationType_descriptor();
}
template <> struct is_proto_enum< ::v3::diff::intrusive::MessageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::v3::diff::intrusive::MessageType>() {
  return ::v3::diff::intrusive::MessageType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto__INCLUDED
