// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__FUNCTIONS_H_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tracking_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tracking_msgs/msg/detail/tracked_obstacle__struct.h"

/// Initialize msg/TrackedObstacle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_msgs__msg__TrackedObstacle
 * )) before or use
 * tracking_msgs__msg__TrackedObstacle__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
bool
tracking_msgs__msg__TrackedObstacle__init(tracking_msgs__msg__TrackedObstacle * msg);

/// Finalize msg/TrackedObstacle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
void
tracking_msgs__msg__TrackedObstacle__fini(tracking_msgs__msg__TrackedObstacle * msg);

/// Create msg/TrackedObstacle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_msgs__msg__TrackedObstacle__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
tracking_msgs__msg__TrackedObstacle *
tracking_msgs__msg__TrackedObstacle__create();

/// Destroy msg/TrackedObstacle message.
/**
 * It calls
 * tracking_msgs__msg__TrackedObstacle__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
void
tracking_msgs__msg__TrackedObstacle__destroy(tracking_msgs__msg__TrackedObstacle * msg);

/// Check for msg/TrackedObstacle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
bool
tracking_msgs__msg__TrackedObstacle__are_equal(const tracking_msgs__msg__TrackedObstacle * lhs, const tracking_msgs__msg__TrackedObstacle * rhs);

/// Copy a msg/TrackedObstacle message.
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
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
bool
tracking_msgs__msg__TrackedObstacle__copy(
  const tracking_msgs__msg__TrackedObstacle * input,
  tracking_msgs__msg__TrackedObstacle * output);

/// Initialize array of msg/TrackedObstacle messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_msgs__msg__TrackedObstacle__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
bool
tracking_msgs__msg__TrackedObstacle__Sequence__init(tracking_msgs__msg__TrackedObstacle__Sequence * array, size_t size);

/// Finalize array of msg/TrackedObstacle messages.
/**
 * It calls
 * tracking_msgs__msg__TrackedObstacle__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
void
tracking_msgs__msg__TrackedObstacle__Sequence__fini(tracking_msgs__msg__TrackedObstacle__Sequence * array);

/// Create array of msg/TrackedObstacle messages.
/**
 * It allocates the memory for the array and calls
 * tracking_msgs__msg__TrackedObstacle__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
tracking_msgs__msg__TrackedObstacle__Sequence *
tracking_msgs__msg__TrackedObstacle__Sequence__create(size_t size);

/// Destroy array of msg/TrackedObstacle messages.
/**
 * It calls
 * tracking_msgs__msg__TrackedObstacle__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
void
tracking_msgs__msg__TrackedObstacle__Sequence__destroy(tracking_msgs__msg__TrackedObstacle__Sequence * array);

/// Check for msg/TrackedObstacle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
bool
tracking_msgs__msg__TrackedObstacle__Sequence__are_equal(const tracking_msgs__msg__TrackedObstacle__Sequence * lhs, const tracking_msgs__msg__TrackedObstacle__Sequence * rhs);

/// Copy an array of msg/TrackedObstacle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tracking_msgs
bool
tracking_msgs__msg__TrackedObstacle__Sequence__copy(
  const tracking_msgs__msg__TrackedObstacle__Sequence * input,
  tracking_msgs__msg__TrackedObstacle__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__FUNCTIONS_H_
