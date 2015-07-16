# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: memcached-zen.proto

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
  name='memcached-zen.proto',
  package='memcached_zen',
  serialized_pb=_b('\n\x13memcached-zen.proto\x12\rmemcached_zen\"\'\n\tHashEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\"1\n\x04Hash\x12)\n\x07\x65ntries\x18\x01 \x03(\x0b\x32\x18.memcached_zen.HashEntry')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_HASHENTRY = _descriptor.Descriptor(
  name='HashEntry',
  full_name='memcached_zen.HashEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='memcached_zen.HashEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='memcached_zen.HashEntry.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=38,
  serialized_end=77,
)


_HASH = _descriptor.Descriptor(
  name='Hash',
  full_name='memcached_zen.Hash',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='entries', full_name='memcached_zen.Hash.entries', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=79,
  serialized_end=128,
)

_HASH.fields_by_name['entries'].message_type = _HASHENTRY
DESCRIPTOR.message_types_by_name['HashEntry'] = _HASHENTRY
DESCRIPTOR.message_types_by_name['Hash'] = _HASH

HashEntry = _reflection.GeneratedProtocolMessageType('HashEntry', (_message.Message,), dict(
  DESCRIPTOR = _HASHENTRY,
  __module__ = 'memcached_zen_pb2'
  # @@protoc_insertion_point(class_scope:memcached_zen.HashEntry)
  ))
_sym_db.RegisterMessage(HashEntry)

Hash = _reflection.GeneratedProtocolMessageType('Hash', (_message.Message,), dict(
  DESCRIPTOR = _HASH,
  __module__ = 'memcached_zen_pb2'
  # @@protoc_insertion_point(class_scope:memcached_zen.Hash)
  ))
_sym_db.RegisterMessage(Hash)


# @@protoc_insertion_point(module_scope)
