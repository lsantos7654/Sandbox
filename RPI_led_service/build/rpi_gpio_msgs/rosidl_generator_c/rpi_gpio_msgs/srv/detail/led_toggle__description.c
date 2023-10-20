// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice

#include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rpi_gpio_msgs
const rosidl_type_hash_t *
rpi_gpio_msgs__srv__LEDToggle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x28, 0x4c, 0x3f, 0xc8, 0x9e, 0xc4, 0xf5,
      0xf1, 0x72, 0xb2, 0xd5, 0xf2, 0x16, 0x9d, 0x2b,
      0x27, 0x0d, 0x98, 0x71, 0x36, 0x7e, 0x70, 0x64,
      0xcb, 0x24, 0x39, 0xd0, 0x5a, 0x28, 0x5f, 0x03,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rpi_gpio_msgs
const rosidl_type_hash_t *
rpi_gpio_msgs__srv__LEDToggle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x46, 0x91, 0x84, 0x19, 0x13, 0x3d, 0xbf,
      0x05, 0x40, 0x18, 0xbc, 0xc0, 0x2f, 0x87, 0x9b,
      0x1b, 0x50, 0x4b, 0x9e, 0x58, 0x04, 0xdf, 0x86,
      0x43, 0x85, 0xfa, 0x5a, 0x5a, 0xc3, 0x15, 0x1a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rpi_gpio_msgs
const rosidl_type_hash_t *
rpi_gpio_msgs__srv__LEDToggle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x58, 0xa5, 0x1a, 0xb0, 0x24, 0xfe, 0xeb,
      0x01, 0x00, 0xb7, 0x89, 0x02, 0xb2, 0x6f, 0xea,
      0xb3, 0xf3, 0xf4, 0x0e, 0x91, 0x28, 0xa3, 0xa5,
      0xc3, 0x76, 0x58, 0xba, 0x5d, 0x08, 0x44, 0xe0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rpi_gpio_msgs
const rosidl_type_hash_t *
rpi_gpio_msgs__srv__LEDToggle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x44, 0x5e, 0x79, 0xb3, 0x2d, 0x33, 0x1d,
      0x2b, 0xc3, 0x39, 0x0d, 0x48, 0x44, 0xfd, 0xf1,
      0xb7, 0x46, 0xcd, 0x1f, 0x6f, 0xae, 0x09, 0xb5,
      0xf9, 0xcd, 0xdc, 0xc7, 0xb6, 0x12, 0xb7, 0xc6,
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

static char rpi_gpio_msgs__srv__LEDToggle__TYPE_NAME[] = "rpi_gpio_msgs/srv/LEDToggle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rpi_gpio_msgs__srv__LEDToggle_Event__TYPE_NAME[] = "rpi_gpio_msgs/srv/LEDToggle_Event";
static char rpi_gpio_msgs__srv__LEDToggle_Request__TYPE_NAME[] = "rpi_gpio_msgs/srv/LEDToggle_Request";
static char rpi_gpio_msgs__srv__LEDToggle_Response__TYPE_NAME[] = "rpi_gpio_msgs/srv/LEDToggle_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rpi_gpio_msgs__srv__LEDToggle__FIELD_NAME__request_message[] = "request_message";
static char rpi_gpio_msgs__srv__LEDToggle__FIELD_NAME__response_message[] = "response_message";
static char rpi_gpio_msgs__srv__LEDToggle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rpi_gpio_msgs__srv__LEDToggle__FIELDS[] = {
  {
    {rpi_gpio_msgs__srv__LEDToggle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rpi_gpio_msgs__srv__LEDToggle_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rpi_gpio_msgs__srv__LEDToggle_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rpi_gpio_msgs__srv__LEDToggle_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rpi_gpio_msgs__srv__LEDToggle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rpi_gpio_msgs__srv__LEDToggle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rpi_gpio_msgs__srv__LEDToggle__TYPE_NAME, 27, 27},
      {rpi_gpio_msgs__srv__LEDToggle__FIELDS, 3, 3},
    },
    {rpi_gpio_msgs__srv__LEDToggle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rpi_gpio_msgs__srv__LEDToggle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rpi_gpio_msgs__srv__LEDToggle_Request__FIELD_NAME__gpiochoice[] = "gpiochoice";
static char rpi_gpio_msgs__srv__LEDToggle_Request__FIELD_NAME__toggle[] = "toggle";

static rosidl_runtime_c__type_description__Field rpi_gpio_msgs__srv__LEDToggle_Request__FIELDS[] = {
  {
    {rpi_gpio_msgs__srv__LEDToggle_Request__FIELD_NAME__gpiochoice, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Request__FIELD_NAME__toggle, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rpi_gpio_msgs__srv__LEDToggle_Request__TYPE_NAME, 35, 35},
      {rpi_gpio_msgs__srv__LEDToggle_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rpi_gpio_msgs__srv__LEDToggle_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field rpi_gpio_msgs__srv__LEDToggle_Response__FIELDS[] = {
  {
    {rpi_gpio_msgs__srv__LEDToggle_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rpi_gpio_msgs__srv__LEDToggle_Response__TYPE_NAME, 36, 36},
      {rpi_gpio_msgs__srv__LEDToggle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rpi_gpio_msgs__srv__LEDToggle_Event__FIELD_NAME__info[] = "info";
static char rpi_gpio_msgs__srv__LEDToggle_Event__FIELD_NAME__request[] = "request";
static char rpi_gpio_msgs__srv__LEDToggle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rpi_gpio_msgs__srv__LEDToggle_Event__FIELDS[] = {
  {
    {rpi_gpio_msgs__srv__LEDToggle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rpi_gpio_msgs__srv__LEDToggle_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rpi_gpio_msgs__srv__LEDToggle_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rpi_gpio_msgs__srv__LEDToggle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rpi_gpio_msgs__srv__LEDToggle_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rpi_gpio_msgs__srv__LEDToggle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rpi_gpio_msgs__srv__LEDToggle_Event__TYPE_NAME, 33, 33},
      {rpi_gpio_msgs__srv__LEDToggle_Event__FIELDS, 3, 3},
    },
    {rpi_gpio_msgs__srv__LEDToggle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 gpiochoice\n"
  "bool toggle\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rpi_gpio_msgs__srv__LEDToggle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rpi_gpio_msgs__srv__LEDToggle__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rpi_gpio_msgs__srv__LEDToggle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rpi_gpio_msgs__srv__LEDToggle_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rpi_gpio_msgs__srv__LEDToggle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rpi_gpio_msgs__srv__LEDToggle_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rpi_gpio_msgs__srv__LEDToggle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rpi_gpio_msgs__srv__LEDToggle_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rpi_gpio_msgs__srv__LEDToggle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rpi_gpio_msgs__srv__LEDToggle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rpi_gpio_msgs__srv__LEDToggle_Event__get_individual_type_description_source(NULL);
    sources[3] = *rpi_gpio_msgs__srv__LEDToggle_Request__get_individual_type_description_source(NULL);
    sources[4] = *rpi_gpio_msgs__srv__LEDToggle_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rpi_gpio_msgs__srv__LEDToggle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rpi_gpio_msgs__srv__LEDToggle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rpi_gpio_msgs__srv__LEDToggle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rpi_gpio_msgs__srv__LEDToggle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rpi_gpio_msgs__srv__LEDToggle_Request__get_individual_type_description_source(NULL);
    sources[3] = *rpi_gpio_msgs__srv__LEDToggle_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}