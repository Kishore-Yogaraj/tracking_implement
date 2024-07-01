// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_msgs:msg/TrackedDetection3DArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__BUILDER_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_msgs/msg/detail/tracked_detection3_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedDetection3DArray_tracked_detections
{
public:
  explicit Init_TrackedDetection3DArray_tracked_detections(::tracking_msgs::msg::TrackedDetection3DArray & msg)
  : msg_(msg)
  {}
  ::tracking_msgs::msg::TrackedDetection3DArray tracked_detections(::tracking_msgs::msg::TrackedDetection3DArray::_tracked_detections_type arg)
  {
    msg_.tracked_detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3DArray msg_;
};

class Init_TrackedDetection3DArray_header
{
public:
  Init_TrackedDetection3DArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedDetection3DArray_tracked_detections header(::tracking_msgs::msg::TrackedDetection3DArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedDetection3DArray_tracked_detections(msg_);
  }

private:
  ::tracking_msgs::msg::TrackedDetection3DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_msgs::msg::TrackedDetection3DArray>()
{
  return tracking_msgs::msg::builder::Init_TrackedDetection3DArray_header();
}

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__BUILDER_HPP_
