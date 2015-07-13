// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: memcached-zen.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "memcached-zen.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace memcached_zen {

namespace {

const ::google::protobuf::Descriptor* Hash_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Hash_reflection_ = NULL;
const ::google::protobuf::Descriptor* Hash_Pair_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Hash_Pair_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_memcached_2dzen_2eproto() {
  protobuf_AddDesc_memcached_2dzen_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "memcached-zen.proto");
  GOOGLE_CHECK(file != NULL);
  Hash_descriptor_ = file->message_type(0);
  static const int Hash_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hash, pairs_),
  };
  Hash_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Hash_descriptor_,
      Hash::default_instance_,
      Hash_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hash, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hash, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Hash));
  Hash_Pair_descriptor_ = Hash_descriptor_->nested_type(0);
  static const int Hash_Pair_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hash_Pair, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hash_Pair, value_),
  };
  Hash_Pair_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Hash_Pair_descriptor_,
      Hash_Pair::default_instance_,
      Hash_Pair_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hash_Pair, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hash_Pair, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Hash_Pair));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_memcached_2dzen_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Hash_descriptor_, &Hash::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Hash_Pair_descriptor_, &Hash_Pair::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_memcached_2dzen_2eproto() {
  delete Hash::default_instance_;
  delete Hash_reflection_;
  delete Hash_Pair::default_instance_;
  delete Hash_Pair_reflection_;
}

void protobuf_AddDesc_memcached_2dzen_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023memcached-zen.proto\022\rmemcached_zen\"S\n\004"
    "Hash\022\'\n\005pairs\030\001 \003(\0132\030.memcached_zen.Hash"
    ".Pair\032\"\n\004Pair\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001("
    "\t", 121);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "memcached-zen.proto", &protobuf_RegisterTypes);
  Hash::default_instance_ = new Hash();
  Hash_Pair::default_instance_ = new Hash_Pair();
  Hash::default_instance_->InitAsDefaultInstance();
  Hash_Pair::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_memcached_2dzen_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_memcached_2dzen_2eproto {
  StaticDescriptorInitializer_memcached_2dzen_2eproto() {
    protobuf_AddDesc_memcached_2dzen_2eproto();
  }
} static_descriptor_initializer_memcached_2dzen_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Hash_Pair::kKeyFieldNumber;
const int Hash_Pair::kValueFieldNumber;
#endif  // !_MSC_VER

Hash_Pair::Hash_Pair()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:memcached_zen.Hash.Pair)
}

void Hash_Pair::InitAsDefaultInstance() {
}

Hash_Pair::Hash_Pair(const Hash_Pair& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:memcached_zen.Hash.Pair)
}

void Hash_Pair::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Hash_Pair::~Hash_Pair() {
  // @@protoc_insertion_point(destructor:memcached_zen.Hash.Pair)
  SharedDtor();
}

void Hash_Pair::SharedDtor() {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete key_;
  }
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void Hash_Pair::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Hash_Pair::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Hash_Pair_descriptor_;
}

const Hash_Pair& Hash_Pair::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_memcached_2dzen_2eproto();
  return *default_instance_;
}

Hash_Pair* Hash_Pair::default_instance_ = NULL;

Hash_Pair* Hash_Pair::New() const {
  return new Hash_Pair;
}

void Hash_Pair::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        key_->clear();
      }
    }
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Hash_Pair::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:memcached_zen.Hash.Pair)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "key");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // optional string value = 2;
      case 2: {
        if (tag == 18) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "value");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:memcached_zen.Hash.Pair)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:memcached_zen.Hash.Pair)
  return false;
#undef DO_
}

void Hash_Pair::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:memcached_zen.Hash.Pair)
  // optional string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // optional string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:memcached_zen.Hash.Pair)
}

::google::protobuf::uint8* Hash_Pair::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:memcached_zen.Hash.Pair)
  // optional string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // optional string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:memcached_zen.Hash.Pair)
  return target;
}

int Hash_Pair::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string key = 1;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // optional string value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Hash_Pair::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Hash_Pair* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Hash_Pair*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Hash_Pair::MergeFrom(const Hash_Pair& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Hash_Pair::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hash_Pair::CopyFrom(const Hash_Pair& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hash_Pair::IsInitialized() const {

  return true;
}

void Hash_Pair::Swap(Hash_Pair* other) {
  if (other != this) {
    std::swap(key_, other->key_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Hash_Pair::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Hash_Pair_descriptor_;
  metadata.reflection = Hash_Pair_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Hash::kPairsFieldNumber;
#endif  // !_MSC_VER

Hash::Hash()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:memcached_zen.Hash)
}

void Hash::InitAsDefaultInstance() {
}

Hash::Hash(const Hash& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:memcached_zen.Hash)
}

void Hash::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Hash::~Hash() {
  // @@protoc_insertion_point(destructor:memcached_zen.Hash)
  SharedDtor();
}

void Hash::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Hash::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Hash::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Hash_descriptor_;
}

const Hash& Hash::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_memcached_2dzen_2eproto();
  return *default_instance_;
}

Hash* Hash::default_instance_ = NULL;

Hash* Hash::New() const {
  return new Hash;
}

void Hash::Clear() {
  pairs_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Hash::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:memcached_zen.Hash)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .memcached_zen.Hash.Pair pairs = 1;
      case 1: {
        if (tag == 10) {
         parse_pairs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pairs()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_pairs;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:memcached_zen.Hash)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:memcached_zen.Hash)
  return false;
#undef DO_
}

void Hash::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:memcached_zen.Hash)
  // repeated .memcached_zen.Hash.Pair pairs = 1;
  for (int i = 0; i < this->pairs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->pairs(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:memcached_zen.Hash)
}

::google::protobuf::uint8* Hash::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:memcached_zen.Hash)
  // repeated .memcached_zen.Hash.Pair pairs = 1;
  for (int i = 0; i < this->pairs_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->pairs(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:memcached_zen.Hash)
  return target;
}

int Hash::ByteSize() const {
  int total_size = 0;

  // repeated .memcached_zen.Hash.Pair pairs = 1;
  total_size += 1 * this->pairs_size();
  for (int i = 0; i < this->pairs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pairs(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Hash::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Hash* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Hash*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Hash::MergeFrom(const Hash& from) {
  GOOGLE_CHECK_NE(&from, this);
  pairs_.MergeFrom(from.pairs_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Hash::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hash::CopyFrom(const Hash& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hash::IsInitialized() const {

  return true;
}

void Hash::Swap(Hash* other) {
  if (other != this) {
    pairs_.Swap(&other->pairs_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Hash::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Hash_descriptor_;
  metadata.reflection = Hash_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace memcached_zen

// @@protoc_insertion_point(global_scope)
