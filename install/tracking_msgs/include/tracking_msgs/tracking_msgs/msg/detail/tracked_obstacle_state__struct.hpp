// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracking_msgs:msg/TrackedObstacleState.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__STRUCT_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracking_msgs__msg__TrackedObstacleState __attribute__((deprecated))
#else
# define DEPRECATED__tracking_msgs__msg__TrackedObstacleState __declspec(deprecated)
#endif

namespace tracking_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedObstacleState_
{
  using Type = TrackedObstacleState_<ContainerAllocator>;

  explicit TrackedObstacleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    velocity(_init)
  {
    (void)_init;
  }

  explicit TrackedObstacleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracking_msgs__msg__TrackedObstacleState
    std::shared_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracking_msgs__msg__TrackedObstacleState
    std::shared_ptr<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedObstacleState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedObstacleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedObstacleState_

// alias to use template instance with default allocator
using TrackedObstacleState =
  tracking_msgs::msg::TrackedObstacleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE_STATE__STRUCT_HPP_
