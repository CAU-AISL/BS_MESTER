#ifndef RTW_HEADER_Dynamics3_h_
#define RTW_HEADER_Dynamics3_h_
#ifndef Dynamics3_COMMON_INCLUDES_
#define Dynamics3_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Dynamics3_types.h"
#include "PropellerDynamics.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "rtGetInf.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#define MODEL_NAME Dynamics3
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (214) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (19)   
#elif NCSTATES != 19
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int8_T dynzrd2nl1 ; } njz4atwpr2 ; typedef struct { real_T
iksuuwfiau [ 3 ] ; real_T afv534dghn [ 3 ] ; real_T j1sueqnip0 [ 9 ] ; real_T
kuucijn2sg [ 9 ] ; real_T i55alh4xud [ 9 ] ; real_T mkn5nhvzbk [ 3 ] ; real_T
hbzn3wsbye [ 3 ] ; real_T cqvuoudnvb [ 3 ] ; real_T htt3requoy [ 3 ] ; real_T
k0yfsplt3r [ 3 ] ; real_T cci3mwof5h [ 3 ] ; real_T coqmemksef [ 3 ] ; real_T
gbjq4n01xo ; real_T mrkfq1tuhw [ 3 ] ; real_T d00t0bvsqx [ 3 ] ; real_T
fjb2mtsd40 [ 3 ] ; real_T bgmcqai5at ; real_T cshi4ioghy ; real_T php2oi4kgy
; real_T guife5a2rz ; real_T opx2dl1oco ; real_T hm3usbndrd ; real_T
plnoqtrtnf ; real_T m2r4ovuy32 ; real_T cno5k4jjfd ; real_T aqzdxk22og ;
real_T ajfq5lcy0h ; real_T bbvw1e1ik4 [ 3 ] ; real_T k5mggrlxlo [ 3 ] ;
real_T jzfclqedcy [ 3 ] ; real_T foog324lmw ; real_T pmsojihl4i ; real_T
lugw5r3njx [ 3 ] ; real_T o2rn5svcvi [ 3 ] ; real_T pht4pxvhfn [ 3 ] ; real_T
as3le1fis3 ; real_T on0gwyvdng [ 3 ] ; real_T mdmvsl4kx3 [ 3 ] ; real_T
kf0l3ohhjz ; real_T anxysqocsy [ 3 ] ; real_T dpxtsc4ct3 [ 3 ] ; real_T
ao0nbwn4uy [ 3 ] ; real_T l3ad44plkh ; real_T h3wr3a4ile [ 3 ] ; real_T
fyrtf4ffcd [ 3 ] ; real_T jt2k5mojeq [ 3 ] ; real_T h2ikurznh0 [ 3 ] ; real_T
othwxxxiyh [ 2 ] ; real_T bj1sxp1mzb ; real_T mnzaajuwwx ; real_T h4etmfy2eh
; real_T dmaajqujzv ; real_T lwakmo2ko1 ; real_T l2t3z55cpu ; real_T
jjgv3id10o [ 3 ] ; real_T ccp2v0is3b [ 3 ] ; real_T hknbaidp1p [ 3 ] ; real_T
fclw1sjfex [ 3 ] ; real_T n54mahp50g [ 3 ] ; real_T cr54syolwa [ 3 ] ; real_T
jcjs231yq3 [ 3 ] ; real_T pfj1kie4j4 ; real_T dzxlnr5pi4 ; real_T ltwbxo2m5t
; real_T iurr1vp4ab ; real_T ltjx0tyc53 ; real_T mwz1mhk5so ; real_T
pqy3siqenb [ 3 ] ; real_T oat42lolv5 [ 3 ] ; real_T p025xqadcy [ 2 ] ; real_T
k1gukjalk1 ; real_T ncb1cpqinu ; real_T pgnferr3ie ; real_T dvx4kfp2xu [ 9 ]
; real_T iwjeqmaeng ; real_T oobwvvygfe ; real_T lsfjlacb3n ; real_T
hhes4raj3w ; real_T ksibqgvnrm ; real_T pcopyw2qch [ 3 ] ; real_T l2qm0okvna
[ 3 ] ; real_T p1xhzbkl4w [ 3 ] ; real_T meez4ih2n2 [ 3 ] ; real_T cjplmpquxg
[ 3 ] ; real_T lydelxiu4y [ 3 ] ; real_T luuvgmk2wi [ 3 ] ; real_T gosnqni3fu
[ 3 ] ; real_T jjcp1ov2bg ; real_T ax00eeaw5r ; real_T jsezxywihe ; real_T
fmxtgiqruo ; real_T ewinmui34k ; real_T crvz5ao1xy ; real_T ckqg5iy5aq [ 3 ]
; real_T ngexc3pd5z [ 3 ] ; real_T mmtwhhrgdw ; real_T kdhpinsv2d [ 4 ] ;
real_T inh3dtaqa0 [ 9 ] ; real_T dd43ilih2a [ 9 ] ; real_T doydg2jjr3 [ 9 ] ;
real_T bsemagm0nc ; real_T ay5d1ywjz3 ; real_T naxqiwuy5k ; real_T enach2tzry
; real_T kcempososy ; real_T emd4as5gy1 ; real_T ahoyikc4du ; real_T
ao4zg2uppg ; real_T p43l53pvfy ; real_T hqoajxwt3g ; real_T pq24tfbcj3 ;
real_T an3542desc ; real_T hps1jp4vyd ; real_T ncvyzjqsre ; real_T jrjwj2rsbk
; real_T fdnmbw2vle ; real_T grq2vpxk3r ; real_T fnrgz4g1b4 ; real_T
csbvwarwmh ; real_T pbqolavxh1 ; real_T l3k3mynljv ; real_T nyxi4ruo4k ;
real_T bnbjvkm0ow ; real_T dgibgw2vs2 ; real_T agekrrwrxe [ 2 ] ; real_T
mo2yojf2sc ; real_T eskkgchcvy [ 3 ] ; real_T n5xzk05dzf [ 3 ] ; real_T
avieazpzba [ 3 ] ; real_T ezh5prodbs ; real_T jvf34px5ss ; real_T p10gcot45r
; real_T nshb4ned5q [ 2 ] ; real_T grt4kpc5gv ; real_T osedtncxqb [ 3 ] ;
real_T dt0lrzjk1o [ 3 ] ; real_T neni45xlk3 ; real_T hzkzgft450 ; real_T
dbxom3ehuc ; real_T ezsybgwh4t [ 2 ] ; real_T cadfnhzvto ; real_T p01vpysmg2
[ 3 ] ; real_T b5njilv2gn ; real_T eo1hh0tubv ; real_T fi3hy1tf5r [ 3 ] ;
real_T c4xfdotpr0 ; real_T erkk23cbij ; real_T d1mh3tvfxa ; real_T dlxjhtpbgt
; real_T abjck5vnui ; real_T fteax4phdm ; real_T gl4zkd4p00 ; real_T
itsrgtvmef ; real_T knh1oxgwo5 ; real_T jcc2w2dkmn ; real_T dwuhvwcohi ;
real_T gtf4k10ktt ; real_T c2qh0pkvez ; real_T pmdvzy4gmv ; real_T kx5f1zuazd
; real_T oxu2x0ys3i ; real_T bcj1qvwgpn ; real_T luqg24xiyl ; real_T
a2o0lqsyq3 ; real_T acl4r2rqtj ; real_T dtswxmk2cq ; real_T famqpvr3fs ;
real_T ec0ibhsp05 ; real_T k3bzmsmu0e ; real_T ptb3whyae5 [ 3 ] ; real_T
d1qtszyg1z [ 9 ] ; real_T hbvsypwj5y [ 9 ] ; real_T ep0h21kgsz [ 3 ] ; real_T
gxiiif0c3d ; real_T k1sza304jy ; real_T blossfgznf ; real_T cyi0sujumx ;
real_T ahn5wc4cba ; real_T n4c1sjotli ; real_T kgog4d1fl5 ; real_T oecdr5so0f
; real_T gzga0d0jbw ; real_T l1p25jpqry ; real_T mntumjxb41 ; real_T
k22abf0uj2 ; real_T b123034b0z ; real_T jrqy11puxr ; real_T fmmoructyp ;
real_T nfwhxbbek2 ; real_T pw3ddy1xfy ; real_T aolb2w30s4 ; real_T jkypjxquxw
; real_T jcgspnlpxp ; real_T ptb3whyae5v [ 3 ] ; real_T k12edtwgur [ 9 ] ;
real_T ftpzbdiaki [ 3 ] ; real_T jmzubjfi5o ; real_T lmvkheskr5 ; real_T
j1b0ohkohh ; real_T nhe43pn5nh ; real_T hehj2dz0gu ; real_T ew4gntkbfp ;
real_T lemypiazxs ; real_T nvhx5js3b5 ; real_T ew1xexz22w ; real_T gp5b442d4z
; real_T kp0rothnh4 ; real_T dzivdzp2ag ; real_T ilayj5xnmf ; real_T
mzpu5t1jkm ; boolean_T nye15ofalv ; } hjzk2zv0jg ; typedef struct { real_T
loxtit5c1e ; real_T cu0k1tufjn ; real_T nmooqw0hsr ; real_T egbzhokzr0 ;
real_T mk2hhitrny ; real_T mkzihgyczk [ 3 ] ; real_T oec4smrr1x ; real_T
ogngmlftsj [ 3 ] ; real_T hy3naecleu ; real_T bisb0vebkm [ 3 ] ; real_T
jiuvpdeyn3 ; real_T dzy2xz0dmj [ 3 ] ; real_T i0hphjuxva ; real_T nl31v5w0ne
; real_T c5tnxxhmao [ 9 ] ; struct { void * LoggedData ; } ipfkrbexcj ;
struct { void * LoggedData ; } j4k4c0wov1 ; struct { void * LoggedData ; }
fbnq20w2t1 ; struct { void * LoggedData ; } jvyokqwwga ; struct { void *
LoggedData ; } exnzfknedx ; struct { void * LoggedData ; } a2qy0ksj02 ;
struct { void * LoggedData ; } eaaecj2u3w ; struct { void * LoggedData ; }
omcoc4ypx4 ; struct { void * LoggedData ; } ht5q1njptv ; struct { void *
LoggedData ; } mz2ockkxco ; struct { void * LoggedData ; } n5jd0awems ;
struct { void * LoggedData ; } dqno0vynm4 ; struct { void * LoggedData ; }
p110fflz3m ; struct { void * LoggedData ; } pc0sm3e0ai ; struct { void *
LoggedData ; } daq513yd0w ; struct { void * LoggedData ; } ad0f3vvjvt ;
struct { void * LoggedData ; } jvt2oa1rft ; struct { void * LoggedData ; }
o5nx2tfhhr ; struct { void * AQHandles ; } b1sw42zjhi ; struct { void *
AQHandles ; } gxbxhovrgp ; struct { void * AQHandles ; } aged3k2pcj ; struct
{ void * AQHandles ; } okgw2pzqbt ; struct { void * AQHandles ; } fnjq4dcfmy
; struct { void * AQHandles ; } aj4ml0ju0j ; struct { void * AQHandles ; }
jfucdonibi ; struct { void * AQHandles ; } ldwyse5jwq ; struct { void *
AQHandles ; } n2klgvknco ; struct { void * AQHandles ; } i253u1jn33 ; struct
{ void * LoggedData [ 4 ] ; } ofdxtr0v22 ; struct { void * AQHandles ; }
c2katuywif ; struct { void * AQHandles ; } cijilelxe3 ; struct { void *
AQHandles ; } fguaac4ehu ; struct { void * AQHandles ; } e1zyqwjknc ; struct
{ void * AQHandles ; } f44csx1gfq ; struct { void * AQHandles ; } b4qcpdu5rl
; struct { void * AQHandles ; } pu5zuzij3z ; struct { void * LoggedData ; }
fccbqfvccp ; struct { void * LoggedData ; } dooqksm55e ; int32_T ksszy2s0p4 ;
int32_T mruvr1k0o4 ; int_T hpbs0pv0ja ; int_T ksxay1wm50 ; int_T i4tbqjyhaq ;
int_T eem1bmg2vx ; int_T ptpami1mqf ; int_T dsgl5lbh0v ; int_T hj4clfy4lk ;
int_T pwej4sp12d ; int_T dne2ysu0rs ; int_T nmwptmhta5 ; int_T mpo4kumew4 ;
int_T a2yveaeuqa ; int_T a1a5rahew4 ; int8_T j5mbuidgdb ; int8_T fqno2nhg0i ;
int8_T jcxbkbqufo ; int8_T grss1hcqfy ; int8_T gwsyjhto3i ; int8_T j2lgfwz4nb
; int8_T nmjkdxbctr ; int8_T mlektwyh03 ; int8_T hkexsdmmiq ; int8_T
jouu1ys3n0 ; int8_T dy3it3hprz ; int8_T apkslfbs4p ; int8_T cftrcsvurp ;
int8_T fodrtj5jvy ; int8_T ei1iqzsamz ; int8_T cndsbiglgj ; int8_T pi3di1b0u1
; int8_T aqzoa0ngxb ; int8_T jy2jzur21d ; int8_T huc0wlm4jz ; int8_T
cnnxvlxj4k ; int8_T jfsreelaxk ; int8_T imaif5mqhv ; uint8_T nz22oshr1s ;
uint8_T gtpsr3jsav ; boolean_T bdb2drldzc ; boolean_T ijem1srja2 ; boolean_T
nqf2anvknn ; boolean_T i55hj3bwoh ; boolean_T gdxc324iwa ; boolean_T
cmennrwj1m ; boolean_T oeildbcyu5 ; bfxsfyeisx3 bm3reeetok ; bfxsfyeisx3
kqm1lj2att ; bfxsfyeisx3 eoy4o1rwoy ; bfxsfyeisx3 liakohv2jb ; njz4atwpr2
fv0l3l0qhm ; njz4atwpr2 en4thmesjh ; njz4atwpr2 kfjac3xldmi ; } cd3zedlmwt ;
typedef struct { real_T b2ng5dbar3 [ 3 ] ; real_T aycekewho5 [ 3 ] ; real_T
o3b1wolh5o [ 3 ] ; real_T iaf1otkx4v [ 3 ] ; real_T ixwpr2do0d ; real_T
njrycceqar ; real_T fnt4rp3muo ; real_T ikqvd3inr4 ; real_T chek3m4uua ;
real_T ejoaqi5omr ; real_T olifehdwf1 ; } ge0boyqs2e ; typedef int_T
g1rfofi3ve [ 3 ] ; typedef real_T eawagf2olp [ 6 ] ; typedef struct { real_T
b2ng5dbar3 [ 3 ] ; real_T aycekewho5 [ 3 ] ; real_T o3b1wolh5o [ 3 ] ; real_T
iaf1otkx4v [ 3 ] ; real_T ixwpr2do0d ; real_T njrycceqar ; real_T fnt4rp3muo
; real_T ikqvd3inr4 ; real_T chek3m4uua ; real_T ejoaqi5omr ; real_T
olifehdwf1 ; } ai0xcfahxy ; typedef struct { boolean_T b2ng5dbar3 [ 3 ] ;
boolean_T aycekewho5 [ 3 ] ; boolean_T o3b1wolh5o [ 3 ] ; boolean_T
iaf1otkx4v [ 3 ] ; boolean_T ixwpr2do0d ; boolean_T njrycceqar ; boolean_T
fnt4rp3muo ; boolean_T ikqvd3inr4 ; boolean_T chek3m4uua ; boolean_T
ejoaqi5omr ; boolean_T olifehdwf1 ; } m2e1cxkszl ; typedef struct { real_T
b2ng5dbar3 [ 3 ] ; real_T aycekewho5 [ 3 ] ; real_T o3b1wolh5o [ 3 ] ; real_T
iaf1otkx4v [ 3 ] ; real_T ixwpr2do0d ; real_T njrycceqar ; real_T fnt4rp3muo
; real_T ikqvd3inr4 ; real_T chek3m4uua ; real_T ejoaqi5omr ; real_T
olifehdwf1 ; } nsuxf1r1gx ; typedef struct { real_T b2ng5dbar3 [ 3 ] ; real_T
aycekewho5 [ 3 ] ; real_T o3b1wolh5o [ 3 ] ; real_T iaf1otkx4v [ 3 ] ; real_T
ixwpr2do0d ; real_T njrycceqar ; real_T fnt4rp3muo ; real_T ikqvd3inr4 ;
real_T chek3m4uua ; real_T ejoaqi5omr ; real_T olifehdwf1 ; } garg0ien4v ;
typedef struct { real_T b2ng5dbar3 [ 3 ] ; real_T aycekewho5 [ 3 ] ; real_T
o3b1wolh5o [ 3 ] ; real_T iaf1otkx4v [ 3 ] ; real_T ixwpr2do0d ; real_T
njrycceqar ; real_T fnt4rp3muo ; real_T ikqvd3inr4 ; real_T chek3m4uua ;
real_T ejoaqi5omr ; real_T olifehdwf1 ; } aygkulwgls ; typedef struct {
real_T d4134ljoqe ; real_T azw1tuh21k ; h1jo3kaarc jq4b3o2gcr ; h1jo3kaarc
oy5uwkavmh ; h1jo3kaarc dlimeblvwm ; h1jo3kaarc gjeiwklp2r ; real_T
l2uwd41ub4 ; real_T bo1bdoiaf3 ; real_T bln3tqbtqe ; real_T l1o3i1oqrx ;
real_T ni1brxmciz ; real_T fpz5qmunou ; real_T hfe0of0iao ; real_T krrp3ebvux
; real_T mqxdv0xa53 ; real_T c05udw55yo ; real_T hpfxuwvqld ; real_T
pjolz5szyi ; real_T ez3wzxnrpy ; real_T dctno2axho ; real_T la4qimc4ih ;
real_T njimuojkuu ; real_T fw2yw0aczb ; real_T fvbsvgsi4a ; real_T ml13k444j1
; real_T hhwytt5znk [ 2 ] ; real_T in5yzqv22v ; real_T luatizghpn ; real_T
oaq3ow1wpi ; real_T dlpxoi42ag ; real_T phmjvykwqy ; real_T kqxnhk4qq5 ;
real_T mj2nd01fvb ; real_T okehsjdjze ; } k4tbqcogk5 ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [ 4 ] ; }
DataMapInfo ; struct ejhzoebun3a_ { real_T uDOFEulerAngles1_Vm_0 [ 3 ] ;
real_T uDOFEulerAngles1_eul_0 [ 3 ] ; real_T uDOFEulerAngles1_inertia [ 9 ] ;
real_T uDOFEulerAngles1_mass_0 ; real_T uDOFEulerAngles1_pm_0 [ 3 ] ; real_T
DirectionCosineMatrixtoQuaternions_tolerance ; real_T uDOFEulerAngles1_xme_0
[ 3 ] ; uint8_T DirectionCosineMatrixtoQuaternions_action ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T u2rhoV2_Gain ;
real_T Gain_Gain ; real_T Gain_Gain_mjsljihjpc ; real_T Ydown_Gain ; real_T
Gain_Gain_k2d25npkdk ; real_T Gain_Gain_p42jtdlvy0 ; real_T
Gain_Gain_crytncxhkk ; real_T Gain_Gain_oov4c4xu1y ; real_T Gain1_Gain ;
real_T Constant_Value ; real_T Switch_Threshold ; real_T Gain_Gain_fcfwrzioaz
; real_T Constant1_Value ; real_T Constant2_Value [ 2 ] ; real_T
Constant_Value_axoyoht1ml ; real_T Switch_Threshold_b1eng0x1sz ; real_T
Gain_Gain_g4v1uapw3b ; real_T Constant1_Value_npwurdb1xs ; real_T
Constant2_Value_f4vpv0auac [ 2 ] ; real_T Constant_Value_nkjzcvm1pd ; real_T
Switch_Threshold_bzshkgitvc ; real_T Gain_Gain_nwvx5b1l42 ; real_T
Constant1_Value_cxbaat2nbt ; real_T Constant2_Value_d2q1dqpvyt [ 2 ] ; real_T
Constant_Value_b5xeupgbfq ; real_T Constant1_Value_cixdqcjscc ; real_T
Constant1_Value_jczvgwu4bk ; real_T Bias_Bias ; real_T Bias1_Bias [ 9 ] ;
real_T phithetapsi_WrappedStateUpperValue ; real_T
phithetapsi_WrappedStateLowerValue ; real_T TransferFcn_A ; real_T
TransferFcn_C ; real_T TransferFcn1_A ; real_T TransferFcn1_C ; real_T
TransferFcn2_A ; real_T TransferFcn2_C ; real_T Gain4_Gain ; real_T
TransferFcn3_A ; real_T TransferFcn3_C ; real_T Gain7_Gain ; real_T
ServoDynamics_A ; real_T ServoDynamics_C ; real_T ServoDynamics1_A ; real_T
ServoDynamics1_C ; real_T Gain_Gain_jj11vie1fs ; real_T Gain1_Gain_oydo40ajp4
; real_T Gain2_Gain ; real_T Gain5_Gain ; real_T
Saturation_UpperSat_htwhs01fr3 ; real_T Saturation_LowerSat_kcxkvwwdv0 ;
real_T alpha_dot_A ; real_T alpha_dot_C ; real_T alpha_dot_D ; real_T
Saturation_UpperSat_aylehtgq01 ; real_T Saturation_LowerSat_ndgcjhroam ;
real_T Saturation_UpperSat_d1rjww4nbg ; real_T Saturation_LowerSat_litbrtzvri
; real_T Saturation_UpperSat_c3uix3heb2 ; real_T
Saturation_LowerSat_gehmbnjmeu ; real_T Switch_Threshold_bcdfk5ewvg ; real_T
gain_Gain ; real_T Saturation_UpperSat_pb05vvfxhg ; real_T
Saturation_LowerSat_ku5qdt5pdh ; real_T Saturation_UpperSat_jdnic1fm30 ;
real_T Saturation_LowerSat_h0ypdmyj1j ; real_T Saturation_UpperSat_dmxdc5sj5d
; real_T Saturation_LowerSat_bkujms4faw ; real_T
Saturation_UpperSat_iz3v2skdar ; real_T Saturation_LowerSat_ert5yahf0x ;
real_T Saturation_UpperSat_goq0fmwbyd ; real_T Saturation_LowerSat_ji1x0rnkti
; real_T Switch1_Threshold ; real_T Gain3_Gain ; real_T Gain6_Gain ; real_T
Merge_InitialOutput [ 4 ] ; real_T Constant_Value_a1crlzduby ; real_T
Constant1_Value_e5cors3m1f ; real_T Constant2_Value_ka14f4y45i [ 9 ] ; real_T
AeroSwitch_Value ; real_T Constant_Value_fc0mezjahc [ 3 ] ; real_T
Constant8_Value ; real_T Cmq3_Value ; real_T Cmq1_Value ; real_T
Constant6_Value ; real_T Cmq1_Value_pah1bbnlbx ; real_T Cmq3_Value_ihjv4exhiy
; real_T Cmq1_Value_bdczz4tfdc ; real_T Cmq3_Value_lpkfxuura1 ; real_T
Constant1_Value_e3lrn0tq01 ; real_T Constant4_Value ; real_T Constant5_Value
; real_T Constant_Value_gaexcfymgv [ 3 ] ; real_T Constant1_Value_e1kmy4vudp
; real_T Constant11_Value [ 3 ] ; real_T Constant13_Value [ 3 ] ; real_T
Constant2_Value_gdybbqcsvv ; real_T Constant5_Value_bxm0gvh1s4 [ 3 ] ; real_T
Constant7_Value [ 3 ] ; real_T Constant8_Value_igqaa4heed [ 3 ] ; real_T
Constant9_Value [ 3 ] ; real_T TiltAngle1_Value ; real_T
Gain3_Gain_edy3rsxlbj ; real_T Gain2_Gain_mkw0vlxlzu ; real_T
Gain5_Gain_czs0mwtap0 ; real_T Gain3_Gain_dkq5njqwoe ; real_T
Constant_Value_ohnaqb1c5m [ 3 ] ; real_T Constant2_Value_g531dn02hg ; real_T
Constant3_Value ; real_T Constant9_Value_bw3vkbj2eu ; } ; extern const char_T
* RT_MEMORY_ALLOCATION_ERROR ; extern hjzk2zv0jg hjzk2zv0jgo ; extern
ge0boyqs2e ge0boyqs2ez ; extern cd3zedlmwt cd3zedlmwtk ; extern ejhzoebun3a
ejhzoebun3 ; extern struct_DAy4VMOKMUhj3u1IcOvsOG rtP_uavParam ; extern
real_T rtP_minPWM ; extern real_T rtP_tiltIni ; extern mxArray *
mr_Dynamics3_GetDWork ( ) ; extern void mr_Dynamics3_SetDWork ( const mxArray
* ssDW ) ; extern mxArray * mr_Dynamics3_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo * Dynamics3_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
