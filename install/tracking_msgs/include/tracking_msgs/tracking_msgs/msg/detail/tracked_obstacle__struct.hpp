// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracking_msgs:msg/TrackedObstacle.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__STRUCT_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__STRUCT_HPP_

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
// Member 'obstacle'
#include "tracking_msgs/msg/detail/obstacle__struct.hpp"
// Member 'observation_history'
// Member 'predicted_states'
#include "tracking_msgs/msg/detail/tracked_obstacle_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracking_msgs__msg__TrackedObstacle __attribute__((deprecated))
#else
# define DEPRECATED__tracking_msgs__msg__TrackedObstacle __declspec(deprecated)
#endif

namespace tracking_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedObstacle_
{
  using Type = TrackedObstacle_<ContainerAllocator>;

  explicit TrackedObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    obstacle(_init)
  {
    (void)_init;
  }

  explicit TrackedObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    obstacle(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _obstacle_type =
    tracking_msgs::msg::Obstacle_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _observation_history_type =
    std::vector<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>>;
  _observation_history_type observation_history;
  using _predicted_states_type =
    std::vector<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>>;
  _predicted_states_type predicted_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__obstacle(
    const tracking_msgs::msg::Obstacle_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__observation_history(
    const std::vector<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>> & _arg)
  {
    this->observation_history = _arg;
    return *this;
  }
  Type & set__predicted_states(
    const std::vector<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tracking_msgs::msg::TrackedObstacleState_<ContainerAllocator>>> & _arg)
  {
    this->predicted_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracking_msgs::msg::TrackedObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracking_msgs::msg::TrackedObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracking_msgs__msg__TrackedObstacle
    std::shared_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracking_msgs__msg__TrackedObstacle
    std::shared_ptr<tracking_msgs::msg::TrackedObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedObstacle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->observation_history != other.observation_history) {
      return false;
    }
    if (this->predicted_states != other.predicted_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedObstacle_

// alias to use template instance with default allocator
using TrackedObstacle =
  tracking_msgs::msg::TrackedObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_OBSTACLE__STRUCT_HPP_
