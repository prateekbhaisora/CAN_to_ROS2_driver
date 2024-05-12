// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice
#include "driver_interfaces/msg/detail/hr_can_data_format__rosidl_typesupport_fastrtps_cpp.hpp"
#include "driver_interfaces/msg/detail/hr_can_data_format__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace driver_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver_interfaces
cdr_serialize(
  const driver_interfaces::msg::HRCanDataFormat & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: is_rtr
  cdr << (ros_message.is_rtr ? true : false);
  // Member: is_extended
  cdr << (ros_message.is_extended ? true : false);
  // Member: is_error
  cdr << (ros_message.is_error ? true : false);
  // Member: dlc
  cdr << ros_message.dlc;
  // Member: data
  {
    cdr << ros_message.data;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  driver_interfaces::msg::HRCanDataFormat & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: is_rtr
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_rtr = tmp ? true : false;
  }

  // Member: is_extended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_extended = tmp ? true : false;
  }

  // Member: is_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_error = tmp ? true : false;
  }

  // Member: dlc
  cdr >> ros_message.dlc;

  // Member: data
  {
    cdr >> ros_message.data;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver_interfaces
get_serialized_size(
  const driver_interfaces::msg::HRCanDataFormat & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_rtr
  {
    size_t item_size = sizeof(ros_message.is_rtr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_extended
  {
    size_t item_size = sizeof(ros_message.is_extended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_error
  {
    size_t item_size = sizeof(ros_message.is_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dlc
  {
    size_t item_size = sizeof(ros_message.dlc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver_interfaces
max_serialized_size_HRCanDataFormat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_rtr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_extended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dlc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = driver_interfaces::msg::HRCanDataFormat;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HRCanDataFormat__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const driver_interfaces::msg::HRCanDataFormat *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HRCanDataFormat__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<driver_interfaces::msg::HRCanDataFormat *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HRCanDataFormat__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const driver_interfaces::msg::HRCanDataFormat *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HRCanDataFormat__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HRCanDataFormat(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HRCanDataFormat__callbacks = {
  "driver_interfaces::msg",
  "HRCanDataFormat",
  _HRCanDataFormat__cdr_serialize,
  _HRCanDataFormat__cdr_deserialize,
  _HRCanDataFormat__get_serialized_size,
  _HRCanDataFormat__max_serialized_size
};

static rosidl_message_type_support_t _HRCanDataFormat__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HRCanDataFormat__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace driver_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_driver_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<driver_interfaces::msg::HRCanDataFormat>()
{
  return &driver_interfaces::msg::typesupport_fastrtps_cpp::_HRCanDataFormat__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, driver_interfaces, msg, HRCanDataFormat)() {
  return &driver_interfaces::msg::typesupport_fastrtps_cpp::_HRCanDataFormat__handle;
}

#ifdef __cplusplus
}
#endif
