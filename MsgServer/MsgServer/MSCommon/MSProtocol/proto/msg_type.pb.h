// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_type.proto

#ifndef PROTOBUF_msg_5ftype_2eproto__INCLUDED
#define PROTOBUF_msg_5ftype_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace pms {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_5ftype_2eproto();
void protobuf_AssignDesc_msg_5ftype_2eproto();
void protobuf_ShutdownFile_msg_5ftype_2eproto();

class ToUser;

enum EModuleType {
  TMEETING = 3,
  TP2P = 4,
  TLIVE = 5,
  TCALLCENTER = 6
};
bool EModuleType_IsValid(int value);
const EModuleType EModuleType_MIN = TMEETING;
const EModuleType EModuleType_MAX = TCALLCENTER;
const int EModuleType_ARRAYSIZE = EModuleType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EModuleType_descriptor();
inline const ::std::string& EModuleType_Name(EModuleType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EModuleType_descriptor(), value);
}
inline bool EModuleType_Parse(
    const ::std::string& name, EModuleType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EModuleType>(
    EModuleType_descriptor(), name, value);
}
enum ETransferModule {
  MCONNECTOR = 1,
  MMSGQUEUE = 2,
  MMEETING = 3,
  MP2P = 4,
  MLIVE = 5,
  MCALLCENTER = 6
};
bool ETransferModule_IsValid(int value);
const ETransferModule ETransferModule_MIN = MCONNECTOR;
const ETransferModule ETransferModule_MAX = MCALLCENTER;
const int ETransferModule_ARRAYSIZE = ETransferModule_MAX + 1;

const ::google::protobuf::EnumDescriptor* ETransferModule_descriptor();
inline const ::std::string& ETransferModule_Name(ETransferModule value) {
  return ::google::protobuf::internal::NameOfEnum(
    ETransferModule_descriptor(), value);
}
inline bool ETransferModule_Parse(
    const ::std::string& name, ETransferModule* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ETransferModule>(
    ETransferModule_descriptor(), name, value);
}
enum ETransferType {
  TCONN = 1,
  TTRANS = 2,
  TQUEUE = 3,
  TDISPATCH = 4,
  TPUSH = 5,
  TLOGIN = 6,
  TLOGOUT = 7
};
bool ETransferType_IsValid(int value);
const ETransferType ETransferType_MIN = TCONN;
const ETransferType ETransferType_MAX = TLOGOUT;
const int ETransferType_ARRAYSIZE = ETransferType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ETransferType_descriptor();
inline const ::std::string& ETransferType_Name(ETransferType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ETransferType_descriptor(), value);
}
inline bool ETransferType_Parse(
    const ::std::string& name, ETransferType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ETransferType>(
    ETransferType_descriptor(), name, value);
}
enum ETransferPriority {
  PLOW = 1,
  PNORMAL = 2,
  PHIGH = 3
};
bool ETransferPriority_IsValid(int value);
const ETransferPriority ETransferPriority_MIN = PLOW;
const ETransferPriority ETransferPriority_MAX = PHIGH;
const int ETransferPriority_ARRAYSIZE = ETransferPriority_MAX + 1;

const ::google::protobuf::EnumDescriptor* ETransferPriority_descriptor();
inline const ::std::string& ETransferPriority_Name(ETransferPriority value) {
  return ::google::protobuf::internal::NameOfEnum(
    ETransferPriority_descriptor(), value);
}
inline bool ETransferPriority_Parse(
    const ::std::string& name, ETransferPriority* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ETransferPriority>(
    ETransferPriority_descriptor(), name, value);
}
enum ETransferFlag {
  FNOACK = 1,
  FNEEDACK = 2,
  FACK = 3
};
bool ETransferFlag_IsValid(int value);
const ETransferFlag ETransferFlag_MIN = FNOACK;
const ETransferFlag ETransferFlag_MAX = FACK;
const int ETransferFlag_ARRAYSIZE = ETransferFlag_MAX + 1;

const ::google::protobuf::EnumDescriptor* ETransferFlag_descriptor();
inline const ::std::string& ETransferFlag_Name(ETransferFlag value) {
  return ::google::protobuf::internal::NameOfEnum(
    ETransferFlag_descriptor(), value);
}
inline bool ETransferFlag_Parse(
    const ::std::string& name, ETransferFlag* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ETransferFlag>(
    ETransferFlag_descriptor(), name, value);
}
enum EConnTag {
  THI = 1,
  THELLO = 2,
  THELLOHI = 3,
  TKEEPALIVE = 4
};
bool EConnTag_IsValid(int value);
const EConnTag EConnTag_MIN = THI;
const EConnTag EConnTag_MAX = TKEEPALIVE;
const int EConnTag_ARRAYSIZE = EConnTag_MAX + 1;

