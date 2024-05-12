// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice

#ifndef DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__STRUCT_H_
#define DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HRCanDataFormat in the package driver_interfaces.
typedef struct driver_interfaces__msg__HRCanDataFormat
{
  uint32_t id;
  bool is_rtr;
  bool is_extended;
  bool is_error;
  uint8_t dlc;
  uint8_t data[8];
} driver_interfaces__msg__HRCanDataFormat;

// Struct for a sequence of driver_interfaces__msg__HRCanDataFormat.
typedef struct driver_interfaces__msg__HRCanDataFormat__Sequence
{
  driver_interfaces__msg__HRCanDataFormat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driver_interfaces__msg__HRCanDataFormat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__STRUCT_H_
