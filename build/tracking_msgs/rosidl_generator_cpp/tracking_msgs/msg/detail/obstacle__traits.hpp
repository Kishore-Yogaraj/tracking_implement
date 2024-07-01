// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracking_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define TRACKING_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tracking_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"

namespace tracking_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: width_along_x_axis
  {
    out << "width_along_x_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.width_along_x_axis, out);
    out << ", ";
  }

  // member: height_along_y_axis
  {
    out << "height_along_y_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.height_along_y_axis, out);
    out << ", ";
  }

  // member: depth_along_z_axis
  {
    out << "depth_along_z_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_along_z_axis, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: width_along_x_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width_along_x_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.width_along_x_axis, out);
    out << "\n";
  }

  // member: height_along_y_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_along_y_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.height_along_y_axis, out);
    out << "\n";
  }

  // member: depth_along_z_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_along_z_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_along_z_axis, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tracking_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tracking_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_msgs::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tracking_msgs::msg::Obstacle & msg)
{
  return tracking_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_msgs::msg::Obstacle>()
{
  return "tracking_msgs::msg::Obstacle";
}

template<>
inline const char * name<tracking_msgs::msg::Obstacle>()
{
  return "tracking_msgs/msg/Obstacle";
}

template<>
struct has_fixed_size<tracking_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracking_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracking_msgs::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKING_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
