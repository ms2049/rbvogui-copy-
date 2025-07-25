// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotnik_io_msgs:msg/DigitalIO.idl
// generated code does not contain a copyright notice
#include "robotnik_io_msgs/msg/detail/digital_io__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
robotnik_io_msgs__msg__DigitalIO__init(robotnik_io_msgs__msg__DigitalIO * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    robotnik_io_msgs__msg__DigitalIO__fini(msg);
    return false;
  }
  // value
  return true;
}

void
robotnik_io_msgs__msg__DigitalIO__fini(robotnik_io_msgs__msg__DigitalIO * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
}

bool
robotnik_io_msgs__msg__DigitalIO__are_equal(const robotnik_io_msgs__msg__DigitalIO * lhs, const robotnik_io_msgs__msg__DigitalIO * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
robotnik_io_msgs__msg__DigitalIO__copy(
  const robotnik_io_msgs__msg__DigitalIO * input,
  robotnik_io_msgs__msg__DigitalIO * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

robotnik_io_msgs__msg__DigitalIO *
robotnik_io_msgs__msg__DigitalIO__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotnik_io_msgs__msg__DigitalIO * msg = (robotnik_io_msgs__msg__DigitalIO *)allocator.allocate(sizeof(robotnik_io_msgs__msg__DigitalIO), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotnik_io_msgs__msg__DigitalIO));
  bool success = robotnik_io_msgs__msg__DigitalIO__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotnik_io_msgs__msg__DigitalIO__destroy(robotnik_io_msgs__msg__DigitalIO * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotnik_io_msgs__msg__DigitalIO__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotnik_io_msgs__msg__DigitalIO__Sequence__init(robotnik_io_msgs__msg__DigitalIO__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotnik_io_msgs__msg__DigitalIO * data = NULL;

  if (size) {
    data = (robotnik_io_msgs__msg__DigitalIO *)allocator.zero_allocate(size, sizeof(robotnik_io_msgs__msg__DigitalIO), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotnik_io_msgs__msg__DigitalIO__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotnik_io_msgs__msg__DigitalIO__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotnik_io_msgs__msg__DigitalIO__Sequence__fini(robotnik_io_msgs__msg__DigitalIO__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotnik_io_msgs__msg__DigitalIO__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotnik_io_msgs__msg__DigitalIO__Sequence *
robotnik_io_msgs__msg__DigitalIO__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotnik_io_msgs__msg__DigitalIO__Sequence * array = (robotnik_io_msgs__msg__DigitalIO__Sequence *)allocator.allocate(sizeof(robotnik_io_msgs__msg__DigitalIO__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotnik_io_msgs__msg__DigitalIO__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotnik_io_msgs__msg__DigitalIO__Sequence__destroy(robotnik_io_msgs__msg__DigitalIO__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotnik_io_msgs__msg__DigitalIO__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotnik_io_msgs__msg__DigitalIO__Sequence__are_equal(const robotnik_io_msgs__msg__DigitalIO__Sequence * lhs, const robotnik_io_msgs__msg__DigitalIO__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotnik_io_msgs__msg__DigitalIO__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotnik_io_msgs__msg__DigitalIO__Sequence__copy(
  const robotnik_io_msgs__msg__DigitalIO__Sequence * input,
  robotnik_io_msgs__msg__DigitalIO__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotnik_io_msgs__msg__DigitalIO);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotnik_io_msgs__msg__DigitalIO * data =
      (robotnik_io_msgs__msg__DigitalIO *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotnik_io_msgs__msg__DigitalIO__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotnik_io_msgs__msg__DigitalIO__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotnik_io_msgs__msg__DigitalIO__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
