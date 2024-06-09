// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SKBuiltinBuffer_t.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SKBuiltinBuffer_t.pb.h"

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
// @@protoc_insertion_point(includes)

namespace MMPro {
namespace micromsg {
class SKBuiltinBuffer_tDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SKBuiltinBuffer_t> {
} _SKBuiltinBuffer_t_default_instance_;

namespace protobuf_SKBuiltinBuffer_5ft_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SKBuiltinBuffer_t, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SKBuiltinBuffer_t, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SKBuiltinBuffer_t, _ilen_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SKBuiltinBuffer_t, _buffer_),
  1,
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 7, sizeof(SKBuiltinBuffer_t)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SKBuiltinBuffer_t_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "SKBuiltinBuffer_t.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _SKBuiltinBuffer_t_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _SKBuiltinBuffer_t_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\027SKBuiltinBuffer_t.proto\022\016MMPro.microms"
      "g\"3\n\021SKBuiltinBuffer_t\022\r\n\005_iLen\030\001 \002(\r\022\017\n"
      "\007_Buffer\030\002 \001(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 94);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SKBuiltinBuffer_t.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_SKBuiltinBuffer_5ft_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SKBuiltinBuffer_t::kILenFieldNumber;
const int SKBuiltinBuffer_t::kBufferFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SKBuiltinBuffer_t::SKBuiltinBuffer_t()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_SKBuiltinBuffer_5ft_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:MMPro.micromsg.SKBuiltinBuffer_t)
}
SKBuiltinBuffer_t::SKBuiltinBuffer_t(const SKBuiltinBuffer_t& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _buffer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has__buffer()) {
    _buffer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._buffer_);
  }
  _ilen_ = from._ilen_;
  // @@protoc_insertion_point(copy_constructor:MMPro.micromsg.SKBuiltinBuffer_t)
}

void SKBuiltinBuffer_t::SharedCtor() {
  _cached_size_ = 0;
  _buffer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _ilen_ = 0u;
}

SKBuiltinBuffer_t::~SKBuiltinBuffer_t() {
  // @@protoc_insertion_point(destructor:MMPro.micromsg.SKBuiltinBuffer_t)
  SharedDtor();
}

void SKBuiltinBuffer_t::SharedDtor() {
  _buffer_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SKBuiltinBuffer_t::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SKBuiltinBuffer_t::descriptor() {
  protobuf_SKBuiltinBuffer_5ft_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SKBuiltinBuffer_5ft_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SKBuiltinBuffer_t& SKBuiltinBuffer_t::default_instance() {
  protobuf_SKBuiltinBuffer_5ft_2eproto::InitDefaults();
  return *internal_default_instance();
}

SKBuiltinBuffer_t* SKBuiltinBuffer_t::New(::google::protobuf::Arena* arena) const {
  SKBuiltinBuffer_t* n = new SKBuiltinBuffer_t;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SKBuiltinBuffer_t::Clear() {
// @@protoc_insertion_point(message_clear_start:MMPro.micromsg.SKBuiltinBuffer_t)
  if (has__buffer()) {
    GOOGLE_DCHECK(!_buffer_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*_buffer_.UnsafeRawStringPointer())->clear();
  }
  _ilen_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SKBuiltinBuffer_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MMPro.micromsg.SKBuiltinBuffer_t)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 _iLen = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has__ilen();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &_ilen_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes _Buffer = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable__buffer()));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:MMPro.micromsg.SKBuiltinBuffer_t)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MMPro.micromsg.SKBuiltinBuffer_t)
  return false;
#undef DO_
}

void SKBuiltinBuffer_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MMPro.micromsg.SKBuiltinBuffer_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 _iLen = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->_ilen(), output);
  }

  // optional bytes _Buffer = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->_buffer(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MMPro.micromsg.SKBuiltinBuffer_t)
}

::google::protobuf::uint8* SKBuiltinBuffer_t::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MMPro.micromsg.SKBuiltinBuffer_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 _iLen = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->_ilen(), target);
  }

  // optional bytes _Buffer = 2;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->_buffer(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MMPro.micromsg.SKBuiltinBuffer_t)
  return target;
}

