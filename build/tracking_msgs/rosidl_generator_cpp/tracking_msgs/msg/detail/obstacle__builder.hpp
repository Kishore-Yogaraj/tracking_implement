// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define TRACKING_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_object_id
{
public:
  explicit Init_Obstacle_object_id(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::tracking_msgs::msg::Obstacle object_id(::tracking_msgs::msg::Obstacle::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_depth_along_z_axis
{
public:
  explicit Init_Obstacle_depth_along_z_axis(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_object_id depth_along_z_axis(::tracking_msgs::msg::Obstacle::_depth_along_z_axis_type arg)
  {
    msg_.depth_along_z_axis = std::move(arg);
    return Init_Obstacle_object_id(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_height_along_y_axis
{
public:
  explicit Init_Obstacle_height_along_y_axis(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_depth_along_z_axis height_along_y_axis(::tracking_msgs::msg::Obstacle::_height_along_y_axis_type arg)
  {
    msg_.height_along_y_axis = std::move(arg);
    return Init_Obstacle_depth_along_z_axis(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_width_along_x_axis
{
public:
  explicit Init_Obstacle_width_along_x_axis(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_height_along_y_axis width_along_x_axis(::tracking_msgs::msg::Obstacle::_width_along_x_axis_type arg)
  {
    msg_.width_along_x_axis = std::move(arg);
    return Init_Obstacle_height_along_y_axis(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_twist
{
public:
  explicit Init_Obstacle_twist(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_width_along_x_axis twist(::tracking_msgs::msg::Obstacle::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_Obstacle_width_along_x_axis(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_pose
{
public:
  explicit Init_Obstacle_pose(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_twist pose(::tracking_msgs::msg::Obstacle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Obstacle_twist(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_confidence
{
public:
  explicit Init_Obstacle_confidence(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_pose confidence(::tracking_msgs::msg::Obstacle::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Obstacle_pose(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_label
{
public:
  explicit Init_Obstacle_label(::tracking_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_confidence label(::tracking_msgs::msg::Obstacle::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Obstacle_confidence(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_header
{
public:
  Init_Obstacle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_label header(::tracking_msgs::msg::Obstacle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Obstacle_label(msg_);
  }

private:
  ::tracking_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_msgs::msg::Obstacle>()
{
  return tracking_msgs::msg::builder::Init_Obstacle_header();
}

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
