// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__TRAITS_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tracking_msgs/msg/detail/tracked_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'obstacle'
#include "tracking_msgs/msg/detail/obstacle__traits.hpp"
// Member 'observation_history'
// Member 'predicted_states'
#include "tracking_msgs/msg/detail/tracked_obstacle_state__traits.hpp"

namespace tracking_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: obstacle
  {
    out << "obstacle: ";
    to_flow_style_yaml(msg.obstacle, out);
    out << ", ";
  }

  // member: observation_history
  {
    if (msg.observation_history.size() == 0) {
      out << "observation_history: []";
    } else {
      out << "observation_history: [";
      size_t pending_items = msg.observation_history.size();
      for (auto item : msg.observation_history) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: predicted_states
  {
    if (msg.predicted_states.size() == 0) {
      out << "predicted_states: []";
    } else {
      out << "predicted_states: [";
      size_t pending_items = msg.predicted_states.size();
      for (auto item : msg.predicted_states) {
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
  const TrackedObstacle & msg,
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

  // member: obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle:\n";
    to_block_style_yaml(msg.obstacle, out, indentation + 2);
  }

  // member: observation_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.observation_history.size() == 0) {
      out << "observation_history: []\n";
    } else {
      out << "observation_history:\n";
      for (auto item : msg.observation_history) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: predicted_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_states.size() == 0) {
      out << "predicted_states: []\n";
    } else {
      out << "predicted_states:\n";
      for (auto item : msg.predicted_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedObstacle & msg, bool use_flow_style = false)
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
  const tracking_msgs::msg::TrackedObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tracking_msgs::msg::TrackedObstacle & msg)
{
  return tracking_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_msgs::msg::TrackedObstacle>()
{
  return "tracking_msgs::msg::TrackedObstacle";
}

template<>
inline const char * name<tracking_msgs::msg::TrackedObstacle>()
{
  return "tracking_msgs/msg/TrackedObstacle";
}

template<>
struct has_fixed_size<tracking_msgs::msg::TrackedObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracking_msgs::msg::TrackedObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracking_msgs::msg::TrackedObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__TRAITS_HPP_
