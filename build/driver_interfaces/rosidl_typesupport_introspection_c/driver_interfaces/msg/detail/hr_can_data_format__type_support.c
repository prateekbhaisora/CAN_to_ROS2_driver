// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driver_interfaces/msg/detail/hr_can_data_format__rosidl_typesupport_introspection_c.h"
#include "driver_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driver_interfaces/msg/detail/hr_can_data_format__functions.h"
#include "driver_interfaces/msg/detail/hr_can_data_format__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  driver_interfaces__msg__HRCanDataFormat__init(message_memory);
}

void driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_fini_function(void * message_memory)
{
  driver_interfaces__msg__HRCanDataFormat__fini(message_memory);
}

size_t driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__size_function__HRCanDataFormat__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__get_const_function__HRCanDataFormat__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__get_function__HRCanDataFormat__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__fetch_function__HRCanDataFormat__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__get_const_function__HRCanDataFormat__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__assign_function__HRCanDataFormat__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__get_function__HRCanDataFormat__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_member_array[6] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver_interfaces__msg__HRCanDataFormat, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_rtr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver_interfaces__msg__HRCanDataFormat, is_rtr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_extended",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver_interfaces__msg__HRCanDataFormat, is_extended),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver_interfaces__msg__HRCanDataFormat, is_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dlc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver_interfaces__msg__HRCanDataFormat, dlc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(driver_interfaces__msg__HRCanDataFormat, data),  // bytes offset in struct
    NULL,  // default value
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__size_function__HRCanDataFormat__data,  // size() function pointer
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__get_const_function__HRCanDataFormat__data,  // get_const(index) function pointer
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__get_function__HRCanDataFormat__data,  // get(index) function pointer
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__fetch_function__HRCanDataFormat__data,  // fetch(index, &value) function pointer
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__assign_function__HRCanDataFormat__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_members = {
  "driver_interfaces__msg",  // message namespace
  "HRCanDataFormat",  // message name
  6,  // number of fields
  sizeof(driver_interfaces__msg__HRCanDataFormat),
  driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_member_array,  // message members
  driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_init_function,  // function to initialize message memory (memory has to be allocated)
  driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_type_support_handle = {
  0,
  &driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driver_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver_interfaces, msg, HRCanDataFormat)() {
  if (!driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_type_support_handle.typesupport_identifier) {
    driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driver_interfaces__msg__HRCanDataFormat__rosidl_typesupport_introspection_c__HRCanDataFormat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
