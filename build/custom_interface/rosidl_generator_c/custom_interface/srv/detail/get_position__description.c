// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interface:srv/GetPosition.idl
// generated code does not contain a copyright notice

#include "custom_interface/srv/detail/get_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interface
const rosidl_type_hash_t *
custom_interface__srv__GetPosition__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0x11, 0xbd, 0xa1, 0x68, 0xb4, 0x33, 0x88,
      0x8a, 0x50, 0x39, 0x7f, 0x9e, 0x5c, 0x08, 0x07,
      0x41, 0xd6, 0x1d, 0xd6, 0x7f, 0xe8, 0x90, 0x9a,
      0x6b, 0x45, 0x13, 0x4d, 0xcc, 0xb2, 0x48, 0x4d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_interface
const rosidl_type_hash_t *
custom_interface__srv__GetPosition_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x25, 0x8b, 0xf2, 0xa9, 0x63, 0xee, 0x7f,
      0x54, 0xef, 0x08, 0x16, 0xc5, 0x4b, 0xac, 0x87,
      0x3c, 0x21, 0xb5, 0x02, 0xf0, 0x12, 0x11, 0xf6,
      0x03, 0x5b, 0xfa, 0x12, 0x86, 0x34, 0x53, 0xdb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_interface
const rosidl_type_hash_t *
custom_interface__srv__GetPosition_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x5d, 0xd8, 0x4c, 0x7e, 0x7a, 0xf4, 0x52,
      0xb9, 0x7b, 0x58, 0xe9, 0xe8, 0xdf, 0x21, 0xd3,
      0xa0, 0x62, 0xd1, 0xb6, 0x61, 0xbc, 0x20, 0xe0,
      0x5a, 0xcd, 0x93, 0x93, 0x26, 0x40, 0x8c, 0x54,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_interface
const rosidl_type_hash_t *
custom_interface__srv__GetPosition_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x9e, 0x8b, 0xb4, 0xc3, 0x3a, 0xc4, 0x3f,
      0x6a, 0x57, 0xcf, 0x08, 0xbb, 0x40, 0xfa, 0x73,
      0x86, 0x16, 0x02, 0xc8, 0x53, 0x3b, 0x70, 0x77,
      0x0c, 0x0e, 0xa6, 0xf7, 0xb0, 0x1a, 0x86, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char custom_interface__srv__GetPosition__TYPE_NAME[] = "custom_interface/srv/GetPosition";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char custom_interface__srv__GetPosition_Event__TYPE_NAME[] = "custom_interface/srv/GetPosition_Event";
static char custom_interface__srv__GetPosition_Request__TYPE_NAME[] = "custom_interface/srv/GetPosition_Request";
static char custom_interface__srv__GetPosition_Response__TYPE_NAME[] = "custom_interface/srv/GetPosition_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char custom_interface__srv__GetPosition__FIELD_NAME__request_message[] = "request_message";
static char custom_interface__srv__GetPosition__FIELD_NAME__response_message[] = "response_message";
static char custom_interface__srv__GetPosition__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field custom_interface__srv__GetPosition__FIELDS[] = {
  {
    {custom_interface__srv__GetPosition__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_interface__srv__GetPosition_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_interface__srv__GetPosition_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_interface__srv__GetPosition_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_interface__srv__GetPosition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interface__srv__GetPosition__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interface__srv__GetPosition__TYPE_NAME, 32, 32},
      {custom_interface__srv__GetPosition__FIELDS, 3, 3},
    },
    {custom_interface__srv__GetPosition__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_interface__srv__GetPosition_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_interface__srv__GetPosition_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_interface__srv__GetPosition_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_interface__srv__GetPosition_Request__FIELD_NAME__th1[] = "th1";
static char custom_interface__srv__GetPosition_Request__FIELD_NAME__th2[] = "th2";
static char custom_interface__srv__GetPosition_Request__FIELD_NAME__th3[] = "th3";
static char custom_interface__srv__GetPosition_Request__FIELD_NAME__th4[] = "th4";

static rosidl_runtime_c__type_description__Field custom_interface__srv__GetPosition_Request__FIELDS[] = {
  {
    {custom_interface__srv__GetPosition_Request__FIELD_NAME__th1, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Request__FIELD_NAME__th2, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Request__FIELD_NAME__th3, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Request__FIELD_NAME__th4, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interface__srv__GetPosition_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interface__srv__GetPosition_Request__TYPE_NAME, 40, 40},
      {custom_interface__srv__GetPosition_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_interface__srv__GetPosition_Response__FIELD_NAME__x[] = "x";
static char custom_interface__srv__GetPosition_Response__FIELD_NAME__y[] = "y";
static char custom_interface__srv__GetPosition_Response__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field custom_interface__srv__GetPosition_Response__FIELDS[] = {
  {
    {custom_interface__srv__GetPosition_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Response__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Response__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interface__srv__GetPosition_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interface__srv__GetPosition_Response__TYPE_NAME, 41, 41},
      {custom_interface__srv__GetPosition_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_interface__srv__GetPosition_Event__FIELD_NAME__info[] = "info";
static char custom_interface__srv__GetPosition_Event__FIELD_NAME__request[] = "request";
static char custom_interface__srv__GetPosition_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field custom_interface__srv__GetPosition_Event__FIELDS[] = {
  {
    {custom_interface__srv__GetPosition_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_interface__srv__GetPosition_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_interface__srv__GetPosition_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_interface__srv__GetPosition_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {custom_interface__srv__GetPosition_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interface__srv__GetPosition_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interface__srv__GetPosition_Event__TYPE_NAME, 38, 38},
      {custom_interface__srv__GetPosition_Event__FIELDS, 3, 3},
    },
    {custom_interface__srv__GetPosition_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_interface__srv__GetPosition_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_interface__srv__GetPosition_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 th1\n"
  "float64 th2\n"
  "float64 th3\n"
  "float64 th4\n"
  "---\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interface__srv__GetPosition__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interface__srv__GetPosition__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_interface__srv__GetPosition_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interface__srv__GetPosition_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_interface__srv__GetPosition_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interface__srv__GetPosition_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_interface__srv__GetPosition_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interface__srv__GetPosition_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interface__srv__GetPosition__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interface__srv__GetPosition__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_interface__srv__GetPosition_Event__get_individual_type_description_source(NULL);
    sources[3] = *custom_interface__srv__GetPosition_Request__get_individual_type_description_source(NULL);
    sources[4] = *custom_interface__srv__GetPosition_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interface__srv__GetPosition_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interface__srv__GetPosition_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interface__srv__GetPosition_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interface__srv__GetPosition_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interface__srv__GetPosition_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interface__srv__GetPosition_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_interface__srv__GetPosition_Request__get_individual_type_description_source(NULL);
    sources[3] = *custom_interface__srv__GetPosition_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
