// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tracking_msgs:msg/TrackedObstacleState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tracking_msgs/msg/detail/tracked_obstacle_state__rosidl_typesupport_introspection_c.h"
#include "tracking_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tracking_msgs/msg/detail/tracked_obstacle_state__functions.h"
#include "tracking_msgs/msg/detail/tracked_obstacle_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/twist.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tracking_msgs__msg__TrackedObstacleState__init(message_memory);
}

void tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_fini_function(void * message_memory)
{
  tracking_msgs__msg__TrackedObstacleState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs__msg__TrackedObstacleState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs__msg__TrackedObstacleState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs__msg__TrackedObstacleState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_members = {
  "tracking_msgs__msg",  // message namespace
  "TrackedObstacleState",  // message name
  3,  // number of fields
  sizeof(tracking_msgs__msg__TrackedObstacleState),
  tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_member_array,  // message members
  tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_init_function,  // function to initialize message memory (memory has to be allocated)
  tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_type_support_handle = {
  0,
  &tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tracking_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tracking_msgs, msg, TrackedObstacleState)() {
  tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_type_support_handle.typesupport_identifier) {
    tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tracking_msgs__msg__TrackedObstacleState__rosidl_typesupport_introspection_c__TrackedObstacleState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
