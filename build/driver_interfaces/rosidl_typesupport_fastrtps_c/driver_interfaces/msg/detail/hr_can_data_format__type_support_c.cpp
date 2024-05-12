// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice
#include "driver_interfaces/msg/detail/hr_can_data_format__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driver_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driver_interfaces/msg/detail/hr_can_data_format__struct.h"
#include "driver_interfaces/msg/detail/hr_can_data_format__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _HRCanDataFormat__ros_msg_type = driver_interfaces__msg__HRCanDataFormat;

static bool _HRCanDataFormat__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HRCanDataFormat__ros_msg_type * ros_message = static_cast<const _HRCanDataFormat__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: is_rtr
  {
    cdr << (ros_message->is_rtr ? true : false);
  }

  // Field name: is_extended
  {
    cdr << (ros_message->is_extended ? true : false);
  }

  // Field name: is_error
  {
    cdr << (ros_message->is_error ? true : false);
  }

  // Field name: dlc
  {
    cdr << ros_message->dlc;
  }

  // Field name: data
  {
    size_t size = 8;
    auto array_ptr = ros_message->data;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _HRCanDataFormat__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HRCanDataFormat__ros_msg_type * ros_message = static_cast<_HRCanDataFormat__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: is_rtr
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_rtr = tmp ? true : false;
  }

  // Field name: is_extended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_extended = tmp ? true : false;
  }

  // Field name: is_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_error = tmp ? true : false;
  }

  // Field name: dlc
  {
    cdr >> ros_message->dlc;
  }

  // Field name: data
  {
    size_t size = 8;
    auto array_ptr = ros_message->data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver_interfaces
size_t get_serialized_size_driver_interfaces__msg__HRCanDataFormat(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HRCanDataFormat__ros_msg_type * ros_message = static_cast<const _HRCanDataFormat__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_rtr
  {
    size_t item_size = sizeof(ros_message->is_rtr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_extended
  {
    size_t item_size = sizeof(ros_message->is_extended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_error
  {
    size_t item_size = sizeof(ros_message->is_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dlc
  {
    size_t item_size = sizeof(ros_message->dlc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HRCanDataFormat__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driver_interfaces__msg__HRCanDataFormat(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver_interfaces
size_t max_serialized_size_driver_interfaces__msg__HRCanDataFormat(
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

  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_rtr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_extended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dlc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data
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
    using DataType = driver_interfaces__msg__HRCanDataFormat;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HRCanDataFormat__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_driver_interfaces__msg__HRCanDataFormat(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HRCanDataFormat = {
  "driver_interfaces::msg",
  "HRCanDataFormat",
  _HRCanDataFormat__cdr_serialize,
  _HRCanDataFormat__cdr_deserialize,
  _HRCanDataFormat__get_serialized_size,
  _HRCanDataFormat__max_serialized_size
};

static rosidl_message_type_support_t _HRCanDataFormat__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HRCanDataFormat,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driver_interfaces, msg, HRCanDataFormat)() {
  return &_HRCanDataFormat__type_support;
}

#if defined(__cplusplus)
}
#endif
