// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_msgs:msg/TrackedObstacleState.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__BUILDER_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_msgs/msg/detail/tracked_obstacle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObstacleState_velocity
{
public:
  explicit Init_TrackedObstacleState_velocity(::tracking_msgs::msg::TrackedObstacleState & msg)
  : msg_(msg)
  {}
  ::tracking_msgs::msg::TrackedObstacleState velocity(::tracking_msgs::msg::TrackedObstacleState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacleState msg_;
};

class Init_TrackedObstacleState_pose
{
public:
  explicit Init_TrackedObstacleState_pose(::tracking_msgs::msg::TrackedObstacleState & msg)
  : msg_(msg)
  {}
  Init_TrackedObstacleState_velocity pose(::tracking_msgs::msg::TrackedObstacleState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrackedObstacleState_velocity(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacleState msg_;
};

class Init_TrackedObstacleState_header
{
public:
  Init_TrackedObstacleState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObstacleState_pose header(::tracking_msgs::msg::TrackedObstacleState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedObstacleState_pose(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_msgs::msg::TrackedObstacleState>()
{
  return tracking_msgs::msg::builder::Init_TrackedObstacleState_header();
}

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__BUILDER_HPP_
