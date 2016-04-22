// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_type.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg_type.pb.h"

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

namespace pms {

namespace {

const ::google::protobuf::Descriptor* ToUser_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ToUser_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* EModuleType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETransferModule_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETransferType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETransferPriority_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETransferFlag_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EConnTag_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EConnType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EServerCmd_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EMsgType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EMsgTag_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EMsgHead_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_5ftype_2eproto() {
  protobuf_AddDesc_msg_5ftype_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg_type.proto");
  GOOGLE_CHECK(file != NULL);
  ToUser_descriptor_ = file->message_type(0);
  static const int ToUser_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ToUser, users_),
  };
  ToUser_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ToUser_descriptor_,
      ToUser::default_instance_,
      ToUser_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ToUser, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ToUser, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ToUser));
  EModuleType_descriptor_ = file->enum_type(0);
  ETransferModule_descriptor_ = file->enum_type(1);
  ETransferType_descriptor_ = file->enum_type(2);
  ETransferPriority_descriptor_ = file->enum_type(3);
  ETransferFlag_descriptor_ = file->enum_type(4);
  EConnTag_descriptor_ = file->enum_type(5);
  EConnType_descriptor_ = file->enum_type(6);
  EServerCmd_descriptor_ = file->enum_type(7);
  EMsgType_descriptor_ = file->enum_type(8);
  EMsgTag_descriptor_ = file->enum_type(9);
  EMsgHead_descriptor_ = file->enum_type(10);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_5ftype_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ToUser_descriptor_, &ToUser::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_5ftype_2eproto() {
  delete ToUser::default_instance_;
  delete ToUser_reflection_;
}

void protobuf_AddDesc_msg_5ftype_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016msg_type.proto\022\003pms\"\027\n\006ToUser\022\r\n\005users"
    "\030\001 \003(\t*A\n\013EModuleType\022\014\n\010TMEETING\020\003\022\010\n\004T"
    "P2P\020\004\022\t\n\005TLIVE\020\005\022\017\n\013TCALLCENTER\020\006*d\n\017ETr"
    "ansferModule\022\016\n\nMCONNECTOR\020\001\022\r\n\tMMSGQUEU"
    "E\020\002\022\014\n\010MMEETING\020\003\022\010\n\004MP2P\020\004\022\t\n\005MLIVE\020\005\022\017"
    "\n\013MCALLCENTER\020\006*e\n\rETransferType\022\t\n\005TCON"
    "N\020\001\022\n\n\006TTRANS\020\002\022\n\n\006TQUEUE\020\003\022\r\n\tTDISPATCH"
    "\020\004\022\t\n\005TPUSH\020\005\022\n\n\006TLOGIN\020\006\022\013\n\007TLOGOUT\020\007*5"
    "\n\021ETransferPriority\022\010\n\004PLOW\020\001\022\013\n\007PNORMAL"
    "\020\002\022\t\n\005PHIGH\020\003*3\n\rETransferFlag\022\n\n\006FNOACK"
    "\020\001\022\014\n\010FNEEDACK\020\002\022\010\n\004FACK\020\003*=\n\010EConnTag\022\007"
    "\n\003THI\020\001\022\n\n\006THELLO\020\002\022\014\n\010THELLOHI\020\003\022\016\n\nTKE"
    "EPALIVE\020\004* \n\tEConnType\022\010\n\004TTCP\020\001\022\t\n\005THTT"
    "P\020\002*O\n\nEServerCmd\022\n\n\006CLOGIN\020\001\022\013\n\007CSNDMSG"
    "\020\002\022\013\n\007CGETMSG\020\003\022\013\n\007CLOGOUT\020\004\022\016\n\nCKEEPALI"
    "VE\020\005*=\n\010EMsgType\022\010\n\004TMSG\020\001\022\t\n\005TFILE\020\002\022\010\n"
    "\004TPIC\020\003\022\010\n\004TAUD\020\004\022\010\n\004TVID\020\005*9\n\007EMsgTag\022\n"
    "\n\006TENTER\020\001\022\n\n\006TLEAVE\020\002\022\t\n\005TCHAT\020\003\022\013\n\007TNO"
    "TIFY\020\004*\036\n\010EMsgHead\022\010\n\004HSND\020\001\022\010\n\004HGET\020\002", 758);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg_type.proto", &protobuf_RegisterTypes);
  ToUser::default_instance_ = new ToUser();
  ToUser::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5ftype_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5ftype_2eproto {
  StaticDescriptorInitializer_msg_5ftype_2eproto() {
    protobuf_AddDesc_msg_5ftype_2eproto();
  }
} static_descriptor_initializer_msg_5ftype_2eproto_;
const ::google::protobuf::EnumDescriptor* EModuleType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EModuleType_descriptor_;
}
bool EModuleType_IsValid(int value) {
  switch(value) {
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETransferModule_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETransferModule_descriptor_;
}
bool ETransferModule_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETransferType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETransferType_descriptor_;
}
bool ETransferType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETransferPriority_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETransferPriority_descriptor_;
}
bool ETransferPriority_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETransferFlag_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETransferFlag_descriptor_;
}
bool ETransferFlag_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EConnTag_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EConnTag_descriptor_;
}
bool EConnTag_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EConnType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EConnType_descriptor_;
}
bool EConnType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EServerCmd_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EServerCmd_descriptor_;
}
bool EServerCmd_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EMsgType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EMsgType_descriptor_;
}
bool EMsgType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EMsgTag_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EMsgTag_descriptor_;
}
bool EMsgTag_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EMsgHead_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EMsgHead_descriptor_;
}
bool EMsgHead_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int ToUser::kUsersFieldNumber;
#endif  // !_MSC_VER

