// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotnik_io_msgs:msg/Register.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotnik_io_msgs/msg/detail/register__rosidl_typesupport_introspection_c.h"
#include "robotnik_io_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotnik_io_msgs/msg/detail/register__functions.h"
#include "robotnik_io_msgs/msg/detail/register__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_io_msgs__msg__Register__init(message_memory);
}

void robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_fini_function(void * message_memory)
{
  robotnik_io_msgs__msg__Register__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_member_array[2] = {
  {
    "address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_io_msgs__msg__Register, address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_io_msgs__msg__Register, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_members = {
  "robotnik_io_msgs__msg",  // message namespace
  "Register",  // message name
  2,  // number of fields
  sizeof(robotnik_io_msgs__msg__Register),
  robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_member_array,  // message members
  robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_type_support_handle = {
  0,
  &robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_io_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_io_msgs, msg, Register)() {
  if (!robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_type_support_handle.typesupport_identifier) {
    robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_io_msgs__msg__Register__rosidl_typesupport_introspection_c__Register_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
