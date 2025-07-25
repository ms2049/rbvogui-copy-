// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotnik_perception_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ROBOTNIK_PERCEPTION_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define ROBOTNIK_PERCEPTION_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_

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
// Member 'object'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotnik_perception_msgs__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__robotnik_perception_msgs__msg__Detection __declspec(deprecated)
#endif

namespace robotnik_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    object(_init)
  {
    (void)_init;
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    object(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _object_type object;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotnik_perception_msgs::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotnik_perception_msgs::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotnik_perception_msgs::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotnik_perception_msgs::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotnik_perception_msgs__msg__Detection
    std::shared_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotnik_perception_msgs__msg__Detection
    std::shared_ptr<robotnik_perception_msgs::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  robotnik_perception_msgs::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotnik_perception_msgs

#endif  // ROBOTNIK_PERCEPTION_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
