// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_msgs:msg/TrackedObstacleList.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_LIST__BUILDER_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_msgs/msg/detail/tracked_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObstacleList_tracked_obstacles
{
public:
  explicit Init_TrackedObstacleList_tracked_obstacles(::tracking_msgs::msg::TrackedObstacleList & msg)
  : msg_(msg)
  {}
  ::tracking_msgs::msg::TrackedObstacleList tracked_obstacles(::tracking_msgs::msg::TrackedObstacleList::_tracked_obstacles_type arg)
  {
    msg_.tracked_obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacleList msg_;
};

class Init_TrackedObstacleList_header
{
public:
  Init_TrackedObstacleList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObstacleList_tracked_obstacles header(::tracking_msgs::msg::TrackedObstacleList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedObstacleList_tracked_obstacles(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_msgs::msg::TrackedObstacleList>()
{
  return tracking_msgs::msg::builder::Init_TrackedObstacleList_header();
}

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_LIST__BUILDER_HPP_
