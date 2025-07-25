// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotnik_navigation_msgs:action/Dock.idl
// generated code does not contain a copyright notice

#ifndef ROBOTNIK_NAVIGATION_MSGS__ACTION__DETAIL__DOCK__FUNCTIONS_H_
#define ROBOTNIK_NAVIGATION_MSGS__ACTION__DETAIL__DOCK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotnik_navigation_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robotnik_navigation_msgs/action/detail/dock__struct.h"

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_Goal
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Goal__init(robotnik_navigation_msgs__action__Dock_Goal * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Goal__fini(robotnik_navigation_msgs__action__Dock_Goal * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_Goal *
robotnik_navigation_msgs__action__Dock_Goal__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Goal__destroy(robotnik_navigation_msgs__action__Dock_Goal * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Goal__are_equal(const robotnik_navigation_msgs__action__Dock_Goal * lhs, const robotnik_navigation_msgs__action__Dock_Goal * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Goal__copy(
  const robotnik_navigation_msgs__action__Dock_Goal * input,
  robotnik_navigation_msgs__action__Dock_Goal * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Goal__Sequence__init(robotnik_navigation_msgs__action__Dock_Goal__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Goal__Sequence__fini(robotnik_navigation_msgs__action__Dock_Goal__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_Goal__Sequence *
robotnik_navigation_msgs__action__Dock_Goal__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Goal__Sequence__destroy(robotnik_navigation_msgs__action__Dock_Goal__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Goal__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_Goal__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_Goal__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Goal__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_Goal__Sequence * input,
  robotnik_navigation_msgs__action__Dock_Goal__Sequence * output);

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_Result
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Result__init(robotnik_navigation_msgs__action__Dock_Result * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Result__fini(robotnik_navigation_msgs__action__Dock_Result * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_Result *
robotnik_navigation_msgs__action__Dock_Result__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Result__destroy(robotnik_navigation_msgs__action__Dock_Result * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Result__are_equal(const robotnik_navigation_msgs__action__Dock_Result * lhs, const robotnik_navigation_msgs__action__Dock_Result * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Result__copy(
  const robotnik_navigation_msgs__action__Dock_Result * input,
  robotnik_navigation_msgs__action__Dock_Result * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Result__Sequence__init(robotnik_navigation_msgs__action__Dock_Result__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Result__Sequence__fini(robotnik_navigation_msgs__action__Dock_Result__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_Result__Sequence *
robotnik_navigation_msgs__action__Dock_Result__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Result__Sequence__destroy(robotnik_navigation_msgs__action__Dock_Result__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Result__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_Result__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_Result__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Result__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_Result__Sequence * input,
  robotnik_navigation_msgs__action__Dock_Result__Sequence * output);

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_Feedback
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Feedback__init(robotnik_navigation_msgs__action__Dock_Feedback * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Feedback__fini(robotnik_navigation_msgs__action__Dock_Feedback * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_Feedback *
robotnik_navigation_msgs__action__Dock_Feedback__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Feedback__destroy(robotnik_navigation_msgs__action__Dock_Feedback * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Feedback__are_equal(const robotnik_navigation_msgs__action__Dock_Feedback * lhs, const robotnik_navigation_msgs__action__Dock_Feedback * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Feedback__copy(
  const robotnik_navigation_msgs__action__Dock_Feedback * input,
  robotnik_navigation_msgs__action__Dock_Feedback * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Feedback__Sequence__init(robotnik_navigation_msgs__action__Dock_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Feedback__Sequence__fini(robotnik_navigation_msgs__action__Dock_Feedback__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_Feedback__Sequence *
robotnik_navigation_msgs__action__Dock_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_Feedback__Sequence__destroy(robotnik_navigation_msgs__action__Dock_Feedback__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Feedback__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_Feedback__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_Feedback__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_Feedback__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_Feedback__Sequence * input,
  robotnik_navigation_msgs__action__Dock_Feedback__Sequence * output);

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Request__init(robotnik_navigation_msgs__action__Dock_SendGoal_Request * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Request__fini(robotnik_navigation_msgs__action__Dock_SendGoal_Request * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_SendGoal_Request *
robotnik_navigation_msgs__action__Dock_SendGoal_Request__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Request__destroy(robotnik_navigation_msgs__action__Dock_SendGoal_Request * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Request__are_equal(const robotnik_navigation_msgs__action__Dock_SendGoal_Request * lhs, const robotnik_navigation_msgs__action__Dock_SendGoal_Request * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Request__copy(
  const robotnik_navigation_msgs__action__Dock_SendGoal_Request * input,
  robotnik_navigation_msgs__action__Dock_SendGoal_Request * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__init(robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__fini(robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence *
robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__destroy(robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence * input,
  robotnik_navigation_msgs__action__Dock_SendGoal_Request__Sequence * output);

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Response__init(robotnik_navigation_msgs__action__Dock_SendGoal_Response * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Response__fini(robotnik_navigation_msgs__action__Dock_SendGoal_Response * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_SendGoal_Response *
robotnik_navigation_msgs__action__Dock_SendGoal_Response__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Response__destroy(robotnik_navigation_msgs__action__Dock_SendGoal_Response * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Response__are_equal(const robotnik_navigation_msgs__action__Dock_SendGoal_Response * lhs, const robotnik_navigation_msgs__action__Dock_SendGoal_Response * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Response__copy(
  const robotnik_navigation_msgs__action__Dock_SendGoal_Response * input,
  robotnik_navigation_msgs__action__Dock_SendGoal_Response * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__init(robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__fini(robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence *
robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__destroy(robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence * input,
  robotnik_navigation_msgs__action__Dock_SendGoal_Response__Sequence * output);

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_GetResult_Request
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Request__init(robotnik_navigation_msgs__action__Dock_GetResult_Request * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Request__fini(robotnik_navigation_msgs__action__Dock_GetResult_Request * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_GetResult_Request *
robotnik_navigation_msgs__action__Dock_GetResult_Request__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Request__destroy(robotnik_navigation_msgs__action__Dock_GetResult_Request * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Request__are_equal(const robotnik_navigation_msgs__action__Dock_GetResult_Request * lhs, const robotnik_navigation_msgs__action__Dock_GetResult_Request * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Request__copy(
  const robotnik_navigation_msgs__action__Dock_GetResult_Request * input,
  robotnik_navigation_msgs__action__Dock_GetResult_Request * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__init(robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__fini(robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence *
robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__destroy(robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence * input,
  robotnik_navigation_msgs__action__Dock_GetResult_Request__Sequence * output);

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_GetResult_Response
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Response__init(robotnik_navigation_msgs__action__Dock_GetResult_Response * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Response__fini(robotnik_navigation_msgs__action__Dock_GetResult_Response * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_GetResult_Response *
robotnik_navigation_msgs__action__Dock_GetResult_Response__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Response__destroy(robotnik_navigation_msgs__action__Dock_GetResult_Response * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Response__are_equal(const robotnik_navigation_msgs__action__Dock_GetResult_Response * lhs, const robotnik_navigation_msgs__action__Dock_GetResult_Response * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Response__copy(
  const robotnik_navigation_msgs__action__Dock_GetResult_Response * input,
  robotnik_navigation_msgs__action__Dock_GetResult_Response * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__init(robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__fini(robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence *
robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__destroy(robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence * input,
  robotnik_navigation_msgs__action__Dock_GetResult_Response__Sequence * output);

/// Initialize action/Dock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage
 * )) before or use
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_FeedbackMessage__init(robotnik_navigation_msgs__action__Dock_FeedbackMessage * msg);

/// Finalize action/Dock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_FeedbackMessage__fini(robotnik_navigation_msgs__action__Dock_FeedbackMessage * msg);

/// Create action/Dock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_FeedbackMessage *
robotnik_navigation_msgs__action__Dock_FeedbackMessage__create();

/// Destroy action/Dock message.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_FeedbackMessage__destroy(robotnik_navigation_msgs__action__Dock_FeedbackMessage * msg);

/// Check for action/Dock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_FeedbackMessage__are_equal(const robotnik_navigation_msgs__action__Dock_FeedbackMessage * lhs, const robotnik_navigation_msgs__action__Dock_FeedbackMessage * rhs);

/// Copy a action/Dock message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_FeedbackMessage__copy(
  const robotnik_navigation_msgs__action__Dock_FeedbackMessage * input,
  robotnik_navigation_msgs__action__Dock_FeedbackMessage * output);

/// Initialize array of action/Dock messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__init(robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__fini(robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence * array);

/// Create array of action/Dock messages.
/**
 * It allocates the memory for the array and calls
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence *
robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Dock messages.
/**
 * It calls
 * robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
void
robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__destroy(robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence * array);

/// Check for action/Dock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__are_equal(const robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence * lhs, const robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Dock messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotnik_navigation_msgs
bool
robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence__copy(
  const robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence * input,
  robotnik_navigation_msgs__action__Dock_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTNIK_NAVIGATION_MSGS__ACTION__DETAIL__DOCK__FUNCTIONS_H_