const ::google::protobuf::EnumDescriptor* EConnTag_descriptor();
inline const ::std::string& EConnTag_Name(EConnTag value) {
  return ::google::protobuf::internal::NameOfEnum(
    EConnTag_descriptor(), value);
}
inline bool EConnTag_Parse(
    const ::std::string& name, EConnTag* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EConnTag>(
    EConnTag_descriptor(), name, value);
}
enum EConnType {
  TTCP = 1,
  THTTP = 2
};
bool EConnType_IsValid(int value);
const EConnType EConnType_MIN = TTCP;
const EConnType EConnType_MAX = THTTP;
const int EConnType_ARRAYSIZE = EConnType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EConnType_descriptor();
inline const ::std::string& EConnType_Name(EConnType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EConnType_descriptor(), value);
}
inline bool EConnType_Parse(
    const ::std::string& name, EConnType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EConnType>(
    EConnType_descriptor(), name, value);
}
enum EServerCmd {
  CLOGIN = 1,
  CSNDMSG = 2,
  CGETMSG = 3,
  CLOGOUT = 4,
  CKEEPALIVE = 5
};
bool EServerCmd_IsValid(int value);
const EServerCmd EServerCmd_MIN = CLOGIN;
const EServerCmd EServerCmd_MAX = CKEEPALIVE;
const int EServerCmd_ARRAYSIZE = EServerCmd_MAX + 1;

const ::google::protobuf::EnumDescriptor* EServerCmd_descriptor();
inline const ::std::string& EServerCmd_Name(EServerCmd value) {
  return ::google::protobuf::internal::NameOfEnum(
    EServerCmd_descriptor(), value);
}
inline bool EServerCmd_Parse(
    const ::std::string& name, EServerCmd* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EServerCmd>(
    EServerCmd_descriptor(), name, value);
}
enum EMsgType {
  TMSG = 1,
  TFILE = 2,
  TPIC = 3,
  TAUD = 4,
  TVID = 5
};
bool EMsgType_IsValid(int value);
const EMsgType EMsgType_MIN = TMSG;
const EMsgType EMsgType_MAX = TVID;
const int EMsgType_ARRAYSIZE = EMsgType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EMsgType_descriptor();
inline const ::std::string& EMsgType_Name(EMsgType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EMsgType_descriptor(), value);
}
inline bool EMsgType_Parse(
    const ::std::string& name, EMsgType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EMsgType>(
    EMsgType_descriptor(), name, value);
}
enum EMsgTag {
  TENTER = 1,
  TLEAVE = 2,
  TCHAT = 3,
  TNOTIFY = 4
};
bool EMsgTag_IsValid(int value);
const EMsgTag EMsgTag_MIN = TENTER;
const EMsgTag EMsgTag_MAX = TNOTIFY;
const int EMsgTag_ARRAYSIZE = EMsgTag_MAX + 1;

const ::google::protobuf::EnumDescriptor* EMsgTag_descriptor();
inline const ::std::string& EMsgTag_Name(EMsgTag value) {
  return ::google::protobuf::internal::NameOfEnum(
    EMsgTag_descriptor(), value);
}
inline bool EMsgTag_Parse(
    const ::std::string& name, EMsgTag* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EMsgTag>(
    EMsgTag_descriptor(), name, value);
}
enum EMsgHead {
  HSND = 1,
  HGET = 2
};
bool EMsgHead_IsValid(int value);
const EMsgHead EMsgHead_MIN = HSND;
const EMsgHead EMsgHead_MAX = HGET;
const int EMsgHead_ARRAYSIZE = EMsgHead_MAX + 1;

const ::google::protobuf::EnumDescriptor* EMsgHead_descriptor();
inline const ::std::string& EMsgHead_Name(EMsgHead value) {
  return ::google::protobuf::internal::NameOfEnum(
    EMsgHead_descriptor(), value);
}
inline bool EMsgHead_Parse(
    const ::std::string& name, EMsgHead* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EMsgHead>(
    EMsgHead_descriptor(), name, value);
}
// ===================================================================

