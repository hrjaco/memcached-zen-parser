// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: memcached-zen.proto

#ifndef PROTOBUF_memcached_2dzen_2eproto__INCLUDED
#define PROTOBUF_memcached_2dzen_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace memcached_zen {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_memcached_2dzen_2eproto();
void protobuf_AssignDesc_memcached_2dzen_2eproto();
void protobuf_ShutdownFile_memcached_2dzen_2eproto();

class Hash;
class Hash_Pair;

// ===================================================================

class Hash_Pair : public ::google::protobuf::Message {
 public:
  Hash_Pair();
  virtual ~Hash_Pair();

  Hash_Pair(const Hash_Pair& from);

  inline Hash_Pair& operator=(const Hash_Pair& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Hash_Pair& default_instance();

  void Swap(Hash_Pair* other);

  // implements Message ----------------------------------------------

  Hash_Pair* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Hash_Pair& from);
  void MergeFrom(const Hash_Pair& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // optional string value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:memcached_zen.Hash.Pair)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* key_;
  ::std::string* value_;
  friend void  protobuf_AddDesc_memcached_2dzen_2eproto();
  friend void protobuf_AssignDesc_memcached_2dzen_2eproto();
  friend void protobuf_ShutdownFile_memcached_2dzen_2eproto();

  void InitAsDefaultInstance();
  static Hash_Pair* default_instance_;
};
// -------------------------------------------------------------------

class Hash : public ::google::protobuf::Message {
 public:
  Hash();
  virtual ~Hash();

  Hash(const Hash& from);

  inline Hash& operator=(const Hash& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Hash& default_instance();

  void Swap(Hash* other);

  // implements Message ----------------------------------------------

  Hash* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Hash& from);
  void MergeFrom(const Hash& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Hash_Pair Pair;

  // accessors -------------------------------------------------------

  // repeated .memcached_zen.Hash.Pair pairs = 1;
  inline int pairs_size() const;
  inline void clear_pairs();
  static const int kPairsFieldNumber = 1;
  inline const ::memcached_zen::Hash_Pair& pairs(int index) const;
  inline ::memcached_zen::Hash_Pair* mutable_pairs(int index);
  inline ::memcached_zen::Hash_Pair* add_pairs();
  inline const ::google::protobuf::RepeatedPtrField< ::memcached_zen::Hash_Pair >&
      pairs() const;
  inline ::google::protobuf::RepeatedPtrField< ::memcached_zen::Hash_Pair >*
      mutable_pairs();

  // @@protoc_insertion_point(class_scope:memcached_zen.Hash)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::memcached_zen::Hash_Pair > pairs_;
  friend void  protobuf_AddDesc_memcached_2dzen_2eproto();
  friend void protobuf_AssignDesc_memcached_2dzen_2eproto();
  friend void protobuf_ShutdownFile_memcached_2dzen_2eproto();

  void InitAsDefaultInstance();
  static Hash* default_instance_;
};
// ===================================================================


// ===================================================================

// Hash_Pair

// optional string key = 1;
inline bool Hash_Pair::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Hash_Pair::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Hash_Pair::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Hash_Pair::clear_key() {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& Hash_Pair::key() const {
  // @@protoc_insertion_point(field_get:memcached_zen.Hash.Pair.key)
  return *key_;
}
inline void Hash_Pair::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set:memcached_zen.Hash.Pair.key)
}
inline void Hash_Pair::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set_char:memcached_zen.Hash.Pair.key)
}
inline void Hash_Pair::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:memcached_zen.Hash.Pair.key)
}
inline ::std::string* Hash_Pair::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:memcached_zen.Hash.Pair.key)
  return key_;
}
inline ::std::string* Hash_Pair::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Hash_Pair::set_allocated_key(::std::string* key) {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete key_;
  }
  if (key) {
    set_has_key();
    key_ = key;
  } else {
    clear_has_key();
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:memcached_zen.Hash.Pair.key)
}

// optional string value = 2;
inline bool Hash_Pair::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Hash_Pair::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Hash_Pair::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Hash_Pair::clear_value() {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& Hash_Pair::value() const {
  // @@protoc_insertion_point(field_get:memcached_zen.Hash.Pair.value)
  return *value_;
}
inline void Hash_Pair::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set:memcached_zen.Hash.Pair.value)
}
inline void Hash_Pair::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set_char:memcached_zen.Hash.Pair.value)
}
inline void Hash_Pair::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:memcached_zen.Hash.Pair.value)
}
inline ::std::string* Hash_Pair::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:memcached_zen.Hash.Pair.value)
  return value_;
}
inline ::std::string* Hash_Pair::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Hash_Pair::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:memcached_zen.Hash.Pair.value)
}

// -------------------------------------------------------------------

// Hash

// repeated .memcached_zen.Hash.Pair pairs = 1;
inline int Hash::pairs_size() const {
  return pairs_.size();
}
inline void Hash::clear_pairs() {
  pairs_.Clear();
}
inline const ::memcached_zen::Hash_Pair& Hash::pairs(int index) const {
  // @@protoc_insertion_point(field_get:memcached_zen.Hash.pairs)
  return pairs_.Get(index);
}
inline ::memcached_zen::Hash_Pair* Hash::mutable_pairs(int index) {
  // @@protoc_insertion_point(field_mutable:memcached_zen.Hash.pairs)
  return pairs_.Mutable(index);
}
inline ::memcached_zen::Hash_Pair* Hash::add_pairs() {
  // @@protoc_insertion_point(field_add:memcached_zen.Hash.pairs)
  return pairs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::memcached_zen::Hash_Pair >&
Hash::pairs() const {
  // @@protoc_insertion_point(field_list:memcached_zen.Hash.pairs)
  return pairs_;
}
inline ::google::protobuf::RepeatedPtrField< ::memcached_zen::Hash_Pair >*
Hash::mutable_pairs() {
  // @@protoc_insertion_point(field_mutable_list:memcached_zen.Hash.pairs)
  return &pairs_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace memcached_zen

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_memcached_2dzen_2eproto__INCLUDED
