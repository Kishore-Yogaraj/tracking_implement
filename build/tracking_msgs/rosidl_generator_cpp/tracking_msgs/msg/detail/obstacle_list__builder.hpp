// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_msgs:msg/ObstacleList.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__BUILDER_HPP_
#define TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_msgs/msg/detail/obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleList_obstacles
{
public:
  explicit Init_ObstacleList_obstacles(::tracking_msgs::msg::ObstacleList & msg)
  : msg_(msg)
  {}
  ::tracking_msgs::msg::ObstacleList obstacles(::tracking_msgs::msg::ObstacleList::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_msgs::msg::ObstacleList msg_;
};

class Init_ObstacleList_header
{
public:
  Init_ObstacleList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleList_obstacles header(::tracking_msgs::msg::ObstacleList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleList_obstacles(msg_);
  }

private:
  ::tracking_msgs::msg::ObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_msgs::msg::ObstacleList>()
{
  return tracking_msgs::msg::builder::Init_ObstacleList_header();
}

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__BUILDER_HPP_
