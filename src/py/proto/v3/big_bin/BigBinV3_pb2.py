# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: v3/big_bin/BigBinV3.proto

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
  name='v3/big_bin/BigBinV3.proto',
  package='v3',
  syntax='proto3',
  serialized_pb=_b('\n\x19v3/big_bin/BigBinV3.proto\x12\x02v3\".\n\x08\x42igBinV3\x12\x0e\n\x06status\x18\x01 \x01(\x05\x12\x12\n\nnewBinData\x18\x03 \x01(\tb\x06proto3')
)




_BIGBINV3 = _descriptor.Descriptor(
  name='BigBinV3',
  full_name='v3.BigBinV3',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='v3.BigBinV3.status', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='newBinData', full_name='v3.BigBinV3.newBinData', index=1,
      number=3, type=9, cpp_type=9, label=1,
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
  serialized_start=33,
  serialized_end=79,
)

DESCRIPTOR.message_types_by_name['BigBinV3'] = _BIGBINV3
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BigBinV3 = _reflection.GeneratedProtocolMessageType('BigBinV3', (_message.Message,), dict(
  DESCRIPTOR = _BIGBINV3,
  __module__ = 'v3.big_bin.BigBinV3_pb2'
  # @@protoc_insertion_point(class_scope:v3.BigBinV3)
  ))
_sym_db.RegisterMessage(BigBinV3)


# @@protoc_insertion_point(module_scope)
