// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgStatus.idl
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
#include "sbg_driver/msg/detail/sbg_status__struct.h"
#include "sbg_driver/msg/detail/sbg_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool sbg_driver__msg__sbg_status_general__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sbg_driver__msg__sbg_status_general__convert_to_py(void * raw_ros_message);
bool sbg_driver__msg__sbg_status_com__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sbg_driver__msg__sbg_status_com__convert_to_py(void * raw_ros_message);
bool sbg_driver__msg__sbg_status_aiding__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sbg_driver__msg__sbg_status_aiding__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("sbg_driver.msg._sbg_status.SbgStatus", full_classname_dest, 36) == 0);
  }
  sbg_driver__msg__SbgStatus * ros_message = _ros_message;
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
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_stamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_general
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_general");
    if (!field) {
      return false;
    }
    if (!sbg_driver__msg__sbg_status_general__convert_from_py(field, &ros_message->status_general)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status_com
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_com");
    if (!field) {
      return false;
    }
    if (!sbg_driver__msg__sbg_status_com__convert_from_py(field, &ros_message->status_com)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status_aiding
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_aiding");
    if (!field) {
      return false;
    }
    if (!sbg_driver__msg__sbg_status_aiding__convert_from_py(field, &ros_message->status_aiding)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgStatus * ros_message = (sbg_driver__msg__SbgStatus *)raw_ros_message;
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
  {  // time_stamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_general
    PyObject * field = NULL;
    field = sbg_driver__msg__sbg_status_general__convert_to_py(&ros_message->status_general);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_general", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_com
    PyObject * field = NULL;
    field = sbg_driver__msg__sbg_status_com__convert_to_py(&ros_message->status_com);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_com", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_aiding
    PyObject * field = NULL;
    field = sbg_driver__msg__sbg_status_aiding__convert_to_py(&ros_message->status_aiding);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_aiding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
