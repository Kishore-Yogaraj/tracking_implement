// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracking_msgs:msg/TrackedDetection3D.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__STRUCT_H_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__STRUCT_H_

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
// Member 'detection'
// Member 'observation_history'
// Member 'predicted_states'
#include "vision_msgs/msg/detail/detection3_d__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TrackedDetection3D in the package tracking_msgs.
typedef struct tracking_msgs__msg__TrackedDetection3D
{
  std_msgs__msg__Header header;
  /// ID of the detection being tracked
  int64_t tracked_id;
  /// The bounding box and current position of the detection in question
  vision_msgs__msg__Detection3D detection;
  /// Velocity of the detection
  geometry_msgs__msg__Twist velocity;
  /// History of Observations (duration is configurable) The last element in observation_history corresponds to the current state
  vision_msgs__msg__Detection3D__Sequence observation_history;
  /// Linear future predictions based on velocity and position
  vision_msgs__msg__Detection3D__Sequence predicted_states;
} tracking_msgs__msg__TrackedDetection3D;

// Struct for a sequence of tracking_msgs__msg__TrackedDetection3D.
typedef struct tracking_msgs__msg__TrackedDetection3D__Sequence
{
  tracking_msgs__msg__TrackedDetection3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_msgs__msg__TrackedDetection3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__STRUCT_H_
