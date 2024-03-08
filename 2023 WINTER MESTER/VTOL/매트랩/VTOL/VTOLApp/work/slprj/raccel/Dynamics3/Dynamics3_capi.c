#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Dynamics3_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 23
#endif
#ifndef SS_INT64
#define SS_INT64 24
#endif
#else
#include "builtin_typeid_types.h"
#include "Dynamics3.h"
#include "Dynamics3_capi.h"
#include "Dynamics3_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Dynamics3/Derivative" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 ,
0 , TARGET_STRING ( "Dynamics3/Derivative1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "Dynamics3/Derivative2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"Dynamics3/AND" ) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 4 , 0 ,
TARGET_STRING ( "Dynamics3/Subsystem/Gain" ) , TARGET_STRING ( "w1" ) , 0 , 0
, 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING ( "Dynamics3/Subsystem/Gain1" ) ,
TARGET_STRING ( "w3" ) , 0 , 0 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"Dynamics3/Subsystem/Gain2" ) , TARGET_STRING ( "w4" ) , 0 , 0 , 0 , 0 , 2 }
, { 7 , 0 , TARGET_STRING ( "Dynamics3/Subsystem/Gain4" ) , TARGET_STRING (
"w2" ) , 0 , 0 , 0 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"Dynamics3/Subsystem1/Constant1" ) , TARGET_STRING ( "dE" ) , 0 , 0 , 0 , 0 ,
2 } , { 9 , 0 , TARGET_STRING ( "Dynamics3/Subsystem1/Constant6" ) ,
TARGET_STRING ( "dA" ) , 0 , 0 , 0 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"Dynamics3/Subsystem1/Constant8" ) , TARGET_STRING ( "dR" ) , 0 , 0 , 0 , 0 ,
2 } , { 11 , 0 , TARGET_STRING ( "Dynamics3/Subsystem1/Constant9" ) ,
TARGET_STRING ( "dT" ) , 0 , 0 , 0 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/p,q,r " ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/ub,vb,wb" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/xe,ye,ze" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Transpose" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Product" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Add" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Add1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Switch" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Switch1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/MATLAB Function1/is_active_c1_Dynamics3"
) , TARGET_STRING ( "is_active_c1_Dynamics3" ) , 0 , 2 , 0 , 0 , 0 } , { 23 ,
0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/phi theta psi"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/Product2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/Selector" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 26 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/Selector1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 27 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/Selector2" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 28 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Vbxw/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Velocity Conversion/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Velocity Conversion1/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/transform to Inertial axes /Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Drag/calcDragVector/is_active_c7_Dynamics3"
) , TARGET_STRING ( "is_active_c7_Dynamics3" ) , 0 , 2 , 0 , 0 , 0 } , { 34 ,
0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Drag/gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Drag/wind (body frame)"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Drag/relative air velocity (body frame)"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 37 , 2 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 2 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data"
) , TARGET_STRING ( "beta" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 2 , TARGET_STRING
(
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 2 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Vair" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Gravity/Gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Gravity/Matrix Multiply" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain2" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain3" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain4" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain5" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain6" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain7" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model" ) , TARGET_STRING
( "" ) , 1 , 0 , 1 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model" ) , TARGET_STRING
( "" ) , 2 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model1" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model1" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model2" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model2" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model3" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model3" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Add" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Add1" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/I x w/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/I x w1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Vbxw/Subsystem/i x j" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Vbxw/Subsystem/j x k" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Vbxw/Subsystem/k x i" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Vbxw/Subsystem1/i x k" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Vbxw/Subsystem1/j x i" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/Vbxw/Subsystem1/k x j" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 91 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Saturation"
) , TARGET_STRING ( "beta" ) , 0 , 0 , 0 , 0 , 0 } , { 92 , 0 , TARGET_STRING
(
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B * Vw"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 94 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 95 , 0 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/IC"
) , TARGET_STRING ( "Tilt2" ) , 0 , 0 , 0 , 0 , 0 } , { 96 , 0 ,
TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/IC1"
) , TARGET_STRING ( "Tilt1" ) , 0 , 0 , 0 , 0 , 0 } , { 97 , 0 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Merge1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 103 , 9 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 106 , 9 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 108 , 9 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/trace(DCM)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/3x3 Cross Product/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/3x3 Cross Product/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/3x3 Cross Product/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/3x3 Cross Product/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/3x3 Cross Product/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate omega_dot/3x3 Cross Product/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 117 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Dynamic Pressure/1//2rhoV^2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 118 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Dynamic Pressure/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 119 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Incidence, Sideslip, & Airspeed/Incidence"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 120 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Incidence, Sideslip, & Airspeed/Sideslip"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 121 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Incidence, Sideslip, & Airspeed/Airspeed"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 122 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 125 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 126 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 127 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 130 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 131 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 132 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 135 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 136 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 137 , 9 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 138 , 9 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 139 , 9 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 140 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Dynamic Pressure/dot/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 141 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Dynamic Pressure/dot/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 142 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Dynamic Pressure/dot/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 143 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Dynamic Pressure/dot/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 144 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Incidence, Sideslip, & Airspeed/dot/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 145 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Incidence, Sideslip, & Airspeed/dot/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 146 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Incidence, Sideslip, & Airspeed/dot/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 147 , 2 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Incidence, Sideslip, & Airspeed/dot/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 148 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Forces/RW2B"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 149 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Forces/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 150 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RW2B"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 151 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 152 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Get Forces and Moments/Fx_a(Drag)"
) , TARGET_STRING ( "Fx_a" ) , 0 , 0 , 0 , 0 , 0 } , { 153 , 4 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Get Forces and Moments/Fy_a(Side)"
) , TARGET_STRING ( "Fy_a" ) , 0 , 0 , 0 , 0 , 0 } , { 154 , 4 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Get Forces and Moments/Fz_a(Lift)"
) , TARGET_STRING ( "Fz_a" ) , 0 , 0 , 0 , 0 , 0 } , { 155 , 3 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Get Forces and Moments/Mx_a"
) , TARGET_STRING ( "Mx_a" ) , 0 , 0 , 0 , 0 , 0 } , { 156 , 3 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Get Forces and Moments/My_a"
) , TARGET_STRING ( "My_a" ) , 0 , 0 , 0 , 0 , 0 } , { 157 , 3 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Get Forces and Moments/Mz_a"
) , TARGET_STRING ( "Mz_a" ) , 0 , 0 , 0 , 0 , 0 } , { 158 , 0 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Get Forces and Moments/Product1"
) , TARGET_STRING ( "qS" ) , 0 , 0 , 0 , 0 , 0 } , { 159 , 4 , TARGET_STRING
(
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Y-down"
) , TARGET_STRING ( "CL" ) , 0 , 0 , 0 , 0 , 0 } , { 160 , 0 , TARGET_STRING
(
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 161 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/alpha_dot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 162 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 163 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 164 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 165 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 166 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 167 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 168 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 169 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 170 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 171 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 172 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 173 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 174 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 175 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 176 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 177 , 5 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 178 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 179 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 180 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 181 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 182 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 183 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 184 , 6 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 185 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 186 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 187 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 188 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 189 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 190 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 191 , 7 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 192 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Forces/RB2W/Reshape 9x1->3x3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 193 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 194 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/31"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 195 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/33"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 196 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/Reshape 9x1->3x3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 197 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Rotate FM to body frame/Rotate Moments/RB2W/sincos"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 198 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 199 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 200 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 201 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/Product1"
) , TARGET_STRING ( "Cldr" ) , 0 , 0 , 0 , 0 , 2 } , { 202 , 3 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/Product4"
) , TARGET_STRING ( "Clb" ) , 0 , 0 , 0 , 0 , 0 } , { 203 , 0 , TARGET_STRING
(
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/Product5"
) , TARGET_STRING ( "CldA" ) , 0 , 0 , 0 , 0 , 2 } , { 204 , 3 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 205 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 206 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 207 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 208 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 209 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 210 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 211 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 212 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 213 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 214 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 215 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 216 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 217 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 218 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 219 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 220 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 221 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 222 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 223 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Product1"
) , TARGET_STRING ( "cmde" ) , 0 , 0 , 0 , 0 , 2 } , { 224 , 3 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Product4"
) , TARGET_STRING ( "cma" ) , 0 , 0 , 0 , 0 , 0 } , { 225 , 3 , TARGET_STRING
(
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Sum"
) , TARGET_STRING ( "total" ) , 0 , 0 , 0 , 0 , 0 } , { 226 , 0 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Rotate Vw/RL2B/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 227 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 228 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 229 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 230 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 231 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 232 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 233 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Lift due to pitch rate/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 234 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Lift due to pitch rate/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 235 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Subsystem/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 236 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Subsystem/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 237 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Subsystem/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 238 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/roll rate fact/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 239 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/roll rate fact/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 240 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/roll rate fact/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 241 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/roll rate fact/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 242 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/roll rate fact/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 243 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/yaw rate fact/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 244 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/yaw rate fact/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 245 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/roll rate fact/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 246 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/roll rate fact/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 247 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/yaw rate fact/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 248 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/yaw rate fact/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 249 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Lift due to pitch rate/pitch rate factor/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 250 , 4 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Lift due to pitch rate/pitch rate factor/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 251 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Lift due to pitch rate/pitch rate factor/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 252 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Lift due to pitch rate/pitch rate factor/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 253 , 3 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Lift due to pitch rate/pitch rate factor/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 254 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Lift due to pitch rate/pitch rate factor/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 255 , TARGET_STRING ( "Dynamics3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 256 , TARGET_STRING (
"Dynamics3/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 257 ,
TARGET_STRING ( "Dynamics3/Digital Twin/6DOF (Euler Angles)1" ) ,
TARGET_STRING ( "xme_0" ) , 0 , 6 , 0 } , { 258 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1" ) , TARGET_STRING ( "Vm_0" ) ,
0 , 6 , 0 } , { 259 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1" ) , TARGET_STRING ( "eul_0" ) ,
0 , 6 , 0 } , { 260 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1" ) , TARGET_STRING ( "pm_0" ) ,
0 , 6 , 0 } , { 261 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1" ) , TARGET_STRING ( "mass_0" )
, 0 , 0 , 0 } , { 262 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1" ) , TARGET_STRING ( "inertia" )
, 0 , 2 , 0 } , { 263 , TARGET_STRING ( "Dynamics3/Subsystem/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 264 , TARGET_STRING (
"Dynamics3/Subsystem/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } ,
{ 265 , TARGET_STRING ( "Dynamics3/Subsystem/TiltAngle1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 266 , TARGET_STRING ( "Dynamics3/Subsystem/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 267 , TARGET_STRING (
"Dynamics3/Subsystem/Gain5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
268 , TARGET_STRING ( "Dynamics3/Subsystem1/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 269 , TARGET_STRING (
"Dynamics3/Subsystem1/Constant6" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 270 , TARGET_STRING ( "Dynamics3/Subsystem1/Constant8" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 271 , TARGET_STRING (
"Dynamics3/Subsystem1/Constant9" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 272 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/AeroSwitch" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 273 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Constant4" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 274 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Constant5" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 275 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Switch" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 276 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Switch1" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 277 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions"
) , TARGET_STRING ( "action" ) , 2 , 0 , 0 } , { 278 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions"
) , TARGET_STRING ( "tolerance" ) , 0 , 0 , 0 } , { 279 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/phi theta psi"
) , TARGET_STRING ( "WrappedStateUpperValue" ) , 0 , 0 , 0 } , { 280 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM & Euler Angles/phi theta psi"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 281 ,
TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Determine Force,  Mass & Inertia/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 282 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Drag/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 283 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Aerodynamic Drag/gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 284 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Gravity/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 1 , 0 } , { 285 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 286 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant11" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 287 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant13" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 288 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 289 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant5" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 290 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant7" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 291 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant8" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 292 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Constant9" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 293 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 294 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain1" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 295 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain2" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 296 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain3" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 297 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain4" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 298 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain5" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 299 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain6" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 300 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Gain7" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 301 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 302 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 303 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn1" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 304 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn1" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 305 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn2" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 306 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn2" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 307 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn3" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 308 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn3" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 309 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Merge"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 9 , 0 } , { 310 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 311 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 312 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 313 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 314 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 315 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 316 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics1"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 317 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics1"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 318 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Weather Model/Simple Model/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 319 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 320 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 321 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 322 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Air Data/Dynamic Pressure/1//2rhoV^2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 323 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 324 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 325 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 326 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Y-down"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 327 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 328 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 329 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/alpha_dot"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 330 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/alpha_dot"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 331 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/alpha_dot"
) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 332 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 333 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 334 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 335 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 336 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 337 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 338 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 339 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 340 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 341 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 342 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 343 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 344 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 345 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 346 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 347 , TARGET_STRING (
 "Dynamics3/Digital Twin/Ground Truth Bus/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 348 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CD/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 349 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Subsystem/Cmq3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 350 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Subsystem/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 351 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Subsystem/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 352 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/Subsystem/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 353 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/roll rate fact/Cmq1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 354 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/roll rate fact/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 355 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/roll rate fact/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 356 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/CY/roll factors/roll rate fact/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 357 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/roll rate fact/Cmq1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 358 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/roll rate fact/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 359 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/roll rate fact/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 360 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/yaw rate fact/Cmq3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 361 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/yaw rate fact/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 362 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cl/roll factors/yaw rate fact/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 363 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/roll rate fact/Cmq1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 364 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/roll rate fact/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 365 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/roll rate fact/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 366 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/yaw rate fact/Cmq3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 367 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/yaw rate fact/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 368 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Lateral Channel/Cn/yaw factors/yaw rate fact/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 369 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Lift due to pitch rate/pitch rate factor/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 370 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Lift due to pitch rate/pitch rate factor/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 371 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/CL/Lift due to pitch rate/pitch rate factor/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 372 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Lift due to pitch rate/pitch rate factor/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 373 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Lift due to pitch rate/pitch rate factor/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 374 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame  Forces and Moments/Wind frame F& M/Longitudinal Channel/Cm/Lift due to pitch rate/pitch rate factor/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 375 , 6
, TARGET_STRING ( "Dynamics3/Digital Twin/6DOF (Euler Angles)1/p,q,r " ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 376 , 3 , TARGET_STRING (
"Dynamics3/Digital Twin/6DOF (Euler Angles)1/ub,vb,wb" ) , TARGET_STRING ( ""
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0 } , { 377 , 9 ,
TARGET_STRING ( "Dynamics3/Digital Twin/6DOF (Euler Angles)1/xe,ye,ze" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 378 , 0 , TARGET_STRING (
 "Dynamics3/Digital Twin/6DOF (Euler Angles)1/Calculate DCM &\nEuler Angles/phi\ntheta\npsi"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 379 , 12 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 380 , 13 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 381 , 14 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn2" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 382 , 15 , TARGET_STRING (
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Transfer Fcn3" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 383 , 16 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 384 , 17 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Propulsion/Tilt Servo Dynamics/Servo Dynamics1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 385 , 18 , TARGET_STRING (
 "Dynamics3/Digital Twin/Force and Moments/Aerodynamic Forces/Compute Body Frame \nForces and Moments/Wind frame F& M/Longitudinal Channel/alpha_dot"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 2 , 1 , 3 , 0 , 4 ,
5 , 6 , 7 , 8 , 9 , 10 } ; static const rtwCAPI_Signals rtRootInputs [ ] = {
{ 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] =
{ { 386 , TARGET_STRING ( "uavParam" ) , 6 , 0 , 0 } , { 387 , TARGET_STRING
( "minPWM" ) , 0 , 0 , 0 } , { 388 , TARGET_STRING ( "tiltIni" ) , 0 , 0 , 0
} , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & hjzk2zv0jgo . gbjq4n01xo , &
hjzk2zv0jgo . mrkfq1tuhw [ 0 ] , & hjzk2zv0jgo . fjb2mtsd40 [ 0 ] , &
hjzk2zv0jgo . nye15ofalv , & hjzk2zv0jgo . fnrgz4g1b4 , & hjzk2zv0jgo .
csbvwarwmh , & hjzk2zv0jgo . pbqolavxh1 , & hjzk2zv0jgo . l3k3mynljv , &
hjzk2zv0jgo . ao4zg2uppg , & hjzk2zv0jgo . enach2tzry , & hjzk2zv0jgo .
bsemagm0nc , & hjzk2zv0jgo . grq2vpxk3r , & hjzk2zv0jgo . cci3mwof5h [ 0 ] ,
& hjzk2zv0jgo . mkn5nhvzbk [ 0 ] , & hjzk2zv0jgo . coqmemksef [ 0 ] , &
hjzk2zv0jgo . i55alh4xud [ 0 ] , & hjzk2zv0jgo . gosnqni3fu [ 0 ] , &
hjzk2zv0jgo . ngexc3pd5z [ 0 ] , & hjzk2zv0jgo . n54mahp50g [ 0 ] , &
hjzk2zv0jgo . cjplmpquxg [ 0 ] , & hjzk2zv0jgo . jjgv3id10o [ 0 ] , &
hjzk2zv0jgo . pcopyw2qch [ 0 ] , & cd3zedlmwtk . nz22oshr1s , & hjzk2zv0jgo .
iksuuwfiau [ 0 ] , & hjzk2zv0jgo . luuvgmk2wi [ 0 ] , & hjzk2zv0jgo .
inh3dtaqa0 [ 0 ] , & hjzk2zv0jgo . dd43ilih2a [ 0 ] , & hjzk2zv0jgo .
doydg2jjr3 [ 0 ] , & hjzk2zv0jgo . lydelxiu4y [ 0 ] , & hjzk2zv0jgo .
ckqg5iy5aq [ 0 ] , & hjzk2zv0jgo . d00t0bvsqx [ 0 ] , & hjzk2zv0jgo .
cqvuoudnvb [ 0 ] , & hjzk2zv0jgo . hbzn3wsbye [ 0 ] , & cd3zedlmwtk .
gtpsr3jsav , & hjzk2zv0jgo . hknbaidp1p [ 0 ] , & hjzk2zv0jgo . ccp2v0is3b [
0 ] , & hjzk2zv0jgo . fclw1sjfex [ 0 ] , & hjzk2zv0jgo . jmzubjfi5o , &
hjzk2zv0jgo . j1b0ohkohh , & hjzk2zv0jgo . nvhx5js3b5 , & hjzk2zv0jgo .
mzpu5t1jkm , & hjzk2zv0jgo . htt3requoy [ 0 ] , & hjzk2zv0jgo . h2ikurznh0 [
0 ] , & hjzk2zv0jgo . jt2k5mojeq [ 0 ] , & hjzk2zv0jgo . ajfq5lcy0h , &
hjzk2zv0jgo . pmsojihl4i , & hjzk2zv0jgo . anxysqocsy [ 0 ] , & hjzk2zv0jgo .
l2qm0okvna [ 0 ] , & hjzk2zv0jgo . guife5a2rz , & hjzk2zv0jgo . h3wr3a4ile [
0 ] , & hjzk2zv0jgo . p1xhzbkl4w [ 0 ] , & hjzk2zv0jgo . hm3usbndrd , &
hjzk2zv0jgo . k5mggrlxlo [ 0 ] , & hjzk2zv0jgo . jzfclqedcy [ 0 ] , &
hjzk2zv0jgo . foog324lmw , & hjzk2zv0jgo . o2rn5svcvi [ 0 ] , & hjzk2zv0jgo .
pht4pxvhfn [ 0 ] , & hjzk2zv0jgo . as3le1fis3 , & hjzk2zv0jgo . on0gwyvdng [
0 ] , & hjzk2zv0jgo . mdmvsl4kx3 [ 0 ] , & hjzk2zv0jgo . kf0l3ohhjz , &
hjzk2zv0jgo . dpxtsc4ct3 [ 0 ] , & hjzk2zv0jgo . ao0nbwn4uy [ 0 ] , &
hjzk2zv0jgo . l3ad44plkh , & hjzk2zv0jgo . fyrtf4ffcd [ 0 ] , & hjzk2zv0jgo .
meez4ih2n2 [ 0 ] , & hjzk2zv0jgo . bgmcqai5at , & hjzk2zv0jgo . cshi4ioghy ,
& hjzk2zv0jgo . php2oi4kgy , & hjzk2zv0jgo . opx2dl1oco , & hjzk2zv0jgo .
kdhpinsv2d [ 0 ] , & hjzk2zv0jgo . kdhpinsv2d [ 0 ] , & hjzk2zv0jgo .
kdhpinsv2d [ 0 ] , & hjzk2zv0jgo . kuucijn2sg [ 0 ] , ( & hjzk2zv0jgo .
kuucijn2sg [ 0 ] + 3 ) , ( & hjzk2zv0jgo . kuucijn2sg [ 0 ] + 6 ) , ( &
hjzk2zv0jgo . kuucijn2sg [ 0 ] + 1 ) , ( & hjzk2zv0jgo . kuucijn2sg [ 0 ] + 4
) , ( & hjzk2zv0jgo . kuucijn2sg [ 0 ] + 7 ) , ( & hjzk2zv0jgo . kuucijn2sg [
0 ] + 2 ) , ( & hjzk2zv0jgo . kuucijn2sg [ 0 ] + 5 ) , ( & hjzk2zv0jgo .
kuucijn2sg [ 0 ] + 8 ) , & hjzk2zv0jgo . pqy3siqenb [ 0 ] , & hjzk2zv0jgo .
jcjs231yq3 [ 0 ] , & hjzk2zv0jgo . oat42lolv5 [ 0 ] , & hjzk2zv0jgo .
jsezxywihe , & hjzk2zv0jgo . jjcp1ov2bg , & hjzk2zv0jgo . ax00eeaw5r , &
hjzk2zv0jgo . ewinmui34k , & hjzk2zv0jgo . crvz5ao1xy , & hjzk2zv0jgo .
fmxtgiqruo , & hjzk2zv0jgo . j1b0ohkohh , & hjzk2zv0jgo . k0yfsplt3r [ 0 ] ,
& hjzk2zv0jgo . jrjwj2rsbk , & hjzk2zv0jgo . fdnmbw2vle , & hjzk2zv0jgo .
aqzdxk22og , & hjzk2zv0jgo . m2r4ovuy32 , & hjzk2zv0jgo . plnoqtrtnf , &
hjzk2zv0jgo . cno5k4jjfd , & hjzk2zv0jgo . kdhpinsv2d [ 0 ] , & hjzk2zv0jgo .
kdhpinsv2d [ 0 ] , & hjzk2zv0jgo . kdhpinsv2d [ 0 ] , & hjzk2zv0jgo .
kdhpinsv2d [ 0 ] , & hjzk2zv0jgo . fi3hy1tf5r [ 0 ] , & hjzk2zv0jgo .
kdhpinsv2d [ 0 ] , & hjzk2zv0jgo . kdhpinsv2d [ 0 ] , & hjzk2zv0jgo .
eo1hh0tubv , ( & hjzk2zv0jgo . kdhpinsv2d [ 0 ] + 1 ) , & hjzk2zv0jgo .
b5njilv2gn , & hjzk2zv0jgo . mmtwhhrgdw , & hjzk2zv0jgo . kuucijn2sg [ 0 ] ,
& hjzk2zv0jgo . pfj1kie4j4 , & hjzk2zv0jgo . dzxlnr5pi4 , & hjzk2zv0jgo .
ltwbxo2m5t , & hjzk2zv0jgo . iurr1vp4ab , & hjzk2zv0jgo . ltjx0tyc53 , &
hjzk2zv0jgo . mwz1mhk5so , & hjzk2zv0jgo . mzpu5t1jkm , & hjzk2zv0jgo .
ilayj5xnmf , & hjzk2zv0jgo . jmzubjfi5o , & hjzk2zv0jgo . lmvkheskr5 , &
hjzk2zv0jgo . nvhx5js3b5 , & hjzk2zv0jgo . eskkgchcvy [ 0 ] , & hjzk2zv0jgo .
kdhpinsv2d [ 0 ] , ( & hjzk2zv0jgo . kdhpinsv2d [ 0 ] + 1 ) , & hjzk2zv0jgo .
n5xzk05dzf [ 0 ] , & hjzk2zv0jgo . bnbjvkm0ow , & hjzk2zv0jgo . dt0lrzjk1o [
0 ] , & hjzk2zv0jgo . kdhpinsv2d [ 0 ] , ( & hjzk2zv0jgo . kdhpinsv2d [ 0 ] +
2 ) , & hjzk2zv0jgo . p01vpysmg2 [ 0 ] , & hjzk2zv0jgo . hzkzgft450 , &
hjzk2zv0jgo . avieazpzba [ 0 ] , & hjzk2zv0jgo . kdhpinsv2d [ 0 ] , ( &
hjzk2zv0jgo . kdhpinsv2d [ 0 ] + 3 ) , & hjzk2zv0jgo . osedtncxqb [ 0 ] , &
hjzk2zv0jgo . jvf34px5ss , ( & hjzk2zv0jgo . fi3hy1tf5r [ 0 ] + 1 ) , &
hjzk2zv0jgo . fi3hy1tf5r [ 0 ] , ( & hjzk2zv0jgo . fi3hy1tf5r [ 0 ] + 2 ) , &
hjzk2zv0jgo . ew1xexz22w , & hjzk2zv0jgo . gp5b442d4z , & hjzk2zv0jgo .
kp0rothnh4 , & hjzk2zv0jgo . dzivdzp2ag , & hjzk2zv0jgo . nhe43pn5nh , &
hjzk2zv0jgo . hehj2dz0gu , & hjzk2zv0jgo . ew4gntkbfp , & hjzk2zv0jgo .
lemypiazxs , & hjzk2zv0jgo . hbvsypwj5y [ 0 ] , & hjzk2zv0jgo . ep0h21kgsz [
0 ] , & hjzk2zv0jgo . k12edtwgur [ 0 ] , & hjzk2zv0jgo . ftpzbdiaki [ 0 ] , &
hjzk2zv0jgo . k3bzmsmu0e , & hjzk2zv0jgo . bcj1qvwgpn , & hjzk2zv0jgo .
itsrgtvmef , & hjzk2zv0jgo . jcgspnlpxp , & hjzk2zv0jgo . b123034b0z , &
hjzk2zv0jgo . kgog4d1fl5 , & hjzk2zv0jgo . dmaajqujzv , & hjzk2zv0jgo .
gl4zkd4p00 , & hjzk2zv0jgo . bj1sxp1mzb , & hjzk2zv0jgo . mnzaajuwwx , &
hjzk2zv0jgo . j1sueqnip0 [ 0 ] , ( & hjzk2zv0jgo . j1sueqnip0 [ 0 ] + 3 ) , (
& hjzk2zv0jgo . j1sueqnip0 [ 0 ] + 6 ) , ( & hjzk2zv0jgo . j1sueqnip0 [ 0 ] +
1 ) , ( & hjzk2zv0jgo . j1sueqnip0 [ 0 ] + 4 ) , ( & hjzk2zv0jgo . j1sueqnip0
[ 0 ] + 7 ) , ( & hjzk2zv0jgo . j1sueqnip0 [ 0 ] + 2 ) , ( & hjzk2zv0jgo .
j1sueqnip0 [ 0 ] + 5 ) , ( & hjzk2zv0jgo . j1sueqnip0 [ 0 ] + 8 ) , ( &
hjzk2zv0jgo . eskkgchcvy [ 0 ] + 1 ) , ( & hjzk2zv0jgo . eskkgchcvy [ 0 ] + 2
) , & hjzk2zv0jgo . eskkgchcvy [ 0 ] , & hjzk2zv0jgo . dgibgw2vs2 , &
hjzk2zv0jgo . mo2yojf2sc , & hjzk2zv0jgo . agekrrwrxe [ 0 ] , & hjzk2zv0jgo .
nyxi4ruo4k , ( & hjzk2zv0jgo . dt0lrzjk1o [ 0 ] + 2 ) , ( & hjzk2zv0jgo .
dt0lrzjk1o [ 0 ] + 1 ) , & hjzk2zv0jgo . dt0lrzjk1o [ 0 ] , & hjzk2zv0jgo .
dbxom3ehuc , & hjzk2zv0jgo . cadfnhzvto , & hjzk2zv0jgo . ezsybgwh4t [ 0 ] ,
& hjzk2zv0jgo . neni45xlk3 , & hjzk2zv0jgo . avieazpzba [ 0 ] , ( &
hjzk2zv0jgo . avieazpzba [ 0 ] + 1 ) , ( & hjzk2zv0jgo . avieazpzba [ 0 ] + 2
) , & hjzk2zv0jgo . p10gcot45r , & hjzk2zv0jgo . grt4kpc5gv , & hjzk2zv0jgo .
nshb4ned5q [ 0 ] , & hjzk2zv0jgo . ezh5prodbs , & hjzk2zv0jgo . d1qtszyg1z [
0 ] , & hjzk2zv0jgo . k1gukjalk1 , & hjzk2zv0jgo . ncb1cpqinu , & hjzk2zv0jgo
. pgnferr3ie , & hjzk2zv0jgo . dvx4kfp2xu [ 0 ] , & hjzk2zv0jgo . p025xqadcy
[ 0 ] , & hjzk2zv0jgo . kx5f1zuazd , & hjzk2zv0jgo . ay5d1ywjz3 , &
hjzk2zv0jgo . oxu2x0ys3i , & hjzk2zv0jgo . naxqiwuy5k , & hjzk2zv0jgo .
aolb2w30s4 , & hjzk2zv0jgo . kcempososy , & hjzk2zv0jgo . jkypjxquxw , &
hjzk2zv0jgo . emd4as5gy1 , & hjzk2zv0jgo . ahn5wc4cba , & hjzk2zv0jgo .
ahoyikc4du , & hjzk2zv0jgo . n4c1sjotli , & hjzk2zv0jgo . ec0ibhsp05 , &
hjzk2zv0jgo . acl4r2rqtj , & hjzk2zv0jgo . a2o0lqsyq3 , & hjzk2zv0jgo .
p43l53pvfy , & hjzk2zv0jgo . hqoajxwt3g , & hjzk2zv0jgo . pq24tfbcj3 , &
hjzk2zv0jgo . luqg24xiyl , & hjzk2zv0jgo . famqpvr3fs , & hjzk2zv0jgo .
dtswxmk2cq , & hjzk2zv0jgo . an3542desc , & hjzk2zv0jgo . hps1jp4vyd , &
hjzk2zv0jgo . abjck5vnui , & hjzk2zv0jgo . dlxjhtpbgt , & hjzk2zv0jgo .
fteax4phdm , & hjzk2zv0jgo . ncvyzjqsre , & hjzk2zv0jgo . mntumjxb41 , &
hjzk2zv0jgo . k22abf0uj2 , & hjzk2zv0jgo . j1sueqnip0 [ 0 ] , & hjzk2zv0jgo .
pmdvzy4gmv , & hjzk2zv0jgo . dwuhvwcohi , & hjzk2zv0jgo . pw3ddy1xfy , &
hjzk2zv0jgo . fmmoructyp , & hjzk2zv0jgo . cyi0sujumx , & hjzk2zv0jgo .
k1sza304jy , & hjzk2zv0jgo . d1mh3tvfxa , & hjzk2zv0jgo . l1p25jpqry , &
hjzk2zv0jgo . knh1oxgwo5 , & hjzk2zv0jgo . jcc2w2dkmn , & hjzk2zv0jgo .
l2t3z55cpu , & hjzk2zv0jgo . gtf4k10ktt , & hjzk2zv0jgo . c2qh0pkvez , &
hjzk2zv0jgo . lwakmo2ko1 , & hjzk2zv0jgo . nfwhxbbek2 , & hjzk2zv0jgo .
iwjeqmaeng , & hjzk2zv0jgo . jrqy11puxr , & hjzk2zv0jgo . oobwvvygfe , &
hjzk2zv0jgo . blossfgznf , & hjzk2zv0jgo . hhes4raj3w , & hjzk2zv0jgo .
gxiiif0c3d , & hjzk2zv0jgo . ksibqgvnrm , & hjzk2zv0jgo . c4xfdotpr0 , &
hjzk2zv0jgo . erkk23cbij , & hjzk2zv0jgo . h4etmfy2eh , & hjzk2zv0jgo .
oecdr5so0f , & hjzk2zv0jgo . gzga0d0jbw , & hjzk2zv0jgo . lsfjlacb3n , &
ejhzoebun3 . Constant_Value_a1crlzduby , & ejhzoebun3 .
Constant1_Value_e5cors3m1f , & ejhzoebun3 . uDOFEulerAngles1_xme_0 [ 0 ] , &
ejhzoebun3 . uDOFEulerAngles1_Vm_0 [ 0 ] , & ejhzoebun3 .
uDOFEulerAngles1_eul_0 [ 0 ] , & ejhzoebun3 . uDOFEulerAngles1_pm_0 [ 0 ] , &
ejhzoebun3 . uDOFEulerAngles1_mass_0 , & ejhzoebun3 .
uDOFEulerAngles1_inertia [ 0 ] , & ejhzoebun3 . Constant2_Value_g531dn02hg ,
& ejhzoebun3 . Constant3_Value , & ejhzoebun3 . TiltAngle1_Value , &
ejhzoebun3 . Gain3_Gain_edy3rsxlbj , & ejhzoebun3 . Gain5_Gain_czs0mwtap0 , &
ejhzoebun3 . Constant1_Value_e3lrn0tq01 , & ejhzoebun3 . Constant6_Value , &
ejhzoebun3 . Constant8_Value , & ejhzoebun3 . Constant9_Value_bw3vkbj2eu , &
ejhzoebun3 . AeroSwitch_Value , & ejhzoebun3 . Constant4_Value , & ejhzoebun3
. Constant5_Value , & ejhzoebun3 . Switch_Threshold_bcdfk5ewvg , & ejhzoebun3
. Switch1_Threshold , & ejhzoebun3 .
DirectionCosineMatrixtoQuaternions_action , & ejhzoebun3 .
DirectionCosineMatrixtoQuaternions_tolerance , & ejhzoebun3 .
phithetapsi_WrappedStateUpperValue , & ejhzoebun3 .
phithetapsi_WrappedStateLowerValue , & ejhzoebun3 .
Constant2_Value_ka14f4y45i [ 0 ] , & ejhzoebun3 . Constant_Value_fc0mezjahc [
0 ] , & ejhzoebun3 . gain_Gain , & ejhzoebun3 . Constant_Value_gaexcfymgv [ 0
] , & ejhzoebun3 . Constant1_Value_e1kmy4vudp , & ejhzoebun3 .
Constant11_Value [ 0 ] , & ejhzoebun3 . Constant13_Value [ 0 ] , & ejhzoebun3
. Constant2_Value_gdybbqcsvv , & ejhzoebun3 . Constant5_Value_bxm0gvh1s4 [ 0
] , & ejhzoebun3 . Constant7_Value [ 0 ] , & ejhzoebun3 .
Constant8_Value_igqaa4heed [ 0 ] , & ejhzoebun3 . Constant9_Value [ 0 ] , &
ejhzoebun3 . Gain_Gain_jj11vie1fs , & ejhzoebun3 . Gain1_Gain_oydo40ajp4 , &
ejhzoebun3 . Gain2_Gain , & ejhzoebun3 . Gain3_Gain , & ejhzoebun3 .
Gain4_Gain , & ejhzoebun3 . Gain5_Gain , & ejhzoebun3 . Gain6_Gain , &
ejhzoebun3 . Gain7_Gain , & ejhzoebun3 . TransferFcn_A , & ejhzoebun3 .
TransferFcn_C , & ejhzoebun3 . TransferFcn1_A , & ejhzoebun3 . TransferFcn1_C
, & ejhzoebun3 . TransferFcn2_A , & ejhzoebun3 . TransferFcn2_C , &
ejhzoebun3 . TransferFcn3_A , & ejhzoebun3 . TransferFcn3_C , & ejhzoebun3 .
Merge_InitialOutput [ 0 ] , & ejhzoebun3 . Saturation_UpperSat , & ejhzoebun3
. Saturation_LowerSat , & ejhzoebun3 . Gain2_Gain_mkw0vlxlzu , & ejhzoebun3 .
Gain3_Gain_dkq5njqwoe , & ejhzoebun3 . ServoDynamics_A , & ejhzoebun3 .
ServoDynamics_C , & ejhzoebun3 . ServoDynamics1_A , & ejhzoebun3 .
ServoDynamics1_C , & ejhzoebun3 . Constant_Value_ohnaqb1c5m [ 0 ] , &
ejhzoebun3 . Constant_Value , & ejhzoebun3 . Gain_Gain_oov4c4xu1y , &
ejhzoebun3 . Gain1_Gain , & ejhzoebun3 . u2rhoV2_Gain , & ejhzoebun3 .
Gain_Gain_nwvx5b1l42 , & ejhzoebun3 . Gain_Gain_fcfwrzioaz , & ejhzoebun3 .
Gain_Gain_g4v1uapw3b , & ejhzoebun3 . Ydown_Gain , & ejhzoebun3 .
Saturation_UpperSat_htwhs01fr3 , & ejhzoebun3 .
Saturation_LowerSat_kcxkvwwdv0 , & ejhzoebun3 . alpha_dot_A , & ejhzoebun3 .
alpha_dot_C , & ejhzoebun3 . alpha_dot_D , & ejhzoebun3 .
Constant1_Value_cxbaat2nbt , & ejhzoebun3 . Constant2_Value_d2q1dqpvyt [ 0 ]
, & ejhzoebun3 . Switch_Threshold_bzshkgitvc , & ejhzoebun3 .
Constant_Value_b5xeupgbfq , & ejhzoebun3 . Constant1_Value , & ejhzoebun3 .
Constant2_Value [ 0 ] , & ejhzoebun3 . Switch_Threshold , & ejhzoebun3 .
Constant_Value_axoyoht1ml , & ejhzoebun3 . Constant1_Value_npwurdb1xs , &
ejhzoebun3 . Constant2_Value_f4vpv0auac [ 0 ] , & ejhzoebun3 .
Switch_Threshold_b1eng0x1sz , & ejhzoebun3 . Constant_Value_nkjzcvm1pd , &
ejhzoebun3 . Constant1_Value_jczvgwu4bk , & ejhzoebun3 .
Constant1_Value_cixdqcjscc , & ejhzoebun3 . Bias1_Bias [ 0 ] , & ejhzoebun3 .
Bias_Bias , & ejhzoebun3 . Gain_Gain_crytncxhkk , & ejhzoebun3 . Cmq3_Value ,
& ejhzoebun3 . Gain_Gain_k2d25npkdk , & ejhzoebun3 .
Saturation_UpperSat_c3uix3heb2 , & ejhzoebun3 .
Saturation_LowerSat_gehmbnjmeu , & ejhzoebun3 . Cmq1_Value , & ejhzoebun3 .
Gain_Gain_p42jtdlvy0 , & ejhzoebun3 . Saturation_UpperSat_d1rjww4nbg , &
ejhzoebun3 . Saturation_LowerSat_litbrtzvri , & ejhzoebun3 .
Cmq1_Value_pah1bbnlbx , & ejhzoebun3 . Saturation_UpperSat_pb05vvfxhg , &
ejhzoebun3 . Saturation_LowerSat_ku5qdt5pdh , & ejhzoebun3 .
Cmq3_Value_ihjv4exhiy , & ejhzoebun3 . Saturation_UpperSat_jdnic1fm30 , &
ejhzoebun3 . Saturation_LowerSat_h0ypdmyj1j , & ejhzoebun3 .
Cmq1_Value_bdczz4tfdc , & ejhzoebun3 . Saturation_UpperSat_iz3v2skdar , &
ejhzoebun3 . Saturation_LowerSat_ert5yahf0x , & ejhzoebun3 .
Cmq3_Value_lpkfxuura1 , & ejhzoebun3 . Saturation_UpperSat_goq0fmwbyd , &
ejhzoebun3 . Saturation_LowerSat_ji1x0rnkti , & ejhzoebun3 .
Gain_Gain_mjsljihjpc , & ejhzoebun3 . Saturation_UpperSat_aylehtgq01 , &
ejhzoebun3 . Saturation_LowerSat_ndgcjhroam , & ejhzoebun3 . Gain_Gain , &
ejhzoebun3 . Saturation_UpperSat_dmxdc5sj5d , & ejhzoebun3 .
Saturation_LowerSat_bkujms4faw , & ge0boyqs2ez . o3b1wolh5o [ 0 ] , &
ge0boyqs2ez . aycekewho5 [ 0 ] , & ge0boyqs2ez . iaf1otkx4v [ 0 ] , &
ge0boyqs2ez . b2ng5dbar3 [ 0 ] , & ge0boyqs2ez . ixwpr2do0d , & ge0boyqs2ez .
njrycceqar , & ge0boyqs2ez . fnt4rp3muo , & ge0boyqs2ez . ikqvd3inr4 , &
ge0boyqs2ez . chek3m4uua , & ge0boyqs2ez . ejoaqi5omr , & ge0boyqs2ez .
olifehdwf1 , & rtP_uavParam , & rtP_minPWM , & rtP_tiltIni , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } , { "struct" ,
"struct_nGmILHkzXdduNopEcCRSWH" , 34 , 1 , sizeof (
struct_nGmILHkzXdduNopEcCRSWH ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_cS9JNIA7WhyhnQhWdnNLhC" , 13 , 35 , sizeof (
struct_cS9JNIA7WhyhnQhWdnNLhC ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_u2xOoEtpHkUtzKIxOOJ85F" , 2 , 48 , sizeof (
struct_u2xOoEtpHkUtzKIxOOJ85F ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_DAy4VMOKMUhj3u1IcOvsOG" , 3 , 50 , sizeof (
struct_DAy4VMOKMUhj3u1IcOvsOG ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "rho" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , rho ) ,
0 , 11 , 0 } , { "CL0" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CL0 )
, 0 , 11 , 0 } , { "CLa" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CLa
) , 0 , 11 , 0 } , { "CLa_dot" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH
, CLa_dot ) , 0 , 11 , 0 } , { "CLq" , rt_offsetof (
struct_nGmILHkzXdduNopEcCRSWH , CLq ) , 0 , 11 , 0 } , { "CLDe" , rt_offsetof
( struct_nGmILHkzXdduNopEcCRSWH , CLDe ) , 0 , 11 , 0 } , { "CLDa" ,
rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CLDa ) , 0 , 11 , 0 } , {
"CDmin" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CDmin ) , 0 , 11 , 0
} , { "K" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , K ) , 0 , 11 , 0 }
, { "CL_CDmin" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CL_CDmin ) , 0
, 11 , 0 } , { "A1" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , A1 ) , 0
, 11 , 0 } , { "CdDe" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CdDe )
, 0 , 11 , 0 } , { "CdDa" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH ,
CdDa ) , 0 , 11 , 0 } , { "CdDr" , rt_offsetof (
struct_nGmILHkzXdduNopEcCRSWH , CdDr ) , 0 , 11 , 0 } , { "Cm0" , rt_offsetof
( struct_nGmILHkzXdduNopEcCRSWH , Cm0 ) , 0 , 11 , 0 } , { "Cma" ,
rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , Cma ) , 0 , 11 , 0 } , { "Cmq"
, rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , Cmq ) , 0 , 11 , 0 } , {
"CmDe" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CmDe ) , 0 , 11 , 0 }
, { "CYb" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CYb ) , 0 , 11 , 0
} , { "CYp" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CYp ) , 0 , 11 ,
0 } , { "CYr" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CYr ) , 0 , 11
, 0 } , { "CYDr" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CYDr ) , 0 ,
11 , 0 } , { "Clb" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , Clb ) , 0
, 11 , 0 } , { "Clp" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , Clp ) ,
0 , 11 , 0 } , { "Clr" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , Clr )
, 0 , 11 , 0 } , { "ClDa" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH ,
ClDa ) , 0 , 11 , 0 } , { "ClDr" , rt_offsetof (
struct_nGmILHkzXdduNopEcCRSWH , ClDr ) , 0 , 11 , 0 } , { "Cnb" , rt_offsetof
( struct_nGmILHkzXdduNopEcCRSWH , Cnb ) , 0 , 11 , 0 } , { "Cnp" ,
rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , Cnp ) , 0 , 11 , 0 } , { "Cnr"
, rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , Cnr ) , 0 , 11 , 0 } , {
"CnDa" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CnDa ) , 0 , 11 , 0 }
, { "CnDr" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH , CnDr ) , 0 , 11 ,
0 } , { "dragCoeffMov" , rt_offsetof ( struct_nGmILHkzXdduNopEcCRSWH ,
dragCoeffMov ) , 0 , 11 , 0 } , { "g" , rt_offsetof (
struct_nGmILHkzXdduNopEcCRSWH , g ) , 0 , 11 , 0 } , { "b" , rt_offsetof (
struct_cS9JNIA7WhyhnQhWdnNLhC , b ) , 0 , 11 , 0 } , { "AR" , rt_offsetof (
struct_cS9JNIA7WhyhnQhWdnNLhC , AR ) , 0 , 11 , 0 } , { "c" , rt_offsetof (
struct_cS9JNIA7WhyhnQhWdnNLhC , c ) , 0 , 11 , 0 } , { "e" , rt_offsetof (
struct_cS9JNIA7WhyhnQhWdnNLhC , e ) , 0 , 11 , 0 } , { "RotorArm1" ,
rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC , RotorArm1 ) , 0 , 3 , 0 } , {
"RotorArm2" , rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC , RotorArm2 ) , 0 ,
3 , 0 } , { "RotorArm3" , rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC ,
RotorArm3 ) , 0 , 3 , 0 } , { "RotorArm4" , rt_offsetof (
struct_cS9JNIA7WhyhnQhWdnNLhC , RotorArm4 ) , 0 , 3 , 0 } , { "Ixx" ,
rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC , Ixx ) , 0 , 11 , 0 } , { "Iyy"
, rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC , Iyy ) , 0 , 11 , 0 } , {
"Izz" , rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC , Izz ) , 0 , 11 , 0 } ,
{ "mass" , rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC , mass ) , 0 , 11 , 0
} , { "PropDiameter" , rt_offsetof ( struct_cS9JNIA7WhyhnQhWdnNLhC ,
PropDiameter ) , 0 , 11 , 0 } , { "RPMMAX" , rt_offsetof (
struct_u2xOoEtpHkUtzKIxOOJ85F , RPMMAX ) , 0 , 11 , 0 } , { "tilt_trim" ,
rt_offsetof ( struct_u2xOoEtpHkUtzKIxOOJ85F , tilt_trim ) , 0 , 11 , 0 } , {
"aero" , rt_offsetof ( struct_DAy4VMOKMUhj3u1IcOvsOG , aero ) , 3 , 11 , 0 }
, { "geom" , rt_offsetof ( struct_DAy4VMOKMUhj3u1IcOvsOG , geom ) , 4 , 11 ,
0 } , { "motor" , rt_offsetof ( struct_DAy4VMOKMUhj3u1IcOvsOG , motor ) , 5 ,
11 , 0 } } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0
} , { rtwCAPI_VECTOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 3 , 3 , 1 , 3 ,
4 , 1 , 9 , 1 , 2 , 1 , 1 , 4 , 1 , 2 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 255 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 120 ,
rtModelParameters , 3 } , { rtBlockStates , 11 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2644094280U , 1939489914U , 722370026U ,
2297019896U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * Dynamics3_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Dynamics3_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( *
rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 4 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Dynamics3_host_InitializeDataMapInfo ( Dynamics3_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
PropellerDynamics_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model" ) ; dataMap ->
childMMI [ 1 ] = & ( dataMap -> child1 . mmi ) ;
PropellerDynamics_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model1" ) ; dataMap ->
childMMI [ 2 ] = & ( dataMap -> child2 . mmi ) ;
PropellerDynamics_host_InitializeDataMapInfo ( & ( dataMap -> child2 ) ,
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model2" ) ; dataMap ->
childMMI [ 3 ] = & ( dataMap -> child3 . mmi ) ;
PropellerDynamics_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"Dynamics3/Digital Twin/Force and Moments/Propulsion/Model3" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 4 ) ; }
#ifdef __cplusplus
}
#endif
#endif
