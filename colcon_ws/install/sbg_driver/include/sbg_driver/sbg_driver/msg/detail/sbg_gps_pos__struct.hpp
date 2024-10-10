// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgGpsPos.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__STRUCT_HPP_

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
// Member 'status'
#include "sbg_driver/msg/detail/sbg_gps_pos_status__struct.hpp"
// Member 'position_accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgGpsPos __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgGpsPos __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgGpsPos_
{
  using Type = SbgGpsPos_<ContainerAllocator>;

  explicit SbgGpsPos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    position_accuracy(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->gps_tow = 0ul;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->undulation = 0.0f;
      this->num_sv_used = 0;
      this->base_station_id = 0;
      this->diff_age = 0;
    }
  }

  explicit SbgGpsPos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    position_accuracy(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->gps_tow = 0ul;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->undulation = 0.0f;
      this->num_sv_used = 0;
      this->base_station_id = 0;
      this->diff_age = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _status_type =
    sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator>;
  _status_type status;
  using _gps_tow_type =
    uint32_t;
  _gps_tow_type gps_tow;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _position_accuracy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_accuracy_type position_accuracy;
  using _num_sv_used_type =
    uint8_t;
  _num_sv_used_type num_sv_used;
  using _base_station_id_type =
    uint16_t;
  _base_station_id_type base_station_id;
  using _diff_age_type =
    uint16_t;
  _diff_age_type diff_age;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__status(
    const sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__gps_tow(
    const uint32_t & _arg)
  {
    this->gps_tow = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__position_accuracy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position_accuracy = _arg;
    return *this;
  }
  Type & set__num_sv_used(
    const uint8_t & _arg)
  {
    this->num_sv_used = _arg;
    return *this;
  }
  Type & set__base_station_id(
    const uint16_t & _arg)
  {
    this->base_station_id = _arg;
    return *this;
  }
  Type & set__diff_age(
    const uint16_t & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgGpsPos_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgGpsPos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsPos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsPos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgGpsPos
    std::shared_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgGpsPos
    std::shared_ptr<sbg_driver::msg::SbgGpsPos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgGpsPos_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->gps_tow != other.gps_tow) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->position_accuracy != other.position_accuracy) {
      return false;
    }
    if (this->num_sv_used != other.num_sv_used) {
      return false;
    }
    if (this->base_station_id != other.base_station_id) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgGpsPos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgGpsPos_

// alias to use template instance with default allocator
using SbgGpsPos =
  sbg_driver::msg::SbgGpsPos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__STRUCT_HPP_
