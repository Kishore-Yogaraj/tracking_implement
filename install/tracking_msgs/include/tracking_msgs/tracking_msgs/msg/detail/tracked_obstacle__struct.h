// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__STRUCT_H_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__STRUCT_H_

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
// Member 'obstacle'
#include "tracking_msgs/msg/detail/obstacle__struct.h"
// Member 'observation_history'
// Member 'predicted_states'
#include "tracking_msgs/msg/detail/tracked_obstacle_state__struct.h"

/// Struct defined in msg/TrackedObstacle in the package tracking_msgs.
typedef struct tracking_msgs__msg__TrackedObstacle
{
  std_msgs__msg__Header header;
  tracking_msgs__msg__Obstacle obstacle;
  tracking_msgs__msg__TrackedObstacleState__Sequence observation_history;
  tracking_msgs__msg__TrackedObstacleState__Sequence predicted_states;
} tracking_msgs__msg__TrackedObstacle;

// Struct for a sequence of tracking_msgs__msg__TrackedObstacle.
typedef struct tracking_msgs__msg__TrackedObstacle__Sequence
{
  tracking_msgs__msg__TrackedObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_msgs__msg__TrackedObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__STRUCT_H_
