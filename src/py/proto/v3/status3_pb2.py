# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: v3/Status3.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='v3/Status3.proto',
  package='v3',
  syntax='proto3',
  serialized_pb=_b('\n\x10v3/Status3.proto\x12\x02v3\"\'\n\x07Status3\x12\x0e\n\x06status\x18\x01 \x01(\x05\x12\x0c\n\x04lang\x18\x02 \x01(\tb\x06proto3')
)




_STATUS3 = _descriptor.Descriptor(
  name='Status3',
  full_name='v3.Status3',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='v3.Status3.status', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='lang', full_name='v3.Status3.lang', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=24,
  serialized_end=63,
)

DESCRIPTOR.message_types_by_name['Status3'] = _STATUS3
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Status3 = _reflection.GeneratedProtocolMessageType('Status3', (_message.Message,), dict(
  DESCRIPTOR = _STATUS3,
  __module__ = 'v3.Status3_pb2'
  # @@protoc_insertion_point(class_scope:v3.Status3)
  ))
_sym_db.RegisterMessage(Status3)


# @@protoc_insertion_point(module_scope)
