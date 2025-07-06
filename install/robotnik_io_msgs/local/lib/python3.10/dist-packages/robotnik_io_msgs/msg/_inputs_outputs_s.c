// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robotnik_io_msgs:msg/InputsOutputs.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robotnik_io_msgs/msg/detail/inputs_outputs__struct.h"
#include "robotnik_io_msgs/msg/detail/inputs_outputs__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "robotnik_io_msgs/msg/detail/analog_io__functions.h"
#include "robotnik_io_msgs/msg/detail/digital_io__functions.h"
// end nested array functions include
bool robotnik_io_msgs__msg__digital_io__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robotnik_io_msgs__msg__digital_io__convert_to_py(void * raw_ros_message);
bool robotnik_io_msgs__msg__digital_io__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robotnik_io_msgs__msg__digital_io__convert_to_py(void * raw_ros_message);
bool robotnik_io_msgs__msg__analog_io__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robotnik_io_msgs__msg__analog_io__convert_to_py(void * raw_ros_message);
bool robotnik_io_msgs__msg__analog_io__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robotnik_io_msgs__msg__analog_io__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robotnik_io_msgs__msg__inputs_outputs__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robotnik_io_msgs.msg._inputs_outputs.InputsOutputs", full_classname_dest, 50) == 0);
  }
  robotnik_io_msgs__msg__InputsOutputs * ros_message = _ros_message;
  {  // digital_inputs
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_inputs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'digital_inputs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robotnik_io_msgs__msg__DigitalIO__Sequence__init(&(ros_message->digital_inputs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robotnik_io_msgs__msg__DigitalIO__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robotnik_io_msgs__msg__DigitalIO * dest = ros_message->digital_inputs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robotnik_io_msgs__msg__digital_io__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // digital_outputs
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_outputs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'digital_outputs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robotnik_io_msgs__msg__DigitalIO__Sequence__init(&(ros_message->digital_outputs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robotnik_io_msgs__msg__DigitalIO__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robotnik_io_msgs__msg__DigitalIO * dest = ros_message->digital_outputs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robotnik_io_msgs__msg__digital_io__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // analog_inputs
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_inputs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'analog_inputs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robotnik_io_msgs__msg__AnalogIO__Sequence__init(&(ros_message->analog_inputs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robotnik_io_msgs__msg__AnalogIO__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robotnik_io_msgs__msg__AnalogIO * dest = ros_message->analog_inputs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robotnik_io_msgs__msg__analog_io__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // analog_outputs
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_outputs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'analog_outputs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robotnik_io_msgs__msg__AnalogIO__Sequence__init(&(ros_message->analog_outputs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robotnik_io_msgs__msg__AnalogIO__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robotnik_io_msgs__msg__AnalogIO * dest = ros_message->analog_outputs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robotnik_io_msgs__msg__analog_io__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robotnik_io_msgs__msg__inputs_outputs__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InputsOutputs */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robotnik_io_msgs.msg._inputs_outputs");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InputsOutputs");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robotnik_io_msgs__msg__InputsOutputs * ros_message = (robotnik_io_msgs__msg__InputsOutputs *)raw_ros_message;
  {  // digital_inputs
    PyObject * field = NULL;
    size_t size = ros_message->digital_inputs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robotnik_io_msgs__msg__DigitalIO * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->digital_inputs.data[i]);
      PyObject * pyitem = robotnik_io_msgs__msg__digital_io__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_inputs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digital_outputs
    PyObject * field = NULL;
    size_t size = ros_message->digital_outputs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robotnik_io_msgs__msg__DigitalIO * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->digital_outputs.data[i]);
      PyObject * pyitem = robotnik_io_msgs__msg__digital_io__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_outputs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_inputs
    PyObject * field = NULL;
    size_t size = ros_message->analog_inputs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robotnik_io_msgs__msg__AnalogIO * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->analog_inputs.data[i]);
      PyObject * pyitem = robotnik_io_msgs__msg__analog_io__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_inputs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_outputs
    PyObject * field = NULL;
    size_t size = ros_message->analog_outputs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robotnik_io_msgs__msg__AnalogIO * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->analog_outputs.data[i]);
      PyObject * pyitem = robotnik_io_msgs__msg__analog_io__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_outputs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
