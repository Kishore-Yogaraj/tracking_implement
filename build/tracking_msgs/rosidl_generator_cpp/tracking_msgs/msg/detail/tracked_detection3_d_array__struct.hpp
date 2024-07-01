// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracking_msgs:msg/TrackedDetection3DArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__STRUCT_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'tracked_detections'
#include "tracking_msgs/msg/detail/tracked_detection3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracking_msgs__msg__TrackedDetection3DArray __attribute__((deprecated))
#else
# define DEPRECATED__tracking_msgs__msg__TrackedDetection3DArray __declspec(deprecated)
#endif

namespace tracking_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedDetection3DArray_
{
  using Type = TrackedDetection3DArray_<ContainerAllocator>;

  explicit TrackedDetection3DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrackedDetection3DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tracked_detections_type =
    std::vector<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>>>;
  _tracked_detections_type tracked_detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tracked_detections(
    const std::vector<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>>> & _arg)
  {
    this->tracked_detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracking_msgs__msg__TrackedDetection3DArray
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracking_msgs__msg__TrackedDetection3DArray
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedDetection3DArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tracked_detections != other.tracked_detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedDetection3DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedDetection3DArray_

// alias to use template instance with default allocator
using TrackedDetection3DArray =
  tracking_msgs::msg::TrackedDetection3DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D_ARRAY__STRUCT_HPP_
