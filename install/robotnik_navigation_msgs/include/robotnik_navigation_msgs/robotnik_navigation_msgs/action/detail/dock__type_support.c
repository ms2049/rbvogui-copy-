// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotnik_navigation_msgs:action/Dock.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
#include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotnik_navigation_msgs/action/detail/dock__functions.h"
#include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `dock_frame`
// Member `robot_dock_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `dock_offset`
#include "geometry_msgs/msg/pose2_d.h"
// Member `dock_offset`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"
// Member `maximum_velocity`
#include "geometry_msgs/msg/twist.h"
// Member `maximum_velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_Goal__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_member_array[4] = {
  {
    "dock_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_Goal, dock_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_dock_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_Goal, robot_dock_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dock_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_Goal, dock_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maximum_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_Goal, maximum_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_Goal",  // message name
  4,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_Goal),
  robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_Goal)() {
  robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_Goal__rosidl_typesupport_introspection_c__Dock_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__functions.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `response`
#include "robotnik_common_msgs/msg/response.h"
// Member `response`
#include "robotnik_common_msgs/msg/detail/response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_Result__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_Result, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_Result",  // message name
  1,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_Result),
  robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_Result)() {
  robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_common_msgs, msg, Response)();
  if (!robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_Result__rosidl_typesupport_introspection_c__Dock_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__functions.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `remaining`
// already included above
// #include "geometry_msgs/msg/pose2_d.h"
// Member `remaining`
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"
// Member `current_velocity`
// already included above
// #include "geometry_msgs/msg/twist.h"
// Member `current_velocity`
// already included above
// #include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_Feedback__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_member_array[2] = {
  {
    "remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_Feedback, remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_Feedback, current_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_Feedback",  // message name
  2,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_Feedback),
  robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_Feedback)() {
  robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_Feedback__rosidl_typesupport_introspection_c__Dock_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__functions.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "robotnik_navigation_msgs/action/dock.h"
// Member `goal`
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_SendGoal_Request),
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_SendGoal_Request)() {
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_Goal)();
  if (!robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_SendGoal_Request__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__functions.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_SendGoal_Response__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_SendGoal_Response),
  robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_SendGoal_Response)() {
  robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_SendGoal_Response__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_service_members = {
  "robotnik_navigation_msgs__action",  // service namespace
  "Dock_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_service_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_SendGoal)() {
  if (!robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_service_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_SendGoal_Response)()->data;
  }

  return &robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__functions.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_GetResult_Request__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_GetResult_Request),
  robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_GetResult_Request)() {
  robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_GetResult_Request__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__functions.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "robotnik_navigation_msgs/action/dock.h"
// Member `result`
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_GetResult_Response__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_GetResult_Response),
  robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_GetResult_Response)() {
  robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_Result)();
  if (!robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_GetResult_Response__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_service_members = {
  "robotnik_navigation_msgs__action",  // service namespace
  "Dock_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_service_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_GetResult)() {
  if (!robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_service_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_GetResult_Response)()->data;
  }

  return &robotnik_navigation_msgs__action__detail__dock__rosidl_typesupport_introspection_c__Dock_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotnik_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__functions.h"
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "robotnik_navigation_msgs/action/dock.h"
// Member `feedback`
// already included above
// #include "robotnik_navigation_msgs/action/detail/dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__init(message_memory);
}

void robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_fini_function(void * message_memory)
{
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_navigation_msgs__action__Dock_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_members = {
  "robotnik_navigation_msgs__action",  // message namespace
  "Dock_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robotnik_navigation_msgs__action__Dock_FeedbackMessage),
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_member_array,  // message members
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_type_support_handle = {
  0,
  &robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_FeedbackMessage)() {
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_navigation_msgs, action, Dock_Feedback)();
  if (!robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_navigation_msgs__action__Dock_FeedbackMessage__rosidl_typesupport_introspection_c__Dock_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
