// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SKBuiltinBuffer_t.proto

#ifndef PROTOBUF_SKBuiltinBuffer_5ft_2eproto__INCLUDED
#define PROTOBUF_SKBuiltinBuffer_5ft_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
namespace MMPro {
namespace micromsg {
class SKBuiltinBuffer_t;
class SKBuiltinBuffer_tDefaultTypeInternal;
extern SKBuiltinBuffer_tDefaultTypeInternal _SKBuiltinBuffer_t_default_instance_;
}  // namespace micromsg
}  // namespace MMPro

namespace MMPro {
namespace micromsg {

namespace protobuf_SKBuiltinBuffer_5ft_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_SKBuiltinBuffer_5ft_2eproto

// ===================================================================

class SKBuiltinBuffer_t : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MMPro.micromsg.SKBuiltinBuffer_t) */ {
 public:
  SKBuiltinBuffer_t();
  virtual ~SKBuiltinBuffer_t();

  SKBuiltinBuffer_t(const SKBuiltinBuffer_t& from);

  inline SKBuiltinBuffer_t& operator=(const SKBuiltinBuffer_t& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SKBuiltinBuffer_t& default_instance();

  static inline const SKBuiltinBuffer_t* internal_default_instance() {
    return reinterpret_cast<const SKBuiltinBuffer_t*>(
               &_SKBuiltinBuffer_t_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SKBuiltinBuffer_t* other);

  // implements Message ----------------------------------------------

  inline SKBuiltinBuffer_t* New() const PROTOBUF_FINAL { return New(NULL); }

  SKBuiltinBuffer_t* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SKBuiltinBuffer_t& from);
  void MergeFrom(const SKBuiltinBuffer_t& from);
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
  void InternalSwap(SKBuiltinBuffer_t* other);
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

  // optional bytes _Buffer = 2;
  bool has__buffer() const;
  void clear__buffer();
  static const int kBufferFieldNumber = 2;
  const ::std::string& _buffer() const;
  void set__buffer(const ::std::string& value);
  #if LANG_CXX11
  void set__buffer(::std::string&& value);
  #endif
  void set__buffer(const char* value);
  void set__buffer(const void* value, size_t size);
  ::std::string* mutable__buffer();
  ::std::string* release__buffer();
  void set_allocated__buffer(::std::string* _buffer);

  // required uint32 _iLen = 1;
  bool has__ilen() const;
  void clear__ilen();
  static const int kILenFieldNumber = 1;
  ::google::protobuf::uint32 _ilen() const;
  void set__ilen(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MMPro.micromsg.SKBuiltinBuffer_t)
 private:
  void set_has__ilen();
  void clear_has__ilen();
  void set_has__buffer();
  void clear_has__buffer();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr _buffer_;
  ::google::protobuf::uint32 _ilen_;
  friend struct protobuf_SKBuiltinBuffer_5ft_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SKBuiltinBuffer_t

// required uint32 _iLen = 1;
inline bool SKBuiltinBuffer_t::has__ilen() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SKBuiltinBuffer_t::set_has__ilen() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SKBuiltinBuffer_t::clear_has__ilen() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SKBuiltinBuffer_t::clear__ilen() {
  _ilen_ = 0u;
  clear_has__ilen();
}
inline ::google::protobuf::uint32 SKBuiltinBuffer_t::_ilen() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SKBuiltinBuffer_t._iLen)
  return _ilen_;
}
inline void SKBuiltinBuffer_t::set__ilen(::google::protobuf::uint32 value) {
  set_has__ilen();
  _ilen_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SKBuiltinBuffer_t._iLen)
}

// optional bytes _Buffer = 2;
inline bool SKBuiltinBuffer_t::has__buffer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SKBuiltinBuffer_t::set_has__buffer() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SKBuiltinBuffer_t::clear_has__buffer() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SKBuiltinBuffer_t::clear__buffer() {
  _buffer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__buffer();
}
inline const ::std::string& SKBuiltinBuffer_t::_buffer() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
  return _buffer_.GetNoArena();
}
inline void SKBuiltinBuffer_t::set__buffer(const ::std::string& value) {
  set_has__buffer();
  _buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
#if LANG_CXX11
inline void SKBuiltinBuffer_t::set__buffer(::std::string&& value) {
  set_has__buffer();
  _buffer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
#endif
inline void SKBuiltinBuffer_t::set__buffer(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__buffer();
  _buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
inline void SKBuiltinBuffer_t::set__buffer(const void* value, size_t size) {
  set_has__buffer();
  _buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
inline ::std::string* SKBuiltinBuffer_t::mutable__buffer() {
  set_has__buffer();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
  return _buffer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SKBuiltinBuffer_t::release__buffer() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
  clear_has__buffer();
  return _buffer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SKBuiltinBuffer_t::set_allocated__buffer(::std::string* _buffer) {
  if (_buffer != NULL) {
    set_has__buffer();
  } else {
    clear_has__buffer();
  }
  _buffer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _buffer);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SKBuiltinBuffer_5ft_2eproto__INCLUDED
