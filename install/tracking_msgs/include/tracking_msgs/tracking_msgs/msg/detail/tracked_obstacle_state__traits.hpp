// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracking_msgs:msg/TrackedObstacleState.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__TRAITS_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tracking_msgs/msg/detail/tracked_obstacle_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace tracking_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedObstacleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedObstacleState & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedObstacleState & msg, bool use_flow_style = false)
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
  const tracking_msgs::msg::TrackedObstacleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tracking_msgs::msg::TrackedObstacleState & msg)
{
  return tracking_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_msgs::msg::TrackedObstacleState>()
{
  return "tracking_msgs::msg::TrackedObstacleState";
}

template<>
inline const char * name<tracking_msgs::msg::TrackedObstacleState>()
{
  return "tracking_msgs/msg/TrackedObstacleState";
}

template<>
struct has_fixed_size<tracking_msgs::msg::TrackedObstacleState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<tracking_msgs::msg::TrackedObstacleState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<tracking_msgs::msg::TrackedObstacleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__TRAITS_HPP_
