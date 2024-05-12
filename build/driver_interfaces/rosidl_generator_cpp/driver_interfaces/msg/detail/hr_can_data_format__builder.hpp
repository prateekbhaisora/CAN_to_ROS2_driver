// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice

#ifndef DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__BUILDER_HPP_
#define DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "driver_interfaces/msg/detail/hr_can_data_format__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace driver_interfaces
{

namespace msg
{

namespace builder
{

class Init_HRCanDataFormat_data
{
public:
  explicit Init_HRCanDataFormat_data(::driver_interfaces::msg::HRCanDataFormat & msg)
  : msg_(msg)
  {}
  ::driver_interfaces::msg::HRCanDataFormat data(::driver_interfaces::msg::HRCanDataFormat::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver_interfaces::msg::HRCanDataFormat msg_;
};

class Init_HRCanDataFormat_dlc
{
public:
  explicit Init_HRCanDataFormat_dlc(::driver_interfaces::msg::HRCanDataFormat & msg)
  : msg_(msg)
  {}
  Init_HRCanDataFormat_data dlc(::driver_interfaces::msg::HRCanDataFormat::_dlc_type arg)
  {
    msg_.dlc = std::move(arg);
    return Init_HRCanDataFormat_data(msg_);
  }

private:
  ::driver_interfaces::msg::HRCanDataFormat msg_;
};

class Init_HRCanDataFormat_is_error
{
public:
  explicit Init_HRCanDataFormat_is_error(::driver_interfaces::msg::HRCanDataFormat & msg)
  : msg_(msg)
  {}
  Init_HRCanDataFormat_dlc is_error(::driver_interfaces::msg::HRCanDataFormat::_is_error_type arg)
  {
    msg_.is_error = std::move(arg);
    return Init_HRCanDataFormat_dlc(msg_);
  }

private:
  ::driver_interfaces::msg::HRCanDataFormat msg_;
};

class Init_HRCanDataFormat_is_extended
{
public:
  explicit Init_HRCanDataFormat_is_extended(::driver_interfaces::msg::HRCanDataFormat & msg)
  : msg_(msg)
  {}
  Init_HRCanDataFormat_is_error is_extended(::driver_interfaces::msg::HRCanDataFormat::_is_extended_type arg)
  {
    msg_.is_extended = std::move(arg);
    return Init_HRCanDataFormat_is_error(msg_);
  }

private:
  ::driver_interfaces::msg::HRCanDataFormat msg_;
};

class Init_HRCanDataFormat_is_rtr
{
public:
  explicit Init_HRCanDataFormat_is_rtr(::driver_interfaces::msg::HRCanDataFormat & msg)
  : msg_(msg)
  {}
  Init_HRCanDataFormat_is_extended is_rtr(::driver_interfaces::msg::HRCanDataFormat::_is_rtr_type arg)
  {
    msg_.is_rtr = std::move(arg);
    return Init_HRCanDataFormat_is_extended(msg_);
  }

private:
  ::driver_interfaces::msg::HRCanDataFormat msg_;
};

class Init_HRCanDataFormat_id
{
public:
  Init_HRCanDataFormat_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HRCanDataFormat_is_rtr id(::driver_interfaces::msg::HRCanDataFormat::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_HRCanDataFormat_is_rtr(msg_);
  }

private:
  ::driver_interfaces::msg::HRCanDataFormat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver_interfaces::msg::HRCanDataFormat>()
{
  return driver_interfaces::msg::builder::Init_HRCanDataFormat_id();
}

}  // namespace driver_interfaces

#endif  // DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__BUILDER_HPP_
