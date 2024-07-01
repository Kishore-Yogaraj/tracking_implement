// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracking_msgs:msg/TrackedDetection3D.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__TRAITS_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tracking_msgs/msg/detail/tracked_detection3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detection'
// Member 'observation_history'
// Member 'predicted_states'
#include "vision_msgs/msg/detail/detection3_d__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace tracking_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedDetection3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tracked_id
  {
    out << "tracked_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_id, out);
    out << ", ";
  }

  // member: detection
  {
    out << "detection: ";
    to_flow_style_yaml(msg.detection, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
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
  const TrackedDetection3D & msg,
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

  // member: tracked_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_id, out);
    out << "\n";
  }

  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection:\n";
    to_block_style_yaml(msg.detection, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
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

inline std::string to_yaml(const TrackedDetection3D & msg, bool use_flow_style = false)
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
  const tracking_msgs::msg::TrackedDetection3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tracking_msgs::msg::TrackedDetection3D & msg)
{
  return tracking_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_msgs::msg::TrackedDetection3D>()
{
  return "tracking_msgs::msg::TrackedDetection3D";
}

template<>
inline const char * name<tracking_msgs::msg::TrackedDetection3D>()
{
  return "tracking_msgs/msg/TrackedDetection3D";
}

template<>
struct has_fixed_size<tracking_msgs::msg::TrackedDetection3D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracking_msgs::msg::TrackedDetection3D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracking_msgs::msg::TrackedDetection3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__TRAITS_HPP_
