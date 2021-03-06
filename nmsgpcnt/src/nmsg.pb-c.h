/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: nmsg.proto */

#ifndef PROTOBUF_C_nmsg_2eproto__INCLUDED
#define PROTOBUF_C_nmsg_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Nmsg__Nmsg Nmsg__Nmsg;
typedef struct _Nmsg__NmsgFragment Nmsg__NmsgFragment;
typedef struct _Nmsg__NmsgPayload Nmsg__NmsgPayload;


/* --- enums --- */


/* --- messages --- */

struct  _Nmsg__Nmsg
{
  ProtobufCMessage base;
  size_t n_payloads;
  Nmsg__NmsgPayload **payloads;
  size_t n_payload_crcs;
  uint32_t *payload_crcs;
  protobuf_c_boolean has_sequence;
  uint32_t sequence;
  protobuf_c_boolean has_sequence_id;
  uint64_t sequence_id;
};
#define NMSG__NMSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nmsg__nmsg__descriptor) \
    , 0,NULL, 0,NULL, 0,0, 0,0 }


struct  _Nmsg__NmsgFragment
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t current;
  uint32_t last;
  ProtobufCBinaryData fragment;
  protobuf_c_boolean has_crc;
  uint32_t crc;
};
#define NMSG__NMSG_FRAGMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nmsg__nmsg_fragment__descriptor) \
    , 0, 0, 0, {0,NULL}, 0,0 }


struct  _Nmsg__NmsgPayload
{
  ProtobufCMessage base;
  uint32_t vid;
  uint32_t msgtype;
  int64_t time_sec;
  uint32_t time_nsec;
  protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
  protobuf_c_boolean has_source;
  uint32_t source;
  protobuf_c_boolean has_operator_;
  uint32_t operator_;
  protobuf_c_boolean has_group;
  uint32_t group;
};
#define NMSG__NMSG_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nmsg__nmsg_payload__descriptor) \
    , 0, 0, 0, 0, 0,{0,NULL}, 0,0, 0,0, 0,0 }


/* Nmsg__Nmsg methods */
void   nmsg__nmsg__init
                     (Nmsg__Nmsg         *message);
size_t nmsg__nmsg__get_packed_size
                     (const Nmsg__Nmsg   *message);
size_t nmsg__nmsg__pack
                     (const Nmsg__Nmsg   *message,
                      uint8_t             *out);
size_t nmsg__nmsg__pack_to_buffer
                     (const Nmsg__Nmsg   *message,
                      ProtobufCBuffer     *buffer);
Nmsg__Nmsg *
       nmsg__nmsg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nmsg__nmsg__free_unpacked
                     (Nmsg__Nmsg *message,
                      ProtobufCAllocator *allocator);
/* Nmsg__NmsgFragment methods */
void   nmsg__nmsg_fragment__init
                     (Nmsg__NmsgFragment         *message);
size_t nmsg__nmsg_fragment__get_packed_size
                     (const Nmsg__NmsgFragment   *message);
size_t nmsg__nmsg_fragment__pack
                     (const Nmsg__NmsgFragment   *message,
                      uint8_t             *out);
size_t nmsg__nmsg_fragment__pack_to_buffer
                     (const Nmsg__NmsgFragment   *message,
                      ProtobufCBuffer     *buffer);
Nmsg__NmsgFragment *
       nmsg__nmsg_fragment__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nmsg__nmsg_fragment__free_unpacked
                     (Nmsg__NmsgFragment *message,
                      ProtobufCAllocator *allocator);
/* Nmsg__NmsgPayload methods */
void   nmsg__nmsg_payload__init
                     (Nmsg__NmsgPayload         *message);
size_t nmsg__nmsg_payload__get_packed_size
                     (const Nmsg__NmsgPayload   *message);
size_t nmsg__nmsg_payload__pack
                     (const Nmsg__NmsgPayload   *message,
                      uint8_t             *out);
size_t nmsg__nmsg_payload__pack_to_buffer
                     (const Nmsg__NmsgPayload   *message,
                      ProtobufCBuffer     *buffer);
Nmsg__NmsgPayload *
       nmsg__nmsg_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nmsg__nmsg_payload__free_unpacked
                     (Nmsg__NmsgPayload *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Nmsg__Nmsg_Closure)
                 (const Nmsg__Nmsg *message,
                  void *closure_data);
typedef void (*Nmsg__NmsgFragment_Closure)
                 (const Nmsg__NmsgFragment *message,
                  void *closure_data);
typedef void (*Nmsg__NmsgPayload_Closure)
                 (const Nmsg__NmsgPayload *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor nmsg__nmsg__descriptor;
extern const ProtobufCMessageDescriptor nmsg__nmsg_fragment__descriptor;
extern const ProtobufCMessageDescriptor nmsg__nmsg_payload__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_nmsg_2eproto__INCLUDED */
