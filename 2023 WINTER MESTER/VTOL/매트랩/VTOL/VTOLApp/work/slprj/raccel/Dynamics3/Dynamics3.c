#include "Dynamics3.h"
#include "rtwtypes.h"
#include "Dynamics3_private.h"
#include "Dynamics3_types.h"
#include "mwmathutil.h"
#include "rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf.h"
#include "rt_logging_mmi.h"
#include "Dynamics3_capi.h"
#include "PropellerDynamics.h"
#include "Dynamics3_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , &
stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define dvn54uuivp (-1)
hjzk2zv0jg hjzk2zv0jgo ; ge0boyqs2e ge0boyqs2ez ; cd3zedlmwt cd3zedlmwtk ;
g1rfofi3ve g1rfofi3vea ; eawagf2olp eawagf2olp3 ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; void hb2izpcjq3 ( SimStruct * rtS_e ) {
if ( ssGetTaskTime ( rtS_e , 1 ) != ssGetTStart ( rtS_e ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ; } } void etal0kgn3f (
SimStruct * rtS_p ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ;
} void MdlInitialize ( void ) { ge0boyqs2ez . b2ng5dbar3 [ 0 ] = ejhzoebun3 .
uDOFEulerAngles1_eul_0 [ 0 ] ; ge0boyqs2ez . aycekewho5 [ 0 ] = ejhzoebun3 .
uDOFEulerAngles1_Vm_0 [ 0 ] ; ge0boyqs2ez . o3b1wolh5o [ 0 ] = ejhzoebun3 .
uDOFEulerAngles1_pm_0 [ 0 ] ; ge0boyqs2ez . iaf1otkx4v [ 0 ] = ejhzoebun3 .
uDOFEulerAngles1_xme_0 [ 0 ] ; ge0boyqs2ez . b2ng5dbar3 [ 1 ] = ejhzoebun3 .
uDOFEulerAngles1_eul_0 [ 1 ] ; ge0boyqs2ez . aycekewho5 [ 1 ] = ejhzoebun3 .
uDOFEulerAngles1_Vm_0 [ 1 ] ; ge0boyqs2ez . o3b1wolh5o [ 1 ] = ejhzoebun3 .
uDOFEulerAngles1_pm_0 [ 1 ] ; ge0boyqs2ez . iaf1otkx4v [ 1 ] = ejhzoebun3 .
uDOFEulerAngles1_xme_0 [ 1 ] ; ge0boyqs2ez . b2ng5dbar3 [ 2 ] = ejhzoebun3 .
uDOFEulerAngles1_eul_0 [ 2 ] ; ge0boyqs2ez . aycekewho5 [ 2 ] = ejhzoebun3 .
uDOFEulerAngles1_Vm_0 [ 2 ] ; ge0boyqs2ez . o3b1wolh5o [ 2 ] = ejhzoebun3 .
uDOFEulerAngles1_pm_0 [ 2 ] ; ge0boyqs2ez . iaf1otkx4v [ 2 ] = ejhzoebun3 .
uDOFEulerAngles1_xme_0 [ 2 ] ; cd3zedlmwtk . loxtit5c1e = ( rtInf ) ;
cd3zedlmwtk . nmooqw0hsr = ( rtInf ) ; cd3zedlmwtk . mk2hhitrny = ( rtInf ) ;
cd3zedlmwtk . oec4smrr1x = ( rtInf ) ; cd3zedlmwtk . hy3naecleu = ( rtInf ) ;
cd3zedlmwtk . jiuvpdeyn3 = ( rtInf ) ; ge0boyqs2ez . ixwpr2do0d = 0.0 ;
ge0boyqs2ez . njrycceqar = 0.0 ; ge0boyqs2ez . fnt4rp3muo = 0.0 ; ge0boyqs2ez
. ikqvd3inr4 = 0.0 ; ge0boyqs2ez . chek3m4uua = 0.0 ; ge0boyqs2ez .
ejoaqi5omr = 0.0 ; ge0boyqs2ez . olifehdwf1 = 0.0 ; cd3zedlmwtk . oeildbcyu5
= false ; cd3zedlmwtk . mruvr1k0o4 = dvn54uuivp ; hjzk2zv0jgo . kdhpinsv2d [
0 ] = ejhzoebun3 . Merge_InitialOutput [ 0 ] ; hjzk2zv0jgo . kdhpinsv2d [ 1 ]
= ejhzoebun3 . Merge_InitialOutput [ 1 ] ; hjzk2zv0jgo . kdhpinsv2d [ 2 ] =
ejhzoebun3 . Merge_InitialOutput [ 2 ] ; hjzk2zv0jgo . kdhpinsv2d [ 3 ] =
ejhzoebun3 . Merge_InitialOutput [ 3 ] ; cd3zedlmwtk . nqf2anvknn = false ;
cd3zedlmwtk . ksszy2s0p4 = dvn54uuivp ; { int_T rootPeriodicContStateIndices
[ 3 ] = { 0 , 1 , 2 } ; real_T rootPeriodicContStateRanges [ 6 ] = { -
3.1415926535897931 , 3.1415926535897931 , - 3.1415926535897931 ,
3.1415926535897931 , - 3.1415926535897931 , 3.1415926535897931 } ; ( void )
memcpy ( ( void * ) g1rfofi3vea , rootPeriodicContStateIndices , 3 * sizeof (
int_T ) ) ; ( void ) memcpy ( ( void * ) eawagf2olp3 ,
rootPeriodicContStateRanges , 6 * sizeof ( real_T ) ) ; } } void MdlStart (
void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "pitchRate" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "pitchRate" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "pitchRate" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Dynamics3/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "pitchRate" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . b1sw42zjhi . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "553f0b89-4351-4a5c-bff5-619e0630f0cd" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad/s" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . b1sw42zjhi . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . b1sw42zjhi . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . b1sw42zjhi . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . b1sw42zjhi . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . b1sw42zjhi . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . b1sw42zjhi . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . b1sw42zjhi .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . b1sw42zjhi . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"pitchRate" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . b1sw42zjhi . AQHandles
, varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "pitchAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "pitchAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "pitchAngle" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Dynamics3/To Workspace1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "pitchAngle" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . gxbxhovrgp . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e91057a5-825d-4ae7-b63e-5703c825f63c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . gxbxhovrgp . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . gxbxhovrgp . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . gxbxhovrgp . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . gxbxhovrgp . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . gxbxhovrgp . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . gxbxhovrgp . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . gxbxhovrgp .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . gxbxhovrgp . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"pitchAngle" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . gxbxhovrgp .
AQHandles , varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Derivative2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Derivative2" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Dynamics3/To Workspace10" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Derivative2"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . aged3k2pcj . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "67704963-af3d-44b6-a59c-ac15f432238c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . aged3k2pcj . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . aged3k2pcj . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . aged3k2pcj . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . aged3k2pcj . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . aged3k2pcj . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . aged3k2pcj . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . aged3k2pcj .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . aged3k2pcj . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Vb_dot" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . aged3k2pcj . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Z" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "Z" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"Z" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Dynamics3/To Workspace2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Z" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cd3zedlmwtk . okgw2pzqbt . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"73d6c785-47c7-47bc-96cf-6503608bd7b9" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "m" ) ; sdiCompleteAsyncioQueueCreation (
cd3zedlmwtk . okgw2pzqbt . AQHandles , hDT , & srcInfo ) ; if ( cd3zedlmwtk .
okgw2pzqbt . AQHandles ) { sdiSetSignalSampleTimeString ( cd3zedlmwtk .
okgw2pzqbt . AQHandles , "&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cd3zedlmwtk . okgw2pzqbt . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cd3zedlmwtk . okgw2pzqbt . AQHandles , ssGetTaskTime (
rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . okgw2pzqbt
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk .
okgw2pzqbt . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . okgw2pzqbt . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Z" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . okgw2pzqbt . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<alpha>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<alpha>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "<alpha>" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Dynamics3/To Workspace3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<alpha>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . fnjq4dcfmy . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "8a8f3356-2d60-4581-8729-423dc8ec9e28" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . fnjq4dcfmy . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . fnjq4dcfmy . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . fnjq4dcfmy . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . fnjq4dcfmy . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . fnjq4dcfmy . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . fnjq4dcfmy . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . fnjq4dcfmy .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . fnjq4dcfmy . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"alpha" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . fnjq4dcfmy . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<Ve>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<Ve>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "<Ve>" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "Dynamics3/To Workspace5" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "<Ve>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . aj4ml0ju0j . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f5a13c46-05d3-40d3-9d1c-a6943ca2b7b3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . aj4ml0ju0j . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . aj4ml0ju0j . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . aj4ml0ju0j . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . aj4ml0ju0j . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . aj4ml0ju0j . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . aj4ml0ju0j . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . aj4ml0ju0j .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . aj4ml0ju0j . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Ve" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . aj4ml0ju0j . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Derivative1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Derivative1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Dynamics3/To Workspace6" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Derivative1"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . jfucdonibi . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "15ac0807-233f-4c2e-9d6f-f15301e65c40" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . jfucdonibi . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . jfucdonibi . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . jfucdonibi . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . jfucdonibi . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . jfucdonibi . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . jfucdonibi . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . jfucdonibi .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . jfucdonibi . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Ve_dot" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . jfucdonibi . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Derivative" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Derivative" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Dynamics3/To Workspace7" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Derivative" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . ldwyse5jwq . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "fe04d11d-8229-4735-a223-0efa10317d4c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . ldwyse5jwq . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . ldwyse5jwq . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . ldwyse5jwq . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . ldwyse5jwq . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . ldwyse5jwq . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . ldwyse5jwq . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . ldwyse5jwq .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . ldwyse5jwq . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"pitchRate_dot" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . ldwyse5jwq .
AQHandles , varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<airspeed>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<airspeed>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "<airspeed>" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Dynamics3/To Workspace8" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<airspeed>" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . n2klgvknco . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "b1c8aa56-ac12-4fa0-854b-9a2bf8c9026f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . n2klgvknco . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . n2klgvknco . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . n2klgvknco . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . n2klgvknco . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . n2klgvknco . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . n2klgvknco . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . n2klgvknco .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . n2klgvknco . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"airspeed" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . n2klgvknco . AQHandles
, varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<Vb>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<Vb>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "<Vb>" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "Dynamics3/To Workspace9" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "<Vb>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . i253u1jn33 . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "948a288b-530e-4733-afac-76b448e5cc3b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . i253u1jn33 . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . i253u1jn33 . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . i253u1jn33 . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . i253u1jn33 . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . i253u1jn33 . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . i253u1jn33 . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . i253u1jn33 .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( cd3zedlmwtk . i253u1jn33 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Vb" ) ; sdiRegisterWksVariable ( cd3zedlmwtk . i253u1jn33 . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Dynamics3/Digital Twin/Force and Moments" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cd3zedlmwtk . c2katuywif . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "dc4f79d9-2e83-4e9a-bb46-0dcd37081356" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "N" ) ;
sdiCompleteAsyncioQueueCreation ( cd3zedlmwtk . c2katuywif . AQHandles , hDT
, & srcInfo ) ; if ( cd3zedlmwtk . c2katuywif . AQHandles ) {
sdiSetSignalSampleTimeString ( cd3zedlmwtk . c2katuywif . AQHandles ,
"&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cd3zedlmwtk . c2katuywif . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cd3zedlmwtk . c2katuywif . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . c2katuywif . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk . c2katuywif .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/21"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cd3zedlmwtk . cijilelxe3 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c8125f2e-c0aa-49e6-ade5-698995824303" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cd3zedlmwtk . cijilelxe3 . AQHandles , hDT , & srcInfo ) ; if ( cd3zedlmwtk .
cijilelxe3 . AQHandles ) { sdiSetSignalSampleTimeString ( cd3zedlmwtk .
cijilelxe3 . AQHandles , "&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cd3zedlmwtk . cijilelxe3 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cd3zedlmwtk . cijilelxe3 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . cijilelxe3
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk .
cijilelxe3 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/31"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cd3zedlmwtk . fguaac4ehu . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c6017a9b-777f-45d0-abbd-54ac25b0d286" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cd3zedlmwtk . fguaac4ehu . AQHandles , hDT , & srcInfo ) ; if ( cd3zedlmwtk .
fguaac4ehu . AQHandles ) { sdiSetSignalSampleTimeString ( cd3zedlmwtk .
fguaac4ehu . AQHandles , "&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cd3zedlmwtk . fguaac4ehu . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cd3zedlmwtk . fguaac4ehu . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . fguaac4ehu
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk .
fguaac4ehu . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/33"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cd3zedlmwtk . e1zyqwjknc . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b659346d-c243-48fb-b02f-927292e4d634" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cd3zedlmwtk . e1zyqwjknc . AQHandles , hDT , & srcInfo ) ; if ( cd3zedlmwtk .
e1zyqwjknc . AQHandles ) { sdiSetSignalSampleTimeString ( cd3zedlmwtk .
e1zyqwjknc . AQHandles , "&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cd3zedlmwtk . e1zyqwjknc . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cd3zedlmwtk . e1zyqwjknc . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . e1zyqwjknc
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk .
e1zyqwjknc . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/Reshape 9x1->3x3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 3 , 3 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; cd3zedlmwtk . f44csx1gfq . AQHandles = sdiStartAsyncioQueueCreation (
hDT , & srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"2be71858-3517-49a4-815b-a2141bacb098" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cd3zedlmwtk . f44csx1gfq . AQHandles , hDT , & srcInfo ) ; if ( cd3zedlmwtk .
f44csx1gfq . AQHandles ) { sdiSetSignalSampleTimeString ( cd3zedlmwtk .
f44csx1gfq . AQHandles , "&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cd3zedlmwtk . f44csx1gfq . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cd3zedlmwtk . f44csx1gfq . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . f44csx1gfq
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk .
f44csx1gfq . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/sincos"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 2 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cd3zedlmwtk . b4qcpdu5rl . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"30631be1-b9b4-4065-b241-0504953dd856" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cd3zedlmwtk . b4qcpdu5rl . AQHandles , hDT , & srcInfo ) ; if ( cd3zedlmwtk .
b4qcpdu5rl . AQHandles ) { sdiSetSignalSampleTimeString ( cd3zedlmwtk .
b4qcpdu5rl . AQHandles , "&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cd3zedlmwtk . b4qcpdu5rl . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cd3zedlmwtk . b4qcpdu5rl . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . b4qcpdu5rl
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk .
b4qcpdu5rl . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/alpha"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cd3zedlmwtk . pu5zuzij3z . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"fae2e4b9-067f-400b-8be1-700adaa58032" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; sdiCompleteAsyncioQueueCreation (
cd3zedlmwtk . pu5zuzij3z . AQHandles , hDT , & srcInfo ) ; if ( cd3zedlmwtk .
pu5zuzij3z . AQHandles ) { sdiSetSignalSampleTimeString ( cd3zedlmwtk .
pu5zuzij3z . AQHandles , "&#xC5F0;&#xC18D;" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cd3zedlmwtk . pu5zuzij3z . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cd3zedlmwtk . pu5zuzij3z . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cd3zedlmwtk . pu5zuzij3z
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cd3zedlmwtk .
pu5zuzij3z . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } cd3zedlmwtk . imaif5mqhv = 0 ;
owx3smczj2 ( & ( cd3zedlmwtk . bm3reeetok . rtdw ) ) ; owx3smczj2 ( & (
cd3zedlmwtk . kqm1lj2att . rtdw ) ) ; owx3smczj2 ( & ( cd3zedlmwtk .
eoy4o1rwoy . rtdw ) ) ; owx3smczj2 ( & ( cd3zedlmwtk . liakohv2jb . rtdw ) )
; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; etal0kgn3f ( rtS ) ;
cd3zedlmwtk . j2lgfwz4nb = - 1 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; etal0kgn3f ( rtS
) ; cd3zedlmwtk . jouu1ys3n0 = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( cd3zedlmwtk .
jouu1ys3n0 == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk . jouu1ys3n0 = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( cd3zedlmwtk .
j2lgfwz4nb == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk . j2lgfwz4nb = - 1 ;
etal0kgn3f ( rtS ) ; cd3zedlmwtk . grss1hcqfy = - 1 ; cd3zedlmwtk .
cndsbiglgj = 0 ; cd3zedlmwtk . huc0wlm4jz = 0 ; cd3zedlmwtk . aqzoa0ngxb = 0
; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; cd3zedlmwtk . fodrtj5jvy
= - 1 ; cd3zedlmwtk . jfsreelaxk = 0 ; cd3zedlmwtk . i0hphjuxva = (
rtMinusInf ) ; cd3zedlmwtk . nl31v5w0ne = ( rtMinusInf ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( cd3zedlmwtk .
grss1hcqfy ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
if ( cd3zedlmwtk . jouu1ys3n0 == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk .
jouu1ys3n0 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( cd3zedlmwtk .
j2lgfwz4nb == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk . j2lgfwz4nb = - 1 ;
break ; case 2 : etal0kgn3f ( rtS ) ; break ; } cd3zedlmwtk . grss1hcqfy = -
1 ; cd3zedlmwtk . j5mbuidgdb = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; cd3zedlmwtk . fodrtj5jvy
= - 1 ; cd3zedlmwtk . fqno2nhg0i = - 1 ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T tmp_p [ 9 ] ; real_T ( * lastU_p ) [ 3 ] ;
real_T a4ucmwgpaf_idx_1 ; real_T dl21t4boyl_idx_0 ; real_T dl21t4boyl_idx_1 ;
real_T dl21t4boyl_idx_2 ; real_T g2q0qoylrm_idx_0 ; real_T g2q0qoylrm_idx_1 ;
real_T g2q0qoylrm_idx_2 ; real_T lihs54ek32_idx_1 ; real_T nufm4fpn2q_idx_1 ;
real_T ptb3whyae5 ; real_T * lastU ; int32_T i ; int32_T i_p ; int8_T
rtAction ; int8_T rtPrevAction ; boolean_T cx05fh3xzl [ 9 ] ; boolean_T tmp ;
SimStruct * S ; void * diag ; srClearBC ( cd3zedlmwtk . cnnxvlxj4k ) ;
srClearBC ( cd3zedlmwtk . jy2jzur21d ) ; srClearBC ( cd3zedlmwtk . pi3di1b0u1
) ; srClearBC ( cd3zedlmwtk . ei1iqzsamz ) ; srClearBC ( cd3zedlmwtk .
cftrcsvurp ) ; srClearBC ( cd3zedlmwtk . apkslfbs4p ) ; srClearBC (
cd3zedlmwtk . dy3it3hprz ) ; srClearBC ( cd3zedlmwtk . kfjac3xldmi .
dynzrd2nl1 ) ; srClearBC ( cd3zedlmwtk . hkexsdmmiq ) ; srClearBC (
cd3zedlmwtk . mlektwyh03 ) ; srClearBC ( cd3zedlmwtk . nmjkdxbctr ) ;
srClearBC ( cd3zedlmwtk . gwsyjhto3i ) ; srClearBC ( cd3zedlmwtk . jcxbkbqufo
) ; hjzk2zv0jgo . iksuuwfiau [ 0 ] = ge0boyqs2ez . b2ng5dbar3 [ 0 ] ;
hjzk2zv0jgo . iksuuwfiau [ 1 ] = ge0boyqs2ez . b2ng5dbar3 [ 1 ] ; hjzk2zv0jgo
. iksuuwfiau [ 2 ] = ge0boyqs2ez . b2ng5dbar3 [ 2 ] ; hjzk2zv0jgo .
afv534dghn [ 0 ] = hjzk2zv0jgo . iksuuwfiau [ 2 ] ; hjzk2zv0jgo . afv534dghn
[ 1 ] = hjzk2zv0jgo . iksuuwfiau [ 1 ] ; hjzk2zv0jgo . afv534dghn [ 2 ] =
hjzk2zv0jgo . iksuuwfiau [ 0 ] ; muDoubleScalarSinCos ( hjzk2zv0jgo .
afv534dghn [ 0 ] , & dl21t4boyl_idx_0 , & g2q0qoylrm_idx_0 ) ;
muDoubleScalarSinCos ( hjzk2zv0jgo . afv534dghn [ 1 ] , & dl21t4boyl_idx_1 ,
& g2q0qoylrm_idx_1 ) ; muDoubleScalarSinCos ( hjzk2zv0jgo . afv534dghn [ 2 ]
, & dl21t4boyl_idx_2 , & g2q0qoylrm_idx_2 ) ; hjzk2zv0jgo . j1sueqnip0 [ 0 ]
= g2q0qoylrm_idx_0 * g2q0qoylrm_idx_1 ; hjzk2zv0jgo . j1sueqnip0 [ 1 ] =
dl21t4boyl_idx_1 * dl21t4boyl_idx_2 * g2q0qoylrm_idx_0 - dl21t4boyl_idx_0 *
g2q0qoylrm_idx_2 ; hjzk2zv0jgo . j1sueqnip0 [ 2 ] = dl21t4boyl_idx_1 *
g2q0qoylrm_idx_2 * g2q0qoylrm_idx_0 + dl21t4boyl_idx_0 * dl21t4boyl_idx_2 ;
hjzk2zv0jgo . j1sueqnip0 [ 3 ] = dl21t4boyl_idx_0 * g2q0qoylrm_idx_1 ;
hjzk2zv0jgo . j1sueqnip0 [ 4 ] = dl21t4boyl_idx_1 * dl21t4boyl_idx_2 *
dl21t4boyl_idx_0 + g2q0qoylrm_idx_0 * g2q0qoylrm_idx_2 ; hjzk2zv0jgo .
j1sueqnip0 [ 5 ] = dl21t4boyl_idx_1 * g2q0qoylrm_idx_2 * dl21t4boyl_idx_0 -
g2q0qoylrm_idx_0 * dl21t4boyl_idx_2 ; hjzk2zv0jgo . j1sueqnip0 [ 6 ] = -
dl21t4boyl_idx_1 ; hjzk2zv0jgo . j1sueqnip0 [ 7 ] = g2q0qoylrm_idx_1 *
dl21t4boyl_idx_2 ; hjzk2zv0jgo . j1sueqnip0 [ 8 ] = g2q0qoylrm_idx_1 *
g2q0qoylrm_idx_2 ; muDoubleScalarSinCos ( hjzk2zv0jgo . afv534dghn [ 0 ] , &
g2q0qoylrm_idx_0 , & dl21t4boyl_idx_0 ) ; muDoubleScalarSinCos ( hjzk2zv0jgo
. afv534dghn [ 1 ] , & g2q0qoylrm_idx_1 , & dl21t4boyl_idx_1 ) ;
muDoubleScalarSinCos ( hjzk2zv0jgo . afv534dghn [ 2 ] , & g2q0qoylrm_idx_2 ,
& dl21t4boyl_idx_2 ) ; hjzk2zv0jgo . kuucijn2sg [ 0 ] = dl21t4boyl_idx_0 *
dl21t4boyl_idx_1 ; hjzk2zv0jgo . kuucijn2sg [ 1 ] = g2q0qoylrm_idx_1 *
g2q0qoylrm_idx_2 * dl21t4boyl_idx_0 - g2q0qoylrm_idx_0 * dl21t4boyl_idx_2 ;
hjzk2zv0jgo . kuucijn2sg [ 2 ] = g2q0qoylrm_idx_1 * dl21t4boyl_idx_2 *
dl21t4boyl_idx_0 + g2q0qoylrm_idx_0 * g2q0qoylrm_idx_2 ; hjzk2zv0jgo .
kuucijn2sg [ 3 ] = g2q0qoylrm_idx_0 * dl21t4boyl_idx_1 ; hjzk2zv0jgo .
kuucijn2sg [ 4 ] = g2q0qoylrm_idx_1 * g2q0qoylrm_idx_2 * g2q0qoylrm_idx_0 +
dl21t4boyl_idx_0 * dl21t4boyl_idx_2 ; hjzk2zv0jgo . kuucijn2sg [ 5 ] =
g2q0qoylrm_idx_1 * dl21t4boyl_idx_2 * g2q0qoylrm_idx_0 - dl21t4boyl_idx_0 *
g2q0qoylrm_idx_2 ; hjzk2zv0jgo . kuucijn2sg [ 6 ] = - g2q0qoylrm_idx_1 ;
hjzk2zv0jgo . kuucijn2sg [ 7 ] = dl21t4boyl_idx_1 * g2q0qoylrm_idx_2 ;
hjzk2zv0jgo . kuucijn2sg [ 8 ] = dl21t4boyl_idx_1 * dl21t4boyl_idx_2 ; for (
i = 0 ; i < 3 ; i ++ ) { hjzk2zv0jgo . i55alh4xud [ 3 * i ] = hjzk2zv0jgo .
kuucijn2sg [ i ] ; hjzk2zv0jgo . i55alh4xud [ 3 * i + 1 ] = hjzk2zv0jgo .
kuucijn2sg [ i + 3 ] ; hjzk2zv0jgo . i55alh4xud [ 3 * i + 2 ] = hjzk2zv0jgo .
kuucijn2sg [ i + 6 ] ; hjzk2zv0jgo . mkn5nhvzbk [ i ] = ge0boyqs2ez .
aycekewho5 [ i ] ; } dl21t4boyl_idx_0 = hjzk2zv0jgo . mkn5nhvzbk [ 1 ] ;
g2q0qoylrm_idx_0 = hjzk2zv0jgo . mkn5nhvzbk [ 0 ] ; dl21t4boyl_idx_2 =
hjzk2zv0jgo . mkn5nhvzbk [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) {
g2q0qoylrm_idx_2 = ( hjzk2zv0jgo . i55alh4xud [ i + 3 ] * dl21t4boyl_idx_0 +
hjzk2zv0jgo . i55alh4xud [ i ] * g2q0qoylrm_idx_0 ) + hjzk2zv0jgo .
i55alh4xud [ i + 6 ] * dl21t4boyl_idx_2 ; hjzk2zv0jgo . hbzn3wsbye [ i ] =
g2q0qoylrm_idx_2 ; hjzk2zv0jgo . cqvuoudnvb [ i ] = g2q0qoylrm_idx_2 ;
hjzk2zv0jgo . htt3requoy [ i ] = g2q0qoylrm_idx_2 - ejhzoebun3 .
Constant_Value_ohnaqb1c5m [ i ] ; } dl21t4boyl_idx_0 = hjzk2zv0jgo .
htt3requoy [ 1 ] ; g2q0qoylrm_idx_0 = hjzk2zv0jgo . htt3requoy [ 0 ] ;
dl21t4boyl_idx_2 = hjzk2zv0jgo . htt3requoy [ 2 ] ; for ( i = 0 ; i < 3 ; i
++ ) { hjzk2zv0jgo . k0yfsplt3r [ i ] = ( hjzk2zv0jgo . j1sueqnip0 [ i + 3 ]
* dl21t4boyl_idx_0 + hjzk2zv0jgo . j1sueqnip0 [ i ] * g2q0qoylrm_idx_0 ) +
hjzk2zv0jgo . j1sueqnip0 [ i + 6 ] * dl21t4boyl_idx_2 ; } hjzk2zv0jgo .
jmzubjfi5o = muDoubleScalarAtan2 ( hjzk2zv0jgo . k0yfsplt3r [ 2 ] ,
hjzk2zv0jgo . k0yfsplt3r [ 0 ] ) ; hjzk2zv0jgo . lmvkheskr5 =
muDoubleScalarAtan2 ( hjzk2zv0jgo . k0yfsplt3r [ 1 ] , muDoubleScalarHypot (
hjzk2zv0jgo . k0yfsplt3r [ 0 ] , hjzk2zv0jgo . k0yfsplt3r [ 2 ] ) ) ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( hjzk2zv0jgo . lmvkheskr5 >=
ejhzoebun3 . Saturation_UpperSat ) { cd3zedlmwtk . a1a5rahew4 = 1 ; } else if
( hjzk2zv0jgo . lmvkheskr5 > ejhzoebun3 . Saturation_LowerSat ) { cd3zedlmwtk
. a1a5rahew4 = 0 ; } else { cd3zedlmwtk . a1a5rahew4 = - 1 ; } } if (
cd3zedlmwtk . a1a5rahew4 == 1 ) { hjzk2zv0jgo . j1b0ohkohh = ejhzoebun3 .
Saturation_UpperSat ; } else if ( cd3zedlmwtk . a1a5rahew4 == - 1 ) {
hjzk2zv0jgo . j1b0ohkohh = ejhzoebun3 . Saturation_LowerSat ; } else {
hjzk2zv0jgo . j1b0ohkohh = hjzk2zv0jgo . lmvkheskr5 ; } hjzk2zv0jgo .
nhe43pn5nh = hjzk2zv0jgo . k0yfsplt3r [ 0 ] * hjzk2zv0jgo . k0yfsplt3r [ 0 ]
; hjzk2zv0jgo . hehj2dz0gu = hjzk2zv0jgo . k0yfsplt3r [ 1 ] * hjzk2zv0jgo .
k0yfsplt3r [ 1 ] ; hjzk2zv0jgo . ew4gntkbfp = hjzk2zv0jgo . k0yfsplt3r [ 2 ]
* hjzk2zv0jgo . k0yfsplt3r [ 2 ] ; hjzk2zv0jgo . lemypiazxs = ( hjzk2zv0jgo .
nhe43pn5nh + hjzk2zv0jgo . hehj2dz0gu ) + hjzk2zv0jgo . ew4gntkbfp ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( cd3zedlmwtk . imaif5mqhv != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; cd3zedlmwtk .
imaif5mqhv = 0 ; } hjzk2zv0jgo . nvhx5js3b5 = muDoubleScalarSqrt (
hjzk2zv0jgo . lemypiazxs ) ; } else { if ( hjzk2zv0jgo . lemypiazxs < 0.0 ) {
hjzk2zv0jgo . nvhx5js3b5 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
hjzk2zv0jgo . lemypiazxs ) ) ; } else { hjzk2zv0jgo . nvhx5js3b5 =
muDoubleScalarSqrt ( hjzk2zv0jgo . lemypiazxs ) ; } if ( hjzk2zv0jgo .
lemypiazxs < 0.0 ) { cd3zedlmwtk . imaif5mqhv = 1 ; } } hjzk2zv0jgo .
ew1xexz22w = hjzk2zv0jgo . k0yfsplt3r [ 0 ] * hjzk2zv0jgo . k0yfsplt3r [ 0 ]
; hjzk2zv0jgo . gp5b442d4z = hjzk2zv0jgo . k0yfsplt3r [ 1 ] * hjzk2zv0jgo .
k0yfsplt3r [ 1 ] ; hjzk2zv0jgo . kp0rothnh4 = hjzk2zv0jgo . k0yfsplt3r [ 2 ]
* hjzk2zv0jgo . k0yfsplt3r [ 2 ] ; hjzk2zv0jgo . dzivdzp2ag = ( hjzk2zv0jgo .
ew1xexz22w + hjzk2zv0jgo . gp5b442d4z ) + hjzk2zv0jgo . kp0rothnh4 ;
hjzk2zv0jgo . ilayj5xnmf = hjzk2zv0jgo . dzivdzp2ag * rtP_uavParam . aero .
rho ; hjzk2zv0jgo . mzpu5t1jkm = ejhzoebun3 . u2rhoV2_Gain * hjzk2zv0jgo .
ilayj5xnmf ; hjzk2zv0jgo . cci3mwof5h [ 0 ] = ge0boyqs2ez . o3b1wolh5o [ 0 ]
; hjzk2zv0jgo . cci3mwof5h [ 1 ] = ge0boyqs2ez . o3b1wolh5o [ 1 ] ;
hjzk2zv0jgo . cci3mwof5h [ 2 ] = ge0boyqs2ez . o3b1wolh5o [ 2 ] ; hjzk2zv0jgo
. coqmemksef [ 0 ] = ge0boyqs2ez . iaf1otkx4v [ 0 ] ; hjzk2zv0jgo .
coqmemksef [ 1 ] = ge0boyqs2ez . iaf1otkx4v [ 1 ] ; hjzk2zv0jgo . coqmemksef
[ 2 ] = ge0boyqs2ez . iaf1otkx4v [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ if ( ssIsModeUpdateTimeStep ( rtS ) ) { cd3zedlmwtk . bdb2drldzc = (
hjzk2zv0jgo . cqvuoudnvb [ 2 ] == ejhzoebun3 . Constant_Value_a1crlzduby ) ;
cd3zedlmwtk . ijem1srja2 = ( ejhzoebun3 . Constant1_Value_e5cors3m1f ==
hjzk2zv0jgo . cci3mwof5h [ 1 ] ) ; } hjzk2zv0jgo . nye15ofalv = ( cd3zedlmwtk
. bdb2drldzc && cd3zedlmwtk . ijem1srja2 ) ; } if ( ( cd3zedlmwtk .
loxtit5c1e >= ssGetT ( rtS ) ) && ( cd3zedlmwtk . nmooqw0hsr >= ssGetT ( rtS
) ) ) { hjzk2zv0jgo . gbjq4n01xo = 0.0 ; } else { dl21t4boyl_idx_0 =
cd3zedlmwtk . loxtit5c1e ; lastU = & cd3zedlmwtk . cu0k1tufjn ; if (
cd3zedlmwtk . loxtit5c1e < cd3zedlmwtk . nmooqw0hsr ) { if ( cd3zedlmwtk .
nmooqw0hsr < ssGetT ( rtS ) ) { dl21t4boyl_idx_0 = cd3zedlmwtk . nmooqw0hsr ;
lastU = & cd3zedlmwtk . egbzhokzr0 ; } } else if ( cd3zedlmwtk . loxtit5c1e
>= ssGetT ( rtS ) ) { dl21t4boyl_idx_0 = cd3zedlmwtk . nmooqw0hsr ; lastU = &
cd3zedlmwtk . egbzhokzr0 ; } hjzk2zv0jgo . gbjq4n01xo = ( hjzk2zv0jgo .
cci3mwof5h [ 1 ] - * lastU ) / ( ssGetT ( rtS ) - dl21t4boyl_idx_0 ) ; } if (
( cd3zedlmwtk . mk2hhitrny >= ssGetT ( rtS ) ) && ( cd3zedlmwtk . oec4smrr1x
>= ssGetT ( rtS ) ) ) { hjzk2zv0jgo . mrkfq1tuhw [ 0 ] = 0.0 ; hjzk2zv0jgo .
mrkfq1tuhw [ 1 ] = 0.0 ; hjzk2zv0jgo . mrkfq1tuhw [ 2 ] = 0.0 ; } else {
dl21t4boyl_idx_0 = cd3zedlmwtk . mk2hhitrny ; lastU_p = & cd3zedlmwtk .
mkzihgyczk ; if ( cd3zedlmwtk . mk2hhitrny < cd3zedlmwtk . oec4smrr1x ) { if
( cd3zedlmwtk . oec4smrr1x < ssGetT ( rtS ) ) { dl21t4boyl_idx_0 =
cd3zedlmwtk . oec4smrr1x ; lastU_p = & cd3zedlmwtk . ogngmlftsj ; } } else if
( cd3zedlmwtk . mk2hhitrny >= ssGetT ( rtS ) ) { dl21t4boyl_idx_0 =
cd3zedlmwtk . oec4smrr1x ; lastU_p = & cd3zedlmwtk . ogngmlftsj ; }
dl21t4boyl_idx_0 = ssGetT ( rtS ) - dl21t4boyl_idx_0 ; hjzk2zv0jgo .
mrkfq1tuhw [ 0 ] = ( hjzk2zv0jgo . cqvuoudnvb [ 0 ] - ( * lastU_p ) [ 0 ] ) /
dl21t4boyl_idx_0 ; hjzk2zv0jgo . mrkfq1tuhw [ 1 ] = ( hjzk2zv0jgo .
cqvuoudnvb [ 1 ] - ( * lastU_p ) [ 1 ] ) / dl21t4boyl_idx_0 ; hjzk2zv0jgo .
mrkfq1tuhw [ 2 ] = ( hjzk2zv0jgo . cqvuoudnvb [ 2 ] - ( * lastU_p ) [ 2 ] ) /
dl21t4boyl_idx_0 ; } hjzk2zv0jgo . d00t0bvsqx [ 0 ] = hjzk2zv0jgo .
mkn5nhvzbk [ 0 ] ; hjzk2zv0jgo . d00t0bvsqx [ 1 ] = hjzk2zv0jgo . mkn5nhvzbk
[ 1 ] ; hjzk2zv0jgo . d00t0bvsqx [ 2 ] = hjzk2zv0jgo . mkn5nhvzbk [ 2 ] ; if
( ( cd3zedlmwtk . hy3naecleu >= ssGetT ( rtS ) ) && ( cd3zedlmwtk .
jiuvpdeyn3 >= ssGetT ( rtS ) ) ) { hjzk2zv0jgo . fjb2mtsd40 [ 0 ] = 0.0 ;
hjzk2zv0jgo . fjb2mtsd40 [ 1 ] = 0.0 ; hjzk2zv0jgo . fjb2mtsd40 [ 2 ] = 0.0 ;
} else { dl21t4boyl_idx_0 = cd3zedlmwtk . hy3naecleu ; lastU_p = &
cd3zedlmwtk . bisb0vebkm ; if ( cd3zedlmwtk . hy3naecleu < cd3zedlmwtk .
jiuvpdeyn3 ) { if ( cd3zedlmwtk . jiuvpdeyn3 < ssGetT ( rtS ) ) {
dl21t4boyl_idx_0 = cd3zedlmwtk . jiuvpdeyn3 ; lastU_p = & cd3zedlmwtk .
dzy2xz0dmj ; } } else if ( cd3zedlmwtk . hy3naecleu >= ssGetT ( rtS ) ) {
dl21t4boyl_idx_0 = cd3zedlmwtk . jiuvpdeyn3 ; lastU_p = & cd3zedlmwtk .
dzy2xz0dmj ; } dl21t4boyl_idx_0 = ssGetT ( rtS ) - dl21t4boyl_idx_0 ;
hjzk2zv0jgo . fjb2mtsd40 [ 0 ] = ( hjzk2zv0jgo . d00t0bvsqx [ 0 ] - ( *
lastU_p ) [ 0 ] ) / dl21t4boyl_idx_0 ; hjzk2zv0jgo . fjb2mtsd40 [ 1 ] = (
hjzk2zv0jgo . d00t0bvsqx [ 1 ] - ( * lastU_p ) [ 1 ] ) / dl21t4boyl_idx_0 ;
hjzk2zv0jgo . fjb2mtsd40 [ 2 ] = ( hjzk2zv0jgo . d00t0bvsqx [ 2 ] - ( *
lastU_p ) [ 2 ] ) / dl21t4boyl_idx_0 ; } hjzk2zv0jgo . bgmcqai5at = 0.0 ;
hjzk2zv0jgo . bgmcqai5at += ejhzoebun3 . TransferFcn_C * ge0boyqs2ez .
ixwpr2do0d ; hjzk2zv0jgo . cshi4ioghy = 0.0 ; hjzk2zv0jgo . cshi4ioghy +=
ejhzoebun3 . TransferFcn1_C * ge0boyqs2ez . njrycceqar ; hjzk2zv0jgo .
php2oi4kgy = 0.0 ; hjzk2zv0jgo . php2oi4kgy += ejhzoebun3 . TransferFcn2_C *
ge0boyqs2ez . fnt4rp3muo ; hjzk2zv0jgo . guife5a2rz = ejhzoebun3 . Gain4_Gain
* hjzk2zv0jgo . php2oi4kgy ; hjzk2zv0jgo . opx2dl1oco = 0.0 ; hjzk2zv0jgo .
opx2dl1oco += ejhzoebun3 . TransferFcn3_C * ge0boyqs2ez . ikqvd3inr4 ;
hjzk2zv0jgo . hm3usbndrd = ejhzoebun3 . Gain7_Gain * hjzk2zv0jgo . opx2dl1oco
; hjzk2zv0jgo . plnoqtrtnf = 0.0 ; hjzk2zv0jgo . plnoqtrtnf += ejhzoebun3 .
ServoDynamics_C * ge0boyqs2ez . chek3m4uua ; if ( ( cd3zedlmwtk . i0hphjuxva
== ( rtMinusInf ) ) || ( cd3zedlmwtk . i0hphjuxva == ssGetTaskTime ( rtS , 0
) ) ) { cd3zedlmwtk . i0hphjuxva = ssGetTaskTime ( rtS , 0 ) ; hjzk2zv0jgo .
m2r4ovuy32 = rtP_tiltIni ; } else { hjzk2zv0jgo . m2r4ovuy32 = hjzk2zv0jgo .
plnoqtrtnf ; } hjzk2zv0jgo . cno5k4jjfd = 0.0 ; hjzk2zv0jgo . cno5k4jjfd +=
ejhzoebun3 . ServoDynamics1_C * ge0boyqs2ez . ejoaqi5omr ; if ( ( cd3zedlmwtk
. nl31v5w0ne == ( rtMinusInf ) ) || ( cd3zedlmwtk . nl31v5w0ne ==
ssGetTaskTime ( rtS , 0 ) ) ) { cd3zedlmwtk . nl31v5w0ne = ssGetTaskTime (
rtS , 0 ) ; hjzk2zv0jgo . aqzdxk22og = rtP_tiltIni ; } else { hjzk2zv0jgo .
aqzdxk22og = hjzk2zv0jgo . cno5k4jjfd ; } { if ( cd3zedlmwtk . b1sw42zjhi .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk .
b1sw42zjhi . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & hjzk2zv0jgo
. cci3mwof5h [ 1 ] + 0 ) ; } } { if ( cd3zedlmwtk . gxbxhovrgp . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . gxbxhovrgp .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & hjzk2zv0jgo . iksuuwfiau
[ 1 ] + 0 ) ; } } { if ( cd3zedlmwtk . aged3k2pcj . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . aged3k2pcj .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & hjzk2zv0jgo . fjb2mtsd40
[ 0 ] + 0 ) ; } } { if ( cd3zedlmwtk . okgw2pzqbt . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . okgw2pzqbt .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & hjzk2zv0jgo . coqmemksef
[ 2 ] + 0 ) ; } } { if ( cd3zedlmwtk . fnjq4dcfmy . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . fnjq4dcfmy .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & hjzk2zv0jgo . jmzubjfi5o
+ 0 ) ; } } { if ( cd3zedlmwtk . aj4ml0ju0j . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . aj4ml0ju0j . AQHandles ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & hjzk2zv0jgo . cqvuoudnvb [ 0 ] + 0 )
; } } { if ( cd3zedlmwtk . jfucdonibi . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( cd3zedlmwtk . jfucdonibi . AQHandles , ssGetTaskTime ( rtS
, 0 ) , ( char * ) & hjzk2zv0jgo . mrkfq1tuhw [ 0 ] + 0 ) ; } } { if (
cd3zedlmwtk . ldwyse5jwq . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cd3zedlmwtk . ldwyse5jwq . AQHandles , ssGetTaskTime ( rtS ,
0 ) , ( char * ) & hjzk2zv0jgo . gbjq4n01xo + 0 ) ; } } { if ( cd3zedlmwtk .
n2klgvknco . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cd3zedlmwtk . n2klgvknco . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * )
& hjzk2zv0jgo . nvhx5js3b5 + 0 ) ; } } { if ( cd3zedlmwtk . i253u1jn33 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk .
i253u1jn33 . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & hjzk2zv0jgo
. d00t0bvsqx [ 0 ] + 0 ) ; } } hjzk2zv0jgo . ajfq5lcy0h = ejhzoebun3 .
Gain_Gain_jj11vie1fs * muDoubleScalarCos ( hjzk2zv0jgo . m2r4ovuy32 ) ;
hjzk2zv0jgo . bbvw1e1ik4 [ 0 ] = muDoubleScalarSin ( hjzk2zv0jgo . m2r4ovuy32
) ; hjzk2zv0jgo . bbvw1e1ik4 [ 1 ] = ejhzoebun3 . Constant1_Value_e1kmy4vudp
; hjzk2zv0jgo . bbvw1e1ik4 [ 2 ] = hjzk2zv0jgo . ajfq5lcy0h ;
PropellerDynamics ( & ( cd3zedlmwtk . bm3reeetok . rtm ) , & hjzk2zv0jgo .
fnrgz4g1b4 , & hjzk2zv0jgo . d00t0bvsqx [ 0 ] , & hjzk2zv0jgo . cci3mwof5h [
0 ] , & rtP_uavParam . geom . RotorArm1 [ 0 ] , & hjzk2zv0jgo . bbvw1e1ik4 [
0 ] , & ejhzoebun3 . Constant8_Value_igqaa4heed [ 0 ] , & hjzk2zv0jgo .
k5mggrlxlo [ 0 ] , & hjzk2zv0jgo . jzfclqedcy [ 0 ] , & hjzk2zv0jgo .
foog324lmw , & ( cd3zedlmwtk . bm3reeetok . rtb ) , & ( cd3zedlmwtk .
bm3reeetok . rtdw ) ) ; hjzk2zv0jgo . pmsojihl4i = ejhzoebun3 .
Gain1_Gain_oydo40ajp4 * muDoubleScalarCos ( hjzk2zv0jgo . aqzdxk22og ) ;
hjzk2zv0jgo . lugw5r3njx [ 0 ] = muDoubleScalarSin ( hjzk2zv0jgo . aqzdxk22og
) ; hjzk2zv0jgo . lugw5r3njx [ 1 ] = ejhzoebun3 . Constant2_Value_gdybbqcsvv
; hjzk2zv0jgo . lugw5r3njx [ 2 ] = hjzk2zv0jgo . pmsojihl4i ;
PropellerDynamics ( & ( cd3zedlmwtk . kqm1lj2att . rtm ) , & hjzk2zv0jgo .
l3k3mynljv , & hjzk2zv0jgo . d00t0bvsqx [ 0 ] , & hjzk2zv0jgo . cci3mwof5h [
0 ] , & rtP_uavParam . geom . RotorArm2 [ 0 ] , & hjzk2zv0jgo . lugw5r3njx [
0 ] , & ejhzoebun3 . Constant5_Value_bxm0gvh1s4 [ 0 ] , & hjzk2zv0jgo .
o2rn5svcvi [ 0 ] , & hjzk2zv0jgo . pht4pxvhfn [ 0 ] , & hjzk2zv0jgo .
as3le1fis3 , & ( cd3zedlmwtk . kqm1lj2att . rtb ) , & ( cd3zedlmwtk .
kqm1lj2att . rtdw ) ) ; PropellerDynamics ( & ( cd3zedlmwtk . eoy4o1rwoy .
rtm ) , & hjzk2zv0jgo . csbvwarwmh , & hjzk2zv0jgo . d00t0bvsqx [ 0 ] , &
hjzk2zv0jgo . cci3mwof5h [ 0 ] , & rtP_uavParam . geom . RotorArm3 [ 0 ] , &
ejhzoebun3 . Constant7_Value [ 0 ] , & ejhzoebun3 . Constant9_Value [ 0 ] , &
hjzk2zv0jgo . on0gwyvdng [ 0 ] , & hjzk2zv0jgo . mdmvsl4kx3 [ 0 ] , &
hjzk2zv0jgo . kf0l3ohhjz , & ( cd3zedlmwtk . eoy4o1rwoy . rtb ) , & (
cd3zedlmwtk . eoy4o1rwoy . rtdw ) ) ; hjzk2zv0jgo . anxysqocsy [ 0 ] =
ejhzoebun3 . Gain2_Gain * hjzk2zv0jgo . on0gwyvdng [ 0 ] ; hjzk2zv0jgo .
anxysqocsy [ 1 ] = ejhzoebun3 . Gain2_Gain * hjzk2zv0jgo . on0gwyvdng [ 1 ] ;
hjzk2zv0jgo . anxysqocsy [ 2 ] = ejhzoebun3 . Gain2_Gain * hjzk2zv0jgo .
on0gwyvdng [ 2 ] ; PropellerDynamics ( & ( cd3zedlmwtk . liakohv2jb . rtm ) ,
& hjzk2zv0jgo . pbqolavxh1 , & hjzk2zv0jgo . d00t0bvsqx [ 0 ] , & hjzk2zv0jgo
. cci3mwof5h [ 0 ] , & rtP_uavParam . geom . RotorArm4 [ 0 ] , & ejhzoebun3 .
Constant11_Value [ 0 ] , & ejhzoebun3 . Constant13_Value [ 0 ] , &
hjzk2zv0jgo . dpxtsc4ct3 [ 0 ] , & hjzk2zv0jgo . ao0nbwn4uy [ 0 ] , &
hjzk2zv0jgo . l3ad44plkh , & ( cd3zedlmwtk . liakohv2jb . rtb ) , & (
cd3zedlmwtk . liakohv2jb . rtdw ) ) ; dl21t4boyl_idx_0 = ejhzoebun3 .
Constant_Value_gaexcfymgv [ 1 ] ; g2q0qoylrm_idx_0 = ejhzoebun3 .
Constant_Value_gaexcfymgv [ 0 ] ; dl21t4boyl_idx_2 = ejhzoebun3 .
Constant_Value_gaexcfymgv [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) {
g2q0qoylrm_idx_2 = ejhzoebun3 . Gain5_Gain * hjzk2zv0jgo . dpxtsc4ct3 [ i ] ;
hjzk2zv0jgo . h3wr3a4ile [ i ] = g2q0qoylrm_idx_2 ; hjzk2zv0jgo . fyrtf4ffcd
[ i ] = ( ( hjzk2zv0jgo . k5mggrlxlo [ i ] + hjzk2zv0jgo . o2rn5svcvi [ i ] )
+ hjzk2zv0jgo . anxysqocsy [ i ] ) + g2q0qoylrm_idx_2 ; g2q0qoylrm_idx_2 = (
hjzk2zv0jgo . kuucijn2sg [ i + 3 ] * dl21t4boyl_idx_0 + hjzk2zv0jgo .
kuucijn2sg [ i ] * g2q0qoylrm_idx_0 ) + hjzk2zv0jgo . kuucijn2sg [ i + 6 ] *
dl21t4boyl_idx_2 ; hjzk2zv0jgo . jt2k5mojeq [ i ] = g2q0qoylrm_idx_2 ;
hjzk2zv0jgo . h2ikurznh0 [ i ] = rtP_uavParam . geom . mass *
g2q0qoylrm_idx_2 ; } hjzk2zv0jgo . othwxxxiyh [ 0 ] = hjzk2zv0jgo .
jmzubjfi5o ; hjzk2zv0jgo . othwxxxiyh [ 1 ] = hjzk2zv0jgo . j1b0ohkohh ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( hjzk2zv0jgo . jmzubjfi5o >=
ejhzoebun3 . Saturation_UpperSat_htwhs01fr3 ) { cd3zedlmwtk . hpbs0pv0ja = 1
; } else if ( hjzk2zv0jgo . jmzubjfi5o > ejhzoebun3 .
Saturation_LowerSat_kcxkvwwdv0 ) { cd3zedlmwtk . hpbs0pv0ja = 0 ; } else {
cd3zedlmwtk . hpbs0pv0ja = - 1 ; } } if ( cd3zedlmwtk . hpbs0pv0ja == 1 ) {
hjzk2zv0jgo . bj1sxp1mzb = ejhzoebun3 . Saturation_UpperSat_htwhs01fr3 ; }
else if ( cd3zedlmwtk . hpbs0pv0ja == - 1 ) { hjzk2zv0jgo . bj1sxp1mzb =
ejhzoebun3 . Saturation_LowerSat_kcxkvwwdv0 ; } else { hjzk2zv0jgo .
bj1sxp1mzb = hjzk2zv0jgo . jmzubjfi5o ; } hjzk2zv0jgo . mnzaajuwwx = 0.0 ;
hjzk2zv0jgo . mnzaajuwwx += ejhzoebun3 . alpha_dot_C * ge0boyqs2ez .
olifehdwf1 ; hjzk2zv0jgo . mnzaajuwwx += ejhzoebun3 . alpha_dot_D *
hjzk2zv0jgo . bj1sxp1mzb ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if (
hjzk2zv0jgo . nvhx5js3b5 >= ejhzoebun3 . Saturation_UpperSat_aylehtgq01 ) {
cd3zedlmwtk . ksxay1wm50 = 1 ; } else if ( hjzk2zv0jgo . nvhx5js3b5 >
ejhzoebun3 . Saturation_LowerSat_ndgcjhroam ) { cd3zedlmwtk . ksxay1wm50 = 0
; } else { cd3zedlmwtk . ksxay1wm50 = - 1 ; } } if ( cd3zedlmwtk . ksxay1wm50
== 1 ) { hjzk2zv0jgo . h4etmfy2eh = ejhzoebun3 .
Saturation_UpperSat_aylehtgq01 ; } else if ( cd3zedlmwtk . ksxay1wm50 == - 1
) { hjzk2zv0jgo . h4etmfy2eh = ejhzoebun3 . Saturation_LowerSat_ndgcjhroam ;
} else { hjzk2zv0jgo . h4etmfy2eh = hjzk2zv0jgo . nvhx5js3b5 ; } hjzk2zv0jgo
. dmaajqujzv = hjzk2zv0jgo . mzpu5t1jkm * rtP_uavParam . geom . b *
rtP_uavParam . geom . c ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if (
hjzk2zv0jgo . nvhx5js3b5 >= ejhzoebun3 . Saturation_UpperSat_d1rjww4nbg ) {
cd3zedlmwtk . i4tbqjyhaq = 1 ; } else if ( hjzk2zv0jgo . nvhx5js3b5 >
ejhzoebun3 . Saturation_LowerSat_litbrtzvri ) { cd3zedlmwtk . i4tbqjyhaq = 0
; } else { cd3zedlmwtk . i4tbqjyhaq = - 1 ; } } if ( cd3zedlmwtk . i4tbqjyhaq
== 1 ) { hjzk2zv0jgo . lwakmo2ko1 = ejhzoebun3 .
Saturation_UpperSat_d1rjww4nbg ; } else if ( cd3zedlmwtk . i4tbqjyhaq == - 1
) { hjzk2zv0jgo . lwakmo2ko1 = ejhzoebun3 . Saturation_LowerSat_litbrtzvri ;
} else { hjzk2zv0jgo . lwakmo2ko1 = hjzk2zv0jgo . nvhx5js3b5 ; } if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( hjzk2zv0jgo . nvhx5js3b5 >=
ejhzoebun3 . Saturation_UpperSat_c3uix3heb2 ) { cd3zedlmwtk . eem1bmg2vx = 1
; } else if ( hjzk2zv0jgo . nvhx5js3b5 > ejhzoebun3 .
Saturation_LowerSat_gehmbnjmeu ) { cd3zedlmwtk . eem1bmg2vx = 0 ; } else {
cd3zedlmwtk . eem1bmg2vx = - 1 ; } } if ( cd3zedlmwtk . eem1bmg2vx == 1 ) {
hjzk2zv0jgo . l2t3z55cpu = ejhzoebun3 . Saturation_UpperSat_c3uix3heb2 ; }
else if ( cd3zedlmwtk . eem1bmg2vx == - 1 ) { hjzk2zv0jgo . l2t3z55cpu =
ejhzoebun3 . Saturation_LowerSat_gehmbnjmeu ; } else { hjzk2zv0jgo .
l2t3z55cpu = hjzk2zv0jgo . nvhx5js3b5 ; } if ( ejhzoebun3 . AeroSwitch_Value
> ejhzoebun3 . Switch_Threshold_bcdfk5ewvg ) { hjzk2zv0jgo . c4xfdotpr0 =
ejhzoebun3 . Gain_Gain_mjsljihjpc * hjzk2zv0jgo . h4etmfy2eh ; hjzk2zv0jgo .
erkk23cbij = hjzk2zv0jgo . cci3mwof5h [ 1 ] * rtP_uavParam . geom . c /
hjzk2zv0jgo . c4xfdotpr0 ; hjzk2zv0jgo . d1mh3tvfxa = rtP_uavParam . aero .
CLq * hjzk2zv0jgo . erkk23cbij ; hjzk2zv0jgo . dlxjhtpbgt = rtP_uavParam .
aero . CLa_dot * hjzk2zv0jgo . mnzaajuwwx ; hjzk2zv0jgo . abjck5vnui =
rtP_uavParam . aero . CLa * hjzk2zv0jgo . bj1sxp1mzb ; hjzk2zv0jgo .
fteax4phdm = ( ( ( ( rtP_uavParam . aero . CL0 + hjzk2zv0jgo . abjck5vnui ) +
hjzk2zv0jgo . dlxjhtpbgt ) + hjzk2zv0jgo . an3542desc ) + hjzk2zv0jgo .
hps1jp4vyd ) + hjzk2zv0jgo . d1mh3tvfxa ; hjzk2zv0jgo . gl4zkd4p00 =
ejhzoebun3 . Ydown_Gain * hjzk2zv0jgo . fteax4phdm ; hjzk2zv0jgo . itsrgtvmef
= hjzk2zv0jgo . gl4zkd4p00 * hjzk2zv0jgo . dmaajqujzv ; hjzk2zv0jgo .
knh1oxgwo5 = ejhzoebun3 . Gain_Gain_k2d25npkdk * hjzk2zv0jgo . l2t3z55cpu ;
hjzk2zv0jgo . jcc2w2dkmn = hjzk2zv0jgo . cci3mwof5h [ 2 ] * ejhzoebun3 .
Cmq3_Value * rtP_uavParam . geom . b / hjzk2zv0jgo . knh1oxgwo5 ; hjzk2zv0jgo
. dwuhvwcohi = rtP_uavParam . aero . CYr * hjzk2zv0jgo . jcc2w2dkmn ;
hjzk2zv0jgo . gtf4k10ktt = ejhzoebun3 . Gain_Gain_p42jtdlvy0 * hjzk2zv0jgo .
lwakmo2ko1 ; hjzk2zv0jgo . c2qh0pkvez = hjzk2zv0jgo . cci3mwof5h [ 0 ] *
ejhzoebun3 . Cmq1_Value * rtP_uavParam . geom . b / hjzk2zv0jgo . gtf4k10ktt
; hjzk2zv0jgo . pmdvzy4gmv = rtP_uavParam . aero . CYp * hjzk2zv0jgo .
c2qh0pkvez ; hjzk2zv0jgo . kx5f1zuazd = rtP_uavParam . aero . CYb *
hjzk2zv0jgo . j1b0ohkohh ; hjzk2zv0jgo . oxu2x0ys3i = ( ( hjzk2zv0jgo .
kx5f1zuazd + hjzk2zv0jgo . ay5d1ywjz3 ) + hjzk2zv0jgo . pmdvzy4gmv ) +
hjzk2zv0jgo . dwuhvwcohi ; hjzk2zv0jgo . bcj1qvwgpn = hjzk2zv0jgo .
oxu2x0ys3i * hjzk2zv0jgo . dmaajqujzv ; hjzk2zv0jgo . luqg24xiyl =
hjzk2zv0jgo . fteax4phdm - rtP_uavParam . aero . CL_CDmin ; hjzk2zv0jgo .
a2o0lqsyq3 = hjzk2zv0jgo . luqg24xiyl * rtP_uavParam . aero . A1 ;
hjzk2zv0jgo . acl4r2rqtj = hjzk2zv0jgo . luqg24xiyl * hjzk2zv0jgo .
luqg24xiyl * rtP_uavParam . aero . K ; hjzk2zv0jgo . dtswxmk2cq = (
rtP_uavParam . aero . CDmin + hjzk2zv0jgo . acl4r2rqtj ) + hjzk2zv0jgo .
a2o0lqsyq3 ; hjzk2zv0jgo . famqpvr3fs = ( ( hjzk2zv0jgo . dtswxmk2cq +
hjzk2zv0jgo . pq24tfbcj3 ) + hjzk2zv0jgo . p43l53pvfy ) + hjzk2zv0jgo .
hqoajxwt3g ; hjzk2zv0jgo . ec0ibhsp05 = ejhzoebun3 . Gain_Gain_crytncxhkk *
hjzk2zv0jgo . famqpvr3fs ; hjzk2zv0jgo . k3bzmsmu0e = hjzk2zv0jgo .
ec0ibhsp05 * hjzk2zv0jgo . dmaajqujzv ; hjzk2zv0jgo . ptb3whyae5 [ 0 ] =
hjzk2zv0jgo . k3bzmsmu0e ; hjzk2zv0jgo . ptb3whyae5 [ 1 ] = hjzk2zv0jgo .
bcj1qvwgpn ; hjzk2zv0jgo . ptb3whyae5 [ 2 ] = hjzk2zv0jgo . itsrgtvmef ;
muDoubleScalarSinCos ( hjzk2zv0jgo . othwxxxiyh [ 0 ] , & dl21t4boyl_idx_0 ,
& g2q0qoylrm_idx_0 ) ; muDoubleScalarSinCos ( hjzk2zv0jgo . othwxxxiyh [ 1 ]
, & a4ucmwgpaf_idx_1 , & nufm4fpn2q_idx_1 ) ; hjzk2zv0jgo . d1qtszyg1z [ 0 ]
= g2q0qoylrm_idx_0 * nufm4fpn2q_idx_1 ; hjzk2zv0jgo . d1qtszyg1z [ 1 ] = -
g2q0qoylrm_idx_0 * a4ucmwgpaf_idx_1 ; hjzk2zv0jgo . d1qtszyg1z [ 2 ] = -
dl21t4boyl_idx_0 ; hjzk2zv0jgo . d1qtszyg1z [ 3 ] = a4ucmwgpaf_idx_1 ;
hjzk2zv0jgo . d1qtszyg1z [ 4 ] = nufm4fpn2q_idx_1 ; hjzk2zv0jgo . d1qtszyg1z
[ 5 ] = 0.0 ; hjzk2zv0jgo . d1qtszyg1z [ 6 ] = dl21t4boyl_idx_0 *
nufm4fpn2q_idx_1 ; hjzk2zv0jgo . d1qtszyg1z [ 7 ] = - dl21t4boyl_idx_0 *
a4ucmwgpaf_idx_1 ; hjzk2zv0jgo . d1qtszyg1z [ 8 ] = g2q0qoylrm_idx_0 ; for (
i = 0 ; i < 3 ; i ++ ) { hjzk2zv0jgo . hbvsypwj5y [ 3 * i ] = hjzk2zv0jgo .
d1qtszyg1z [ i ] ; hjzk2zv0jgo . hbvsypwj5y [ 3 * i + 1 ] = hjzk2zv0jgo .
d1qtszyg1z [ i + 3 ] ; hjzk2zv0jgo . hbvsypwj5y [ 3 * i + 2 ] = hjzk2zv0jgo .
d1qtszyg1z [ i + 6 ] ; } g2q0qoylrm_idx_2 = hjzk2zv0jgo . ptb3whyae5 [ 1 ] ;
ptb3whyae5 = hjzk2zv0jgo . ptb3whyae5 [ 0 ] ; a4ucmwgpaf_idx_1 = hjzk2zv0jgo
. ptb3whyae5 [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { nufm4fpn2q_idx_1 = (
hjzk2zv0jgo . hbvsypwj5y [ i + 3 ] * g2q0qoylrm_idx_2 + hjzk2zv0jgo .
hbvsypwj5y [ i ] * ptb3whyae5 ) + hjzk2zv0jgo . hbvsypwj5y [ i + 6 ] *
a4ucmwgpaf_idx_1 ; hjzk2zv0jgo . ep0h21kgsz [ i ] = nufm4fpn2q_idx_1 ;
hjzk2zv0jgo . jjgv3id10o [ i ] = nufm4fpn2q_idx_1 ; } } else { hjzk2zv0jgo .
jjgv3id10o [ 0 ] = ejhzoebun3 . Constant4_Value ; hjzk2zv0jgo . jjgv3id10o [
1 ] = ejhzoebun3 . Constant4_Value ; hjzk2zv0jgo . jjgv3id10o [ 2 ] =
ejhzoebun3 . Constant4_Value ; } cd3zedlmwtk . mruvr1k0o4 = dvn54uuivp ;
dl21t4boyl_idx_0 = 0.0 ; g2q0qoylrm_idx_2 = 3.3121686421112381E-170 ;
ptb3whyae5 = ejhzoebun3 . Constant_Value_fc0mezjahc [ 1 ] ; a4ucmwgpaf_idx_1
= ejhzoebun3 . Constant_Value_fc0mezjahc [ 0 ] ; nufm4fpn2q_idx_1 =
ejhzoebun3 . Constant_Value_fc0mezjahc [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) {
g2q0qoylrm_idx_0 = ( hjzk2zv0jgo . kuucijn2sg [ i + 3 ] * ptb3whyae5 +
hjzk2zv0jgo . kuucijn2sg [ i ] * a4ucmwgpaf_idx_1 ) + hjzk2zv0jgo .
kuucijn2sg [ i + 6 ] * nufm4fpn2q_idx_1 ; hjzk2zv0jgo . ccp2v0is3b [ i ] =
g2q0qoylrm_idx_0 ; dl21t4boyl_idx_2 = ejhzoebun3 . gain_Gain * hjzk2zv0jgo .
d00t0bvsqx [ i ] ; hjzk2zv0jgo . hknbaidp1p [ i ] = dl21t4boyl_idx_2 ;
hjzk2zv0jgo . fclw1sjfex [ i ] = g2q0qoylrm_idx_0 + dl21t4boyl_idx_2 ;
g2q0qoylrm_idx_0 = muDoubleScalarAbs ( hjzk2zv0jgo . fclw1sjfex [ i ] ) ; if
( g2q0qoylrm_idx_0 > g2q0qoylrm_idx_2 ) { dl21t4boyl_idx_2 = g2q0qoylrm_idx_2
/ g2q0qoylrm_idx_0 ; dl21t4boyl_idx_0 = dl21t4boyl_idx_0 * dl21t4boyl_idx_2 *
dl21t4boyl_idx_2 + 1.0 ; g2q0qoylrm_idx_2 = g2q0qoylrm_idx_0 ; } else {
dl21t4boyl_idx_2 = g2q0qoylrm_idx_0 / g2q0qoylrm_idx_2 ; dl21t4boyl_idx_0 +=
dl21t4boyl_idx_2 * dl21t4boyl_idx_2 ; } } dl21t4boyl_idx_0 = g2q0qoylrm_idx_2
* muDoubleScalarSqrt ( dl21t4boyl_idx_0 ) ; dl21t4boyl_idx_0 *= rtP_uavParam
. aero . dragCoeffMov ; hjzk2zv0jgo . n54mahp50g [ 0 ] = ( ( hjzk2zv0jgo .
fyrtf4ffcd [ 0 ] + hjzk2zv0jgo . h2ikurznh0 [ 0 ] ) + hjzk2zv0jgo .
jjgv3id10o [ 0 ] ) + dl21t4boyl_idx_0 * hjzk2zv0jgo . fclw1sjfex [ 0 ] ;
hjzk2zv0jgo . n54mahp50g [ 1 ] = ( ( hjzk2zv0jgo . fyrtf4ffcd [ 1 ] +
hjzk2zv0jgo . h2ikurznh0 [ 1 ] ) + hjzk2zv0jgo . jjgv3id10o [ 1 ] ) +
dl21t4boyl_idx_0 * hjzk2zv0jgo . fclw1sjfex [ 1 ] ; hjzk2zv0jgo . n54mahp50g
[ 2 ] = ( ( hjzk2zv0jgo . fyrtf4ffcd [ 2 ] + hjzk2zv0jgo . h2ikurznh0 [ 2 ] )
+ hjzk2zv0jgo . jjgv3id10o [ 2 ] ) + dl21t4boyl_idx_0 * hjzk2zv0jgo .
fclw1sjfex [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( cd3zedlmwtk
. c2katuywif . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cd3zedlmwtk . c2katuywif . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& hjzk2zv0jgo . n54mahp50g [ 0 ] + 0 ) ; } } } muDoubleScalarSinCos (
hjzk2zv0jgo . iksuuwfiau [ 0 ] , & g2q0qoylrm_idx_0 , & dl21t4boyl_idx_0 ) ;
muDoubleScalarSinCos ( hjzk2zv0jgo . iksuuwfiau [ 1 ] , & g2q0qoylrm_idx_1 ,
& dl21t4boyl_idx_1 ) ; hjzk2zv0jgo . cr54syolwa [ 0 ] = ( g2q0qoylrm_idx_0 *
hjzk2zv0jgo . cci3mwof5h [ 1 ] + dl21t4boyl_idx_0 * hjzk2zv0jgo . cci3mwof5h
[ 2 ] ) * ( g2q0qoylrm_idx_1 / dl21t4boyl_idx_1 ) + hjzk2zv0jgo . cci3mwof5h
[ 0 ] ; hjzk2zv0jgo . cr54syolwa [ 1 ] = dl21t4boyl_idx_0 * hjzk2zv0jgo .
cci3mwof5h [ 1 ] - g2q0qoylrm_idx_0 * hjzk2zv0jgo . cci3mwof5h [ 2 ] ;
hjzk2zv0jgo . cr54syolwa [ 2 ] = ( g2q0qoylrm_idx_0 * hjzk2zv0jgo .
cci3mwof5h [ 1 ] + dl21t4boyl_idx_0 * hjzk2zv0jgo . cci3mwof5h [ 2 ] ) /
dl21t4boyl_idx_1 ; dl21t4boyl_idx_0 = hjzk2zv0jgo . cci3mwof5h [ 1 ] ;
g2q0qoylrm_idx_0 = hjzk2zv0jgo . cci3mwof5h [ 0 ] ; dl21t4boyl_idx_1 =
hjzk2zv0jgo . cci3mwof5h [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { hjzk2zv0jgo .
oat42lolv5 [ i ] = ( hjzk2zv0jgo . dd43ilih2a [ i + 3 ] * dl21t4boyl_idx_0 +
hjzk2zv0jgo . dd43ilih2a [ i ] * g2q0qoylrm_idx_0 ) + hjzk2zv0jgo .
dd43ilih2a [ i + 6 ] * dl21t4boyl_idx_1 ; hjzk2zv0jgo . jcjs231yq3 [ i ] = (
hjzk2zv0jgo . inh3dtaqa0 [ i + 3 ] * dl21t4boyl_idx_0 + hjzk2zv0jgo .
inh3dtaqa0 [ i ] * g2q0qoylrm_idx_0 ) + hjzk2zv0jgo . inh3dtaqa0 [ i + 6 ] *
dl21t4boyl_idx_1 ; } hjzk2zv0jgo . pfj1kie4j4 = hjzk2zv0jgo . cci3mwof5h [ 0
] * hjzk2zv0jgo . jcjs231yq3 [ 1 ] ; hjzk2zv0jgo . dzxlnr5pi4 = hjzk2zv0jgo .
cci3mwof5h [ 1 ] * hjzk2zv0jgo . jcjs231yq3 [ 2 ] ; hjzk2zv0jgo . ltwbxo2m5t
= hjzk2zv0jgo . jcjs231yq3 [ 0 ] * hjzk2zv0jgo . cci3mwof5h [ 2 ] ;
hjzk2zv0jgo . iurr1vp4ab = hjzk2zv0jgo . cci3mwof5h [ 0 ] * hjzk2zv0jgo .
jcjs231yq3 [ 2 ] ; hjzk2zv0jgo . ltjx0tyc53 = hjzk2zv0jgo . jcjs231yq3 [ 0 ]
* hjzk2zv0jgo . cci3mwof5h [ 1 ] ; hjzk2zv0jgo . mwz1mhk5so = hjzk2zv0jgo .
jcjs231yq3 [ 1 ] * hjzk2zv0jgo . cci3mwof5h [ 2 ] ; hjzk2zv0jgo . pqy3siqenb
[ 0 ] = hjzk2zv0jgo . dzxlnr5pi4 - hjzk2zv0jgo . mwz1mhk5so ; hjzk2zv0jgo .
pqy3siqenb [ 1 ] = hjzk2zv0jgo . ltwbxo2m5t - hjzk2zv0jgo . iurr1vp4ab ;
hjzk2zv0jgo . pqy3siqenb [ 2 ] = hjzk2zv0jgo . pfj1kie4j4 - hjzk2zv0jgo .
ltjx0tyc53 ; muDoubleScalarSinCos ( hjzk2zv0jgo . othwxxxiyh [ 0 ] , &
hjzk2zv0jgo . p025xqadcy [ 0 ] , & dl21t4boyl_idx_0 ) ; muDoubleScalarSinCos
( hjzk2zv0jgo . othwxxxiyh [ 1 ] , & hjzk2zv0jgo . p025xqadcy [ 1 ] , &
lihs54ek32_idx_1 ) ; hjzk2zv0jgo . k1gukjalk1 = - dl21t4boyl_idx_0 *
hjzk2zv0jgo . p025xqadcy [ 1 ] ; hjzk2zv0jgo . ncb1cpqinu = - hjzk2zv0jgo .
p025xqadcy [ 0 ] ; hjzk2zv0jgo . pgnferr3ie = dl21t4boyl_idx_0 ; hjzk2zv0jgo
. dvx4kfp2xu [ 0 ] = dl21t4boyl_idx_0 * lihs54ek32_idx_1 ; hjzk2zv0jgo .
dvx4kfp2xu [ 1 ] = hjzk2zv0jgo . k1gukjalk1 ; hjzk2zv0jgo . dvx4kfp2xu [ 2 ]
= hjzk2zv0jgo . ncb1cpqinu ; hjzk2zv0jgo . dvx4kfp2xu [ 3 ] = hjzk2zv0jgo .
p025xqadcy [ 1 ] ; hjzk2zv0jgo . dvx4kfp2xu [ 4 ] = lihs54ek32_idx_1 ;
hjzk2zv0jgo . dvx4kfp2xu [ 5 ] = 0.0 ; hjzk2zv0jgo . dvx4kfp2xu [ 6 ] =
hjzk2zv0jgo . p025xqadcy [ 0 ] * lihs54ek32_idx_1 ; hjzk2zv0jgo . dvx4kfp2xu
[ 7 ] = - hjzk2zv0jgo . p025xqadcy [ 0 ] * hjzk2zv0jgo . p025xqadcy [ 1 ] ;
hjzk2zv0jgo . dvx4kfp2xu [ 8 ] = hjzk2zv0jgo . pgnferr3ie ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( hjzk2zv0jgo . nvhx5js3b5 >=
ejhzoebun3 . Saturation_UpperSat_pb05vvfxhg ) { cd3zedlmwtk . ptpami1mqf = 1
; } else if ( hjzk2zv0jgo . nvhx5js3b5 > ejhzoebun3 .
Saturation_LowerSat_ku5qdt5pdh ) { cd3zedlmwtk . ptpami1mqf = 0 ; } else {
cd3zedlmwtk . ptpami1mqf = - 1 ; } } if ( cd3zedlmwtk . ptpami1mqf == 1 ) {
hjzk2zv0jgo . iwjeqmaeng = ejhzoebun3 . Saturation_UpperSat_pb05vvfxhg ; }
else if ( cd3zedlmwtk . ptpami1mqf == - 1 ) { hjzk2zv0jgo . iwjeqmaeng =
ejhzoebun3 . Saturation_LowerSat_ku5qdt5pdh ; } else { hjzk2zv0jgo .
iwjeqmaeng = hjzk2zv0jgo . nvhx5js3b5 ; } if ( ssIsModeUpdateTimeStep ( rtS )
) { if ( hjzk2zv0jgo . nvhx5js3b5 >= ejhzoebun3 .
Saturation_UpperSat_jdnic1fm30 ) { cd3zedlmwtk . dsgl5lbh0v = 1 ; } else if (
hjzk2zv0jgo . nvhx5js3b5 > ejhzoebun3 . Saturation_LowerSat_h0ypdmyj1j ) {
cd3zedlmwtk . dsgl5lbh0v = 0 ; } else { cd3zedlmwtk . dsgl5lbh0v = - 1 ; } }
if ( cd3zedlmwtk . dsgl5lbh0v == 1 ) { hjzk2zv0jgo . oobwvvygfe = ejhzoebun3
. Saturation_UpperSat_jdnic1fm30 ; } else if ( cd3zedlmwtk . dsgl5lbh0v == -
1 ) { hjzk2zv0jgo . oobwvvygfe = ejhzoebun3 . Saturation_LowerSat_h0ypdmyj1j
; } else { hjzk2zv0jgo . oobwvvygfe = hjzk2zv0jgo . nvhx5js3b5 ; } if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( hjzk2zv0jgo . nvhx5js3b5 >=
ejhzoebun3 . Saturation_UpperSat_dmxdc5sj5d ) { cd3zedlmwtk . hj4clfy4lk = 1
; } else if ( hjzk2zv0jgo . nvhx5js3b5 > ejhzoebun3 .
Saturation_LowerSat_bkujms4faw ) { cd3zedlmwtk . hj4clfy4lk = 0 ; } else {
cd3zedlmwtk . hj4clfy4lk = - 1 ; } } if ( cd3zedlmwtk . hj4clfy4lk == 1 ) {
hjzk2zv0jgo . lsfjlacb3n = ejhzoebun3 . Saturation_UpperSat_dmxdc5sj5d ; }
else if ( cd3zedlmwtk . hj4clfy4lk == - 1 ) { hjzk2zv0jgo . lsfjlacb3n =
ejhzoebun3 . Saturation_LowerSat_bkujms4faw ; } else { hjzk2zv0jgo .
lsfjlacb3n = hjzk2zv0jgo . nvhx5js3b5 ; } if ( ssIsModeUpdateTimeStep ( rtS )
) { if ( hjzk2zv0jgo . nvhx5js3b5 >= ejhzoebun3 .
Saturation_UpperSat_iz3v2skdar ) { cd3zedlmwtk . pwej4sp12d = 1 ; } else if (
hjzk2zv0jgo . nvhx5js3b5 > ejhzoebun3 . Saturation_LowerSat_ert5yahf0x ) {
cd3zedlmwtk . pwej4sp12d = 0 ; } else { cd3zedlmwtk . pwej4sp12d = - 1 ; } }
if ( cd3zedlmwtk . pwej4sp12d == 1 ) { hjzk2zv0jgo . hhes4raj3w = ejhzoebun3
. Saturation_UpperSat_iz3v2skdar ; } else if ( cd3zedlmwtk . pwej4sp12d == -
1 ) { hjzk2zv0jgo . hhes4raj3w = ejhzoebun3 . Saturation_LowerSat_ert5yahf0x
; } else { hjzk2zv0jgo . hhes4raj3w = hjzk2zv0jgo . nvhx5js3b5 ; } if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( hjzk2zv0jgo . nvhx5js3b5 >=
ejhzoebun3 . Saturation_UpperSat_goq0fmwbyd ) { cd3zedlmwtk . dne2ysu0rs = 1
; } else if ( hjzk2zv0jgo . nvhx5js3b5 > ejhzoebun3 .
Saturation_LowerSat_ji1x0rnkti ) { cd3zedlmwtk . dne2ysu0rs = 0 ; } else {
cd3zedlmwtk . dne2ysu0rs = - 1 ; } } if ( cd3zedlmwtk . dne2ysu0rs == 1 ) {
hjzk2zv0jgo . ksibqgvnrm = ejhzoebun3 . Saturation_UpperSat_goq0fmwbyd ; }
else if ( cd3zedlmwtk . dne2ysu0rs == - 1 ) { hjzk2zv0jgo . ksibqgvnrm =
ejhzoebun3 . Saturation_LowerSat_ji1x0rnkti ; } else { hjzk2zv0jgo .
ksibqgvnrm = hjzk2zv0jgo . nvhx5js3b5 ; } if ( ejhzoebun3 . AeroSwitch_Value
> ejhzoebun3 . Switch1_Threshold ) { hjzk2zv0jgo . gxiiif0c3d = hjzk2zv0jgo .
cci3mwof5h [ 2 ] * ejhzoebun3 . Cmq3_Value_lpkfxuura1 * rtP_uavParam . geom .
b / hjzk2zv0jgo . ksibqgvnrm ; hjzk2zv0jgo . k1sza304jy = rtP_uavParam . aero
. Cnr * hjzk2zv0jgo . gxiiif0c3d ; hjzk2zv0jgo . blossfgznf = hjzk2zv0jgo .
cci3mwof5h [ 0 ] * ejhzoebun3 . Cmq1_Value_bdczz4tfdc * rtP_uavParam . geom .
b / hjzk2zv0jgo . hhes4raj3w ; hjzk2zv0jgo . cyi0sujumx = rtP_uavParam . aero
. Cnp * hjzk2zv0jgo . blossfgznf ; hjzk2zv0jgo . ahn5wc4cba = rtP_uavParam .
aero . Cnb * hjzk2zv0jgo . j1b0ohkohh ; hjzk2zv0jgo . n4c1sjotli = ( ( (
hjzk2zv0jgo . ahn5wc4cba + hjzk2zv0jgo . ahoyikc4du ) + hjzk2zv0jgo .
emd4as5gy1 ) + hjzk2zv0jgo . cyi0sujumx ) + hjzk2zv0jgo . k1sza304jy ;
hjzk2zv0jgo . kgog4d1fl5 = hjzk2zv0jgo . n4c1sjotli * hjzk2zv0jgo .
dmaajqujzv * rtP_uavParam . geom . b ; hjzk2zv0jgo . oecdr5so0f = ejhzoebun3
. Gain_Gain * hjzk2zv0jgo . lsfjlacb3n ; hjzk2zv0jgo . gzga0d0jbw =
hjzk2zv0jgo . cci3mwof5h [ 1 ] * rtP_uavParam . geom . c / hjzk2zv0jgo .
oecdr5so0f ; hjzk2zv0jgo . l1p25jpqry = rtP_uavParam . aero . Cmq *
hjzk2zv0jgo . gzga0d0jbw ; hjzk2zv0jgo . mntumjxb41 = rtP_uavParam . aero .
Cma * hjzk2zv0jgo . bj1sxp1mzb ; hjzk2zv0jgo . k22abf0uj2 = ( ( rtP_uavParam
. aero . Cm0 + hjzk2zv0jgo . mntumjxb41 ) + hjzk2zv0jgo . ncvyzjqsre ) +
hjzk2zv0jgo . l1p25jpqry ; hjzk2zv0jgo . b123034b0z = hjzk2zv0jgo .
k22abf0uj2 * hjzk2zv0jgo . dmaajqujzv * rtP_uavParam . geom . c ; hjzk2zv0jgo
. jrqy11puxr = hjzk2zv0jgo . cci3mwof5h [ 2 ] * ejhzoebun3 .
Cmq3_Value_ihjv4exhiy * rtP_uavParam . geom . b / hjzk2zv0jgo . oobwvvygfe ;
hjzk2zv0jgo . fmmoructyp = rtP_uavParam . aero . Clr * hjzk2zv0jgo .
jrqy11puxr ; hjzk2zv0jgo . nfwhxbbek2 = hjzk2zv0jgo . cci3mwof5h [ 0 ] *
ejhzoebun3 . Cmq1_Value_pah1bbnlbx * rtP_uavParam . geom . b / hjzk2zv0jgo .
iwjeqmaeng ; hjzk2zv0jgo . pw3ddy1xfy = rtP_uavParam . aero . Clp *
hjzk2zv0jgo . nfwhxbbek2 ; hjzk2zv0jgo . aolb2w30s4 = rtP_uavParam . aero .
Clb * hjzk2zv0jgo . j1b0ohkohh ; hjzk2zv0jgo . jkypjxquxw = ( ( ( hjzk2zv0jgo
. aolb2w30s4 + hjzk2zv0jgo . kcempososy ) + hjzk2zv0jgo . naxqiwuy5k ) +
hjzk2zv0jgo . pw3ddy1xfy ) + hjzk2zv0jgo . fmmoructyp ; hjzk2zv0jgo .
jcgspnlpxp = hjzk2zv0jgo . jkypjxquxw * hjzk2zv0jgo . dmaajqujzv *
rtP_uavParam . geom . b ; hjzk2zv0jgo . ptb3whyae5v [ 0 ] = hjzk2zv0jgo .
jcgspnlpxp ; hjzk2zv0jgo . ptb3whyae5v [ 1 ] = hjzk2zv0jgo . b123034b0z ;
hjzk2zv0jgo . ptb3whyae5v [ 2 ] = hjzk2zv0jgo . kgog4d1fl5 ; for ( i = 0 ; i
< 3 ; i ++ ) { hjzk2zv0jgo . k12edtwgur [ 3 * i ] = hjzk2zv0jgo . dvx4kfp2xu
[ i ] ; hjzk2zv0jgo . k12edtwgur [ 3 * i + 1 ] = hjzk2zv0jgo . dvx4kfp2xu [ i
+ 3 ] ; hjzk2zv0jgo . k12edtwgur [ 3 * i + 2 ] = hjzk2zv0jgo . dvx4kfp2xu [ i
+ 6 ] ; } dl21t4boyl_idx_0 = hjzk2zv0jgo . ptb3whyae5v [ 1 ] ;
g2q0qoylrm_idx_0 = hjzk2zv0jgo . ptb3whyae5v [ 0 ] ; lihs54ek32_idx_1 =
hjzk2zv0jgo . ptb3whyae5v [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) {
dl21t4boyl_idx_1 = ( hjzk2zv0jgo . k12edtwgur [ i + 3 ] * dl21t4boyl_idx_0 +
hjzk2zv0jgo . k12edtwgur [ i ] * g2q0qoylrm_idx_0 ) + hjzk2zv0jgo .
k12edtwgur [ i + 6 ] * lihs54ek32_idx_1 ; hjzk2zv0jgo . ftpzbdiaki [ i ] =
dl21t4boyl_idx_1 ; hjzk2zv0jgo . pcopyw2qch [ i ] = dl21t4boyl_idx_1 ; } }
else { hjzk2zv0jgo . pcopyw2qch [ 0 ] = ejhzoebun3 . Constant5_Value ;
hjzk2zv0jgo . pcopyw2qch [ 1 ] = ejhzoebun3 . Constant5_Value ; hjzk2zv0jgo .
pcopyw2qch [ 2 ] = ejhzoebun3 . Constant5_Value ; } hjzk2zv0jgo . jjcp1ov2bg
= hjzk2zv0jgo . mkn5nhvzbk [ 1 ] * hjzk2zv0jgo . cci3mwof5h [ 2 ] ;
hjzk2zv0jgo . ax00eeaw5r = hjzk2zv0jgo . cci3mwof5h [ 0 ] * hjzk2zv0jgo .
mkn5nhvzbk [ 2 ] ; hjzk2zv0jgo . jsezxywihe = hjzk2zv0jgo . mkn5nhvzbk [ 0 ]
* hjzk2zv0jgo . cci3mwof5h [ 1 ] ; hjzk2zv0jgo . fmxtgiqruo = hjzk2zv0jgo .
cci3mwof5h [ 1 ] * hjzk2zv0jgo . mkn5nhvzbk [ 2 ] ; hjzk2zv0jgo . ewinmui34k
= hjzk2zv0jgo . mkn5nhvzbk [ 0 ] * hjzk2zv0jgo . cci3mwof5h [ 2 ] ;
hjzk2zv0jgo . crvz5ao1xy = hjzk2zv0jgo . cci3mwof5h [ 0 ] * hjzk2zv0jgo .
mkn5nhvzbk [ 1 ] ; hjzk2zv0jgo . ckqg5iy5aq [ 0 ] = hjzk2zv0jgo . jjcp1ov2bg
- hjzk2zv0jgo . fmxtgiqruo ; hjzk2zv0jgo . ckqg5iy5aq [ 1 ] = hjzk2zv0jgo .
ax00eeaw5r - hjzk2zv0jgo . ewinmui34k ; hjzk2zv0jgo . ckqg5iy5aq [ 2 ] =
hjzk2zv0jgo . jsezxywihe - hjzk2zv0jgo . crvz5ao1xy ; dl21t4boyl_idx_0 =
ejhzoebun3 . Gain3_Gain * hjzk2zv0jgo . mdmvsl4kx3 [ 0 ] ; hjzk2zv0jgo .
l2qm0okvna [ 0 ] = dl21t4boyl_idx_0 ; g2q0qoylrm_idx_0 = ejhzoebun3 .
Gain6_Gain * hjzk2zv0jgo . ao0nbwn4uy [ 0 ] ; hjzk2zv0jgo . p1xhzbkl4w [ 0 ]
= g2q0qoylrm_idx_0 ; dl21t4boyl_idx_0 = ( ( hjzk2zv0jgo . jzfclqedcy [ 0 ] +
hjzk2zv0jgo . pht4pxvhfn [ 0 ] ) + dl21t4boyl_idx_0 ) + g2q0qoylrm_idx_0 ;
hjzk2zv0jgo . meez4ih2n2 [ 0 ] = dl21t4boyl_idx_0 ; dl21t4boyl_idx_0 +=
hjzk2zv0jgo . pcopyw2qch [ 0 ] ; hjzk2zv0jgo . cjplmpquxg [ 0 ] =
dl21t4boyl_idx_0 ; hjzk2zv0jgo . lydelxiu4y [ 0 ] = ( dl21t4boyl_idx_0 -
hjzk2zv0jgo . oat42lolv5 [ 0 ] ) - hjzk2zv0jgo . pqy3siqenb [ 0 ] ;
dl21t4boyl_idx_0 = hjzk2zv0jgo . n54mahp50g [ 0 ] / ejhzoebun3 .
uDOFEulerAngles1_mass_0 ; hjzk2zv0jgo . gosnqni3fu [ 0 ] = dl21t4boyl_idx_0 ;
hjzk2zv0jgo . ngexc3pd5z [ 0 ] = dl21t4boyl_idx_0 + hjzk2zv0jgo . ckqg5iy5aq
[ 0 ] ; dl21t4boyl_idx_0 = ejhzoebun3 . Gain3_Gain * hjzk2zv0jgo . mdmvsl4kx3
[ 1 ] ; hjzk2zv0jgo . l2qm0okvna [ 1 ] = dl21t4boyl_idx_0 ; g2q0qoylrm_idx_0
= ejhzoebun3 . Gain6_Gain * hjzk2zv0jgo . ao0nbwn4uy [ 1 ] ; hjzk2zv0jgo .
p1xhzbkl4w [ 1 ] = g2q0qoylrm_idx_0 ; dl21t4boyl_idx_0 = ( ( hjzk2zv0jgo .
jzfclqedcy [ 1 ] + hjzk2zv0jgo . pht4pxvhfn [ 1 ] ) + dl21t4boyl_idx_0 ) +
g2q0qoylrm_idx_0 ; hjzk2zv0jgo . meez4ih2n2 [ 1 ] = dl21t4boyl_idx_0 ;
dl21t4boyl_idx_0 += hjzk2zv0jgo . pcopyw2qch [ 1 ] ; hjzk2zv0jgo . cjplmpquxg
[ 1 ] = dl21t4boyl_idx_0 ; hjzk2zv0jgo . lydelxiu4y [ 1 ] = (
dl21t4boyl_idx_0 - hjzk2zv0jgo . oat42lolv5 [ 1 ] ) - hjzk2zv0jgo .
pqy3siqenb [ 1 ] ; dl21t4boyl_idx_0 = hjzk2zv0jgo . n54mahp50g [ 1 ] /
ejhzoebun3 . uDOFEulerAngles1_mass_0 ; hjzk2zv0jgo . gosnqni3fu [ 1 ] =
dl21t4boyl_idx_0 ; hjzk2zv0jgo . ngexc3pd5z [ 1 ] = dl21t4boyl_idx_0 +
hjzk2zv0jgo . ckqg5iy5aq [ 1 ] ; dl21t4boyl_idx_0 = ejhzoebun3 . Gain3_Gain *
hjzk2zv0jgo . mdmvsl4kx3 [ 2 ] ; hjzk2zv0jgo . l2qm0okvna [ 2 ] =
dl21t4boyl_idx_0 ; g2q0qoylrm_idx_0 = ejhzoebun3 . Gain6_Gain * hjzk2zv0jgo .
ao0nbwn4uy [ 2 ] ; hjzk2zv0jgo . p1xhzbkl4w [ 2 ] = g2q0qoylrm_idx_0 ;
dl21t4boyl_idx_0 = ( ( hjzk2zv0jgo . jzfclqedcy [ 2 ] + hjzk2zv0jgo .
pht4pxvhfn [ 2 ] ) + dl21t4boyl_idx_0 ) + g2q0qoylrm_idx_0 ; hjzk2zv0jgo .
meez4ih2n2 [ 2 ] = dl21t4boyl_idx_0 ; dl21t4boyl_idx_0 += hjzk2zv0jgo .
pcopyw2qch [ 2 ] ; hjzk2zv0jgo . cjplmpquxg [ 2 ] = dl21t4boyl_idx_0 ;
hjzk2zv0jgo . lydelxiu4y [ 2 ] = ( dl21t4boyl_idx_0 - hjzk2zv0jgo .
oat42lolv5 [ 2 ] ) - hjzk2zv0jgo . pqy3siqenb [ 2 ] ; dl21t4boyl_idx_0 =
hjzk2zv0jgo . n54mahp50g [ 2 ] / ejhzoebun3 . uDOFEulerAngles1_mass_0 ;
hjzk2zv0jgo . gosnqni3fu [ 2 ] = dl21t4boyl_idx_0 ; hjzk2zv0jgo . ngexc3pd5z
[ 2 ] = dl21t4boyl_idx_0 + hjzk2zv0jgo . ckqg5iy5aq [ 2 ] ;
rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf ( hjzk2zv0jgo . lydelxiu4y , hjzk2zv0jgo
. doydg2jjr3 , hjzk2zv0jgo . luuvgmk2wi ) ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { { if ( cd3zedlmwtk . cijilelxe3 . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( cd3zedlmwtk . cijilelxe3 . AQHandles , ssGetTaskTime ( rtS
, 1 ) , ( char * ) & hjzk2zv0jgo . k1gukjalk1 + 0 ) ; } } { if ( cd3zedlmwtk
. fguaac4ehu . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cd3zedlmwtk . fguaac4ehu . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& hjzk2zv0jgo . ncb1cpqinu + 0 ) ; } } { if ( cd3zedlmwtk . e1zyqwjknc .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk .
e1zyqwjknc . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & hjzk2zv0jgo
. pgnferr3ie + 0 ) ; } } { if ( cd3zedlmwtk . f44csx1gfq . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . f44csx1gfq .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & hjzk2zv0jgo . dvx4kfp2xu
[ 0 ] + 0 ) ; } } { if ( cd3zedlmwtk . b4qcpdu5rl . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . b4qcpdu5rl .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & hjzk2zv0jgo . p025xqadcy
[ 0 ] + 0 ) ; } } { if ( cd3zedlmwtk . pu5zuzij3z . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cd3zedlmwtk . pu5zuzij3z .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & hjzk2zv0jgo . jmzubjfi5o
+ 0 ) ; } } rtPrevAction = cd3zedlmwtk . j5mbuidgdb ; rtAction = - 1 ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( ejhzoebun3 .
DirectionCosineMatrixtoQuaternions_action > 1 ) { rtAction = 0 ; }
cd3zedlmwtk . j5mbuidgdb = rtAction ; } else { rtAction = cd3zedlmwtk .
j5mbuidgdb ; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtPrevAction == 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( cd3zedlmwtk .
grss1hcqfy ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
if ( cd3zedlmwtk . jouu1ys3n0 == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk .
jouu1ys3n0 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( cd3zedlmwtk .
j2lgfwz4nb == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk . j2lgfwz4nb = - 1 ;
break ; case 2 : etal0kgn3f ( rtS ) ; break ; } cd3zedlmwtk . grss1hcqfy = -
1 ; } } if ( rtAction == 0 ) { if ( ( rtPrevAction != 0 ) && ( ssGetTaskTime
( rtS , 1 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { for ( i = 0 ; i < 3 ; i ++ ) { for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { tmp_p [ i + 3 * i_p ] = ( ( hjzk2zv0jgo . kuucijn2sg [ 3 * i + 1 ]
* hjzk2zv0jgo . kuucijn2sg [ 3 * i_p + 1 ] + hjzk2zv0jgo . kuucijn2sg [ 3 * i
] * hjzk2zv0jgo . kuucijn2sg [ 3 * i_p ] ) + hjzk2zv0jgo . kuucijn2sg [ 3 * i
+ 2 ] * hjzk2zv0jgo . kuucijn2sg [ 3 * i_p + 2 ] ) + ejhzoebun3 . Bias1_Bias
[ 3 * i_p + i ] ; } } for ( i = 0 ; i < 9 ; i ++ ) { cx05fh3xzl [ i ] = (
muDoubleScalarAbs ( tmp_p [ i ] ) > ejhzoebun3 .
DirectionCosineMatrixtoQuaternions_tolerance ) ; } tmp = cx05fh3xzl [ 0 ] ;
for ( i = 0 ; i < 8 ; i ++ ) { tmp = ( tmp || cx05fh3xzl [ i + 1 ] ) ; }
rtPrevAction = cd3zedlmwtk . grss1hcqfy ; if ( ! ( muDoubleScalarAbs ( ( ( (
( ( hjzk2zv0jgo . kuucijn2sg [ 0 ] * hjzk2zv0jgo . kuucijn2sg [ 4 ] *
hjzk2zv0jgo . kuucijn2sg [ 8 ] - hjzk2zv0jgo . kuucijn2sg [ 0 ] * hjzk2zv0jgo
. kuucijn2sg [ 5 ] * hjzk2zv0jgo . kuucijn2sg [ 7 ] ) - hjzk2zv0jgo .
kuucijn2sg [ 1 ] * hjzk2zv0jgo . kuucijn2sg [ 3 ] * hjzk2zv0jgo . kuucijn2sg
[ 8 ] ) + hjzk2zv0jgo . kuucijn2sg [ 2 ] * hjzk2zv0jgo . kuucijn2sg [ 3 ] *
hjzk2zv0jgo . kuucijn2sg [ 7 ] ) + hjzk2zv0jgo . kuucijn2sg [ 1 ] *
hjzk2zv0jgo . kuucijn2sg [ 5 ] * hjzk2zv0jgo . kuucijn2sg [ 6 ] ) -
hjzk2zv0jgo . kuucijn2sg [ 2 ] * hjzk2zv0jgo . kuucijn2sg [ 4 ] * hjzk2zv0jgo
. kuucijn2sg [ 6 ] ) + ejhzoebun3 . Bias_Bias ) > ejhzoebun3 .
DirectionCosineMatrixtoQuaternions_tolerance ) ) { if ( tmp ) { rtAction = 1
; } else { rtAction = 2 ; } } cd3zedlmwtk . grss1hcqfy = rtAction ; if (
rtPrevAction != rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( cd3zedlmwtk .
jouu1ys3n0 == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk . jouu1ys3n0 = - 1 ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if (
cd3zedlmwtk . j2lgfwz4nb == 2 ) { etal0kgn3f ( rtS ) ; } cd3zedlmwtk .
j2lgfwz4nb = - 1 ; break ; case 2 : etal0kgn3f ( rtS ) ; break ; } } switch (
rtAction ) { case 0 : if ( ( rtAction != rtPrevAction ) && ( ssGetTaskTime (
rtS , 1 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtPrevAction = cd3zedlmwtk . jouu1ys3n0 ; if ( ejhzoebun3 .
DirectionCosineMatrixtoQuaternions_action == 2 ) { rtAction = 0 ; } else if (
ejhzoebun3 . DirectionCosineMatrixtoQuaternions_action == 3 ) { rtAction = 1
; } else { rtAction = 2 ; } cd3zedlmwtk . jouu1ys3n0 = rtAction ; if (
rtPrevAction != rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; if ( rtPrevAction == 2 ) { etal0kgn3f ( rtS ) ; } } switch ( rtAction ) {
case 0 : if ( ( rtAction != rtPrevAction ) && ( ssGetTaskTime ( rtS , 1 ) !=
ssGetTStart ( rtS ) ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; } if ( ! ( ejhzoebun3 . Constant1_Value_cixdqcjscc != 0.0 ) ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5
,
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; }
srUpdateBC ( cd3zedlmwtk . apkslfbs4p ) ; break ; case 1 : if ( ( rtAction !=
rtPrevAction ) && ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ! ( ejhzoebun3 .
Constant1_Value_cixdqcjscc != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } srUpdateBC ( cd3zedlmwtk . dy3it3hprz )
; break ; default : if ( rtAction != rtPrevAction ) { hb2izpcjq3 ( rtS ) ; }
break ; } } srUpdateBC ( cd3zedlmwtk . hkexsdmmiq ) ; break ; case 1 : if ( (
rtAction != rtPrevAction ) && ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart (
rtS ) ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtPrevAction = cd3zedlmwtk . j2lgfwz4nb ;
if ( ejhzoebun3 . DirectionCosineMatrixtoQuaternions_action == 2 ) { rtAction
= 0 ; } else if ( ejhzoebun3 . DirectionCosineMatrixtoQuaternions_action == 3
) { rtAction = 1 ; } else { rtAction = 2 ; } cd3zedlmwtk . j2lgfwz4nb =
rtAction ; if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtPrevAction == 2 )
{ etal0kgn3f ( rtS ) ; } } switch ( rtAction ) { case 0 : if ( ( rtAction !=
rtPrevAction ) && ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ! ( ejhzoebun3 .
Constant1_Value_jczvgwu4bk != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; }
srUpdateBC ( cd3zedlmwtk . mlektwyh03 ) ; break ; case 1 : if ( ( rtAction !=
rtPrevAction ) && ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ! ( ejhzoebun3 .
Constant1_Value_jczvgwu4bk != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } srUpdateBC ( cd3zedlmwtk . nmjkdxbctr )
; break ; default : if ( rtAction != rtPrevAction ) { hb2izpcjq3 ( rtS ) ; }
break ; } } srUpdateBC ( cd3zedlmwtk . gwsyjhto3i ) ; break ; default : if (
rtAction != rtPrevAction ) { hb2izpcjq3 ( rtS ) ; } break ; } } if (
ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( cd3zedlmwtk . jcxbkbqufo ) ;
} } } hjzk2zv0jgo . mmtwhhrgdw = ( hjzk2zv0jgo . kuucijn2sg [ 0 ] +
hjzk2zv0jgo . kuucijn2sg [ 4 ] ) + hjzk2zv0jgo . kuucijn2sg [ 8 ] ;
rtPrevAction = cd3zedlmwtk . fqno2nhg0i ; if ( ssIsModeUpdateTimeStep ( rtS )
) { rtAction = ( int8_T ) ! ( hjzk2zv0jgo . mmtwhhrgdw > 0.0 ) ; cd3zedlmwtk
. fqno2nhg0i = rtAction ; } else { rtAction = cd3zedlmwtk . fqno2nhg0i ; } if
( rtPrevAction != rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; if ( rtPrevAction == 1 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; cd3zedlmwtk . fodrtj5jvy = - 1 ; } } if ( rtAction == 0 ) { if ( (
rtPrevAction != 0 ) && ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } hjzk2zv0jgo .
b5njilv2gn = hjzk2zv0jgo . mmtwhhrgdw + ejhzoebun3 . Constant_Value ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( cd3zedlmwtk . jfsreelaxk != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; cd3zedlmwtk .
jfsreelaxk = 0 ; } dl21t4boyl_idx_0 = muDoubleScalarSqrt ( hjzk2zv0jgo .
b5njilv2gn ) ; } else { if ( hjzk2zv0jgo . b5njilv2gn < 0.0 ) {
dl21t4boyl_idx_0 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( hjzk2zv0jgo .
b5njilv2gn ) ) ; } else { dl21t4boyl_idx_0 = muDoubleScalarSqrt ( hjzk2zv0jgo
. b5njilv2gn ) ; } if ( hjzk2zv0jgo . b5njilv2gn < 0.0 ) { cd3zedlmwtk .
jfsreelaxk = 1 ; } } hjzk2zv0jgo . kdhpinsv2d [ 0 ] = ejhzoebun3 .
Gain_Gain_oov4c4xu1y * dl21t4boyl_idx_0 ; hjzk2zv0jgo . eo1hh0tubv =
ejhzoebun3 . Gain1_Gain * dl21t4boyl_idx_0 ; hjzk2zv0jgo . fi3hy1tf5r [ 0 ] =
hjzk2zv0jgo . kuucijn2sg [ 7 ] - hjzk2zv0jgo . kuucijn2sg [ 5 ] ; hjzk2zv0jgo
. fi3hy1tf5r [ 1 ] = hjzk2zv0jgo . kuucijn2sg [ 2 ] - hjzk2zv0jgo .
kuucijn2sg [ 6 ] ; hjzk2zv0jgo . fi3hy1tf5r [ 2 ] = hjzk2zv0jgo . kuucijn2sg
[ 3 ] - hjzk2zv0jgo . kuucijn2sg [ 1 ] ; hjzk2zv0jgo . kdhpinsv2d [ 1 ] =
hjzk2zv0jgo . fi3hy1tf5r [ 0 ] / hjzk2zv0jgo . eo1hh0tubv ; hjzk2zv0jgo .
kdhpinsv2d [ 2 ] = hjzk2zv0jgo . fi3hy1tf5r [ 1 ] / hjzk2zv0jgo . eo1hh0tubv
; hjzk2zv0jgo . kdhpinsv2d [ 3 ] = hjzk2zv0jgo . fi3hy1tf5r [ 2 ] /
hjzk2zv0jgo . eo1hh0tubv ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC
( cd3zedlmwtk . cnnxvlxj4k ) ; } } else { if ( ( rtAction != rtPrevAction )
&& ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtPrevAction =
cd3zedlmwtk . fodrtj5jvy ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( (
hjzk2zv0jgo . kuucijn2sg [ 4 ] > hjzk2zv0jgo . kuucijn2sg [ 0 ] ) && (
hjzk2zv0jgo . kuucijn2sg [ 4 ] > hjzk2zv0jgo . kuucijn2sg [ 8 ] ) ) {
rtAction = 0 ; } else if ( hjzk2zv0jgo . kuucijn2sg [ 8 ] > hjzk2zv0jgo .
kuucijn2sg [ 0 ] ) { rtAction = 1 ; } else { rtAction = 2 ; } cd3zedlmwtk .
fodrtj5jvy = rtAction ; } else { rtAction = cd3zedlmwtk . fodrtj5jvy ; } if (
rtPrevAction != rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; } switch ( rtAction ) { case 0 : if ( ( rtAction != rtPrevAction ) && (
ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } hjzk2zv0jgo .
dt0lrzjk1o [ 0 ] = hjzk2zv0jgo . kuucijn2sg [ 1 ] + hjzk2zv0jgo . kuucijn2sg
[ 3 ] ; hjzk2zv0jgo . dt0lrzjk1o [ 1 ] = hjzk2zv0jgo . kuucijn2sg [ 5 ] +
hjzk2zv0jgo . kuucijn2sg [ 7 ] ; hjzk2zv0jgo . dt0lrzjk1o [ 2 ] = hjzk2zv0jgo
. kuucijn2sg [ 2 ] - hjzk2zv0jgo . kuucijn2sg [ 6 ] ; hjzk2zv0jgo .
neni45xlk3 = ( ( hjzk2zv0jgo . kuucijn2sg [ 4 ] - hjzk2zv0jgo . kuucijn2sg [
0 ] ) - hjzk2zv0jgo . kuucijn2sg [ 8 ] ) + ejhzoebun3 .
Constant_Value_axoyoht1ml ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
cd3zedlmwtk . huc0wlm4jz != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
cd3zedlmwtk . huc0wlm4jz = 0 ; } hjzk2zv0jgo . hzkzgft450 =
muDoubleScalarSqrt ( hjzk2zv0jgo . neni45xlk3 ) ; } else { if ( hjzk2zv0jgo .
neni45xlk3 < 0.0 ) { hjzk2zv0jgo . hzkzgft450 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( hjzk2zv0jgo . neni45xlk3 ) ) ; } else { hjzk2zv0jgo .
hzkzgft450 = muDoubleScalarSqrt ( hjzk2zv0jgo . neni45xlk3 ) ; } if (
hjzk2zv0jgo . neni45xlk3 < 0.0 ) { cd3zedlmwtk . huc0wlm4jz = 1 ; } } if (
ssIsModeUpdateTimeStep ( rtS ) ) { cd3zedlmwtk . a2yveaeuqa = ( hjzk2zv0jgo .
hzkzgft450 >= 0.0 ) ; } if ( cd3zedlmwtk . a2yveaeuqa > 0 ) { hjzk2zv0jgo .
dbxom3ehuc = hjzk2zv0jgo . hzkzgft450 ; } else { hjzk2zv0jgo . dbxom3ehuc = -
hjzk2zv0jgo . hzkzgft450 ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
cd3zedlmwtk . cmennrwj1m = ( hjzk2zv0jgo . dbxom3ehuc > ejhzoebun3 .
Switch_Threshold ) ; } if ( cd3zedlmwtk . cmennrwj1m ) { hjzk2zv0jgo .
ezsybgwh4t [ 0 ] = ejhzoebun3 . Constant1_Value ; hjzk2zv0jgo . ezsybgwh4t [
1 ] = hjzk2zv0jgo . hzkzgft450 ; } else { hjzk2zv0jgo . ezsybgwh4t [ 0 ] =
ejhzoebun3 . Constant2_Value [ 0 ] ; hjzk2zv0jgo . ezsybgwh4t [ 1 ] =
ejhzoebun3 . Constant2_Value [ 1 ] ; } hjzk2zv0jgo . cadfnhzvto = hjzk2zv0jgo
. ezsybgwh4t [ 0 ] / hjzk2zv0jgo . ezsybgwh4t [ 1 ] ; hjzk2zv0jgo .
p01vpysmg2 [ 0 ] = hjzk2zv0jgo . dt0lrzjk1o [ 0 ] * hjzk2zv0jgo . cadfnhzvto
; hjzk2zv0jgo . p01vpysmg2 [ 1 ] = hjzk2zv0jgo . dt0lrzjk1o [ 1 ] *
hjzk2zv0jgo . cadfnhzvto ; hjzk2zv0jgo . p01vpysmg2 [ 2 ] = hjzk2zv0jgo .
dt0lrzjk1o [ 2 ] * hjzk2zv0jgo . cadfnhzvto ; hjzk2zv0jgo . kdhpinsv2d [ 0 ]
= hjzk2zv0jgo . p01vpysmg2 [ 2 ] ; hjzk2zv0jgo . kdhpinsv2d [ 1 ] =
hjzk2zv0jgo . p01vpysmg2 [ 0 ] ; hjzk2zv0jgo . kdhpinsv2d [ 3 ] = hjzk2zv0jgo
. p01vpysmg2 [ 1 ] ; hjzk2zv0jgo . kdhpinsv2d [ 2 ] = ejhzoebun3 .
Gain_Gain_fcfwrzioaz * hjzk2zv0jgo . hzkzgft450 ; if ( ssIsModeUpdateTimeStep
( rtS ) ) { srUpdateBC ( cd3zedlmwtk . jy2jzur21d ) ; } break ; case 1 : if (
( rtAction != rtPrevAction ) && ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart (
rtS ) ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
hjzk2zv0jgo . avieazpzba [ 0 ] = hjzk2zv0jgo . kuucijn2sg [ 2 ] + hjzk2zv0jgo
. kuucijn2sg [ 6 ] ; hjzk2zv0jgo . avieazpzba [ 1 ] = hjzk2zv0jgo .
kuucijn2sg [ 5 ] + hjzk2zv0jgo . kuucijn2sg [ 7 ] ; hjzk2zv0jgo . avieazpzba
[ 2 ] = hjzk2zv0jgo . kuucijn2sg [ 3 ] - hjzk2zv0jgo . kuucijn2sg [ 1 ] ;
hjzk2zv0jgo . ezh5prodbs = ( ( hjzk2zv0jgo . kuucijn2sg [ 8 ] - hjzk2zv0jgo .
kuucijn2sg [ 0 ] ) - hjzk2zv0jgo . kuucijn2sg [ 4 ] ) + ejhzoebun3 .
Constant_Value_nkjzcvm1pd ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
cd3zedlmwtk . aqzoa0ngxb != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
cd3zedlmwtk . aqzoa0ngxb = 0 ; } hjzk2zv0jgo . jvf34px5ss =
muDoubleScalarSqrt ( hjzk2zv0jgo . ezh5prodbs ) ; } else { if ( hjzk2zv0jgo .
ezh5prodbs < 0.0 ) { hjzk2zv0jgo . jvf34px5ss = - muDoubleScalarSqrt (
muDoubleScalarAbs ( hjzk2zv0jgo . ezh5prodbs ) ) ; } else { hjzk2zv0jgo .
jvf34px5ss = muDoubleScalarSqrt ( hjzk2zv0jgo . ezh5prodbs ) ; } if (
hjzk2zv0jgo . ezh5prodbs < 0.0 ) { cd3zedlmwtk . aqzoa0ngxb = 1 ; } } if (
ssIsModeUpdateTimeStep ( rtS ) ) { cd3zedlmwtk . mpo4kumew4 = ( hjzk2zv0jgo .
jvf34px5ss >= 0.0 ) ; } if ( cd3zedlmwtk . mpo4kumew4 > 0 ) { hjzk2zv0jgo .
p10gcot45r = hjzk2zv0jgo . jvf34px5ss ; } else { hjzk2zv0jgo . p10gcot45r = -
hjzk2zv0jgo . jvf34px5ss ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
cd3zedlmwtk . gdxc324iwa = ( hjzk2zv0jgo . p10gcot45r > ejhzoebun3 .
Switch_Threshold_b1eng0x1sz ) ; } if ( cd3zedlmwtk . gdxc324iwa ) {
hjzk2zv0jgo . nshb4ned5q [ 0 ] = ejhzoebun3 . Constant1_Value_npwurdb1xs ;
hjzk2zv0jgo . nshb4ned5q [ 1 ] = hjzk2zv0jgo . jvf34px5ss ; } else {
hjzk2zv0jgo . nshb4ned5q [ 0 ] = ejhzoebun3 . Constant2_Value_f4vpv0auac [ 0
] ; hjzk2zv0jgo . nshb4ned5q [ 1 ] = ejhzoebun3 . Constant2_Value_f4vpv0auac
[ 1 ] ; } hjzk2zv0jgo . grt4kpc5gv = hjzk2zv0jgo . nshb4ned5q [ 0 ] /
hjzk2zv0jgo . nshb4ned5q [ 1 ] ; hjzk2zv0jgo . osedtncxqb [ 0 ] = hjzk2zv0jgo
. avieazpzba [ 0 ] * hjzk2zv0jgo . grt4kpc5gv ; hjzk2zv0jgo . osedtncxqb [ 1
] = hjzk2zv0jgo . avieazpzba [ 1 ] * hjzk2zv0jgo . grt4kpc5gv ; hjzk2zv0jgo .
osedtncxqb [ 2 ] = hjzk2zv0jgo . avieazpzba [ 2 ] * hjzk2zv0jgo . grt4kpc5gv
; hjzk2zv0jgo . kdhpinsv2d [ 0 ] = hjzk2zv0jgo . osedtncxqb [ 2 ] ;
hjzk2zv0jgo . kdhpinsv2d [ 1 ] = hjzk2zv0jgo . osedtncxqb [ 0 ] ; hjzk2zv0jgo
. kdhpinsv2d [ 2 ] = hjzk2zv0jgo . osedtncxqb [ 1 ] ; hjzk2zv0jgo .
kdhpinsv2d [ 3 ] = ejhzoebun3 . Gain_Gain_g4v1uapw3b * hjzk2zv0jgo .
jvf34px5ss ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( cd3zedlmwtk
. pi3di1b0u1 ) ; } break ; default : if ( ( rtAction != rtPrevAction ) && (
ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } hjzk2zv0jgo .
nyxi4ruo4k = ( ( hjzk2zv0jgo . kuucijn2sg [ 0 ] - hjzk2zv0jgo . kuucijn2sg [
4 ] ) - hjzk2zv0jgo . kuucijn2sg [ 8 ] ) + ejhzoebun3 .
Constant_Value_b5xeupgbfq ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
cd3zedlmwtk . cndsbiglgj != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
cd3zedlmwtk . cndsbiglgj = 0 ; } hjzk2zv0jgo . bnbjvkm0ow =
muDoubleScalarSqrt ( hjzk2zv0jgo . nyxi4ruo4k ) ; } else { if ( hjzk2zv0jgo .
nyxi4ruo4k < 0.0 ) { hjzk2zv0jgo . bnbjvkm0ow = - muDoubleScalarSqrt (
muDoubleScalarAbs ( hjzk2zv0jgo . nyxi4ruo4k ) ) ; } else { hjzk2zv0jgo .
bnbjvkm0ow = muDoubleScalarSqrt ( hjzk2zv0jgo . nyxi4ruo4k ) ; } if (
hjzk2zv0jgo . nyxi4ruo4k < 0.0 ) { cd3zedlmwtk . cndsbiglgj = 1 ; } } if (
ssIsModeUpdateTimeStep ( rtS ) ) { cd3zedlmwtk . nmwptmhta5 = ( hjzk2zv0jgo .
bnbjvkm0ow >= 0.0 ) ; } if ( cd3zedlmwtk . nmwptmhta5 > 0 ) { hjzk2zv0jgo .
dgibgw2vs2 = hjzk2zv0jgo . bnbjvkm0ow ; } else { hjzk2zv0jgo . dgibgw2vs2 = -
hjzk2zv0jgo . bnbjvkm0ow ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
cd3zedlmwtk . i55hj3bwoh = ( hjzk2zv0jgo . dgibgw2vs2 > ejhzoebun3 .
Switch_Threshold_bzshkgitvc ) ; } if ( cd3zedlmwtk . i55hj3bwoh ) {
hjzk2zv0jgo . agekrrwrxe [ 0 ] = ejhzoebun3 . Constant1_Value_cxbaat2nbt ;
hjzk2zv0jgo . agekrrwrxe [ 1 ] = hjzk2zv0jgo . bnbjvkm0ow ; } else {
hjzk2zv0jgo . agekrrwrxe [ 0 ] = ejhzoebun3 . Constant2_Value_d2q1dqpvyt [ 0
] ; hjzk2zv0jgo . agekrrwrxe [ 1 ] = ejhzoebun3 . Constant2_Value_d2q1dqpvyt
[ 1 ] ; } hjzk2zv0jgo . mo2yojf2sc = hjzk2zv0jgo . agekrrwrxe [ 0 ] /
hjzk2zv0jgo . agekrrwrxe [ 1 ] ; hjzk2zv0jgo . eskkgchcvy [ 0 ] = hjzk2zv0jgo
. kuucijn2sg [ 1 ] + hjzk2zv0jgo . kuucijn2sg [ 3 ] ; hjzk2zv0jgo .
eskkgchcvy [ 1 ] = hjzk2zv0jgo . kuucijn2sg [ 2 ] + hjzk2zv0jgo . kuucijn2sg
[ 6 ] ; hjzk2zv0jgo . eskkgchcvy [ 2 ] = hjzk2zv0jgo . kuucijn2sg [ 7 ] -
hjzk2zv0jgo . kuucijn2sg [ 5 ] ; hjzk2zv0jgo . n5xzk05dzf [ 0 ] = hjzk2zv0jgo
. mo2yojf2sc * hjzk2zv0jgo . eskkgchcvy [ 0 ] ; hjzk2zv0jgo . n5xzk05dzf [ 1
] = hjzk2zv0jgo . mo2yojf2sc * hjzk2zv0jgo . eskkgchcvy [ 1 ] ; hjzk2zv0jgo .
n5xzk05dzf [ 2 ] = hjzk2zv0jgo . mo2yojf2sc * hjzk2zv0jgo . eskkgchcvy [ 2 ]
; hjzk2zv0jgo . kdhpinsv2d [ 0 ] = hjzk2zv0jgo . n5xzk05dzf [ 2 ] ;
hjzk2zv0jgo . kdhpinsv2d [ 2 ] = hjzk2zv0jgo . n5xzk05dzf [ 0 ] ; hjzk2zv0jgo
. kdhpinsv2d [ 3 ] = hjzk2zv0jgo . n5xzk05dzf [ 1 ] ; hjzk2zv0jgo .
kdhpinsv2d [ 1 ] = ejhzoebun3 . Gain_Gain_nwvx5b1l42 * hjzk2zv0jgo .
bnbjvkm0ow ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( cd3zedlmwtk
. ei1iqzsamz ) ; } break ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
srUpdateBC ( cd3zedlmwtk . cftrcsvurp ) ; } } cd3zedlmwtk . ksszy2s0p4 =
dvn54uuivp ; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
real_T cm13u0wm32_p ; int32_T i ; for ( i = 0 ; i < 3 ; i ++ ) { cm13u0wm32_p
= ejhzoebun3 . uDOFEulerAngles1_inertia [ 3 * i ] ; hjzk2zv0jgo . inh3dtaqa0
[ 3 * i ] = cm13u0wm32_p ; hjzk2zv0jgo . dd43ilih2a [ 3 * i ] = ejhzoebun3 .
Constant2_Value_ka14f4y45i [ 3 * i ] ; hjzk2zv0jgo . doydg2jjr3 [ 3 * i ] =
cm13u0wm32_p ; cm13u0wm32_p = ejhzoebun3 . uDOFEulerAngles1_inertia [ 3 * i +
1 ] ; hjzk2zv0jgo . inh3dtaqa0 [ 3 * i + 1 ] = cm13u0wm32_p ; hjzk2zv0jgo .
dd43ilih2a [ 3 * i + 1 ] = ejhzoebun3 . Constant2_Value_ka14f4y45i [ 3 * i +
1 ] ; hjzk2zv0jgo . doydg2jjr3 [ 3 * i + 1 ] = cm13u0wm32_p ; cm13u0wm32_p =
ejhzoebun3 . uDOFEulerAngles1_inertia [ 3 * i + 2 ] ; hjzk2zv0jgo .
inh3dtaqa0 [ 3 * i + 2 ] = cm13u0wm32_p ; hjzk2zv0jgo . dd43ilih2a [ 3 * i +
2 ] = ejhzoebun3 . Constant2_Value_ka14f4y45i [ 3 * i + 2 ] ; hjzk2zv0jgo .
doydg2jjr3 [ 3 * i + 2 ] = cm13u0wm32_p ; } hjzk2zv0jgo . bsemagm0nc =
ejhzoebun3 . Constant8_Value ; hjzk2zv0jgo . ay5d1ywjz3 = rtP_uavParam . aero
. CYDr * hjzk2zv0jgo . bsemagm0nc ; hjzk2zv0jgo . naxqiwuy5k = rtP_uavParam .
aero . ClDr * hjzk2zv0jgo . bsemagm0nc ; hjzk2zv0jgo . enach2tzry =
ejhzoebun3 . Constant6_Value ; hjzk2zv0jgo . kcempososy = rtP_uavParam . aero
. ClDa * hjzk2zv0jgo . enach2tzry ; hjzk2zv0jgo . emd4as5gy1 = rtP_uavParam .
aero . CnDr * hjzk2zv0jgo . bsemagm0nc ; hjzk2zv0jgo . ahoyikc4du =
rtP_uavParam . aero . CnDa * hjzk2zv0jgo . enach2tzry ; hjzk2zv0jgo .
ao4zg2uppg = ejhzoebun3 . Constant1_Value_e3lrn0tq01 ; hjzk2zv0jgo .
p43l53pvfy = muDoubleScalarAbs ( hjzk2zv0jgo . enach2tzry ) * rtP_uavParam .
aero . CdDa ; hjzk2zv0jgo . hqoajxwt3g = muDoubleScalarAbs ( hjzk2zv0jgo .
bsemagm0nc ) * rtP_uavParam . aero . CdDr ; hjzk2zv0jgo . pq24tfbcj3 =
muDoubleScalarAbs ( hjzk2zv0jgo . ao4zg2uppg ) * rtP_uavParam . aero . CdDe ;
hjzk2zv0jgo . an3542desc = rtP_uavParam . aero . CLDe * hjzk2zv0jgo .
ao4zg2uppg ; hjzk2zv0jgo . hps1jp4vyd = muDoubleScalarAbs ( hjzk2zv0jgo .
enach2tzry ) * rtP_uavParam . aero . CLDa ; hjzk2zv0jgo . ncvyzjqsre =
rtP_uavParam . aero . CmDe * hjzk2zv0jgo . ao4zg2uppg ; PropellerDynamicsTID1
( & ( cd3zedlmwtk . bm3reeetok . rtb ) ) ; PropellerDynamicsTID1 ( & (
cd3zedlmwtk . kqm1lj2att . rtb ) ) ; PropellerDynamicsTID1 ( & ( cd3zedlmwtk
. eoy4o1rwoy . rtb ) ) ; PropellerDynamicsTID1 ( & ( cd3zedlmwtk . liakohv2jb
. rtb ) ) ; hjzk2zv0jgo . jrjwj2rsbk = ejhzoebun3 . Gain3_Gain_edy3rsxlbj *
ejhzoebun3 . TiltAngle1_Value * ejhzoebun3 . Gain2_Gain_mkw0vlxlzu ;
hjzk2zv0jgo . fdnmbw2vle = ejhzoebun3 . Gain5_Gain_czs0mwtap0 * ejhzoebun3 .
TiltAngle1_Value * ejhzoebun3 . Gain3_Gain_dkq5njqwoe ; hjzk2zv0jgo .
grq2vpxk3r = ejhzoebun3 . Constant9_Value_bw3vkbj2eu ; hjzk2zv0jgo .
fnrgz4g1b4 = 1.0 / ( rtP_uavParam . motor . RPMMAX / 60.0 ) * hjzk2zv0jgo .
grq2vpxk3r ; hjzk2zv0jgo . csbvwarwmh = 1.0 / ( rtP_uavParam . motor . RPMMAX
/ 60.0 ) * ejhzoebun3 . Constant3_Value ; hjzk2zv0jgo . pbqolavxh1 = 1.0 / (
rtP_uavParam . motor . RPMMAX / 60.0 ) * ejhzoebun3 .
Constant2_Value_g531dn02hg ; hjzk2zv0jgo . l3k3mynljv = 1.0 / ( rtP_uavParam
. motor . RPMMAX / 60.0 ) * hjzk2zv0jgo . grq2vpxk3r ; UNUSED_PARAMETER ( tid
) ; } void MdlUpdate ( int_T tid ) { real_T ( * lastU_p ) [ 3 ] ; real_T *
lastU ; if ( cd3zedlmwtk . loxtit5c1e == ( rtInf ) ) { cd3zedlmwtk .
loxtit5c1e = ssGetT ( rtS ) ; lastU = & cd3zedlmwtk . cu0k1tufjn ; } else if
( cd3zedlmwtk . nmooqw0hsr == ( rtInf ) ) { cd3zedlmwtk . nmooqw0hsr = ssGetT
( rtS ) ; lastU = & cd3zedlmwtk . egbzhokzr0 ; } else if ( cd3zedlmwtk .
loxtit5c1e < cd3zedlmwtk . nmooqw0hsr ) { cd3zedlmwtk . loxtit5c1e = ssGetT (
rtS ) ; lastU = & cd3zedlmwtk . cu0k1tufjn ; } else { cd3zedlmwtk .
nmooqw0hsr = ssGetT ( rtS ) ; lastU = & cd3zedlmwtk . egbzhokzr0 ; } * lastU
= hjzk2zv0jgo . cci3mwof5h [ 1 ] ; if ( cd3zedlmwtk . mk2hhitrny == ( rtInf )
) { cd3zedlmwtk . mk2hhitrny = ssGetT ( rtS ) ; lastU_p = & cd3zedlmwtk .
mkzihgyczk ; } else if ( cd3zedlmwtk . oec4smrr1x == ( rtInf ) ) {
cd3zedlmwtk . oec4smrr1x = ssGetT ( rtS ) ; lastU_p = & cd3zedlmwtk .
ogngmlftsj ; } else if ( cd3zedlmwtk . mk2hhitrny < cd3zedlmwtk . oec4smrr1x
) { cd3zedlmwtk . mk2hhitrny = ssGetT ( rtS ) ; lastU_p = & cd3zedlmwtk .
mkzihgyczk ; } else { cd3zedlmwtk . oec4smrr1x = ssGetT ( rtS ) ; lastU_p = &
cd3zedlmwtk . ogngmlftsj ; } ( * lastU_p ) [ 0 ] = hjzk2zv0jgo . cqvuoudnvb [
0 ] ; ( * lastU_p ) [ 1 ] = hjzk2zv0jgo . cqvuoudnvb [ 1 ] ; ( * lastU_p ) [
2 ] = hjzk2zv0jgo . cqvuoudnvb [ 2 ] ; if ( cd3zedlmwtk . hy3naecleu == (
rtInf ) ) { cd3zedlmwtk . hy3naecleu = ssGetT ( rtS ) ; lastU_p = &
cd3zedlmwtk . bisb0vebkm ; } else if ( cd3zedlmwtk . jiuvpdeyn3 == ( rtInf )
) { cd3zedlmwtk . jiuvpdeyn3 = ssGetT ( rtS ) ; lastU_p = & cd3zedlmwtk .
dzy2xz0dmj ; } else if ( cd3zedlmwtk . hy3naecleu < cd3zedlmwtk . jiuvpdeyn3
) { cd3zedlmwtk . hy3naecleu = ssGetT ( rtS ) ; lastU_p = & cd3zedlmwtk .
bisb0vebkm ; } else { cd3zedlmwtk . jiuvpdeyn3 = ssGetT ( rtS ) ; lastU_p = &
cd3zedlmwtk . dzy2xz0dmj ; } ( * lastU_p ) [ 0 ] = hjzk2zv0jgo . d00t0bvsqx [
0 ] ; ( * lastU_p ) [ 1 ] = hjzk2zv0jgo . d00t0bvsqx [ 1 ] ; ( * lastU_p ) [
2 ] = hjzk2zv0jgo . d00t0bvsqx [ 2 ] ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { ai0xcfahxy * _rtXdot ; _rtXdot = ( ( ai0xcfahxy * )
ssGetdX ( rtS ) ) ; _rtXdot -> b2ng5dbar3 [ 0 ] = hjzk2zv0jgo . cr54syolwa [
0 ] ; _rtXdot -> aycekewho5 [ 0 ] = hjzk2zv0jgo . ngexc3pd5z [ 0 ] ; _rtXdot
-> o3b1wolh5o [ 0 ] = hjzk2zv0jgo . luuvgmk2wi [ 0 ] ; _rtXdot -> iaf1otkx4v
[ 0 ] = hjzk2zv0jgo . hbzn3wsbye [ 0 ] ; _rtXdot -> b2ng5dbar3 [ 1 ] =
hjzk2zv0jgo . cr54syolwa [ 1 ] ; _rtXdot -> aycekewho5 [ 1 ] = hjzk2zv0jgo .
ngexc3pd5z [ 1 ] ; _rtXdot -> o3b1wolh5o [ 1 ] = hjzk2zv0jgo . luuvgmk2wi [ 1
] ; _rtXdot -> iaf1otkx4v [ 1 ] = hjzk2zv0jgo . hbzn3wsbye [ 1 ] ; _rtXdot ->
b2ng5dbar3 [ 2 ] = hjzk2zv0jgo . cr54syolwa [ 2 ] ; _rtXdot -> aycekewho5 [ 2
] = hjzk2zv0jgo . ngexc3pd5z [ 2 ] ; _rtXdot -> o3b1wolh5o [ 2 ] =
hjzk2zv0jgo . luuvgmk2wi [ 2 ] ; _rtXdot -> iaf1otkx4v [ 2 ] = hjzk2zv0jgo .
hbzn3wsbye [ 2 ] ; _rtXdot -> ixwpr2do0d = ejhzoebun3 . TransferFcn_A *
ge0boyqs2ez . ixwpr2do0d ; _rtXdot -> ixwpr2do0d += hjzk2zv0jgo . foog324lmw
; _rtXdot -> njrycceqar = ejhzoebun3 . TransferFcn1_A * ge0boyqs2ez .
njrycceqar ; _rtXdot -> njrycceqar += hjzk2zv0jgo . as3le1fis3 ; _rtXdot ->
fnt4rp3muo = ejhzoebun3 . TransferFcn2_A * ge0boyqs2ez . fnt4rp3muo ; _rtXdot
-> fnt4rp3muo += hjzk2zv0jgo . kf0l3ohhjz ; _rtXdot -> ikqvd3inr4 =
ejhzoebun3 . TransferFcn3_A * ge0boyqs2ez . ikqvd3inr4 ; _rtXdot ->
ikqvd3inr4 += hjzk2zv0jgo . l3ad44plkh ; _rtXdot -> chek3m4uua = ejhzoebun3 .
ServoDynamics_A * ge0boyqs2ez . chek3m4uua ; _rtXdot -> chek3m4uua +=
hjzk2zv0jgo . jrjwj2rsbk ; _rtXdot -> ejoaqi5omr = ejhzoebun3 .
ServoDynamics1_A * ge0boyqs2ez . ejoaqi5omr ; _rtXdot -> ejoaqi5omr +=
hjzk2zv0jgo . fdnmbw2vle ; _rtXdot -> olifehdwf1 = ejhzoebun3 . alpha_dot_A *
ge0boyqs2ez . olifehdwf1 ; _rtXdot -> olifehdwf1 += hjzk2zv0jgo . bj1sxp1mzb
; } void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) {
k4tbqcogk5 * _rtZCSV ; _rtZCSV = ( ( k4tbqcogk5 * ) ssGetSolverZcSignalVector
( rtS ) ) ; _rtZCSV -> mj2nd01fvb = hjzk2zv0jgo . lmvkheskr5 - ejhzoebun3 .
Saturation_UpperSat ; _rtZCSV -> okehsjdjze = hjzk2zv0jgo . lmvkheskr5 -
ejhzoebun3 . Saturation_LowerSat ; _rtZCSV -> d4134ljoqe = hjzk2zv0jgo .
cqvuoudnvb [ 2 ] - ejhzoebun3 . Constant_Value_a1crlzduby ; _rtZCSV ->
azw1tuh21k = ejhzoebun3 . Constant1_Value_e5cors3m1f - hjzk2zv0jgo .
cci3mwof5h [ 1 ] ; hgebfhb0qf ( & hjzk2zv0jgo . fnrgz4g1b4 , & ( ( (
k4tbqcogk5 * ) ssGetSolverZcSignalVector ( rtS ) ) -> jq4b3o2gcr ) ) ;
hgebfhb0qf ( & hjzk2zv0jgo . l3k3mynljv , & ( ( ( k4tbqcogk5 * )
ssGetSolverZcSignalVector ( rtS ) ) -> oy5uwkavmh ) ) ; hgebfhb0qf ( &
hjzk2zv0jgo . csbvwarwmh , & ( ( ( k4tbqcogk5 * ) ssGetSolverZcSignalVector (
rtS ) ) -> dlimeblvwm ) ) ; hgebfhb0qf ( & hjzk2zv0jgo . pbqolavxh1 , & ( ( (
k4tbqcogk5 * ) ssGetSolverZcSignalVector ( rtS ) ) -> gjeiwklp2r ) ) ;
_rtZCSV -> l2uwd41ub4 = hjzk2zv0jgo . jmzubjfi5o - ejhzoebun3 .
Saturation_UpperSat_htwhs01fr3 ; _rtZCSV -> bo1bdoiaf3 = hjzk2zv0jgo .
jmzubjfi5o - ejhzoebun3 . Saturation_LowerSat_kcxkvwwdv0 ; _rtZCSV ->
bln3tqbtqe = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_aylehtgq01 ; _rtZCSV -> l1o3i1oqrx = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_ndgcjhroam ; _rtZCSV ->
ni1brxmciz = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_d1rjww4nbg ; _rtZCSV -> fpz5qmunou = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_litbrtzvri ; _rtZCSV ->
hfe0of0iao = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_c3uix3heb2 ; _rtZCSV -> krrp3ebvux = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_gehmbnjmeu ; _rtZCSV ->
mqxdv0xa53 = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_pb05vvfxhg ; _rtZCSV -> c05udw55yo = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_ku5qdt5pdh ; _rtZCSV ->
hpfxuwvqld = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_jdnic1fm30 ; _rtZCSV -> pjolz5szyi = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_h0ypdmyj1j ; _rtZCSV ->
ez3wzxnrpy = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_dmxdc5sj5d ; _rtZCSV -> dctno2axho = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_bkujms4faw ; _rtZCSV ->
la4qimc4ih = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_iz3v2skdar ; _rtZCSV -> njimuojkuu = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_ert5yahf0x ; _rtZCSV ->
fw2yw0aczb = hjzk2zv0jgo . nvhx5js3b5 - ejhzoebun3 .
Saturation_UpperSat_goq0fmwbyd ; _rtZCSV -> fvbsvgsi4a = hjzk2zv0jgo .
nvhx5js3b5 - ejhzoebun3 . Saturation_LowerSat_ji1x0rnkti ; _rtZCSV ->
ml13k444j1 = 0.0 ; if ( hjzk2zv0jgo . mmtwhhrgdw > 0.0 ) { _rtZCSV ->
ml13k444j1 = 1.0 ; } { real_T * zcsv = & ( ( ( k4tbqcogk5 * )
ssGetSolverZcSignalVector ( rtS ) ) -> hhwytt5znk [ 0 ] ) ; int_T i ; for ( i
= 0 ; i < 8 ; i ++ ) { zcsv [ i ] = 0.0 ; } } if ( cd3zedlmwtk . fqno2nhg0i
== 1 ) { _rtZCSV -> hhwytt5znk [ 0 ] = 0.0 ; _rtZCSV -> hhwytt5znk [ 1 ] =
0.0 ; if ( ( hjzk2zv0jgo . kuucijn2sg [ 4 ] > hjzk2zv0jgo . kuucijn2sg [ 0 ]
) && ( hjzk2zv0jgo . kuucijn2sg [ 4 ] > hjzk2zv0jgo . kuucijn2sg [ 8 ] ) ) {
_rtZCSV -> hhwytt5znk [ 0 ] = 1.0 ; } else if ( hjzk2zv0jgo . kuucijn2sg [ 8
] > hjzk2zv0jgo . kuucijn2sg [ 0 ] ) { _rtZCSV -> hhwytt5znk [ 1 ] = 1.0 ; }
{ real_T * zcsv = & ( ( ( k4tbqcogk5 * ) ssGetSolverZcSignalVector ( rtS ) )
-> phmjvykwqy ) ; int_T i ; for ( i = 0 ; i < 2 ; i ++ ) { zcsv [ i ] = 0.0 ;
} } if ( cd3zedlmwtk . fodrtj5jvy == 0 ) { _rtZCSV -> phmjvykwqy =
hjzk2zv0jgo . hzkzgft450 ; _rtZCSV -> kqxnhk4qq5 = hjzk2zv0jgo . dbxom3ehuc -
ejhzoebun3 . Switch_Threshold ; } { real_T * zcsv = & ( ( ( k4tbqcogk5 * )
ssGetSolverZcSignalVector ( rtS ) ) -> oaq3ow1wpi ) ; int_T i ; for ( i = 0 ;
i < 2 ; i ++ ) { zcsv [ i ] = 0.0 ; } } if ( cd3zedlmwtk . fodrtj5jvy == 1 )
{ _rtZCSV -> oaq3ow1wpi = hjzk2zv0jgo . jvf34px5ss ; _rtZCSV -> dlpxoi42ag =
hjzk2zv0jgo . p10gcot45r - ejhzoebun3 . Switch_Threshold_b1eng0x1sz ; } {
real_T * zcsv = & ( ( ( k4tbqcogk5 * ) ssGetSolverZcSignalVector ( rtS ) ) ->
in5yzqv22v ) ; int_T i ; for ( i = 0 ; i < 2 ; i ++ ) { zcsv [ i ] = 0.0 ; }
} if ( cd3zedlmwtk . fodrtj5jvy == 2 ) { _rtZCSV -> in5yzqv22v = hjzk2zv0jgo
. bnbjvkm0ow ; _rtZCSV -> luatizghpn = hjzk2zv0jgo . dgibgw2vs2 - ejhzoebun3
. Switch_Threshold_bzshkgitvc ; } } } void MdlTerminate ( void ) { ctvtngd0gv
( & ( cd3zedlmwtk . bm3reeetok . rtm ) ) ; ctvtngd0gv ( & ( cd3zedlmwtk .
kqm1lj2att . rtm ) ) ; ctvtngd0gv ( & ( cd3zedlmwtk . eoy4o1rwoy . rtm ) ) ;
ctvtngd0gv ( & ( cd3zedlmwtk . liakohv2jb . rtm ) ) ; { if ( cd3zedlmwtk .
b1sw42zjhi . AQHandles ) { sdiTerminateStreaming ( & cd3zedlmwtk . b1sw42zjhi
. AQHandles ) ; } } { if ( cd3zedlmwtk . gxbxhovrgp . AQHandles ) {
sdiTerminateStreaming ( & cd3zedlmwtk . gxbxhovrgp . AQHandles ) ; } } { if (
cd3zedlmwtk . aged3k2pcj . AQHandles ) { sdiTerminateStreaming ( &
cd3zedlmwtk . aged3k2pcj . AQHandles ) ; } } { if ( cd3zedlmwtk . okgw2pzqbt
. AQHandles ) { sdiTerminateStreaming ( & cd3zedlmwtk . okgw2pzqbt .
AQHandles ) ; } } { if ( cd3zedlmwtk . fnjq4dcfmy . AQHandles ) {
sdiTerminateStreaming ( & cd3zedlmwtk . fnjq4dcfmy . AQHandles ) ; } } { if (
cd3zedlmwtk . aj4ml0ju0j . AQHandles ) { sdiTerminateStreaming ( &
cd3zedlmwtk . aj4ml0ju0j . AQHandles ) ; } } { if ( cd3zedlmwtk . jfucdonibi
. AQHandles ) { sdiTerminateStreaming ( & cd3zedlmwtk . jfucdonibi .
AQHandles ) ; } } { if ( cd3zedlmwtk . ldwyse5jwq . AQHandles ) {
sdiTerminateStreaming ( & cd3zedlmwtk . ldwyse5jwq . AQHandles ) ; } } { if (
cd3zedlmwtk . n2klgvknco . AQHandles ) { sdiTerminateStreaming ( &
cd3zedlmwtk . n2klgvknco . AQHandles ) ; } } { if ( cd3zedlmwtk . i253u1jn33
. AQHandles ) { sdiTerminateStreaming ( & cd3zedlmwtk . i253u1jn33 .
AQHandles ) ; } } { if ( cd3zedlmwtk . c2katuywif . AQHandles ) {
sdiTerminateStreaming ( & cd3zedlmwtk . c2katuywif . AQHandles ) ; } } { if (
cd3zedlmwtk . cijilelxe3 . AQHandles ) { sdiTerminateStreaming ( &
cd3zedlmwtk . cijilelxe3 . AQHandles ) ; } } { if ( cd3zedlmwtk . fguaac4ehu
. AQHandles ) { sdiTerminateStreaming ( & cd3zedlmwtk . fguaac4ehu .
AQHandles ) ; } } { if ( cd3zedlmwtk . e1zyqwjknc . AQHandles ) {
sdiTerminateStreaming ( & cd3zedlmwtk . e1zyqwjknc . AQHandles ) ; } } { if (
cd3zedlmwtk . f44csx1gfq . AQHandles ) { sdiTerminateStreaming ( &
cd3zedlmwtk . f44csx1gfq . AQHandles ) ; } } { if ( cd3zedlmwtk . b4qcpdu5rl
. AQHandles ) { sdiTerminateStreaming ( & cd3zedlmwtk . b4qcpdu5rl .
AQHandles ) ; } } { if ( cd3zedlmwtk . pu5zuzij3z . AQHandles ) {
sdiTerminateStreaming ( & cd3zedlmwtk . pu5zuzij3z . AQHandles ) ; } } }
static void mr_Dynamics3_cacheDataAsMxArray ( mxArray * destArray , mwIndex i
, int j , const void * srcData , size_t numBytes ) ; static void
mr_Dynamics3_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Dynamics3_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Dynamics3_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Dynamics3_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Dynamics3_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Dynamics3_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Dynamics3_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Dynamics3_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Dynamics3_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Dynamics3_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Dynamics3_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Dynamics3_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Dynamics3_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_Dynamics3_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Dynamics3_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Dynamics3_GetDWork ( ) { static const char_T *
ssDWFieldNames [ 3 ] = { "hjzk2zv0jgo" , "cd3zedlmwtk" , "NULL_PrevZCX" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Dynamics3_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
hjzk2zv0jgo ) , sizeof ( hjzk2zv0jgo ) ) ; { static const char_T *
rtdwDataFieldNames [ 69 ] = { "cd3zedlmwtk.bm3reeetok" ,
"cd3zedlmwtk.kqm1lj2att" , "cd3zedlmwtk.eoy4o1rwoy" ,
"cd3zedlmwtk.liakohv2jb" , "cd3zedlmwtk.loxtit5c1e" ,
"cd3zedlmwtk.cu0k1tufjn" , "cd3zedlmwtk.nmooqw0hsr" ,
"cd3zedlmwtk.egbzhokzr0" , "cd3zedlmwtk.mk2hhitrny" ,
"cd3zedlmwtk.mkzihgyczk" , "cd3zedlmwtk.oec4smrr1x" ,
"cd3zedlmwtk.ogngmlftsj" , "cd3zedlmwtk.hy3naecleu" ,
"cd3zedlmwtk.bisb0vebkm" , "cd3zedlmwtk.jiuvpdeyn3" ,
"cd3zedlmwtk.dzy2xz0dmj" , "cd3zedlmwtk.i0hphjuxva" ,
"cd3zedlmwtk.nl31v5w0ne" , "cd3zedlmwtk.c5tnxxhmao" ,
"cd3zedlmwtk.ksszy2s0p4" , "cd3zedlmwtk.mruvr1k0o4" ,
"cd3zedlmwtk.hpbs0pv0ja" , "cd3zedlmwtk.ksxay1wm50" ,
"cd3zedlmwtk.i4tbqjyhaq" , "cd3zedlmwtk.eem1bmg2vx" ,
"cd3zedlmwtk.ptpami1mqf" , "cd3zedlmwtk.dsgl5lbh0v" ,
"cd3zedlmwtk.hj4clfy4lk" , "cd3zedlmwtk.pwej4sp12d" ,
"cd3zedlmwtk.dne2ysu0rs" , "cd3zedlmwtk.nmwptmhta5" ,
"cd3zedlmwtk.mpo4kumew4" , "cd3zedlmwtk.a2yveaeuqa" ,
"cd3zedlmwtk.a1a5rahew4" , "cd3zedlmwtk.j5mbuidgdb" ,
"cd3zedlmwtk.fqno2nhg0i" , "cd3zedlmwtk.jcxbkbqufo" ,
"cd3zedlmwtk.grss1hcqfy" , "cd3zedlmwtk.gwsyjhto3i" ,
"cd3zedlmwtk.j2lgfwz4nb" , "cd3zedlmwtk.nmjkdxbctr" ,
"cd3zedlmwtk.mlektwyh03" , "cd3zedlmwtk.hkexsdmmiq" ,
"cd3zedlmwtk.jouu1ys3n0" , "cd3zedlmwtk.dy3it3hprz" ,
"cd3zedlmwtk.apkslfbs4p" , "cd3zedlmwtk.cftrcsvurp" ,
"cd3zedlmwtk.fodrtj5jvy" , "cd3zedlmwtk.ei1iqzsamz" ,
"cd3zedlmwtk.cndsbiglgj" , "cd3zedlmwtk.pi3di1b0u1" ,
"cd3zedlmwtk.aqzoa0ngxb" , "cd3zedlmwtk.jy2jzur21d" ,
"cd3zedlmwtk.huc0wlm4jz" , "cd3zedlmwtk.cnnxvlxj4k" ,
"cd3zedlmwtk.jfsreelaxk" , "cd3zedlmwtk.imaif5mqhv" ,
"cd3zedlmwtk.nz22oshr1s" , "cd3zedlmwtk.gtpsr3jsav" ,
"cd3zedlmwtk.bdb2drldzc" , "cd3zedlmwtk.ijem1srja2" ,
"cd3zedlmwtk.nqf2anvknn" , "cd3zedlmwtk.i55hj3bwoh" ,
"cd3zedlmwtk.gdxc324iwa" , "cd3zedlmwtk.cmennrwj1m" ,
"cd3zedlmwtk.oeildbcyu5" , "cd3zedlmwtk.fv0l3l0qhm.dynzrd2nl1" ,
"cd3zedlmwtk.en4thmesjh.dynzrd2nl1" , "cd3zedlmwtk.kfjac3xldmi.dynzrd2nl1" ,
} ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 69 ,
rtdwDataFieldNames ) ; { mxArray * varData = mr_PropellerDynamics_GetDWork (
& ( cd3zedlmwtk . bm3reeetok ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 ,
varData ) ; } { mxArray * varData = mr_PropellerDynamics_GetDWork ( & (
cd3zedlmwtk . kqm1lj2att ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 ,
varData ) ; } { mxArray * varData = mr_PropellerDynamics_GetDWork ( & (
cd3zedlmwtk . eoy4o1rwoy ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 ,
varData ) ; } { mxArray * varData = mr_PropellerDynamics_GetDWork ( & (
cd3zedlmwtk . liakohv2jb ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 3 ,
varData ) ; } mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( cd3zedlmwtk . loxtit5c1e ) , sizeof ( cd3zedlmwtk . loxtit5c1e )
) ; mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
cd3zedlmwtk . cu0k1tufjn ) , sizeof ( cd3zedlmwtk . cu0k1tufjn ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
cd3zedlmwtk . nmooqw0hsr ) , sizeof ( cd3zedlmwtk . nmooqw0hsr ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
cd3zedlmwtk . egbzhokzr0 ) , sizeof ( cd3zedlmwtk . egbzhokzr0 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
cd3zedlmwtk . mk2hhitrny ) , sizeof ( cd3zedlmwtk . mk2hhitrny ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
cd3zedlmwtk . mkzihgyczk ) , sizeof ( cd3zedlmwtk . mkzihgyczk ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
cd3zedlmwtk . oec4smrr1x ) , sizeof ( cd3zedlmwtk . oec4smrr1x ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
cd3zedlmwtk . ogngmlftsj ) , sizeof ( cd3zedlmwtk . ogngmlftsj ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
cd3zedlmwtk . hy3naecleu ) , sizeof ( cd3zedlmwtk . hy3naecleu ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
cd3zedlmwtk . bisb0vebkm ) , sizeof ( cd3zedlmwtk . bisb0vebkm ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
cd3zedlmwtk . jiuvpdeyn3 ) , sizeof ( cd3zedlmwtk . jiuvpdeyn3 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
cd3zedlmwtk . dzy2xz0dmj ) , sizeof ( cd3zedlmwtk . dzy2xz0dmj ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
cd3zedlmwtk . i0hphjuxva ) , sizeof ( cd3zedlmwtk . i0hphjuxva ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
cd3zedlmwtk . nl31v5w0ne ) , sizeof ( cd3zedlmwtk . nl31v5w0ne ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
cd3zedlmwtk . c5tnxxhmao ) , sizeof ( cd3zedlmwtk . c5tnxxhmao ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
cd3zedlmwtk . ksszy2s0p4 ) , sizeof ( cd3zedlmwtk . ksszy2s0p4 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
cd3zedlmwtk . mruvr1k0o4 ) , sizeof ( cd3zedlmwtk . mruvr1k0o4 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
cd3zedlmwtk . hpbs0pv0ja ) , sizeof ( cd3zedlmwtk . hpbs0pv0ja ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
cd3zedlmwtk . ksxay1wm50 ) , sizeof ( cd3zedlmwtk . ksxay1wm50 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
cd3zedlmwtk . i4tbqjyhaq ) , sizeof ( cd3zedlmwtk . i4tbqjyhaq ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
cd3zedlmwtk . eem1bmg2vx ) , sizeof ( cd3zedlmwtk . eem1bmg2vx ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
cd3zedlmwtk . ptpami1mqf ) , sizeof ( cd3zedlmwtk . ptpami1mqf ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
cd3zedlmwtk . dsgl5lbh0v ) , sizeof ( cd3zedlmwtk . dsgl5lbh0v ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
cd3zedlmwtk . hj4clfy4lk ) , sizeof ( cd3zedlmwtk . hj4clfy4lk ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
cd3zedlmwtk . pwej4sp12d ) , sizeof ( cd3zedlmwtk . pwej4sp12d ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
cd3zedlmwtk . dne2ysu0rs ) , sizeof ( cd3zedlmwtk . dne2ysu0rs ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
cd3zedlmwtk . nmwptmhta5 ) , sizeof ( cd3zedlmwtk . nmwptmhta5 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
cd3zedlmwtk . mpo4kumew4 ) , sizeof ( cd3zedlmwtk . mpo4kumew4 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
cd3zedlmwtk . a2yveaeuqa ) , sizeof ( cd3zedlmwtk . a2yveaeuqa ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
cd3zedlmwtk . a1a5rahew4 ) , sizeof ( cd3zedlmwtk . a1a5rahew4 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
cd3zedlmwtk . j5mbuidgdb ) , sizeof ( cd3zedlmwtk . j5mbuidgdb ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
cd3zedlmwtk . fqno2nhg0i ) , sizeof ( cd3zedlmwtk . fqno2nhg0i ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
cd3zedlmwtk . jcxbkbqufo ) , sizeof ( cd3zedlmwtk . jcxbkbqufo ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
cd3zedlmwtk . grss1hcqfy ) , sizeof ( cd3zedlmwtk . grss1hcqfy ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
cd3zedlmwtk . gwsyjhto3i ) , sizeof ( cd3zedlmwtk . gwsyjhto3i ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
cd3zedlmwtk . j2lgfwz4nb ) , sizeof ( cd3zedlmwtk . j2lgfwz4nb ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
cd3zedlmwtk . nmjkdxbctr ) , sizeof ( cd3zedlmwtk . nmjkdxbctr ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
cd3zedlmwtk . mlektwyh03 ) , sizeof ( cd3zedlmwtk . mlektwyh03 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
cd3zedlmwtk . hkexsdmmiq ) , sizeof ( cd3zedlmwtk . hkexsdmmiq ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
cd3zedlmwtk . jouu1ys3n0 ) , sizeof ( cd3zedlmwtk . jouu1ys3n0 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
cd3zedlmwtk . dy3it3hprz ) , sizeof ( cd3zedlmwtk . dy3it3hprz ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
cd3zedlmwtk . apkslfbs4p ) , sizeof ( cd3zedlmwtk . apkslfbs4p ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
cd3zedlmwtk . cftrcsvurp ) , sizeof ( cd3zedlmwtk . cftrcsvurp ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
cd3zedlmwtk . fodrtj5jvy ) , sizeof ( cd3zedlmwtk . fodrtj5jvy ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
cd3zedlmwtk . ei1iqzsamz ) , sizeof ( cd3zedlmwtk . ei1iqzsamz ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
cd3zedlmwtk . cndsbiglgj ) , sizeof ( cd3zedlmwtk . cndsbiglgj ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
cd3zedlmwtk . pi3di1b0u1 ) , sizeof ( cd3zedlmwtk . pi3di1b0u1 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
cd3zedlmwtk . aqzoa0ngxb ) , sizeof ( cd3zedlmwtk . aqzoa0ngxb ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
cd3zedlmwtk . jy2jzur21d ) , sizeof ( cd3zedlmwtk . jy2jzur21d ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
cd3zedlmwtk . huc0wlm4jz ) , sizeof ( cd3zedlmwtk . huc0wlm4jz ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
cd3zedlmwtk . cnnxvlxj4k ) , sizeof ( cd3zedlmwtk . cnnxvlxj4k ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
cd3zedlmwtk . jfsreelaxk ) , sizeof ( cd3zedlmwtk . jfsreelaxk ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
cd3zedlmwtk . imaif5mqhv ) , sizeof ( cd3zedlmwtk . imaif5mqhv ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
cd3zedlmwtk . nz22oshr1s ) , sizeof ( cd3zedlmwtk . nz22oshr1s ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
cd3zedlmwtk . gtpsr3jsav ) , sizeof ( cd3zedlmwtk . gtpsr3jsav ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
cd3zedlmwtk . bdb2drldzc ) , sizeof ( cd3zedlmwtk . bdb2drldzc ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
cd3zedlmwtk . ijem1srja2 ) , sizeof ( cd3zedlmwtk . ijem1srja2 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
cd3zedlmwtk . nqf2anvknn ) , sizeof ( cd3zedlmwtk . nqf2anvknn ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
cd3zedlmwtk . i55hj3bwoh ) , sizeof ( cd3zedlmwtk . i55hj3bwoh ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
cd3zedlmwtk . gdxc324iwa ) , sizeof ( cd3zedlmwtk . gdxc324iwa ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
cd3zedlmwtk . cmennrwj1m ) , sizeof ( cd3zedlmwtk . cmennrwj1m ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
cd3zedlmwtk . oeildbcyu5 ) , sizeof ( cd3zedlmwtk . oeildbcyu5 ) ) ;
mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
cd3zedlmwtk . fv0l3l0qhm . dynzrd2nl1 ) , sizeof ( cd3zedlmwtk . fv0l3l0qhm .
dynzrd2nl1 ) ) ; mr_Dynamics3_cacheDataAsMxArray ( rtdwData , 0 , 67 , (
const void * ) & ( cd3zedlmwtk . en4thmesjh . dynzrd2nl1 ) , sizeof (
cd3zedlmwtk . en4thmesjh . dynzrd2nl1 ) ) ; mr_Dynamics3_cacheDataAsMxArray (
rtdwData , 0 , 68 , ( const void * ) & ( cd3zedlmwtk . kfjac3xldmi .
dynzrd2nl1 ) , sizeof ( cd3zedlmwtk . kfjac3xldmi . dynzrd2nl1 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Dynamics3_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( hjzk2zv0jgo ) , ssDW , 0
, 0 , sizeof ( hjzk2zv0jgo ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_PropellerDynamics_SetDWork ( & (
cd3zedlmwtk . bm3reeetok ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_PropellerDynamics_SetDWork ( & ( cd3zedlmwtk . kqm1lj2att ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ; mr_PropellerDynamics_SetDWork ( &
( cd3zedlmwtk . eoy4o1rwoy ) , mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ;
mr_PropellerDynamics_SetDWork ( & ( cd3zedlmwtk . liakohv2jb ) ,
mxGetFieldByNumber ( rtdwData , 0 , 3 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . loxtit5c1e
) , rtdwData , 0 , 4 , sizeof ( cd3zedlmwtk . loxtit5c1e ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . cu0k1tufjn
) , rtdwData , 0 , 5 , sizeof ( cd3zedlmwtk . cu0k1tufjn ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . nmooqw0hsr
) , rtdwData , 0 , 6 , sizeof ( cd3zedlmwtk . nmooqw0hsr ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . egbzhokzr0
) , rtdwData , 0 , 7 , sizeof ( cd3zedlmwtk . egbzhokzr0 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . mk2hhitrny
) , rtdwData , 0 , 8 , sizeof ( cd3zedlmwtk . mk2hhitrny ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . mkzihgyczk
) , rtdwData , 0 , 9 , sizeof ( cd3zedlmwtk . mkzihgyczk ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . oec4smrr1x
) , rtdwData , 0 , 10 , sizeof ( cd3zedlmwtk . oec4smrr1x ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . ogngmlftsj
) , rtdwData , 0 , 11 , sizeof ( cd3zedlmwtk . ogngmlftsj ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . hy3naecleu
) , rtdwData , 0 , 12 , sizeof ( cd3zedlmwtk . hy3naecleu ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . bisb0vebkm
) , rtdwData , 0 , 13 , sizeof ( cd3zedlmwtk . bisb0vebkm ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . jiuvpdeyn3
) , rtdwData , 0 , 14 , sizeof ( cd3zedlmwtk . jiuvpdeyn3 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . dzy2xz0dmj
) , rtdwData , 0 , 15 , sizeof ( cd3zedlmwtk . dzy2xz0dmj ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . i0hphjuxva
) , rtdwData , 0 , 16 , sizeof ( cd3zedlmwtk . i0hphjuxva ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . nl31v5w0ne
) , rtdwData , 0 , 17 , sizeof ( cd3zedlmwtk . nl31v5w0ne ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . c5tnxxhmao
) , rtdwData , 0 , 18 , sizeof ( cd3zedlmwtk . c5tnxxhmao ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . ksszy2s0p4
) , rtdwData , 0 , 19 , sizeof ( cd3zedlmwtk . ksszy2s0p4 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . mruvr1k0o4
) , rtdwData , 0 , 20 , sizeof ( cd3zedlmwtk . mruvr1k0o4 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . hpbs0pv0ja
) , rtdwData , 0 , 21 , sizeof ( cd3zedlmwtk . hpbs0pv0ja ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . ksxay1wm50
) , rtdwData , 0 , 22 , sizeof ( cd3zedlmwtk . ksxay1wm50 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . i4tbqjyhaq
) , rtdwData , 0 , 23 , sizeof ( cd3zedlmwtk . i4tbqjyhaq ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . eem1bmg2vx
) , rtdwData , 0 , 24 , sizeof ( cd3zedlmwtk . eem1bmg2vx ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . ptpami1mqf
) , rtdwData , 0 , 25 , sizeof ( cd3zedlmwtk . ptpami1mqf ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . dsgl5lbh0v
) , rtdwData , 0 , 26 , sizeof ( cd3zedlmwtk . dsgl5lbh0v ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . hj4clfy4lk
) , rtdwData , 0 , 27 , sizeof ( cd3zedlmwtk . hj4clfy4lk ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . pwej4sp12d
) , rtdwData , 0 , 28 , sizeof ( cd3zedlmwtk . pwej4sp12d ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . dne2ysu0rs
) , rtdwData , 0 , 29 , sizeof ( cd3zedlmwtk . dne2ysu0rs ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . nmwptmhta5
) , rtdwData , 0 , 30 , sizeof ( cd3zedlmwtk . nmwptmhta5 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . mpo4kumew4
) , rtdwData , 0 , 31 , sizeof ( cd3zedlmwtk . mpo4kumew4 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . a2yveaeuqa
) , rtdwData , 0 , 32 , sizeof ( cd3zedlmwtk . a2yveaeuqa ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . a1a5rahew4
) , rtdwData , 0 , 33 , sizeof ( cd3zedlmwtk . a1a5rahew4 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . j5mbuidgdb
) , rtdwData , 0 , 34 , sizeof ( cd3zedlmwtk . j5mbuidgdb ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . fqno2nhg0i
) , rtdwData , 0 , 35 , sizeof ( cd3zedlmwtk . fqno2nhg0i ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . jcxbkbqufo
) , rtdwData , 0 , 36 , sizeof ( cd3zedlmwtk . jcxbkbqufo ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . grss1hcqfy
) , rtdwData , 0 , 37 , sizeof ( cd3zedlmwtk . grss1hcqfy ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . gwsyjhto3i
) , rtdwData , 0 , 38 , sizeof ( cd3zedlmwtk . gwsyjhto3i ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . j2lgfwz4nb
) , rtdwData , 0 , 39 , sizeof ( cd3zedlmwtk . j2lgfwz4nb ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . nmjkdxbctr
) , rtdwData , 0 , 40 , sizeof ( cd3zedlmwtk . nmjkdxbctr ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . mlektwyh03
) , rtdwData , 0 , 41 , sizeof ( cd3zedlmwtk . mlektwyh03 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . hkexsdmmiq
) , rtdwData , 0 , 42 , sizeof ( cd3zedlmwtk . hkexsdmmiq ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . jouu1ys3n0
) , rtdwData , 0 , 43 , sizeof ( cd3zedlmwtk . jouu1ys3n0 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . dy3it3hprz
) , rtdwData , 0 , 44 , sizeof ( cd3zedlmwtk . dy3it3hprz ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . apkslfbs4p
) , rtdwData , 0 , 45 , sizeof ( cd3zedlmwtk . apkslfbs4p ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . cftrcsvurp
) , rtdwData , 0 , 46 , sizeof ( cd3zedlmwtk . cftrcsvurp ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . fodrtj5jvy
) , rtdwData , 0 , 47 , sizeof ( cd3zedlmwtk . fodrtj5jvy ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . ei1iqzsamz
) , rtdwData , 0 , 48 , sizeof ( cd3zedlmwtk . ei1iqzsamz ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . cndsbiglgj
) , rtdwData , 0 , 49 , sizeof ( cd3zedlmwtk . cndsbiglgj ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . pi3di1b0u1
) , rtdwData , 0 , 50 , sizeof ( cd3zedlmwtk . pi3di1b0u1 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . aqzoa0ngxb
) , rtdwData , 0 , 51 , sizeof ( cd3zedlmwtk . aqzoa0ngxb ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . jy2jzur21d
) , rtdwData , 0 , 52 , sizeof ( cd3zedlmwtk . jy2jzur21d ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . huc0wlm4jz
) , rtdwData , 0 , 53 , sizeof ( cd3zedlmwtk . huc0wlm4jz ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . cnnxvlxj4k
) , rtdwData , 0 , 54 , sizeof ( cd3zedlmwtk . cnnxvlxj4k ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . jfsreelaxk
) , rtdwData , 0 , 55 , sizeof ( cd3zedlmwtk . jfsreelaxk ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . imaif5mqhv
) , rtdwData , 0 , 56 , sizeof ( cd3zedlmwtk . imaif5mqhv ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . nz22oshr1s
) , rtdwData , 0 , 57 , sizeof ( cd3zedlmwtk . nz22oshr1s ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . gtpsr3jsav
) , rtdwData , 0 , 58 , sizeof ( cd3zedlmwtk . gtpsr3jsav ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . bdb2drldzc
) , rtdwData , 0 , 59 , sizeof ( cd3zedlmwtk . bdb2drldzc ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . ijem1srja2
) , rtdwData , 0 , 60 , sizeof ( cd3zedlmwtk . ijem1srja2 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . nqf2anvknn
) , rtdwData , 0 , 61 , sizeof ( cd3zedlmwtk . nqf2anvknn ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . i55hj3bwoh
) , rtdwData , 0 , 62 , sizeof ( cd3zedlmwtk . i55hj3bwoh ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . gdxc324iwa
) , rtdwData , 0 , 63 , sizeof ( cd3zedlmwtk . gdxc324iwa ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . cmennrwj1m
) , rtdwData , 0 , 64 , sizeof ( cd3zedlmwtk . cmennrwj1m ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . oeildbcyu5
) , rtdwData , 0 , 65 , sizeof ( cd3zedlmwtk . oeildbcyu5 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk . fv0l3l0qhm
. dynzrd2nl1 ) , rtdwData , 0 , 66 , sizeof ( cd3zedlmwtk . fv0l3l0qhm .
dynzrd2nl1 ) ) ; mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & (
cd3zedlmwtk . en4thmesjh . dynzrd2nl1 ) , rtdwData , 0 , 67 , sizeof (
cd3zedlmwtk . en4thmesjh . dynzrd2nl1 ) ) ;
mr_Dynamics3_restoreDataFromMxArray ( ( void * ) & ( cd3zedlmwtk .
kfjac3xldmi . dynzrd2nl1 ) , rtdwData , 0 , 68 , sizeof ( cd3zedlmwtk .
kfjac3xldmi . dynzrd2nl1 ) ) ; } } mxArray *
mr_Dynamics3_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ;
mwIndex subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks = 0 ;
size_t numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 1 ] ;
disallowedBlocksInChild [ 0 ] =
mr_PropellerDynamics_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for ( i =
0 ; i < 1 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if (
( NULL ) != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) { data
= data_i ; } numBlocks += mxGetM ( data_i ) ; } } } data = mxCreateCellMatrix
( numBlocks + 10 , 3 ) ; { static const char_T * blockType [ 10 ] = { "Scope"
, "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , } ; static const char_T * blockPath [ 10 ] = {
"Dynamics3/Scope" , "Dynamics3/Scope1" , "Dynamics3/Scope10" ,
"Dynamics3/Scope11" , "Dynamics3/Scope12" , "Dynamics3/Scope13" ,
"Dynamics3/Scope14" , "Dynamics3/Scope15" , "Dynamics3/Scope16" ,
"Dynamics3/Scope17" , } ; static const int reason [ 10 ] = { 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ (
subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 ,
subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ]
] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [
0 ] ] ) ) ; } } { size_t i ; for ( i = 0 ; i < 1 ; ++ i ) { mxArray * data_i
= disallowedBlocksInChild [ i ] ; if ( ( NULL ) != data_i ) { mwIndex subs_i
[ 2 ] , offset_i ; const mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ;
for ( subs_i [ 0 ] = 0 ; subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) {
mwIndex j ; for ( j = 0 ; j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] =
j ; offset_i = mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij =
mxGetCell ( data_i , offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ;
subs [ 1 ] = j ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; }
mxDestroyArray ( data_i ) ; } } } return data ; } void MdlInitializeSizes (
void ) { ssSetNumContStates ( rtS , 19 ) ; ssSetNumPeriodicContStates ( rtS ,
3 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 471 )
; ssSetNumBlockIO ( rtS , 214 ) ; ssSetNumBlockParams ( rtS , 176 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2644094280U ) ; ssSetChecksumVal ( rtS , 1 ,
1939489914U ) ; ssSetChecksumVal ( rtS , 2 , 722370026U ) ; ssSetChecksumVal
( rtS , 3 , 2297019896U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & hjzk2zv0jgo ) ) ; ( void ) memset ( ( ( void * ) & hjzk2zv0jgo
) , 0 , sizeof ( hjzk2zv0jg ) ) ; } { real_T * x = ( real_T * ) & ge0boyqs2ez
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
ge0boyqs2e ) ) ; } { void * dwork = ( void * ) & cd3zedlmwtk ; ssSetRootDWork
( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( cd3zedlmwt ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 29 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } Dynamics3_InitializeDataMapInfo (
) ; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS )
; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Dynamics3" ) ; ssSetPath ( rtS , "Dynamics3" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 100.0 ) ; j3unvwpf2g ( rtS , 0 , 0 , & ( cd3zedlmwtk .
bm3reeetok . rtm ) , & ( cd3zedlmwtk . bm3reeetok . rtb ) , & ( cd3zedlmwtk .
bm3reeetok . rtdw ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model" , 0 , - 1 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cd3zedlmwtk . bm3reeetok . rtm )
, sizeof ( cd3zedlmwtk . bm3reeetok . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } j3unvwpf2g ( rtS , 0 ,
0 , & ( cd3zedlmwtk . kqm1lj2att . rtm ) , & ( cd3zedlmwtk . kqm1lj2att . rtb
) , & ( cd3zedlmwtk . kqm1lj2att . rtdw ) , NULL , 0 , & ( rt_dataMapInfoPtr
-> mmi ) , "Dynamics3/Digital Twin/Force and Moments/Propulsion/Model1" , 1 ,
- 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cd3zedlmwtk . kqm1lj2att
. rtm ) , sizeof ( cd3zedlmwtk . kqm1lj2att . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model1" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } j3unvwpf2g ( rtS , 0 ,
0 , & ( cd3zedlmwtk . eoy4o1rwoy . rtm ) , & ( cd3zedlmwtk . eoy4o1rwoy . rtb
) , & ( cd3zedlmwtk . eoy4o1rwoy . rtdw ) , NULL , 0 , & ( rt_dataMapInfoPtr
-> mmi ) , "Dynamics3/Digital Twin/Force and Moments/Propulsion/Model2" , 2 ,
- 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cd3zedlmwtk . eoy4o1rwoy
. rtm ) , sizeof ( cd3zedlmwtk . eoy4o1rwoy . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model2" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } j3unvwpf2g ( rtS , 0 ,
0 , & ( cd3zedlmwtk . liakohv2jb . rtm ) , & ( cd3zedlmwtk . liakohv2jb . rtb
) , & ( cd3zedlmwtk . liakohv2jb . rtdw ) , NULL , 0 , & ( rt_dataMapInfoPtr
-> mmi ) , "Dynamics3/Digital Twin/Force and Moments/Propulsion/Model3" , 3 ,
- 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cd3zedlmwtk . liakohv2jb
. rtm ) , sizeof ( cd3zedlmwtk . liakohv2jb . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model3" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 3 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; ssSetPeriodicContStateIndices ( rtS , g1rfofi3vea ) ;
( void ) memset ( ( void * ) g1rfofi3vea , 0 , 3 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , eawagf2olp3 ) ; ( void ) memset ( ( void
* ) eawagf2olp3 , 0 , 6 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 19 ] ;
static real_T absTol [ 19 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T
absTolControl [ 19 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 19 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 19 ] ; static uint8_T zcAttributes [ 39 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; { int i ; for ( i =
0 ; i < 19 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 2.0 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepAuto" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 39 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 39 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 2644094280U ) ; ssSetChecksumVal ( rtS , 1 ,
1939489914U ) ; ssSetChecksumVal ( rtS , 2 , 722370026U ) ; ssSetChecksumVal
( rtS , 3 , 2297019896U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 21 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = ( sysRanDType * ) &
cd3zedlmwtk . ei1iqzsamz ; systemRan [ 6 ] = ( sysRanDType * ) & cd3zedlmwtk
. jy2jzur21d ; systemRan [ 7 ] = ( sysRanDType * ) & cd3zedlmwtk . pi3di1b0u1
; systemRan [ 8 ] = ( sysRanDType * ) & cd3zedlmwtk . cftrcsvurp ; systemRan
[ 9 ] = ( sysRanDType * ) & cd3zedlmwtk . cnnxvlxj4k ; systemRan [ 10 ] = (
sysRanDType * ) & cd3zedlmwtk . nmjkdxbctr ; systemRan [ 11 ] = ( sysRanDType
* ) & cd3zedlmwtk . en4thmesjh . dynzrd2nl1 ; systemRan [ 12 ] = (
sysRanDType * ) & cd3zedlmwtk . mlektwyh03 ; systemRan [ 13 ] = ( sysRanDType
* ) & cd3zedlmwtk . gwsyjhto3i ; systemRan [ 14 ] = ( sysRanDType * ) &
cd3zedlmwtk . fv0l3l0qhm . dynzrd2nl1 ; systemRan [ 15 ] = ( sysRanDType * )
& cd3zedlmwtk . dy3it3hprz ; systemRan [ 16 ] = ( sysRanDType * ) &
cd3zedlmwtk . kfjac3xldmi . dynzrd2nl1 ; systemRan [ 17 ] = ( sysRanDType * )
& cd3zedlmwtk . apkslfbs4p ; systemRan [ 18 ] = ( sysRanDType * ) &
cd3zedlmwtk . hkexsdmmiq ; systemRan [ 19 ] = ( sysRanDType * ) & cd3zedlmwtk
. jcxbkbqufo ; systemRan [ 20 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Dynamics3_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_Dynamics3_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Dynamics3_SetDWork ) ; ejhzoebun3 . Saturation_UpperSat_aylehtgq01 = rtInf
; ejhzoebun3 . Saturation_UpperSat_d1rjww4nbg = rtInf ; ejhzoebun3 .
Saturation_UpperSat_c3uix3heb2 = rtInf ; ejhzoebun3 .
Saturation_UpperSat_pb05vvfxhg = rtInf ; ejhzoebun3 .
Saturation_UpperSat_jdnic1fm30 = rtInf ; ejhzoebun3 .
Saturation_UpperSat_dmxdc5sj5d = rtInf ; ejhzoebun3 .
Saturation_UpperSat_iz3v2skdar = rtInf ; ejhzoebun3 .
Saturation_UpperSat_goq0fmwbyd = rtInf ; rt_RapidReadMatFileAndUpdateParams (
rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid ) ; }
