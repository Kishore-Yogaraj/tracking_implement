// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracking_msgs:msg/ObstacleList.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__TRAITS_HPP_
#define TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tracking_msgs/msg/detail/obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'obstacles'
#include "tracking_msgs/msg/detail/obstacle__traits.hpp"

namespace tracking_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: obstacles
  {
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []";
    } else {
      out << "obstacles: [";
      size_t pending_items = msg.obstacles.size();
      for (auto item : msg.obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleList & msg,
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

  // member: obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []\n";
    } else {
      out << "obstacles:\n";
      for (auto item : msg.obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleList & msg, bool use_flow_style = false)
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
  const tracking_msgs::msg::ObstacleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tracking_msgs::msg::ObstacleList & msg)
{
  return tracking_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_msgs::msg::ObstacleList>()
{
  return "tracking_msgs::msg::ObstacleList";
}

template<>
inline const char * name<tracking_msgs::msg::ObstacleList>()
{
  return "tracking_msgs/msg/ObstacleList";
}

template<>
struct has_fixed_size<tracking_msgs::msg::ObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracking_msgs::msg::ObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracking_msgs::msg::ObstacleList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKING_MSGS__MSG__DETAIL__OBSTACLE_LIST__TRAITS_HPP_
