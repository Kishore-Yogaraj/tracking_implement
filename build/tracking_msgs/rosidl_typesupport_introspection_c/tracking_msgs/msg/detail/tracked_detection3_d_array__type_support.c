// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracking_msgs:msg/TrackedDetection3DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracking_msgs/msg/detail/tracked_detection3_d_array__rosidl_typesupport_introspection_c.h"
#include "tracking_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracking_msgs/msg/detail/tracked_detection3_d_array__functions.h"
#include "tracking_msgs/msg/detail/tracked_detection3_d_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tracked_detections`
#include "tracking_msgs/msg/tracked_detection3_d.h"
// Member `tracked_detections`
#include "tracking_msgs/msg/detail/tracked_detection3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracking_msgs__msg__TrackedDetection3DArray__init(message_memory);
}

void tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_fini_function(void * message_memory)
{
  tracking_msgs__msg__TrackedDetection3DArray__fini(message_memory);
}

size_t tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__size_function__TrackedDetection3DArray__tracked_detections(
  const void * untyped_member)
{
  const tracking_msgs__msg__TrackedDetection3D__Sequence * member =
    (const tracking_msgs__msg__TrackedDetection3D__Sequence *)(untyped_member);
  return member->size;
}

const void * tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__get_const_function__TrackedDetection3DArray__tracked_detections(
  const void * untyped_member, size_t index)
{
  const tracking_msgs__msg__TrackedDetection3D__Sequence * member =
    (const tracking_msgs__msg__TrackedDetection3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__get_function__TrackedDetection3DArray__tracked_detections(
  void * untyped_member, size_t index)
{
  tracking_msgs__msg__TrackedDetection3D__Sequence * member =
    (tracking_msgs__msg__TrackedDetection3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__fetch_function__TrackedDetection3DArray__tracked_detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tracking_msgs__msg__TrackedDetection3D * item =
    ((const tracking_msgs__msg__TrackedDetection3D *)
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__get_const_function__TrackedDetection3DArray__tracked_detections(untyped_member, index));
  tracking_msgs__msg__TrackedDetection3D * value =
    (tracking_msgs__msg__TrackedDetection3D *)(untyped_value);
  *value = *item;
}

void tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__assign_function__TrackedDetection3DArray__tracked_detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tracking_msgs__msg__TrackedDetection3D * item =
    ((tracking_msgs__msg__TrackedDetection3D *)
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__get_function__TrackedDetection3DArray__tracked_detections(untyped_member, index));
  const tracking_msgs__msg__TrackedDetection3D * value =
    (const tracking_msgs__msg__TrackedDetection3D *)(untyped_value);
  *item = *value;
}

bool tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__resize_function__TrackedDetection3DArray__tracked_detections(
  void * untyped_member, size_t size)
{
  tracking_msgs__msg__TrackedDetection3D__Sequence * member =
    (tracking_msgs__msg__TrackedDetection3D__Sequence *)(untyped_member);
  tracking_msgs__msg__TrackedDetection3D__Sequence__fini(member);
  return tracking_msgs__msg__TrackedDetection3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs__msg__TrackedDetection3DArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracked_detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs__msg__TrackedDetection3DArray, tracked_detections),  // bytes offset in struct
    NULL,  // default value
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__size_function__TrackedDetection3DArray__tracked_detections,  // size() function pointer
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__get_const_function__TrackedDetection3DArray__tracked_detections,  // get_const(index) function pointer
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__get_function__TrackedDetection3DArray__tracked_detections,  // get(index) function pointer
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__fetch_function__TrackedDetection3DArray__tracked_detections,  // fetch(index, &value) function pointer
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__assign_function__TrackedDetection3DArray__tracked_detections,  // assign(index, value) function pointer
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__resize_function__TrackedDetection3DArray__tracked_detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_members = {
  "tracking_msgs__msg",  // message namespace
  "TrackedDetection3DArray",  // message name
  2,  // number of fields
  sizeof(tracking_msgs__msg__TrackedDetection3DArray),
  tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_member_array,  // message members
  tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_type_support_handle = {
  0,
  &tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracking_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracking_msgs, msg, TrackedDetection3DArray)() {
  tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracking_msgs, msg, TrackedDetection3D)();
  if (!tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_type_support_handle.typesupport_identifier) {
    tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tracking_msgs__msg__TrackedDetection3DArray__rosidl_typesupport_introspection_c__TrackedDetection3DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
