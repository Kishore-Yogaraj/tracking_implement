// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tracking_msgs:msg/TrackedObstacleList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tracking_msgs/msg/detail/tracked_obstacle_list__struct.hpp"
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

void TrackedObstacleList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tracking_msgs::msg::TrackedObstacleList(_init);
}

void TrackedObstacleList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tracking_msgs::msg::TrackedObstacleList *>(message_memory);
  typed_message->~TrackedObstacleList();
}

size_t size_function__TrackedObstacleList__tracked_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tracking_msgs::msg::TrackedObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedObstacleList__tracked_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tracking_msgs::msg::TrackedObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedObstacleList__tracked_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tracking_msgs::msg::TrackedObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrackedObstacleList__tracked_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tracking_msgs::msg::TrackedObstacle *>(
    get_const_function__TrackedObstacleList__tracked_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<tracking_msgs::msg::TrackedObstacle *>(untyped_value);
  value = item;
}

void assign_function__TrackedObstacleList__tracked_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tracking_msgs::msg::TrackedObstacle *>(
    get_function__TrackedObstacleList__tracked_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const tracking_msgs::msg::TrackedObstacle *>(untyped_value);
  item = value;
}

void resize_function__TrackedObstacleList__tracked_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tracking_msgs::msg::TrackedObstacle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedObstacleList_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs::msg::TrackedObstacleList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracked_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tracking_msgs::msg::TrackedObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracking_msgs::msg::TrackedObstacleList, tracked_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedObstacleList__tracked_obstacles,  // size() function pointer
    get_const_function__TrackedObstacleList__tracked_obstacles,  // get_const(index) function pointer
    get_function__TrackedObstacleList__tracked_obstacles,  // get(index) function pointer
    fetch_function__TrackedObstacleList__tracked_obstacles,  // fetch(index, &value) function pointer
    assign_function__TrackedObstacleList__tracked_obstacles,  // assign(index, value) function pointer
    resize_function__TrackedObstacleList__tracked_obstacles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedObstacleList_message_members = {
  "tracking_msgs::msg",  // message namespace
  "TrackedObstacleList",  // message name
  2,  // number of fields
  sizeof(tracking_msgs::msg::TrackedObstacleList),
  TrackedObstacleList_message_member_array,  // message members
  TrackedObstacleList_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedObstacleList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedObstacleList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedObstacleList_message_members,
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
get_message_type_support_handle<tracking_msgs::msg::TrackedObstacleList>()
{
  return &::tracking_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedObstacleList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tracking_msgs, msg, TrackedObstacleList)() {
  return &::tracking_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedObstacleList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
