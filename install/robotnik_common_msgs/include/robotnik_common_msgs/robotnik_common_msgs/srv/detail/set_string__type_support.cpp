// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotnik_common_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotnik_common_msgs/srv/detail/set_string__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotnik_common_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetString_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotnik_common_msgs::srv::SetString_Request(_init);
}

void SetString_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotnik_common_msgs::srv::SetString_Request *>(message_memory);
  typed_message->~SetString_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetString_Request_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_common_msgs::srv::SetString_Request, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetString_Request_message_members = {
  "robotnik_common_msgs::srv",  // message namespace
  "SetString_Request",  // message name
  1,  // number of fields
  sizeof(robotnik_common_msgs::srv::SetString_Request),
  SetString_Request_message_member_array,  // message members
  SetString_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetString_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetString_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetString_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotnik_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotnik_common_msgs::srv::SetString_Request>()
{
  return &::robotnik_common_msgs::srv::rosidl_typesupport_introspection_cpp::SetString_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotnik_common_msgs, srv, SetString_Request)() {
  return &::robotnik_common_msgs::srv::rosidl_typesupport_introspection_cpp::SetString_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotnik_common_msgs/srv/detail/set_string__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotnik_common_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetString_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotnik_common_msgs::srv::SetString_Response(_init);
}

void SetString_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotnik_common_msgs::srv::SetString_Response *>(message_memory);
  typed_message->~SetString_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetString_Response_message_member_array[1] = {
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotnik_common_msgs::msg::Response>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_common_msgs::srv::SetString_Response, response),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetString_Response_message_members = {
  "robotnik_common_msgs::srv",  // message namespace
  "SetString_Response",  // message name
  1,  // number of fields
  sizeof(robotnik_common_msgs::srv::SetString_Response),
  SetString_Response_message_member_array,  // message members
  SetString_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetString_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetString_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetString_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotnik_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotnik_common_msgs::srv::SetString_Response>()
{
  return &::robotnik_common_msgs::srv::rosidl_typesupport_introspection_cpp::SetString_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotnik_common_msgs, srv, SetString_Response)() {
  return &::robotnik_common_msgs::srv::rosidl_typesupport_introspection_cpp::SetString_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "robotnik_common_msgs/srv/detail/set_string__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robotnik_common_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetString_service_members = {
  "robotnik_common_msgs::srv",  // service namespace
  "SetString",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<robotnik_common_msgs::srv::SetString>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetString_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetString_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotnik_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robotnik_common_msgs::srv::SetString>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robotnik_common_msgs::srv::rosidl_typesupport_introspection_cpp::SetString_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotnik_common_msgs::srv::SetString_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotnik_common_msgs::srv::SetString_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotnik_common_msgs, srv, SetString)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robotnik_common_msgs::srv::SetString>();
}

#ifdef __cplusplus
}
#endif
