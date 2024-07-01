// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
// generated code does not contain a copyright notice
#include "tracking_msgs/msg/detail/tracked_obstacle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tracking_msgs/msg/detail/tracked_obstacle__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace tracking_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tracking_msgs::msg::Obstacle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tracking_msgs::msg::Obstacle &);
size_t get_serialized_size(
  const tracking_msgs::msg::Obstacle &,
  size_t current_alignment);
size_t
max_serialized_size_Obstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tracking_msgs

namespace tracking_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tracking_msgs::msg::TrackedObstacleState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tracking_msgs::msg::TrackedObstacleState &);
size_t get_serialized_size(
  const tracking_msgs::msg::TrackedObstacleState &,
  size_t current_alignment);
size_t
max_serialized_size_TrackedObstacleState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tracking_msgs

// functions for tracking_msgs::msg::TrackedObstacleState already declared above


namespace tracking_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracking_msgs
cdr_serialize(
  const tracking_msgs::msg::TrackedObstacle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: obstacle
  tracking_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.obstacle,
    cdr);
  // Member: observation_history
  {
    size_t size = ros_message.observation_history.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tracking_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.observation_history[i],
        cdr);
    }
  }
  // Member: predicted_states
  {
    size_t size = ros_message.predicted_states.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tracking_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.predicted_states[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracking_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tracking_msgs::msg::TrackedObstacle & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: obstacle
  tracking_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.obstacle);

  // Member: observation_history
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.observation_history.resize(size);
    for (size_t i = 0; i < size; i++) {
      tracking_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.observation_history[i]);
    }
  }

  // Member: predicted_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.predicted_states.resize(size);
    for (size_t i = 0; i < size; i++) {
      tracking_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.predicted_states[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracking_msgs
get_serialized_size(
  const tracking_msgs::msg::TrackedObstacle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: obstacle

  current_alignment +=
    tracking_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.obstacle, current_alignment);
  // Member: observation_history
  {
    size_t array_size = ros_message.observation_history.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracking_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.observation_history[index], current_alignment);
    }
  }
  // Member: predicted_states
  {
    size_t array_size = ros_message.predicted_states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracking_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.predicted_states[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracking_msgs
max_serialized_size_TrackedObstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: obstacle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tracking_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Obstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: observation_history
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tracking_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrackedObstacleState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: predicted_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tracking_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrackedObstacleState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tracking_msgs::msg::TrackedObstacle;
    is_plain =
      (
      offsetof(DataType, predicted_states) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TrackedObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tracking_msgs::msg::TrackedObstacle *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrackedObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tracking_msgs::msg::TrackedObstacle *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrackedObstacle__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tracking_msgs::msg::TrackedObstacle *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrackedObstacle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrackedObstacle(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrackedObstacle__callbacks = {
  "tracking_msgs::msg",
  "TrackedObstacle",
  _TrackedObstacle__cdr_serialize,
  _TrackedObstacle__cdr_deserialize,
  _TrackedObstacle__get_serialized_size,
  _TrackedObstacle__max_serialized_size
};

static rosidl_message_type_support_t _TrackedObstacle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrackedObstacle__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tracking_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tracking_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tracking_msgs::msg::TrackedObstacle>()
{
  return &tracking_msgs::msg::typesupport_fastrtps_cpp::_TrackedObstacle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tracking_msgs, msg, TrackedObstacle)() {
  return &tracking_msgs::msg::typesupport_fastrtps_cpp::_TrackedObstacle__handle;
}

#ifdef __cplusplus
}
#endif
