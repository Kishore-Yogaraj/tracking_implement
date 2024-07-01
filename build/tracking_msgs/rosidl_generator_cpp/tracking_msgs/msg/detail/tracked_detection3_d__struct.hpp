// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracking_msgs:msg/TrackedDetection3D.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__STRUCT_HPP_
#define TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__STRUCT_HPP_

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
// Member 'detection'
// Member 'observation_history'
// Member 'predicted_states'
#include "vision_msgs/msg/detail/detection3_d__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracking_msgs__msg__TrackedDetection3D __attribute__((deprecated))
#else
# define DEPRECATED__tracking_msgs__msg__TrackedDetection3D __declspec(deprecated)
#endif

namespace tracking_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedDetection3D_
{
  using Type = TrackedDetection3D_<ContainerAllocator>;

  explicit TrackedDetection3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    detection(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracked_id = 0ll;
    }
  }

  explicit TrackedDetection3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    detection(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracked_id = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tracked_id_type =
    int64_t;
  _tracked_id_type tracked_id;
  using _detection_type =
    vision_msgs::msg::Detection3D_<ContainerAllocator>;
  _detection_type detection;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _observation_history_type =
    std::vector<vision_msgs::msg::Detection3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::Detection3D_<ContainerAllocator>>>;
  _observation_history_type observation_history;
  using _predicted_states_type =
    std::vector<vision_msgs::msg::Detection3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::Detection3D_<ContainerAllocator>>>;
  _predicted_states_type predicted_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tracked_id(
    const int64_t & _arg)
  {
    this->tracked_id = _arg;
    return *this;
  }
  Type & set__detection(
    const vision_msgs::msg::Detection3D_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__observation_history(
    const std::vector<vision_msgs::msg::Detection3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::Detection3D_<ContainerAllocator>>> & _arg)
  {
    this->observation_history = _arg;
    return *this;
  }
  Type & set__predicted_states(
    const std::vector<vision_msgs::msg::Detection3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::Detection3D_<ContainerAllocator>>> & _arg)
  {
    this->predicted_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracking_msgs__msg__TrackedDetection3D
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracking_msgs__msg__TrackedDetection3D
    std::shared_ptr<tracking_msgs::msg::TrackedDetection3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedDetection3D_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tracked_id != other.tracked_id) {
      return false;
    }
    if (this->detection != other.detection) {
      return false;
    }
    if (this->velocity != other.velocity) {
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
  bool operator!=(const TrackedDetection3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedDetection3D_

// alias to use template instance with default allocator
using TrackedDetection3D =
  tracking_msgs::msg::TrackedDetection3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracking_msgs

#endif  // TRACKING_MSGS__MSG__DETAIL__TRACKED_DETECTION3_D__STRUCT_HPP_
