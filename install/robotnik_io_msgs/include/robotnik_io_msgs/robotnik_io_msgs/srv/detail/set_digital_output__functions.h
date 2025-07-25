// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotnik_io_msgs:srv/SetDigitalOutput.idl
// generated code does not contain a copyright notice

#ifndef ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__FUNCTIONS_H_
#define ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotnik_io_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robotnik_io_msgs/srv/detail/set_digital_output__struct.h"

/// Initialize srv/SetDigitalOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_io_msgs__srv__SetDigitalOutput_Request
 * )) before or use
 * robotnik_io_msgs__srv__SetDigitalOutput_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Request__init(robotnik_io_msgs__srv__SetDigitalOutput_Request * msg);

/// Finalize srv/SetDigitalOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Request__fini(robotnik_io_msgs__srv__SetDigitalOutput_Request * msg);

/// Create srv/SetDigitalOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
robotnik_io_msgs__srv__SetDigitalOutput_Request *
robotnik_io_msgs__srv__SetDigitalOutput_Request__create();

/// Destroy srv/SetDigitalOutput message.
/**
 * It calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Request__destroy(robotnik_io_msgs__srv__SetDigitalOutput_Request * msg);

/// Check for srv/SetDigitalOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Request__are_equal(const robotnik_io_msgs__srv__SetDigitalOutput_Request * lhs, const robotnik_io_msgs__srv__SetDigitalOutput_Request * rhs);

/// Copy a srv/SetDigitalOutput message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Request__copy(
  const robotnik_io_msgs__srv__SetDigitalOutput_Request * input,
  robotnik_io_msgs__srv__SetDigitalOutput_Request * output);

/// Initialize array of srv/SetDigitalOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__init(robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetDigitalOutput messages.
/**
 * It calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__fini(robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence * array);

/// Create array of srv/SetDigitalOutput messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence *
robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetDigitalOutput messages.
/**
 * It calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__destroy(robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence * array);

/// Check for srv/SetDigitalOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__are_equal(const robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence * lhs, const robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence * rhs);

/// Copy an array of srv/SetDigitalOutput messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence__copy(
  const robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence * input,
  robotnik_io_msgs__srv__SetDigitalOutput_Request__Sequence * output);

/// Initialize srv/SetDigitalOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_io_msgs__srv__SetDigitalOutput_Response
 * )) before or use
 * robotnik_io_msgs__srv__SetDigitalOutput_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Response__init(robotnik_io_msgs__srv__SetDigitalOutput_Response * msg);

/// Finalize srv/SetDigitalOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Response__fini(robotnik_io_msgs__srv__SetDigitalOutput_Response * msg);

/// Create srv/SetDigitalOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
robotnik_io_msgs__srv__SetDigitalOutput_Response *
robotnik_io_msgs__srv__SetDigitalOutput_Response__create();

/// Destroy srv/SetDigitalOutput message.
/**
 * It calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Response__destroy(robotnik_io_msgs__srv__SetDigitalOutput_Response * msg);

/// Check for srv/SetDigitalOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Response__are_equal(const robotnik_io_msgs__srv__SetDigitalOutput_Response * lhs, const robotnik_io_msgs__srv__SetDigitalOutput_Response * rhs);

/// Copy a srv/SetDigitalOutput message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Response__copy(
  const robotnik_io_msgs__srv__SetDigitalOutput_Response * input,
  robotnik_io_msgs__srv__SetDigitalOutput_Response * output);

/// Initialize array of srv/SetDigitalOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__init(robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetDigitalOutput messages.
/**
 * It calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__fini(robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence * array);

/// Create array of srv/SetDigitalOutput messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence *
robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetDigitalOutput messages.
/**
 * It calls
 * robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
void
robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__destroy(robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence * array);

/// Check for srv/SetDigitalOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__are_equal(const robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence * lhs, const robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence * rhs);

/// Copy an array of srv/SetDigitalOutput messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_io_msgs
bool
robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence__copy(
  const robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence * input,
  robotnik_io_msgs__srv__SetDigitalOutput_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_IO_MSGS__SRV__DETAIL__SET_DIGITAL_OUTPUT__FUNCTIONS_H_
