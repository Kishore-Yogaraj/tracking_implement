// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_msgs:msg/TrackedDetection3D.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__BUILDER_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_msgs/msg/detail/tracked_detection3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedDetection3D_predicted_states
{
public:
  explicit Init_TrackedDetection3D_predicted_states(::tracking_msgs::msg::TrackedDetection3D & msg)
  : msg_(msg)
  {}
  ::tracking_msgs::msg::TrackedDetection3D predicted_states(::tracking_msgs::msg::TrackedDetection3D::_predicted_states_type arg)
  {
    msg_.predicted_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3D msg_;
};

class Init_TrackedDetection3D_observation_history
{
public:
  explicit Init_TrackedDetection3D_observation_history(::tracking_msgs::msg::TrackedDetection3D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection3D_predicted_states observation_history(::tracking_msgs::msg::TrackedDetection3D::_observation_history_type arg)
  {
    msg_.observation_history = std::move(arg);
    return Init_TrackedDetection3D_predicted_states(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3D msg_;
};

class Init_TrackedDetection3D_velocity
{
public:
  explicit Init_TrackedDetection3D_velocity(::tracking_msgs::msg::TrackedDetection3D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection3D_observation_history velocity(::tracking_msgs::msg::TrackedDetection3D::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrackedDetection3D_observation_history(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3D msg_;
};

class Init_TrackedDetection3D_detection
{
public:
  explicit Init_TrackedDetection3D_detection(::tracking_msgs::msg::TrackedDetection3D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection3D_velocity detection(::tracking_msgs::msg::TrackedDetection3D::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_TrackedDetection3D_velocity(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3D msg_;
};

class Init_TrackedDetection3D_tracked_id
{
public:
  explicit Init_TrackedDetection3D_tracked_id(::tracking_msgs::msg::TrackedDetection3D & msg)
  : msg_(msg)
  {}
  Init_TrackedDetection3D_detection tracked_id(::tracking_msgs::msg::TrackedDetection3D::_tracked_id_type arg)
  {
    msg_.tracked_id = std::move(arg);
    return Init_TrackedDetection3D_detection(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3D msg_;
};

class Init_TrackedDetection3D_header
{
public:
  Init_TrackedDetection3D_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedDetection3D_tracked_id header(::tracking_msgs::msg::TrackedDetection3D::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedDetection3D_tracked_id(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_msgs::msg::TrackedDetection3D>()
{
  return tracking_msgs::msg::builder::Init_TrackedDetection3D_header();
}

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__BUILDER_HPP_
