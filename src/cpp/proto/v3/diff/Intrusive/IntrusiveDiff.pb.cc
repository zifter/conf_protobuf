// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3/diff/Intrusive/IntrusiveDiff.proto

#include "v3/diff/Intrusive/IntrusiveDiff.pb.h"

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
namespace v3 {
namespace diff {
namespace intrusive {
}  // namespace intrusive
}  // namespace diff
}  // namespace v3
namespace protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "v3/diff/Intrusive/IntrusiveDiff.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n%v3/diff/Intrusive/IntrusiveDiff.proto\022"
      "\021v3.diff.intrusive*$\n\rOperationType\022\007\n\003A"
      "DD\020\000\022\n\n\006DELETE\020\001*!\n\013MessageType\022\010\n\004DIFF\020"
      "\000\022\010\n\004FULL\020\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 139);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "v3/diff/Intrusive/IntrusiveDiff.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto
namespace v3 {
namespace diff {
namespace intrusive {
const ::google::protobuf::EnumDescriptor* OperationType_descriptor() {
  protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto::file_level_enum_descriptors[0];
}
bool OperationType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* MessageType_descriptor() {
  protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_v3_2fdiff_2fIntrusive_2fIntrusiveDiff_2eproto::file_level_enum_descriptors[1];
}
bool MessageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace intrusive
}  // namespace diff
}  // namespace v3

// @@protoc_insertion_point(global_scope)
