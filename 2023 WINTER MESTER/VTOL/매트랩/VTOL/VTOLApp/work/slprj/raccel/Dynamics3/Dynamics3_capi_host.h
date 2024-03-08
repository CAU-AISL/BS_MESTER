#ifndef RTW_HEADER_Dynamics3_cap_host_h__
#define RTW_HEADER_Dynamics3_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "PropellerDynamics_capi_host.h"
#include "PropellerDynamics_capi_host.h"
#include "PropellerDynamics_capi_host.h"
#include "PropellerDynamics_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 4 ] ; PropellerDynamics_host_DataMapInfo_T child0 ;
PropellerDynamics_host_DataMapInfo_T child1 ;
PropellerDynamics_host_DataMapInfo_T child2 ;
PropellerDynamics_host_DataMapInfo_T child3 ; } Dynamics3_host_DataMapInfo_T
;
#ifdef __cplusplus
extern "C" {
#endif
void Dynamics3_host_InitializeDataMapInfo ( Dynamics3_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
