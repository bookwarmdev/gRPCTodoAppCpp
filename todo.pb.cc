// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: todo.proto

#include "todo.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr TodoItem::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : text_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TodoItem::TodoItem(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct TodoItemDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TodoItemDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TodoItemDefaultTypeInternal() {}
  union {
    TodoItem _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TodoItemDefaultTypeInternal _TodoItem_default_instance_;
      template <typename>
PROTOBUF_CONSTEXPR NoParams::NoParams(::_pbi::ConstantInitialized) {}
struct NoParamsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NoParamsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~NoParamsDefaultTypeInternal() {}
  union {
    NoParams _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NoParamsDefaultTypeInternal _NoParams_default_instance_;

inline constexpr TodoItems::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : items_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TodoItems::TodoItems(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct TodoItemsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TodoItemsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TodoItemsDefaultTypeInternal() {}
  union {
    TodoItems _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TodoItemsDefaultTypeInternal _TodoItems_default_instance_;
static ::_pb::Metadata file_level_metadata_todo_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_todo_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_todo_2eproto = nullptr;
const ::uint32_t TableStruct_todo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::NoParams, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::TodoItem, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::TodoItem, _impl_.id_),
    PROTOBUF_FIELD_OFFSET(::TodoItem, _impl_.text_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::TodoItems, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::TodoItems, _impl_.items_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::NoParams)},
        {8, -1, -1, sizeof(::TodoItem)},
        {18, -1, -1, sizeof(::TodoItems)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::_NoParams_default_instance_._instance,
    &::_TodoItem_default_instance_._instance,
    &::_TodoItems_default_instance_._instance,
};
const char descriptor_table_protodef_todo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\ntodo.proto\"\n\n\010NoParams\"$\n\010TodoItem\022\n\n\002"
    "id\030\001 \001(\005\022\014\n\004text\030\002 \001(\t\"%\n\tTodoItems\022\030\n\005i"
    "tems\030\001 \003(\0132\t.TodoItem2}\n\004Todo\022$\n\ncreateT"
    "odo\022\t.TodoItem\032\t.TodoItem\"\000\022$\n\treadTodos"
    "\022\t.NoParams\032\n.TodoItems\"\000\022)\n\016readTodoStr"
    "eam\022\t.NoParams\032\n.TodoItems\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_todo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_todo_2eproto = {
    false,
    false,
    236,
    descriptor_table_protodef_todo_2eproto,
    "todo.proto",
    &descriptor_table_todo_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_todo_2eproto::offsets,
    file_level_metadata_todo_2eproto,
    file_level_enum_descriptors_todo_2eproto,
    file_level_service_descriptors_todo_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_todo_2eproto_getter() {
  return &descriptor_table_todo_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_todo_2eproto(&descriptor_table_todo_2eproto);
// ===================================================================

class NoParams::_Internal {
 public:
};

NoParams::NoParams(::google::protobuf::Arena* arena)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:NoParams)
}
NoParams::NoParams(
    ::google::protobuf::Arena* arena,
    const NoParams& from)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  NoParams* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:NoParams)
}









::google::protobuf::Metadata NoParams::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_todo_2eproto_getter, &descriptor_table_todo_2eproto_once,
      file_level_metadata_todo_2eproto[0]);
}
// ===================================================================

class TodoItem::_Internal {
 public:
};

TodoItem::TodoItem(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:TodoItem)
}
inline PROTOBUF_NDEBUG_INLINE TodoItem::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : text_(arena, from.text_),
        _cached_size_{0} {}

TodoItem::TodoItem(
    ::google::protobuf::Arena* arena,
    const TodoItem& from)
    : ::google::protobuf::Message(arena) {
  TodoItem* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.id_ = from._impl_.id_;

  // @@protoc_insertion_point(copy_constructor:TodoItem)
}
inline PROTOBUF_NDEBUG_INLINE TodoItem::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : text_(arena),
        _cached_size_{0} {}

