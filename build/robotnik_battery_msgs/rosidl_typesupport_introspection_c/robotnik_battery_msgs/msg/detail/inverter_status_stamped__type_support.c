// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotnik_battery_msgs:msg/InverterStatusStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotnik_battery_msgs/msg/detail/inverter_status_stamped__rosidl_typesupport_introspection_c.h"
#include "robotnik_battery_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotnik_battery_msgs/msg/detail/inverter_status_stamped__functions.h"
#include "robotnik_battery_msgs/msg/detail/inverter_status_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "robotnik_battery_msgs/msg/inverter_status.h"
// Member `status`
#include "robotnik_battery_msgs/msg/detail/inverter_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_battery_msgs__msg__InverterStatusStamped__init(message_memory);
}

void robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_fini_function(void * message_memory)
{
  robotnik_battery_msgs__msg__InverterStatusStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_battery_msgs__msg__InverterStatusStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_battery_msgs__msg__InverterStatusStamped, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_members = {
  "robotnik_battery_msgs__msg",  // message namespace
  "InverterStatusStamped",  // message name
  2,  // number of fields
  sizeof(robotnik_battery_msgs__msg__InverterStatusStamped),
  robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_member_array,  // message members
  robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_type_support_handle = {
  0,
  &robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_battery_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_battery_msgs, msg, InverterStatusStamped)() {
  robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_battery_msgs, msg, InverterStatus)();
  if (!robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_type_support_handle.typesupport_identifier) {
    robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_battery_msgs__msg__InverterStatusStamped__rosidl_typesupport_introspection_c__InverterStatusStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
