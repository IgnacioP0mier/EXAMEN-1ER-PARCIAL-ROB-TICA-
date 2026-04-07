// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interface:msg/Num.idl
// generated code does not contain a copyright notice

#include "custom_interface/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interface
const rosidl_type_hash_t *
custom_interface__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0xcc, 0x35, 0x02, 0xcf, 0xd7, 0x7a, 0xf2,
      0x5a, 0xd3, 0x1a, 0xe7, 0xe6, 0xa7, 0xe2, 0xcd,
      0x3a, 0x84, 0x99, 0x07, 0x2b, 0xc7, 0xa8, 0xd4,
      0x81, 0x57, 0xc0, 0xcc, 0x58, 0x8e, 0x99, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interface__msg__Num__TYPE_NAME[] = "custom_interface/msg/Num";

// Define type names, field names, and default values
static char custom_interface__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field custom_interface__msg__Num__FIELDS[] = {
  {
    {custom_interface__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interface__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interface__msg__Num__TYPE_NAME, 24, 24},
      {custom_interface__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interface__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interface__msg__Num__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 9, 9},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interface__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interface__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