inline void TodoItem::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.id_ = {};
}
TodoItem::~TodoItem() {
  // @@protoc_insertion_point(destructor:TodoItem)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TodoItem::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.text_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void TodoItem::Clear() {
// @@protoc_insertion_point(message_clear_start:TodoItem)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.text_.ClearToEmpty();
  _impl_.id_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TodoItem::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 21, 2> TodoItem::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TodoItem_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string text = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(TodoItem, _impl_.text_)}},
    // int32 id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(TodoItem, _impl_.id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(TodoItem, _impl_.id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 id = 1;
    {PROTOBUF_FIELD_OFFSET(TodoItem, _impl_.id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string text = 2;
    {PROTOBUF_FIELD_OFFSET(TodoItem, _impl_.text_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\10\0\4\0\0\0\0\0"
    "TodoItem"
    "text"
  }},
};

::uint8_t* TodoItem::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TodoItem)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_id(), target);
  }

  // string text = 2;
  if (!this->_internal_text().empty()) {
    const std::string& _s = this->_internal_text();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "TodoItem.text");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TodoItem)
  return target;
}

::size_t TodoItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TodoItem)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string text = 2;
  if (!this->_internal_text().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_text());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TodoItem::_class_data_ = {
    TodoItem::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* TodoItem::GetClassData() const {
  return &_class_data_;
}

void TodoItem::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TodoItem*>(&to_msg);
  auto& from = static_cast<const TodoItem&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:TodoItem)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TodoItem::CopyFrom(const TodoItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TodoItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TodoItem::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* TodoItem::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void TodoItem::InternalSwap(TodoItem* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.text_, &other->_impl_.text_, arena);
        swap(_impl_.id_, other->_impl_.id_);
}

::google::protobuf::Metadata TodoItem::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_todo_2eproto_getter, &descriptor_table_todo_2eproto_once,
      file_level_metadata_todo_2eproto[1]);
}
// ===================================================================

class TodoItems::_Internal {
 public:
};

TodoItems::TodoItems(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:TodoItems)
}
inline PROTOBUF_NDEBUG_INLINE TodoItems::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : items_{visibility, arena, from.items_},
        _cached_size_{0} {}

TodoItems::TodoItems(
    ::google::protobuf::Arena* arena,
    const TodoItems& from)
    : ::google::protobuf::Message(arena) {
  TodoItems* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:TodoItems)
}
inline PROTOBUF_NDEBUG_INLINE TodoItems::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : items_{visibility, arena},
        _cached_size_{0} {}

inline void TodoItems::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TodoItems::~TodoItems() {
  // @@protoc_insertion_point(destructor:TodoItems)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TodoItems::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void TodoItems::Clear() {
// @@protoc_insertion_point(message_clear_start:TodoItems)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.items_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TodoItems::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> TodoItems::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_TodoItems_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // repeated .TodoItem items = 1;
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TodoItems, _impl_.items_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .TodoItem items = 1;
    {PROTOBUF_FIELD_OFFSET(TodoItems, _impl_.items_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::TodoItem>()},
  }}, {{
  }},
};

::uint8_t* TodoItems::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TodoItems)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .TodoItem items = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_items_size()); i < n; i++) {
    const auto& repfield = this->_internal_items().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TodoItems)
  return target;
}

::size_t TodoItems::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TodoItems)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .TodoItem items = 1;
  total_size += 1UL * this->_internal_items_size();
  for (const auto& msg : this->_internal_items()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TodoItems::_class_data_ = {
    TodoItems::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* TodoItems::GetClassData() const {
  return &_class_data_;
}

void TodoItems::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TodoItems*>(&to_msg);
  auto& from = static_cast<const TodoItems&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:TodoItems)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_items()->MergeFrom(
      from._internal_items());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TodoItems::CopyFrom(const TodoItems& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TodoItems)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TodoItems::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* TodoItems::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void TodoItems::InternalSwap(TodoItems* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.items_.InternalSwap(&other->_impl_.items_);
}

::google::protobuf::Metadata TodoItems::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_todo_2eproto_getter, &descriptor_table_todo_2eproto_once,
      file_level_metadata_todo_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