ToUser::ToUser()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pms.ToUser)
}

void ToUser::InitAsDefaultInstance() {
}

ToUser::ToUser(const ToUser& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pms.ToUser)
}

void ToUser::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ToUser::~ToUser() {
  // @@protoc_insertion_point(destructor:pms.ToUser)
  SharedDtor();
}

void ToUser::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ToUser::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ToUser::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ToUser_descriptor_;
}

const ToUser& ToUser::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5ftype_2eproto();
  return *default_instance_;
}

ToUser* ToUser::default_instance_ = NULL;

ToUser* ToUser::New() const {
  return new ToUser;
}

void ToUser::Clear() {
  users_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ToUser::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pms.ToUser)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string users = 1;
      case 1: {
        if (tag == 10) {
         parse_users:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_users()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->users(this->users_size() - 1).data(),
            this->users(this->users_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "users");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_users;
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
  // @@protoc_insertion_point(parse_success:pms.ToUser)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pms.ToUser)
  return false;
#undef DO_
}

void ToUser::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pms.ToUser)
  // repeated string users = 1;
  for (int i = 0; i < this->users_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->users(i).data(), this->users(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "users");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->users(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pms.ToUser)
}

::google::protobuf::uint8* ToUser::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pms.ToUser)
  // repeated string users = 1;
  for (int i = 0; i < this->users_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->users(i).data(), this->users(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "users");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->users(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pms.ToUser)
  return target;
}

int ToUser::ByteSize() const {
  int total_size = 0;

  // repeated string users = 1;
  total_size += 1 * this->users_size();
  for (int i = 0; i < this->users_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->users(i));
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

void ToUser::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ToUser* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ToUser*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ToUser::MergeFrom(const ToUser& from) {
  GOOGLE_CHECK_NE(&from, this);
  users_.MergeFrom(from.users_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ToUser::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ToUser::CopyFrom(const ToUser& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ToUser::IsInitialized() const {

  return true;
}

void ToUser::Swap(ToUser* other) {
  if (other != this) {
    users_.Swap(&other->users_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ToUser::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ToUser_descriptor_;
  metadata.reflection = ToUser_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pms

// @@protoc_insertion_point(global_scope)
