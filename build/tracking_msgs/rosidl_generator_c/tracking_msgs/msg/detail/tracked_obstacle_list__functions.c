// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracking_msgs:msg/TrackedObstacleList.idl
// generated code does not contain a copyright notice
#include "tracking_msgs/msg/detail/tracked_obstacle_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tracked_obstacles`
#include "tracking_msgs/msg/detail/tracked_obstacle__functions.h"

bool
tracking_msgs__msg__TrackedObstacleList__init(tracking_msgs__msg__TrackedObstacleList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tracking_msgs__msg__TrackedObstacleList__fini(msg);
    return false;
  }
  // tracked_obstacles
  if (!tracking_msgs__msg__TrackedObstacle__Sequence__init(&msg->tracked_obstacles, 0)) {
    tracking_msgs__msg__TrackedObstacleList__fini(msg);
    return false;
  }
  return true;
}

void
tracking_msgs__msg__TrackedObstacleList__fini(tracking_msgs__msg__TrackedObstacleList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracked_obstacles
  tracking_msgs__msg__TrackedObstacle__Sequence__fini(&msg->tracked_obstacles);
}

bool
tracking_msgs__msg__TrackedObstacleList__are_equal(const tracking_msgs__msg__TrackedObstacleList * lhs, const tracking_msgs__msg__TrackedObstacleList * rhs)
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
  // tracked_obstacles
  if (!tracking_msgs__msg__TrackedObstacle__Sequence__are_equal(
      &(lhs->tracked_obstacles), &(rhs->tracked_obstacles)))
  {
    return false;
  }
  return true;
}

bool
tracking_msgs__msg__TrackedObstacleList__copy(
  const tracking_msgs__msg__TrackedObstacleList * input,
  tracking_msgs__msg__TrackedObstacleList * output)
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
  // tracked_obstacles
  if (!tracking_msgs__msg__TrackedObstacle__Sequence__copy(
      &(input->tracked_obstacles), &(output->tracked_obstacles)))
  {
    return false;
  }
  return true;
}

tracking_msgs__msg__TrackedObstacleList *
tracking_msgs__msg__TrackedObstacleList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__TrackedObstacleList * msg = (tracking_msgs__msg__TrackedObstacleList *)allocator.allocate(sizeof(tracking_msgs__msg__TrackedObstacleList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_msgs__msg__TrackedObstacleList));
  bool success = tracking_msgs__msg__TrackedObstacleList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_msgs__msg__TrackedObstacleList__destroy(tracking_msgs__msg__TrackedObstacleList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_msgs__msg__TrackedObstacleList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_msgs__msg__TrackedObstacleList__Sequence__init(tracking_msgs__msg__TrackedObstacleList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__TrackedObstacleList * data = NULL;

  if (size) {
    data = (tracking_msgs__msg__TrackedObstacleList *)allocator.zero_allocate(size, sizeof(tracking_msgs__msg__TrackedObstacleList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_msgs__msg__TrackedObstacleList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_msgs__msg__TrackedObstacleList__fini(&data[i - 1]);
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
tracking_msgs__msg__TrackedObstacleList__Sequence__fini(tracking_msgs__msg__TrackedObstacleList__Sequence * array)
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
      tracking_msgs__msg__TrackedObstacleList__fini(&array->data[i]);
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

tracking_msgs__msg__TrackedObstacleList__Sequence *
tracking_msgs__msg__TrackedObstacleList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__TrackedObstacleList__Sequence * array = (tracking_msgs__msg__TrackedObstacleList__Sequence *)allocator.allocate(sizeof(tracking_msgs__msg__TrackedObstacleList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_msgs__msg__TrackedObstacleList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_msgs__msg__TrackedObstacleList__Sequence__destroy(tracking_msgs__msg__TrackedObstacleList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_msgs__msg__TrackedObstacleList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_msgs__msg__TrackedObstacleList__Sequence__are_equal(const tracking_msgs__msg__TrackedObstacleList__Sequence * lhs, const tracking_msgs__msg__TrackedObstacleList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_msgs__msg__TrackedObstacleList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_msgs__msg__TrackedObstacleList__Sequence__copy(
  const tracking_msgs__msg__TrackedObstacleList__Sequence * input,
  tracking_msgs__msg__TrackedObstacleList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_msgs__msg__TrackedObstacleList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_msgs__msg__TrackedObstacleList * data =
      (tracking_msgs__msg__TrackedObstacleList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_msgs__msg__TrackedObstacleList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_msgs__msg__TrackedObstacleList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_msgs__msg__TrackedObstacleList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
