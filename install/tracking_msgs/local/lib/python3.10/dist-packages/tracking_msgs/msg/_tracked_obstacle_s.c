// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
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
#include "tracking_msgs/msg/detail/tracked_obstacle__struct.h"
#include "tracking_msgs/msg/detail/tracked_obstacle__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "tracking_msgs/msg/detail/tracked_obstacle_state__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool tracking_msgs__msg__obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracking_msgs__msg__obstacle__convert_to_py(void * raw_ros_message);
bool tracking_msgs__msg__tracked_obstacle_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracking_msgs__msg__tracked_obstacle_state__convert_to_py(void * raw_ros_message);
bool tracking_msgs__msg__tracked_obstacle_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracking_msgs__msg__tracked_obstacle_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tracking_msgs__msg__tracked_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("tracking_msgs.msg._tracked_obstacle.TrackedObstacle", full_classname_dest, 51) == 0);
  }
  tracking_msgs__msg__TrackedObstacle * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle");
    if (!field) {
      return false;
    }
    if (!tracking_msgs__msg__obstacle__convert_from_py(field, &ros_message->obstacle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // observation_history
    PyObject * field = PyObject_GetAttrString(_pymsg, "observation_history");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'observation_history'");
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
    if (!tracking_msgs__msg__TrackedObstacleState__Sequence__init(&(ros_message->observation_history), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tracking_msgs__msg__TrackedObstacleState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tracking_msgs__msg__TrackedObstacleState * dest = ros_message->observation_history.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tracking_msgs__msg__tracked_obstacle_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // predicted_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "predicted_states");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'predicted_states'");
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
    if (!tracking_msgs__msg__TrackedObstacleState__Sequence__init(&(ros_message->predicted_states), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tracking_msgs__msg__TrackedObstacleState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tracking_msgs__msg__TrackedObstacleState * dest = ros_message->predicted_states.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tracking_msgs__msg__tracked_obstacle_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * tracking_msgs__msg__tracked_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrackedObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tracking_msgs.msg._tracked_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrackedObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tracking_msgs__msg__TrackedObstacle * ros_message = (tracking_msgs__msg__TrackedObstacle *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle
    PyObject * field = NULL;
    field = tracking_msgs__msg__obstacle__convert_to_py(&ros_message->obstacle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // observation_history
    PyObject * field = NULL;
    size_t size = ros_message->observation_history.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tracking_msgs__msg__TrackedObstacleState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->observation_history.data[i]);
      PyObject * pyitem = tracking_msgs__msg__tracked_obstacle_state__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "observation_history", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predicted_states
    PyObject * field = NULL;
    size_t size = ros_message->predicted_states.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tracking_msgs__msg__TrackedObstacleState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->predicted_states.data[i]);
      PyObject * pyitem = tracking_msgs__msg__tracked_obstacle_state__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "predicted_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