class ToUser : public ::google::protobuf::Message {
 public:
  ToUser();
  virtual ~ToUser();

  ToUser(const ToUser& from);

  inline ToUser& operator=(const ToUser& from) {
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
  static const ToUser& default_instance();

  void Swap(ToUser* other);

  // implements Message ----------------------------------------------

  ToUser* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ToUser& from);
  void MergeFrom(const ToUser& from);
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

  // repeated string users = 1;
  inline int users_size() const;
  inline void clear_users();
  static const int kUsersFieldNumber = 1;
  inline const ::std::string& users(int index) const;
  inline ::std::string* mutable_users(int index);
  inline void set_users(int index, const ::std::string& value);
  inline void set_users(int index, const char* value);
  inline void set_users(int index, const char* value, size_t size);
  inline ::std::string* add_users();
  inline void add_users(const ::std::string& value);
  inline void add_users(const char* value);
  inline void add_users(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& users() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_users();

  // @@protoc_insertion_point(class_scope:pms.ToUser)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> users_;
  friend void  protobuf_AddDesc_msg_5ftype_2eproto();
  friend void protobuf_AssignDesc_msg_5ftype_2eproto();
  friend void protobuf_ShutdownFile_msg_5ftype_2eproto();

  void InitAsDefaultInstance();
  static ToUser* default_instance_;
};
// ===================================================================


// ===================================================================

// ToUser

// repeated string users = 1;
inline int ToUser::users_size() const {
  return users_.size();
}
inline void ToUser::clear_users() {
  users_.Clear();
}
inline const ::std::string& ToUser::users(int index) const {
  // @@protoc_insertion_point(field_get:pms.ToUser.users)
  return users_.Get(index);
}
inline ::std::string* ToUser::mutable_users(int index) {
  // @@protoc_insertion_point(field_mutable:pms.ToUser.users)
  return users_.Mutable(index);
}
inline void ToUser::set_users(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pms.ToUser.users)
  users_.Mutable(index)->assign(value);
}
inline void ToUser::set_users(int index, const char* value) {
  users_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pms.ToUser.users)
}
inline void ToUser::set_users(int index, const char* value, size_t size) {
  users_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pms.ToUser.users)
}
inline ::std::string* ToUser::add_users() {
  return users_.Add();
}
inline void ToUser::add_users(const ::std::string& value) {
  users_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pms.ToUser.users)
}
inline void ToUser::add_users(const char* value) {
  users_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pms.ToUser.users)
}
inline void ToUser::add_users(const char* value, size_t size) {
  users_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pms.ToUser.users)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ToUser::users() const {
  // @@protoc_insertion_point(field_list:pms.ToUser.users)
  return users_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ToUser::mutable_users() {
  // @@protoc_insertion_point(field_mutable_list:pms.ToUser.users)
  return &users_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pms

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::pms::EModuleType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::EModuleType>() {
  return ::pms::EModuleType_descriptor();
}
template <> struct is_proto_enum< ::pms::ETransferModule> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::ETransferModule>() {
  return ::pms::ETransferModule_descriptor();
}
template <> struct is_proto_enum< ::pms::ETransferType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::ETransferType>() {
  return ::pms::ETransferType_descriptor();
}
template <> struct is_proto_enum< ::pms::ETransferPriority> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::ETransferPriority>() {
  return ::pms::ETransferPriority_descriptor();
}
template <> struct is_proto_enum< ::pms::ETransferFlag> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::ETransferFlag>() {
  return ::pms::ETransferFlag_descriptor();
}
template <> struct is_proto_enum< ::pms::EConnTag> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::EConnTag>() {
  return ::pms::EConnTag_descriptor();
}
template <> struct is_proto_enum< ::pms::EConnType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::EConnType>() {
  return ::pms::EConnType_descriptor();
}
template <> struct is_proto_enum< ::pms::EServerCmd> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::EServerCmd>() {
  return ::pms::EServerCmd_descriptor();
}
template <> struct is_proto_enum< ::pms::EMsgType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::EMsgType>() {
  return ::pms::EMsgType_descriptor();
}
template <> struct is_proto_enum< ::pms::EMsgTag> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::EMsgTag>() {
  return ::pms::EMsgTag_descriptor();
}
template <> struct is_proto_enum< ::pms::EMsgHead> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pms::EMsgHead>() {
  return ::pms::EMsgHead_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5ftype_2eproto__INCLUDED
