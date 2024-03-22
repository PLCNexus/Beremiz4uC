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


#if !defined(_c_erpc_PLCObject_server_h_)
#define _c_erpc_PLCObject_server_h_

#include "erpc_PLCObject_common.h"

#if defined(__cplusplus)
extern "C"
{
#endif

typedef void * erpc_service_t;

#if !defined(ERPC_FUNCTIONS_DEFINITIONS)
#define ERPC_FUNCTIONS_DEFINITIONS


/*! @brief BeremizPLCObjectService identifiers */
enum _BeremizPLCObjectService_ids
{
    kBeremizPLCObjectService_service_id = 1,
    kBeremizPLCObjectService_AppendChunkToBlob_id = 1,
    kBeremizPLCObjectService_GetLogMessage_id = 2,
    kBeremizPLCObjectService_GetPLCID_id = 3,
    kBeremizPLCObjectService_GetPLCstatus_id = 4,
    kBeremizPLCObjectService_GetTraceVariables_id = 5,
    kBeremizPLCObjectService_MatchMD5_id = 6,
    kBeremizPLCObjectService_NewPLC_id = 7,
    kBeremizPLCObjectService_PurgeBlobs_id = 8,
    kBeremizPLCObjectService_RepairPLC_id = 9,
    kBeremizPLCObjectService_ResetLogCount_id = 10,
    kBeremizPLCObjectService_SeedBlob_id = 11,
    kBeremizPLCObjectService_SetTraceVariablesList_id = 12,
    kBeremizPLCObjectService_StartPLC_id = 13,
    kBeremizPLCObjectService_StopPLC_id = 14,
};

//! @name BeremizPLCObjectService
//@{
uint32_t AppendChunkToBlob(const binary_t * data, const binary_t * blobID, binary_t * newBlobID);

uint32_t GetLogMessage(uint8_t level, uint32_t msgID, log_message * message);

uint32_t GetPLCID(PSKID * plcID);

uint32_t GetPLCstatus(PLCstatus * status);

uint32_t GetTraceVariables(uint32_t debugToken, TraceVariables * traces);

uint32_t MatchMD5(const char * MD5, bool * match);

uint32_t NewPLC(const char * md5sum, const binary_t * plcObjectBlobID, const list_extra_file_1_t * extrafiles, bool * success);

uint32_t PurgeBlobs(void);

uint32_t RepairPLC(void);

uint32_t ResetLogCount(void);

uint32_t SeedBlob(const binary_t * seed, binary_t * blobID);

uint32_t SetTraceVariablesList(const list_trace_order_1_t * orders, uint32_t * debugtoken);

uint32_t StartPLC(void);

uint32_t StopPLC(bool * success);
//@}


#endif // ERPC_FUNCTIONS_DEFINITIONS

/*! @brief Return BeremizPLCObjectService_service service object. */
erpc_service_t create_BeremizPLCObjectService_service(void);

/*! @brief Destroy BeremizPLCObjectService_service service object. */
void destroy_BeremizPLCObjectService_service(erpc_service_t service);


#if defined(__cplusplus)
}
#endif

#endif // _c_erpc_PLCObject_server_h_
