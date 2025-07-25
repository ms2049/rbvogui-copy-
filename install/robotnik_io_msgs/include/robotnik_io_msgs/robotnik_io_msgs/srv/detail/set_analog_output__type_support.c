// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotnik_io_msgs:srv/SetAnalogOutput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotnik_io_msgs/srv/detail/set_analog_output__rosidl_typesupport_introspection_c.h"
#include "robotnik_io_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotnik_io_msgs/srv/detail/set_analog_output__functions.h"
#include "robotnik_io_msgs/srv/detail/set_analog_output__struct.h"


// Include directives for member types
// Member `output`
#include "robotnik_io_msgs/msg/analog_io.h"
// Member `output`
#include "robotnik_io_msgs/msg/detail/analog_io__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_io_msgs__srv__SetAnalogOutput_Request__init(message_memory);
}

void robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_fini_function(void * message_memory)
{
  robotnik_io_msgs__srv__SetAnalogOutput_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_member_array[1] = {
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_io_msgs__srv__SetAnalogOutput_Request, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_members = {
  "robotnik_io_msgs__srv",  // message namespace
  "SetAnalogOutput_Request",  // message name
  1,  // number of fields
  sizeof(robotnik_io_msgs__srv__SetAnalogOutput_Request),
  robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_member_array,  // message members
  robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_type_support_handle = {
  0,
  &robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_io_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, srv, SetAnalogOutput_Request)() {
  robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, msg, AnalogIO)();
  if (!robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_type_support_handle.typesupport_identifier) {
    robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_io_msgs__srv__SetAnalogOutput_Request__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_io_msgs/srv/detail/set_analog_output__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_io_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_io_msgs/srv/detail/set_analog_output__functions.h"
// already included above
// #include "robotnik_io_msgs/srv/detail/set_analog_output__struct.h"


// Include directives for member types
// Member `response`
#include "robotnik_common_msgs/msg/response.h"
// Member `response`
#include "robotnik_common_msgs/msg/detail/response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_io_msgs__srv__SetAnalogOutput_Response__init(message_memory);
}

void robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_fini_function(void * message_memory)
{
  robotnik_io_msgs__srv__SetAnalogOutput_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_io_msgs__srv__SetAnalogOutput_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_members = {
  "robotnik_io_msgs__srv",  // message namespace
  "SetAnalogOutput_Response",  // message name
  1,  // number of fields
  sizeof(robotnik_io_msgs__srv__SetAnalogOutput_Response),
  robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_member_array,  // message members
  robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_type_support_handle = {
  0,
  &robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_io_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, srv, SetAnalogOutput_Response)() {
  robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_common_msgs, msg, Response)();
  if (!robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_type_support_handle.typesupport_identifier) {
    robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_io_msgs__srv__SetAnalogOutput_Response__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotnik_io_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robotnik_io_msgs/srv/detail/set_analog_output__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_service_members = {
  "robotnik_io_msgs__srv",  // service namespace
  "SetAnalogOutput",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_Request_message_type_support_handle,
  NULL  // response message
  // robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_Response_message_type_support_handle
};

static rosidl_service_type_support_t robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_service_type_support_handle = {
  0,
  &robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, srv, SetAnalogOutput_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, srv, SetAnalogOutput_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_io_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, srv, SetAnalogOutput)() {
  if (!robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_service_type_support_handle.typesupport_identifier) {
    robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, srv, SetAnalogOutput_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, srv, SetAnalogOutput_Response)()->data;
  }

  return &robotnik_io_msgs__srv__detail__set_analog_output__rosidl_typesupport_introspection_c__SetAnalogOutput_service_type_support_handle;
}
