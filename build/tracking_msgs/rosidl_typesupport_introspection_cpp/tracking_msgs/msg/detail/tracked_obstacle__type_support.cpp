// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tracking_msgs/msg/detail/tracked_obstacle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tracking_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrackedObstacle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tracking_msgs::msg::TrackedObstacle(_init);
}

void TrackedObstacle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tracking_msgs::msg::TrackedObstacle *>(message_memory);
  typed_message->~TrackedObstacle();
}

size_t size_function__TrackedObstacle__observation_history(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedObstacle__observation_history(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedObstacle__observation_history(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrackedObstacle__observation_history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tracking_msgs::msg::TrackedObstacleState *>(
    get_const_function__TrackedObstacle__observation_history(untyped_member, index));
  auto & value = *reinterpret_cast<tracking_msgs::msg::TrackedObstacleState *>(untyped_value);
  value = item;
}

void assign_function__TrackedObstacle__observation_history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tracking_msgs::msg::TrackedObstacleState *>(
    get_function__TrackedObstacle__observation_history(untyped_member, index));
  const auto & value = *reinterpret_cast<const tracking_msgs::msg::TrackedObstacleState *>(untyped_value);
  item = value;
}

void resize_function__TrackedObstacle__observation_history(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrackedObstacle__predicted_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedObstacle__predicted_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedObstacle__predicted_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrackedObstacle__predicted_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tracking_msgs::msg::TrackedObstacleState *>(
    get_const_function__TrackedObstacle__predicted_states(untyped_member, index));
  auto & value = *reinterpret_cast<tracking_msgs::msg::TrackedObstacleState *>(untyped_value);
  value = item;
}

void assign_function__TrackedObstacle__predicted_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tracking_msgs::msg::TrackedObstacleState *>(
    get_function__TrackedObstacle__predicted_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const tracking_msgs::msg::TrackedObstacleState *>(untyped_value);
  item = value;
}

void resize_function__TrackedObstacle__predicted_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tracking_msgs::msg::TrackedObstacleState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedObstacle_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs::msg::TrackedObstacle, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "obstacle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracking_msgs::msg::Obstacle>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs::msg::TrackedObstacle, obstacle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "observation_history",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracking_msgs::msg::TrackedObstacleState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs::msg::TrackedObstacle, observation_history),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedObstacle__observation_history,  // size() function pointer
    get_const_function__TrackedObstacle__observation_history,  // get_const(index) function pointer
    get_function__TrackedObstacle__observation_history,  // get(index) function pointer
    fetch_function__TrackedObstacle__observation_history,  // fetch(index, &value) function pointer
    assign_function__TrackedObstacle__observation_history,  // assign(index, value) function pointer
    resize_function__TrackedObstacle__observation_history  // resize(index) function pointer
  },
  {
    "predicted_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracking_msgs::msg::TrackedObstacleState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs::msg::TrackedObstacle, predicted_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedObstacle__predicted_states,  // size() function pointer
    get_const_function__TrackedObstacle__predicted_states,  // get_const(index) function pointer
    get_function__TrackedObstacle__predicted_states,  // get(index) function pointer
    fetch_function__TrackedObstacle__predicted_states,  // fetch(index, &value) function pointer
    assign_function__TrackedObstacle__predicted_states,  // assign(index, value) function pointer
    resize_function__TrackedObstacle__predicted_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedObstacle_message_members = {
  "tracking_msgs::msg",  // message namespace
  "TrackedObstacle",  // message name
  4,  // number of fields
  sizeof(tracking_msgs::msg::TrackedObstacle),
  TrackedObstacle_message_member_array,  // message members
  TrackedObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedObstacle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedObstacle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedObstacle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tracking_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tracking_msgs::msg::TrackedObstacle>()
{
  return &::tracking_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedObstacle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tracking_msgs, msg, TrackedObstacle)() {
  return &::tracking_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedObstacle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
