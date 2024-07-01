// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracking_msgs:msg/ObstacleList.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__STRUCT_H_
#define TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__STRUCT_H_

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
// Member 'obstacles'
#include "tracking_msgs/msg/detail/obstacle__struct.h"

/// Struct defined in msg/ObstacleList in the package tracking_msgs.
typedef struct tracking_msgs__msg__ObstacleList
{
  std_msgs__msg__Header header;
  tracking_msgs__msg__Obstacle__Sequence obstacles;
} tracking_msgs__msg__ObstacleList;

// Struct for a sequence of tracking_msgs__msg__ObstacleList.
typedef struct tracking_msgs__msg__ObstacleList__Sequence
{
  tracking_msgs__msg__ObstacleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_msgs__msg__ObstacleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__STRUCT_H_
