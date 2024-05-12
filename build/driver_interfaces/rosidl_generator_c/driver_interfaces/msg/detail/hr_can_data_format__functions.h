// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice

#ifndef DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__FUNCTIONS_H_
#define DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "driver_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "driver_interfaces/msg/detail/hr_can_data_format__struct.h"

/// Initialize msg/HRCanDataFormat message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * driver_interfaces__msg__HRCanDataFormat
 * )) before or use
 * driver_interfaces__msg__HRCanDataFormat__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
bool
driver_interfaces__msg__HRCanDataFormat__init(driver_interfaces__msg__HRCanDataFormat * msg);

/// Finalize msg/HRCanDataFormat message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
void
driver_interfaces__msg__HRCanDataFormat__fini(driver_interfaces__msg__HRCanDataFormat * msg);

/// Create msg/HRCanDataFormat message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * driver_interfaces__msg__HRCanDataFormat__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
driver_interfaces__msg__HRCanDataFormat *
driver_interfaces__msg__HRCanDataFormat__create();

/// Destroy msg/HRCanDataFormat message.
/**
 * It calls
 * driver_interfaces__msg__HRCanDataFormat__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
void
driver_interfaces__msg__HRCanDataFormat__destroy(driver_interfaces__msg__HRCanDataFormat * msg);

/// Check for msg/HRCanDataFormat message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
bool
driver_interfaces__msg__HRCanDataFormat__are_equal(const driver_interfaces__msg__HRCanDataFormat * lhs, const driver_interfaces__msg__HRCanDataFormat * rhs);

/// Copy a msg/HRCanDataFormat message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
bool
driver_interfaces__msg__HRCanDataFormat__copy(
  const driver_interfaces__msg__HRCanDataFormat * input,
  driver_interfaces__msg__HRCanDataFormat * output);

/// Initialize array of msg/HRCanDataFormat messages.
/**
 * It allocates the memory for the number of elements and calls
 * driver_interfaces__msg__HRCanDataFormat__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
bool
driver_interfaces__msg__HRCanDataFormat__Sequence__init(driver_interfaces__msg__HRCanDataFormat__Sequence * array, size_t size);

/// Finalize array of msg/HRCanDataFormat messages.
/**
 * It calls
 * driver_interfaces__msg__HRCanDataFormat__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
void
driver_interfaces__msg__HRCanDataFormat__Sequence__fini(driver_interfaces__msg__HRCanDataFormat__Sequence * array);

/// Create array of msg/HRCanDataFormat messages.
/**
 * It allocates the memory for the array and calls
 * driver_interfaces__msg__HRCanDataFormat__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
driver_interfaces__msg__HRCanDataFormat__Sequence *
driver_interfaces__msg__HRCanDataFormat__Sequence__create(size_t size);

/// Destroy array of msg/HRCanDataFormat messages.
/**
 * It calls
 * driver_interfaces__msg__HRCanDataFormat__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
void
driver_interfaces__msg__HRCanDataFormat__Sequence__destroy(driver_interfaces__msg__HRCanDataFormat__Sequence * array);

/// Check for msg/HRCanDataFormat message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
bool
driver_interfaces__msg__HRCanDataFormat__Sequence__are_equal(const driver_interfaces__msg__HRCanDataFormat__Sequence * lhs, const driver_interfaces__msg__HRCanDataFormat__Sequence * rhs);

/// Copy an array of msg/HRCanDataFormat messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_driver_interfaces
bool
driver_interfaces__msg__HRCanDataFormat__Sequence__copy(
  const driver_interfaces__msg__HRCanDataFormat__Sequence * input,
  driver_interfaces__msg__HRCanDataFormat__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DRIVER_INTERFACES__MSG__DETAIL__HR_CAN_DATA_FORMAT__FUNCTIONS_H_