size_t SKBuiltinBuffer_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MMPro.micromsg.SKBuiltinBuffer_t)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // required uint32 _iLen = 1;
  if (has__ilen()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->_ilen());
  }
  // optional bytes _Buffer = 2;
  if (has__buffer()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->_buffer());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SKBuiltinBuffer_t::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MMPro.micromsg.SKBuiltinBuffer_t)
  GOOGLE_DCHECK_NE(&from, this);
  const SKBuiltinBuffer_t* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SKBuiltinBuffer_t>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MMPro.micromsg.SKBuiltinBuffer_t)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MMPro.micromsg.SKBuiltinBuffer_t)
    MergeFrom(*source);
  }
}

void SKBuiltinBuffer_t::MergeFrom(const SKBuiltinBuffer_t& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MMPro.micromsg.SKBuiltinBuffer_t)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has__buffer();
      _buffer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._buffer_);
    }
    if (cached_has_bits & 0x00000002u) {
      _ilen_ = from._ilen_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SKBuiltinBuffer_t::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MMPro.micromsg.SKBuiltinBuffer_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SKBuiltinBuffer_t::CopyFrom(const SKBuiltinBuffer_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MMPro.micromsg.SKBuiltinBuffer_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SKBuiltinBuffer_t::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  return true;
}

void SKBuiltinBuffer_t::Swap(SKBuiltinBuffer_t* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SKBuiltinBuffer_t::InternalSwap(SKBuiltinBuffer_t* other) {
  _buffer_.Swap(&other->_buffer_);
  std::swap(_ilen_, other->_ilen_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SKBuiltinBuffer_t::GetMetadata() const {
  protobuf_SKBuiltinBuffer_5ft_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SKBuiltinBuffer_5ft_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SKBuiltinBuffer_t

// required uint32 _iLen = 1;
bool SKBuiltinBuffer_t::has__ilen() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SKBuiltinBuffer_t::set_has__ilen() {
  _has_bits_[0] |= 0x00000002u;
}
void SKBuiltinBuffer_t::clear_has__ilen() {
  _has_bits_[0] &= ~0x00000002u;
}
void SKBuiltinBuffer_t::clear__ilen() {
  _ilen_ = 0u;
  clear_has__ilen();
}
::google::protobuf::uint32 SKBuiltinBuffer_t::_ilen() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SKBuiltinBuffer_t._iLen)
  return _ilen_;
}
void SKBuiltinBuffer_t::set__ilen(::google::protobuf::uint32 value) {
  set_has__ilen();
  _ilen_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SKBuiltinBuffer_t._iLen)
}

// optional bytes _Buffer = 2;
bool SKBuiltinBuffer_t::has__buffer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SKBuiltinBuffer_t::set_has__buffer() {
  _has_bits_[0] |= 0x00000001u;
}
void SKBuiltinBuffer_t::clear_has__buffer() {
  _has_bits_[0] &= ~0x00000001u;
}
void SKBuiltinBuffer_t::clear__buffer() {
  _buffer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__buffer();
}
const ::std::string& SKBuiltinBuffer_t::_buffer() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
  return _buffer_.GetNoArena();
}
void SKBuiltinBuffer_t::set__buffer(const ::std::string& value) {
  set_has__buffer();
  _buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
#if LANG_CXX11
void SKBuiltinBuffer_t::set__buffer(::std::string&& value) {
  set_has__buffer();
  _buffer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
#endif
void SKBuiltinBuffer_t::set__buffer(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__buffer();
  _buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
void SKBuiltinBuffer_t::set__buffer(const void* value, size_t size) {
  set_has__buffer();
  _buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}
::std::string* SKBuiltinBuffer_t::mutable__buffer() {
  set_has__buffer();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
  return _buffer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SKBuiltinBuffer_t::release__buffer() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
  clear_has__buffer();
  return _buffer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SKBuiltinBuffer_t::set_allocated__buffer(::std::string* _buffer) {
  if (_buffer != NULL) {
    set_has__buffer();
  } else {
    clear_has__buffer();
  }
  _buffer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _buffer);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SKBuiltinBuffer_t._Buffer)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)
