#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_nGmILHkzXdduNopEcCRSWH" , 17 , 272 } , {
"struct_cS9JNIA7WhyhnQhWdnNLhC" , 18 , 168 } , {
"struct_u2xOoEtpHkUtzKIxOOJ85F" , 19 , 16 } , {
"struct_DAy4VMOKMUhj3u1IcOvsOG" , 20 , 456 } , { "RotorCntrlBus" , 21 , 48 }
, { "bfxsfyeisx3" , 22 , 176 } , { "uint64_T" , 23 , 8 } , { "int64_T" , 24 ,
8 } , { "uint_T" , 25 , 32 } , { "char_T" , 26 , 8 } , { "uchar_T" , 27 , 8 }
, { "time_T" , 28 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof (
real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) ,
sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof (
uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T )
, sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof ( uint64_T ) , sizeof (
struct_nGmILHkzXdduNopEcCRSWH ) , sizeof ( struct_cS9JNIA7WhyhnQhWdnNLhC ) ,
sizeof ( struct_u2xOoEtpHkUtzKIxOOJ85F ) , sizeof (
struct_DAy4VMOKMUhj3u1IcOvsOG ) , sizeof ( int32_T ) , sizeof ( bfxsfyeisx3 )
, sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) , sizeof (
char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" ,
"struct_nGmILHkzXdduNopEcCRSWH" , "struct_cS9JNIA7WhyhnQhWdnNLhC" ,
"struct_u2xOoEtpHkUtzKIxOOJ85F" , "struct_DAy4VMOKMUhj3u1IcOvsOG" ,
"RotorCntrlBus" , "bfxsfyeisx3" , "uint64_T" , "int64_T" , "uint_T" ,
"char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions
[ ] = { { ( char_T * ) ( & hjzk2zv0jgo . iksuuwfiau [ 0 ] ) , 0 , 0 , 412 } ,
{ ( char_T * ) ( & hjzk2zv0jgo . nye15ofalv ) , 8 , 0 , 1 } , { ( char_T * )
( & cd3zedlmwtk . loxtit5c1e ) , 0 , 0 , 31 } , { ( char_T * ) ( &
cd3zedlmwtk . ipfkrbexcj . LoggedData ) , 11 , 0 , 41 } , { ( char_T * ) ( &
cd3zedlmwtk . ksszy2s0p4 ) , 6 , 0 , 2 } , { ( char_T * ) ( & cd3zedlmwtk .
hpbs0pv0ja ) , 10 , 0 , 13 } , { ( char_T * ) ( & cd3zedlmwtk . j5mbuidgdb )
, 2 , 0 , 23 } , { ( char_T * ) ( & cd3zedlmwtk . nz22oshr1s ) , 3 , 0 , 2 }
, { ( char_T * ) ( & cd3zedlmwtk . bdb2drldzc ) , 8 , 0 , 7 } , { ( char_T *
) ( & cd3zedlmwtk . bm3reeetok ) , 22 , 0 , 4 } , { ( char_T * ) ( &
cd3zedlmwtk . fv0l3l0qhm . dynzrd2nl1 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
cd3zedlmwtk . en4thmesjh . dynzrd2nl1 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
cd3zedlmwtk . kfjac3xldmi . dynzrd2nl1 ) , 2 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 13U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & ejhzoebun3 .
uDOFEulerAngles1_Vm_0 [ 0 ] ) , 0 , 0 , 23 } , { ( char_T * ) ( & ejhzoebun3
. DirectionCosineMatrixtoQuaternions_action ) , 3 , 0 , 1 } , { ( char_T * )
( & ejhzoebun3 . Saturation_UpperSat ) , 0 , 0 , 152 } , { ( char_T * ) ( &
rtP_uavParam ) , 20 , 0 , 1 } , { ( char_T * ) ( & rtP_minPWM ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP_tiltIni ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 6U , rtPTransitions } ;
