// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice

#ifndef DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__TRAITS_HPP_
#define DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "driver_interfaces/msg/detail/hr_can_data_format__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace driver_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HRCanDataFormat & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: is_rtr
  {
    out << "is_rtr: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rtr, out);
    out << ", ";
  }

  // member: is_extended
  {
    out << "is_extended: ";
    rosidl_generator_traits::value_to_yaml(msg.is_extended, out);
    out << ", ";
  }

  // member: is_error
  {
    out << "is_error: ";
    rosidl_generator_traits::value_to_yaml(msg.is_error, out);
    out << ", ";
  }

  // member: dlc
  {
    out << "dlc: ";
    rosidl_generator_traits::value_to_yaml(msg.dlc, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const HRCanDataFormat & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: is_rtr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_rtr: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rtr, out);
    out << "\n";
  }

  // member: is_extended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_extended: ";
    rosidl_generator_traits::value_to_yaml(msg.is_extended, out);
    out << "\n";
  }

  // member: is_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_error: ";
    rosidl_generator_traits::value_to_yaml(msg.is_error, out);
    out << "\n";
  }

  // member: dlc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dlc: ";
    rosidl_generator_traits::value_to_yaml(msg.dlc, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HRCanDataFormat & msg, bool use_flow_style = false)
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

}  // namespace driver_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use driver_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const driver_interfaces::msg::HRCanDataFormat & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const driver_interfaces::msg::HRCanDataFormat & msg)
{
  return driver_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<driver_interfaces::msg::HRCanDataFormat>()
{
  return "driver_interfaces::msg::HRCanDataFormat";
}

template<>
inline const char * name<driver_interfaces::msg::HRCanDataFormat>()
{
  return "driver_interfaces/msg/HRCanDataFormat";
}

template<>
struct has_fixed_size<driver_interfaces::msg::HRCanDataFormat>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver_interfaces::msg::HRCanDataFormat>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver_interfaces::msg::HRCanDataFormat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__TRAITS_HPP_
