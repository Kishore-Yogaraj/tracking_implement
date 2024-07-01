// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracking_msgs:msg/TrackedDetection3DArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__STRUCT_H_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__STRUCT_H_

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
// Member 'tracked_detections'
#include "tracking_msgs/msg/detail/tracked_detection3_d__struct.h"

/// Struct defined in msg/TrackedDetection3DArray in the package tracking_msgs.
typedef struct tracking_msgs__msg__TrackedDetection3DArray
{
  std_msgs__msg__Header header;
  tracking_msgs__msg__TrackedDetection3D__Sequence tracked_detections;
} tracking_msgs__msg__TrackedDetection3DArray;

// Struct for a sequence of tracking_msgs__msg__TrackedDetection3DArray.
typedef struct tracking_msgs__msg__TrackedDetection3DArray__Sequence
{
  tracking_msgs__msg__TrackedDetection3DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_msgs__msg__TrackedDetection3DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__STRUCT_H_
