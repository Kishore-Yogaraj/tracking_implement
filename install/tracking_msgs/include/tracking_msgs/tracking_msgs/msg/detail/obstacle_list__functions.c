// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracking_msgs:msg/ObstacleList.idl
// generated code does not contain a copyright notice
#include "tracking_msgs/msg/detail/obstacle_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `obstacles`
#include "tracking_msgs/msg/detail/obstacle__functions.h"

bool
tracking_msgs__msg__ObstacleList__init(tracking_msgs__msg__ObstacleList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tracking_msgs__msg__ObstacleList__fini(msg);
    return false;
  }
  // obstacles
  if (!tracking_msgs__msg__Obstacle__Sequence__init(&msg->obstacles, 0)) {
    tracking_msgs__msg__ObstacleList__fini(msg);
    return false;
  }
  return true;
}

void
tracking_msgs__msg__ObstacleList__fini(tracking_msgs__msg__ObstacleList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // obstacles
  tracking_msgs__msg__Obstacle__Sequence__fini(&msg->obstacles);
}

bool
tracking_msgs__msg__ObstacleList__are_equal(const tracking_msgs__msg__ObstacleList * lhs, const tracking_msgs__msg__ObstacleList * rhs)
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
  // obstacles
  if (!tracking_msgs__msg__Obstacle__Sequence__are_equal(
      &(lhs->obstacles), &(rhs->obstacles)))
  {
    return false;
  }
  return true;
}

bool
tracking_msgs__msg__ObstacleList__copy(
  const tracking_msgs__msg__ObstacleList * input,
  tracking_msgs__msg__ObstacleList * output)
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
  // obstacles
  if (!tracking_msgs__msg__Obstacle__Sequence__copy(
      &(input->obstacles), &(output->obstacles)))
  {
    return false;
  }
  return true;
}

tracking_msgs__msg__ObstacleList *
tracking_msgs__msg__ObstacleList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__ObstacleList * msg = (tracking_msgs__msg__ObstacleList *)allocator.allocate(sizeof(tracking_msgs__msg__ObstacleList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_msgs__msg__ObstacleList));
  bool success = tracking_msgs__msg__ObstacleList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_msgs__msg__ObstacleList__destroy(tracking_msgs__msg__ObstacleList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_msgs__msg__ObstacleList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_msgs__msg__ObstacleList__Sequence__init(tracking_msgs__msg__ObstacleList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__ObstacleList * data = NULL;

  if (size) {
    data = (tracking_msgs__msg__ObstacleList *)allocator.zero_allocate(size, sizeof(tracking_msgs__msg__ObstacleList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_msgs__msg__ObstacleList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_msgs__msg__ObstacleList__fini(&data[i - 1]);
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
tracking_msgs__msg__ObstacleList__Sequence__fini(tracking_msgs__msg__ObstacleList__Sequence * array)
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
      tracking_msgs__msg__ObstacleList__fini(&array->data[i]);
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

tracking_msgs__msg__ObstacleList__Sequence *
tracking_msgs__msg__ObstacleList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_msgs__msg__ObstacleList__Sequence * array = (tracking_msgs__msg__ObstacleList__Sequence *)allocator.allocate(sizeof(tracking_msgs__msg__ObstacleList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_msgs__msg__ObstacleList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_msgs__msg__ObstacleList__Sequence__destroy(tracking_msgs__msg__ObstacleList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_msgs__msg__ObstacleList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_msgs__msg__ObstacleList__Sequence__are_equal(const tracking_msgs__msg__ObstacleList__Sequence * lhs, const tracking_msgs__msg__ObstacleList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_msgs__msg__ObstacleList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_msgs__msg__ObstacleList__Sequence__copy(
  const tracking_msgs__msg__ObstacleList__Sequence * input,
  tracking_msgs__msg__ObstacleList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_msgs__msg__ObstacleList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_msgs__msg__ObstacleList * data =
      (tracking_msgs__msg__ObstacleList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_msgs__msg__ObstacleList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_msgs__msg__ObstacleList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_msgs__msg__ObstacleList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
