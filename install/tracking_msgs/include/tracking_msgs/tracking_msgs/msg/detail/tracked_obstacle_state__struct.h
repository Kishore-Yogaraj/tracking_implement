// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracking_msgs:msg/TrackedObstacleState.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__STRUCT_H_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TrackedObstacleState in the package tracking_msgs.
typedef struct tracking_msgs__msg__TrackedObstacleState
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist velocity;
} tracking_msgs__msg__TrackedObstacleState;

// Struct for a sequence of tracking_msgs__msg__TrackedObstacleState.
typedef struct tracking_msgs__msg__TrackedObstacleState__Sequence
{
  tracking_msgs__msg__TrackedObstacleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_msgs__msg__TrackedObstacleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__STRUCT_H_
