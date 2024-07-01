// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracking_msgs:msg/TrackedDetection3DArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__TRAITS_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tracking_msgs/msg/detail/tracked_detection3_d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tracked_detections'
#include "tracking_msgs/msg/detail/tracked_detection3_d__traits.hpp"

namespace tracking_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedDetection3DArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tracked_detections
  {
    if (msg.tracked_detections.size() == 0) {
      out << "tracked_detections: []";
    } else {
      out << "tracked_detections: [";
      size_t pending_items = msg.tracked_detections.size();
      for (auto item : msg.tracked_detections) {
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
  const TrackedDetection3DArray & msg,
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

  // member: tracked_detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracked_detections.size() == 0) {
      out << "tracked_detections: []\n";
    } else {
      out << "tracked_detections:\n";
      for (auto item : msg.tracked_detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedDetection3DArray & msg, bool use_flow_style = false)
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
  const tracking_msgs::msg::TrackedDetection3DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tracking_msgs::msg::TrackedDetection3DArray & msg)
{
  return tracking_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_msgs::msg::TrackedDetection3DArray>()
{
  return "tracking_msgs::msg::TrackedDetection3DArray";
}

template<>
inline const char * name<tracking_msgs::msg::TrackedDetection3DArray>()
{
  return "tracking_msgs/msg/TrackedDetection3DArray";
}

template<>
struct has_fixed_size<tracking_msgs::msg::TrackedDetection3DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracking_msgs::msg::TrackedDetection3DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracking_msgs::msg::TrackedDetection3DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__TRAITS_HPP_
