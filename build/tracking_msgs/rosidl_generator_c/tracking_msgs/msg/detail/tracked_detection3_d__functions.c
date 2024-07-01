// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracking_msgs:msg/TrackedDetection3D.idl
// generated code does not contain a copyright notice
#include "tracking_msgs/msg/detail/tracked_detection3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detection`
// Member `observation_history`
// Member `predicted_states`
#include "vision_msgs/msg/detail/detection3_d__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
tracking_msgs__msg__TrackedDetection3D__init(tracking_msgs__msg__TrackedDetection3D * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tracking_msgs__msg__TrackedDetection3D__fini(msg);
    return false;
  }
  // tracked_id
  // detection
  if (!vision_msgs__msg__Detection3D__init(&msg->detection)) {
    tracking_msgs__msg__TrackedDetection3D__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    tracking_msgs__msg__TrackedDetection3D__fini(msg);
    return false;
  }
  // observation_history
  if (!vision_msgs__msg__Detection3D__Sequence__init(&msg->observation_history, 0)) {
    tracking_msgs__msg__TrackedDetection3D__fini(msg);
    return false;
  }
  // predicted_states
  if (!vision_msgs__msg__Detection3D__Sequence__init(&msg->predicted_states, 0)) {
    tracking_msgs__msg__TrackedDetection3D__fini(msg);
    return false;
  }
  return true;
}

void
tracking_msgs__msg__TrackedDetection3D__fini(tracking_msgs__msg__TrackedDetection3D * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracked_id
  // detection
  vision_msgs__msg__Detection3D__fini(&msg->detection);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // observation_history
  vision_msgs__msg__Detection3D__Sequence__fini(&msg->observation_history);
  // predicted_states
  vision_msgs__msg__Detection3D__Sequence__fini(&msg->predicted_states);
}

bool
tracking_msgs__msg__TrackedDetection3D__are_equal(const tracking_msgs__msg__TrackedDetection3D * lhs, const tracking_msgs__msg__TrackedDetection3D * rhs)
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
  // tracked_id
  if (lhs->tracked_id != rhs->tracked_id) {
    return false;
  }
  // detection
  if (!vision_msgs__msg__Detection3D__are_equal(
      &(lhs->detection), &(rhs->detection)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // observation_history
  if (!vision_msgs__msg__Detection3D__Sequence__are_equal(
      &(lhs->observation_history), &(rhs->observation_history)))
  {
    return false;
  }
  // predicted_states
  if (!vision_msgs__msg__Detection3D__Sequence__are_equal(
      &(lhs->predicted_states), &(rhs->predicted_states)))
  {
    return false;
  }
  return true;
}

bool
tracking_msgs__msg__TrackedDetection3D__copy(
  const tracking_msgs__msg__TrackedDetection3D * input,
  tracking_msgs__msg__TrackedDetection3D * output)
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
  // tracked_id
  output->tracked_id = input->tracked_id;
  // detection
  if (!vision_msgs__msg__Detection3D__copy(
      &(input->detection), &(output->detection)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // observation_history
  if (!vision_msgs__msg__Detection3D__Sequence__copy(
      &(input->observation_history), &(output->observation_history)))
  {
    return false;
  }
  // predicted_states
  if (!vision_msgs__msg__Detection3D__Sequence__copy(
      &(input->predicted_states), &(output->predicted_states)))
  {
    return false;
  }
  return true;
}

tracking_msgs__msg__TrackedDetection3D *
tracking_msgs__msg__TrackedDetection3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__TrackedDetection3D * msg = (tracking_msgs__msg__TrackedDetection3D *)allocator.allocate(sizeof(tracking_msgs__msg__TrackedDetection3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_msgs__msg__TrackedDetection3D));
  bool success = tracking_msgs__msg__TrackedDetection3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_msgs__msg__TrackedDetection3D__destroy(tracking_msgs__msg__TrackedDetection3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_msgs__msg__TrackedDetection3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_msgs__msg__TrackedDetection3D__Sequence__init(tracking_msgs__msg__TrackedDetection3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__TrackedDetection3D * data = NULL;

  if (size) {
    data = (tracking_msgs__msg__TrackedDetection3D *)allocator.zero_allocate(size, sizeof(tracking_msgs__msg__TrackedDetection3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_msgs__msg__TrackedDetection3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_msgs__msg__TrackedDetection3D__fini(&data[i - 1]);
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
tracking_msgs__msg__TrackedDetection3D__Sequence__fini(tracking_msgs__msg__TrackedDetection3D__Sequence * array)
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
      tracking_msgs__msg__TrackedDetection3D__fini(&array->data[i]);
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

tracking_msgs__msg__TrackedDetection3D__Sequence *
tracking_msgs__msg__TrackedDetection3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__TrackedDetection3D__Sequence * array = (tracking_msgs__msg__TrackedDetection3D__Sequence *)allocator.allocate(sizeof(tracking_msgs__msg__TrackedDetection3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_msgs__msg__TrackedDetection3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_msgs__msg__TrackedDetection3D__Sequence__destroy(tracking_msgs__msg__TrackedDetection3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_msgs__msg__TrackedDetection3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_msgs__msg__TrackedDetection3D__Sequence__are_equal(const tracking_msgs__msg__TrackedDetection3D__Sequence * lhs, const tracking_msgs__msg__TrackedDetection3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_msgs__msg__TrackedDetection3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_msgs__msg__TrackedDetection3D__Sequence__copy(
  const tracking_msgs__msg__TrackedDetection3D__Sequence * input,
  tracking_msgs__msg__TrackedDetection3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_msgs__msg__TrackedDetection3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_msgs__msg__TrackedDetection3D * data =
      (tracking_msgs__msg__TrackedDetection3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_msgs__msg__TrackedDetection3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_msgs__msg__TrackedDetection3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_msgs__msg__TrackedDetection3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
