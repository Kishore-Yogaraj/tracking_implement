// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__BUILDER_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_msgs/msg/detail/tracked_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObstacle_predicted_states
{
public:
  explicit Init_TrackedObstacle_predicted_states(::tracking_msgs::msg::TrackedObstacle & msg)
  : msg_(msg)
  {}
  ::tracking_msgs::msg::TrackedObstacle predicted_states(::tracking_msgs::msg::TrackedObstacle::_predicted_states_type arg)
  {
    msg_.predicted_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacle msg_;
};

class Init_TrackedObstacle_observation_history
{
public:
  explicit Init_TrackedObstacle_observation_history(::tracking_msgs::msg::TrackedObstacle & msg)
  : msg_(msg)
  {}
  Init_TrackedObstacle_predicted_states observation_history(::tracking_msgs::msg::TrackedObstacle::_observation_history_type arg)
  {
    msg_.observation_history = std::move(arg);
    return Init_TrackedObstacle_predicted_states(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacle msg_;
};

class Init_TrackedObstacle_obstacle
{
public:
  explicit Init_TrackedObstacle_obstacle(::tracking_msgs::msg::TrackedObstacle & msg)
  : msg_(msg)
  {}
  Init_TrackedObstacle_observation_history obstacle(::tracking_msgs::msg::TrackedObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_TrackedObstacle_observation_history(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacle msg_;
};

class Init_TrackedObstacle_header
{
public:
  Init_TrackedObstacle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObstacle_obstacle header(::tracking_msgs::msg::TrackedObstacle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedObstacle_obstacle(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_msgs::msg::TrackedObstacle>()
{
  return tracking_msgs::msg::builder::Init_TrackedObstacle_header();
}

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__BUILDER_HPP_
