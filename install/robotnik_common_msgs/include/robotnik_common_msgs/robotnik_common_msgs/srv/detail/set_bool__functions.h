// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotnik_common_msgs:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef ROBOTNIK_COMMON_MSGS__SRV__DETAIL__SET_BOOL__FUNCTIONS_H_
#define ROBOTNIK_COMMON_MSGS__SRV__DETAIL__SET_BOOL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotnik_common_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robotnik_common_msgs/srv/detail/set_bool__struct.h"

/// Initialize srv/SetBool message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_common_msgs__srv__SetBool_Request
 * )) before or use
 * robotnik_common_msgs__srv__SetBool_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Request__init(robotnik_common_msgs__srv__SetBool_Request * msg);

/// Finalize srv/SetBool message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Request__fini(robotnik_common_msgs__srv__SetBool_Request * msg);

/// Create srv/SetBool message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_common_msgs__srv__SetBool_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
robotnik_common_msgs__srv__SetBool_Request *
robotnik_common_msgs__srv__SetBool_Request__create();

/// Destroy srv/SetBool message.
/**
 * It calls
 * robotnik_common_msgs__srv__SetBool_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Request__destroy(robotnik_common_msgs__srv__SetBool_Request * msg);

/// Check for srv/SetBool message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Request__are_equal(const robotnik_common_msgs__srv__SetBool_Request * lhs, const robotnik_common_msgs__srv__SetBool_Request * rhs);

/// Copy a srv/SetBool message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Request__copy(
  const robotnik_common_msgs__srv__SetBool_Request * input,
  robotnik_common_msgs__srv__SetBool_Request * output);

/// Initialize array of srv/SetBool messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_common_msgs__srv__SetBool_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Request__Sequence__init(robotnik_common_msgs__srv__SetBool_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetBool messages.
/**
 * It calls
 * robotnik_common_msgs__srv__SetBool_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Request__Sequence__fini(robotnik_common_msgs__srv__SetBool_Request__Sequence * array);

/// Create array of srv/SetBool messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_common_msgs__srv__SetBool_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
robotnik_common_msgs__srv__SetBool_Request__Sequence *
robotnik_common_msgs__srv__SetBool_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetBool messages.
/**
 * It calls
 * robotnik_common_msgs__srv__SetBool_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Request__Sequence__destroy(robotnik_common_msgs__srv__SetBool_Request__Sequence * array);

/// Check for srv/SetBool message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Request__Sequence__are_equal(const robotnik_common_msgs__srv__SetBool_Request__Sequence * lhs, const robotnik_common_msgs__srv__SetBool_Request__Sequence * rhs);

/// Copy an array of srv/SetBool messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Request__Sequence__copy(
  const robotnik_common_msgs__srv__SetBool_Request__Sequence * input,
  robotnik_common_msgs__srv__SetBool_Request__Sequence * output);

/// Initialize srv/SetBool message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_common_msgs__srv__SetBool_Response
 * )) before or use
 * robotnik_common_msgs__srv__SetBool_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Response__init(robotnik_common_msgs__srv__SetBool_Response * msg);

/// Finalize srv/SetBool message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Response__fini(robotnik_common_msgs__srv__SetBool_Response * msg);

/// Create srv/SetBool message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_common_msgs__srv__SetBool_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
robotnik_common_msgs__srv__SetBool_Response *
robotnik_common_msgs__srv__SetBool_Response__create();

/// Destroy srv/SetBool message.
/**
 * It calls
 * robotnik_common_msgs__srv__SetBool_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Response__destroy(robotnik_common_msgs__srv__SetBool_Response * msg);

/// Check for srv/SetBool message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Response__are_equal(const robotnik_common_msgs__srv__SetBool_Response * lhs, const robotnik_common_msgs__srv__SetBool_Response * rhs);

/// Copy a srv/SetBool message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Response__copy(
  const robotnik_common_msgs__srv__SetBool_Response * input,
  robotnik_common_msgs__srv__SetBool_Response * output);

/// Initialize array of srv/SetBool messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_common_msgs__srv__SetBool_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Response__Sequence__init(robotnik_common_msgs__srv__SetBool_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetBool messages.
/**
 * It calls
 * robotnik_common_msgs__srv__SetBool_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Response__Sequence__fini(robotnik_common_msgs__srv__SetBool_Response__Sequence * array);

/// Create array of srv/SetBool messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_common_msgs__srv__SetBool_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
robotnik_common_msgs__srv__SetBool_Response__Sequence *
robotnik_common_msgs__srv__SetBool_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetBool messages.
/**
 * It calls
 * robotnik_common_msgs__srv__SetBool_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
void
robotnik_common_msgs__srv__SetBool_Response__Sequence__destroy(robotnik_common_msgs__srv__SetBool_Response__Sequence * array);

/// Check for srv/SetBool message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Response__Sequence__are_equal(const robotnik_common_msgs__srv__SetBool_Response__Sequence * lhs, const robotnik_common_msgs__srv__SetBool_Response__Sequence * rhs);

/// Copy an array of srv/SetBool messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_common_msgs
bool
robotnik_common_msgs__srv__SetBool_Response__Sequence__copy(
  const robotnik_common_msgs__srv__SetBool_Response__Sequence * input,
  robotnik_common_msgs__srv__SetBool_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_COMMON_MSGS__SRV__DETAIL__SET_BOOL__FUNCTIONS_H_
