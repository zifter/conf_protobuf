# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: v3/big_message/BigMessage.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from v3 import AllFieldsMessage_pb2 as v3_dot_AllFieldsMessage__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='v3/big_message/BigMessage.proto',
  package='v3',
  syntax='proto3',
  serialized_pb=_b('\n\x1fv3/big_message/BigMessage.proto\x12\x02v3\x1a\x19v3/AllFieldsMessage.proto\"F\n\nBigMessage\x12\x0e\n\x06\x66ield1\x18\x01 \x01(\x05\x12(\n\nall_fields\x18\x02 \x01(\x0b\x32\x14.v3.AllFieldsMessageb\x06proto3')
  ,
  dependencies=[v3_dot_AllFieldsMessage__pb2.DESCRIPTOR,])




_BIGMESSAGE = _descriptor.Descriptor(
  name='BigMessage',
  full_name='v3.BigMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='field1', full_name='v3.BigMessage.field1', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='all_fields', full_name='v3.BigMessage.all_fields', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=66,
  serialized_end=136,
)

_BIGMESSAGE.fields_by_name['all_fields'].message_type = v3_dot_AllFieldsMessage__pb2._ALLFIELDSMESSAGE
DESCRIPTOR.message_types_by_name['BigMessage'] = _BIGMESSAGE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BigMessage = _reflection.GeneratedProtocolMessageType('BigMessage', (_message.Message,), dict(
  DESCRIPTOR = _BIGMESSAGE,
  __module__ = 'v3.big_message.BigMessage_pb2'
  # @@protoc_insertion_point(class_scope:v3.BigMessage)
  ))
_sym_db.RegisterMessage(BigMessage)


# @@protoc_insertion_point(module_scope)
