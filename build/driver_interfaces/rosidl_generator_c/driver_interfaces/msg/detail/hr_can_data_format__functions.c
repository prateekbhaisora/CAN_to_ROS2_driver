// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driver_interfaces:msg/HRCanDataFormat.idl
// generated code does not contain a copyright notice
#include "driver_interfaces/msg/detail/hr_can_data_format__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
driver_interfaces__msg__HRCanDataFormat__init(driver_interfaces__msg__HRCanDataFormat * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // is_rtr
  // is_extended
  // is_error
  // dlc
  // data
  return true;
}

void
driver_interfaces__msg__HRCanDataFormat__fini(driver_interfaces__msg__HRCanDataFormat * msg)
{
  if (!msg) {
    return;
  }
  // id
  // is_rtr
  // is_extended
  // is_error
  // dlc
  // data
}

bool
driver_interfaces__msg__HRCanDataFormat__are_equal(const driver_interfaces__msg__HRCanDataFormat * lhs, const driver_interfaces__msg__HRCanDataFormat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // is_rtr
  if (lhs->is_rtr != rhs->is_rtr) {
    return false;
  }
  // is_extended
  if (lhs->is_extended != rhs->is_extended) {
    return false;
  }
  // is_error
  if (lhs->is_error != rhs->is_error) {
    return false;
  }
  // dlc
  if (lhs->dlc != rhs->dlc) {
    return false;
  }
  // data
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
driver_interfaces__msg__HRCanDataFormat__copy(
  const driver_interfaces__msg__HRCanDataFormat * input,
  driver_interfaces__msg__HRCanDataFormat * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // is_rtr
  output->is_rtr = input->is_rtr;
  // is_extended
  output->is_extended = input->is_extended;
  // is_error
  output->is_error = input->is_error;
  // dlc
  output->dlc = input->dlc;
  // data
  for (size_t i = 0; i < 8; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

driver_interfaces__msg__HRCanDataFormat *
driver_interfaces__msg__HRCanDataFormat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver_interfaces__msg__HRCanDataFormat * msg = (driver_interfaces__msg__HRCanDataFormat *)allocator.allocate(sizeof(driver_interfaces__msg__HRCanDataFormat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driver_interfaces__msg__HRCanDataFormat));
  bool success = driver_interfaces__msg__HRCanDataFormat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
driver_interfaces__msg__HRCanDataFormat__destroy(driver_interfaces__msg__HRCanDataFormat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    driver_interfaces__msg__HRCanDataFormat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
driver_interfaces__msg__HRCanDataFormat__Sequence__init(driver_interfaces__msg__HRCanDataFormat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver_interfaces__msg__HRCanDataFormat * data = NULL;

  if (size) {
    data = (driver_interfaces__msg__HRCanDataFormat *)allocator.zero_allocate(size, sizeof(driver_interfaces__msg__HRCanDataFormat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driver_interfaces__msg__HRCanDataFormat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driver_interfaces__msg__HRCanDataFormat__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
driver_interfaces__msg__HRCanDataFormat__Sequence__fini(driver_interfaces__msg__HRCanDataFormat__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      driver_interfaces__msg__HRCanDataFormat__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

driver_interfaces__msg__HRCanDataFormat__Sequence *
driver_interfaces__msg__HRCanDataFormat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver_interfaces__msg__HRCanDataFormat__Sequence * array = (driver_interfaces__msg__HRCanDataFormat__Sequence *)allocator.allocate(sizeof(driver_interfaces__msg__HRCanDataFormat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = driver_interfaces__msg__HRCanDataFormat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
driver_interfaces__msg__HRCanDataFormat__Sequence__destroy(driver_interfaces__msg__HRCanDataFormat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    driver_interfaces__msg__HRCanDataFormat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
driver_interfaces__msg__HRCanDataFormat__Sequence__are_equal(const driver_interfaces__msg__HRCanDataFormat__Sequence * lhs, const driver_interfaces__msg__HRCanDataFormat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!driver_interfaces__msg__HRCanDataFormat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
driver_interfaces__msg__HRCanDataFormat__Sequence__copy(
  const driver_interfaces__msg__HRCanDataFormat__Sequence * input,
  driver_interfaces__msg__HRCanDataFormat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(driver_interfaces__msg__HRCanDataFormat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    driver_interfaces__msg__HRCanDataFormat * data =
      (driver_interfaces__msg__HRCanDataFormat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!driver_interfaces__msg__HRCanDataFormat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          driver_interfaces__msg__HRCanDataFormat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!driver_interfaces__msg__HRCanDataFormat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
