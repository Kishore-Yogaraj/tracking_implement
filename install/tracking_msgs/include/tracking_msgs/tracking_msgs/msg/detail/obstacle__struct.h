// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracking_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define TRACKING_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

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
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

/// Struct defined in msg/Obstacle in the package tracking_msgs.
typedef struct tracking_msgs__msg__Obstacle
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String label;
  float confidence;
  geometry_msgs__msg__PoseWithCovariance pose;
  geometry_msgs__msg__TwistWithCovariance twist;
  double width_along_x_axis;
  double height_along_y_axis;
  double depth_along_z_axis;
  uint32_t object_id;
} tracking_msgs__msg__Obstacle;

// Struct for a sequence of tracking_msgs__msg__Obstacle.
typedef struct tracking_msgs__msg__Obstacle__Sequence
{
  tracking_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
