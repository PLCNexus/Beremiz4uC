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


#include <new>
#include "c_erpc_PLCObject_server.h"
#include "erpc_PLCObject_server.hpp"
#include "erpc_manually_constructed.hpp"

using namespace erpc;
using namespace std;
using namespace erpcShim;


class BeremizPLCObjectService_server: public BeremizPLCObjectService_interface
{
    public:
        virtual ~BeremizPLCObjectService_server() {};


        uint32_t AppendChunkToBlob(const binary_t * data, const binary_t * blobID, binary_t * newBlobID)
        {
            uint32_t result;
            result = ::AppendChunkToBlob(data, blobID, newBlobID);

            return result;
        }

        uint32_t GetLogMessage(uint8_t level, uint32_t msgID, log_message * message)
        {
            uint32_t result;
            result = ::GetLogMessage(level, msgID, message);

            return result;
        }

        uint32_t GetPLCID(PSKID * plcID)
        {
            uint32_t result;
            result = ::GetPLCID(plcID);

            return result;
        }

        uint32_t GetPLCstatus(PLCstatus * status)
        {
            uint32_t result;
            result = ::GetPLCstatus(status);

            return result;
        }

        uint32_t GetTraceVariables(uint32_t debugToken, TraceVariables * traces)
        {
            uint32_t result;
            result = ::GetTraceVariables(debugToken, traces);

            return result;
        }

        uint32_t MatchMD5(const char * MD5, bool * match)
        {
            uint32_t result;
            result = ::MatchMD5(MD5, match);

            return result;
        }

        uint32_t NewPLC(const char * md5sum, const binary_t * plcObjectBlobID, const list_extra_file_1_t * extrafiles, bool * success)
        {
            uint32_t result;
            result = ::NewPLC(md5sum, plcObjectBlobID, extrafiles, success);

            return result;
        }

        uint32_t PurgeBlobs(void)
        {
            uint32_t result;
            result = ::PurgeBlobs();

            return result;
        }

        uint32_t RepairPLC(void)
        {
            uint32_t result;
            result = ::RepairPLC();

            return result;
        }

        uint32_t ResetLogCount(void)
        {
            uint32_t result;
            result = ::ResetLogCount();

            return result;
        }

        uint32_t SeedBlob(const binary_t * seed, binary_t * blobID)
        {
            uint32_t result;
            result = ::SeedBlob(seed, blobID);

            return result;
        }

        uint32_t SetTraceVariablesList(const list_trace_order_1_t * orders, uint32_t * debugtoken)
        {
            uint32_t result;
            result = ::SetTraceVariablesList(orders, debugtoken);

            return result;
        }

        uint32_t StartPLC(void)
        {
            uint32_t result;
            result = ::StartPLC();

            return result;
        }

        uint32_t StopPLC(bool * success)
        {
            uint32_t result;
            result = ::StopPLC(success);

            return result;
        }
};

ERPC_MANUALLY_CONSTRUCTED_STATIC(BeremizPLCObjectService_service, s_BeremizPLCObjectService_service);
ERPC_MANUALLY_CONSTRUCTED_STATIC(BeremizPLCObjectService_server, s_BeremizPLCObjectService_server);

erpc_service_t create_BeremizPLCObjectService_service(void)
{
    erpc_service_t service;

#if ERPC_ALLOCATION_POLICY == ERPC_ALLOCATION_POLICY_DYNAMIC
    service = new (nothrow) BeremizPLCObjectService_service(new (nothrow)BeremizPLCObjectService_server());
#else
    if (s_BeremizPLCObjectService_service.isUsed())
    {
        service = NULL;
    }
    else
    {
        s_BeremizPLCObjectService_server.construct();
        s_BeremizPLCObjectService_service.construct(s_BeremizPLCObjectService_server.get());
        service = s_BeremizPLCObjectService_service.get();
    }
#endif

    return service;
}

void destroy_BeremizPLCObjectService_service(erpc_service_t service)
{
#if ERPC_ALLOCATION_POLICY == ERPC_ALLOCATION_POLICY_DYNAMIC
    if (service)
    {
        delete (BeremizPLCObjectService_server *)(((BeremizPLCObjectService_service *)service)->getHandler());
        delete (BeremizPLCObjectService_service *)service;
    }
#else
    (void)service;
    erpc_assert(service == s_BeremizPLCObjectService_service.get());
    s_BeremizPLCObjectService_service.destroy();
    s_BeremizPLCObjectService_server.destroy();
#endif
}

