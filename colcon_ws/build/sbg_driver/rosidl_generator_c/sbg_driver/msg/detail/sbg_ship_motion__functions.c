// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgShipMotion.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_ship_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ship_motion`
// Member `acceleration`
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `status`
#include "sbg_driver/msg/detail/sbg_ship_motion_status__functions.h"

bool
sbg_driver__msg__SbgShipMotion__init(sbg_driver__msg__SbgShipMotion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sbg_driver__msg__SbgShipMotion__fini(msg);
    return false;
  }
  // time_stamp
  // heave_period
  // ship_motion
  if (!geometry_msgs__msg__Vector3__init(&msg->ship_motion)) {
    sbg_driver__msg__SbgShipMotion__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    sbg_driver__msg__SbgShipMotion__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    sbg_driver__msg__SbgShipMotion__fini(msg);
    return false;
  }
  // status
  if (!sbg_driver__msg__SbgShipMotionStatus__init(&msg->status)) {
    sbg_driver__msg__SbgShipMotion__fini(msg);
    return false;
  }
  return true;
}

void
sbg_driver__msg__SbgShipMotion__fini(sbg_driver__msg__SbgShipMotion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_stamp
  // heave_period
  // ship_motion
  geometry_msgs__msg__Vector3__fini(&msg->ship_motion);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // status
  sbg_driver__msg__SbgShipMotionStatus__fini(&msg->status);
}

bool
sbg_driver__msg__SbgShipMotion__are_equal(const sbg_driver__msg__SbgShipMotion * lhs, const sbg_driver__msg__SbgShipMotion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // heave_period
  if (lhs->heave_period != rhs->heave_period) {
    return false;
  }
  // ship_motion
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ship_motion), &(rhs->ship_motion)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // status
  if (!sbg_driver__msg__SbgShipMotionStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgShipMotion__copy(
  const sbg_driver__msg__SbgShipMotion * input,
  sbg_driver__msg__SbgShipMotion * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time_stamp
  output->time_stamp = input->time_stamp;
  // heave_period
  output->heave_period = input->heave_period;
  // ship_motion
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ship_motion), &(output->ship_motion)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // status
  if (!sbg_driver__msg__SbgShipMotionStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

sbg_driver__msg__SbgShipMotion *
sbg_driver__msg__SbgShipMotion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgShipMotion * msg = (sbg_driver__msg__SbgShipMotion *)allocator.allocate(sizeof(sbg_driver__msg__SbgShipMotion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgShipMotion));
  bool success = sbg_driver__msg__SbgShipMotion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgShipMotion__destroy(sbg_driver__msg__SbgShipMotion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgShipMotion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgShipMotion__Sequence__init(sbg_driver__msg__SbgShipMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgShipMotion * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgShipMotion *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgShipMotion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgShipMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgShipMotion__fini(&data[i - 1]);
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
sbg_driver__msg__SbgShipMotion__Sequence__fini(sbg_driver__msg__SbgShipMotion__Sequence * array)
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
      sbg_driver__msg__SbgShipMotion__fini(&array->data[i]);
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

sbg_driver__msg__SbgShipMotion__Sequence *
sbg_driver__msg__SbgShipMotion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgShipMotion__Sequence * array = (sbg_driver__msg__SbgShipMotion__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgShipMotion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgShipMotion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgShipMotion__Sequence__destroy(sbg_driver__msg__SbgShipMotion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgShipMotion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgShipMotion__Sequence__are_equal(const sbg_driver__msg__SbgShipMotion__Sequence * lhs, const sbg_driver__msg__SbgShipMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgShipMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgShipMotion__Sequence__copy(
  const sbg_driver__msg__SbgShipMotion__Sequence * input,
  sbg_driver__msg__SbgShipMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgShipMotion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgShipMotion * data =
      (sbg_driver__msg__SbgShipMotion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgShipMotion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgShipMotion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgShipMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
