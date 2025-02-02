/***************************************************************************************************************************
 * This portion of the code originates from the Beremiz project, which is licensed under the GNU General Public License 
 * Version 2 (GPLv2). It has been temporarily incorporated into our current project, which is under the Apache License 
 * Version 2.0. We are aware of the licensing incompatibility between GPLv2 and Apache License Version 2.0 and are 
 * actively working on developing a more suitable solution tailored to our specific needs. This integration is 
 * provisional, and our goal is to replace this temporary implementation with our own, fully compliant version as soon 
 * as possible. We acknowledge the contribution of the MatIEC project and intend to ensure all uses are in line with 
 * its licensing terms during this transitional period. All users of this code are advised to consider the licensing 
 * implications of the GPLv3 and Apache License Version 2.0.
 ****************************************************************************************************************************/

/*
 * Generated by erpcgen 1.12.0 on Fri Mar 22 05:00:10 2024.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_PLCObject_common_h_)
#define _erpc_PLCObject_common_h_


#if defined(__cplusplus)
extern "C"
{
#endif
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "erpc_version.h"

#if 11200 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif


#if !defined(ERPC_TYPE_DEFINITIONS_ERPC_PLCOBJECT)
#define ERPC_TYPE_DEFINITIONS_ERPC_PLCOBJECT

// Enumerators data types declarations
typedef enum PLCstatus_enum
{
    Empty = 0,
    Stopped = 1,
    Started = 2,
    Broken = 3,
    Disconnected = 4
} PLCstatus_enum;

// Aliases data types declarations
typedef struct binary_t binary_t;
typedef struct PSKID PSKID;
typedef struct PLCstatus PLCstatus;
typedef struct trace_sample trace_sample;
typedef struct list_trace_sample_1_t list_trace_sample_1_t;
typedef struct TraceVariables TraceVariables;
typedef struct extra_file extra_file;
typedef struct list_extra_file_1_t list_extra_file_1_t;
typedef struct trace_order trace_order;
typedef struct list_trace_order_1_t list_trace_order_1_t;
typedef struct log_message log_message;

// Structures/unions data types declarations
struct binary_t
{
    uint8_t * data;
    uint32_t dataLength;
};

struct PSKID
{
    char * ID;
    char * PSK;
};

struct PLCstatus
{
    PLCstatus_enum PLCstatus;
    uint32_t logcounts[4];
};

struct trace_sample
{
    uint32_t tick;
    binary_t TraceBuffer;
};

struct list_trace_sample_1_t
{
    trace_sample * elements;
    uint32_t elementsCount;
};

struct TraceVariables
{
    PLCstatus_enum PLCstatus;
    list_trace_sample_1_t traces;
};

struct extra_file
{
    char * fname;
    binary_t blobID;
};

struct list_extra_file_1_t
{
    extra_file * elements;
    uint32_t elementsCount;
};

struct trace_order
{
    uint32_t idx;
    binary_t force;
};

struct list_trace_order_1_t
{
    trace_order * elements;
    uint32_t elementsCount;
};

struct log_message
{
    char * msg;
    uint32_t tick;
    uint32_t sec;
    uint32_t nsec;
};


#endif // ERPC_TYPE_DEFINITIONS_ERPC_PLCOBJECT

#if defined(__cplusplus)
}
#endif

#endif // _erpc_PLCObject_common_h_
