// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotnik_io_msgs:srv/GetRegisters.idl
// generated code does not contain a copyright notice
#include "robotnik_io_msgs/srv/detail/get_registers__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotnik_io_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotnik_io_msgs/srv/detail/get_registers__struct.h"
#include "robotnik_io_msgs/srv/detail/get_registers__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // addresses
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // addresses

// forward declare type support functions


using _GetRegisters_Request__ros_msg_type = robotnik_io_msgs__srv__GetRegisters_Request;

static bool _GetRegisters_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRegisters_Request__ros_msg_type * ros_message = static_cast<const _GetRegisters_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: addresses
  {
    size_t size = ros_message->addresses.size;
    auto array_ptr = ros_message->addresses.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetRegisters_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRegisters_Request__ros_msg_type * ros_message = static_cast<_GetRegisters_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: addresses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->addresses.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->addresses);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->addresses, size)) {
      fprintf(stderr, "failed to create array for field 'addresses'");
      return false;
    }
    auto array_ptr = ros_message->addresses.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_io_msgs
size_t get_serialized_size_robotnik_io_msgs__srv__GetRegisters_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRegisters_Request__ros_msg_type * ros_message = static_cast<const _GetRegisters_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name addresses
  {
    size_t array_size = ros_message->addresses.size;
    auto array_ptr = ros_message->addresses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetRegisters_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotnik_io_msgs__srv__GetRegisters_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_io_msgs
size_t max_serialized_size_robotnik_io_msgs__srv__GetRegisters_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: addresses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotnik_io_msgs__srv__GetRegisters_Request;
    is_plain =
      (
      offsetof(DataType, addresses) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRegisters_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotnik_io_msgs__srv__GetRegisters_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRegisters_Request = {
  "robotnik_io_msgs::srv",
  "GetRegisters_Request",
  _GetRegisters_Request__cdr_serialize,
  _GetRegisters_Request__cdr_deserialize,
  _GetRegisters_Request__get_serialized_size,
  _GetRegisters_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetRegisters_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRegisters_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_io_msgs, srv, GetRegisters_Request)() {
  return &_GetRegisters_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robotnik_io_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robotnik_io_msgs/srv/detail/get_registers__struct.h"
// already included above
// #include "robotnik_io_msgs/srv/detail/get_registers__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "robotnik_common_msgs/msg/detail/response__functions.h"  // response
#include "robotnik_io_msgs/msg/detail/register__functions.h"  // registers

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robotnik_io_msgs
size_t get_serialized_size_robotnik_common_msgs__msg__Response(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robotnik_io_msgs
size_t max_serialized_size_robotnik_common_msgs__msg__Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robotnik_io_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_common_msgs, msg, Response)();
size_t get_serialized_size_robotnik_io_msgs__msg__Register(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robotnik_io_msgs__msg__Register(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_io_msgs, msg, Register)();


using _GetRegisters_Response__ros_msg_type = robotnik_io_msgs__srv__GetRegisters_Response;

static bool _GetRegisters_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRegisters_Response__ros_msg_type * ros_message = static_cast<const _GetRegisters_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robotnik_common_msgs, msg, Response
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->response, cdr))
    {
      return false;
    }
  }

  // Field name: registers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robotnik_io_msgs, msg, Register
      )()->data);
    size_t size = ros_message->registers.size;
    auto array_ptr = ros_message->registers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetRegisters_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRegisters_Response__ros_msg_type * ros_message = static_cast<_GetRegisters_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robotnik_common_msgs, msg, Response
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->response))
    {
      return false;
    }
  }

  // Field name: registers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robotnik_io_msgs, msg, Register
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->registers.data) {
      robotnik_io_msgs__msg__Register__Sequence__fini(&ros_message->registers);
    }
    if (!robotnik_io_msgs__msg__Register__Sequence__init(&ros_message->registers, size)) {
      fprintf(stderr, "failed to create array for field 'registers'");
      return false;
    }
    auto array_ptr = ros_message->registers.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_io_msgs
size_t get_serialized_size_robotnik_io_msgs__srv__GetRegisters_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRegisters_Response__ros_msg_type * ros_message = static_cast<const _GetRegisters_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response

  current_alignment += get_serialized_size_robotnik_common_msgs__msg__Response(
    &(ros_message->response), current_alignment);
  // field.name registers
  {
    size_t array_size = ros_message->registers.size;
    auto array_ptr = ros_message->registers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_robotnik_io_msgs__msg__Register(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetRegisters_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotnik_io_msgs__srv__GetRegisters_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotnik_io_msgs
size_t max_serialized_size_robotnik_io_msgs__srv__GetRegisters_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: response
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotnik_common_msgs__msg__Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: registers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotnik_io_msgs__msg__Register(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotnik_io_msgs__srv__GetRegisters_Response;
    is_plain =
      (
      offsetof(DataType, registers) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRegisters_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotnik_io_msgs__srv__GetRegisters_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRegisters_Response = {
  "robotnik_io_msgs::srv",
  "GetRegisters_Response",
  _GetRegisters_Response__cdr_serialize,
  _GetRegisters_Response__cdr_deserialize,
  _GetRegisters_Response__get_serialized_size,
  _GetRegisters_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetRegisters_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRegisters_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_io_msgs, srv, GetRegisters_Response)() {
  return &_GetRegisters_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robotnik_io_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotnik_io_msgs/srv/get_registers.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetRegisters__callbacks = {
  "robotnik_io_msgs::srv",
  "GetRegisters",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_io_msgs, srv, GetRegisters_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_io_msgs, srv, GetRegisters_Response)(),
};

static rosidl_service_type_support_t GetRegisters__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetRegisters__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotnik_io_msgs, srv, GetRegisters)() {
  return &GetRegisters__handle;
}

#if defined(__cplusplus)
}
#endif
