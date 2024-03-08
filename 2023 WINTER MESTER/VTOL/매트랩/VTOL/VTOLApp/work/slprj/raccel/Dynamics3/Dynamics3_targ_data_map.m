    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (ejhzoebun3)
        ;%
            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% ejhzoebun3.uDOFEulerAngles1_Vm_0
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% ejhzoebun3.uDOFEulerAngles1_eul_0
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 3;

                    ;% ejhzoebun3.uDOFEulerAngles1_inertia
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 6;

                    ;% ejhzoebun3.uDOFEulerAngles1_mass_0
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 15;

                    ;% ejhzoebun3.uDOFEulerAngles1_pm_0
                    section.data(5).logicalSrcIdx = 7;
                    section.data(5).dtTransOffset = 16;

                    ;% ejhzoebun3.DirectionCosineMatrixtoQuaternions_tolerance
                    section.data(6).logicalSrcIdx = 8;
                    section.data(6).dtTransOffset = 19;

                    ;% ejhzoebun3.uDOFEulerAngles1_xme_0
                    section.data(7).logicalSrcIdx = 9;
                    section.data(7).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ejhzoebun3.DirectionCosineMatrixtoQuaternions_action
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 112;
            section.data(112)  = dumData; %prealloc

                    ;% ejhzoebun3.Saturation_UpperSat
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

                    ;% ejhzoebun3.Saturation_LowerSat
                    section.data(2).logicalSrcIdx = 12;
                    section.data(2).dtTransOffset = 1;

                    ;% ejhzoebun3.u2rhoV2_Gain
                    section.data(3).logicalSrcIdx = 13;
                    section.data(3).dtTransOffset = 2;

                    ;% ejhzoebun3.Gain_Gain
                    section.data(4).logicalSrcIdx = 14;
                    section.data(4).dtTransOffset = 3;

                    ;% ejhzoebun3.Gain_Gain_mjsljihjpc
                    section.data(5).logicalSrcIdx = 15;
                    section.data(5).dtTransOffset = 4;

                    ;% ejhzoebun3.Ydown_Gain
                    section.data(6).logicalSrcIdx = 16;
                    section.data(6).dtTransOffset = 5;

                    ;% ejhzoebun3.Gain_Gain_k2d25npkdk
                    section.data(7).logicalSrcIdx = 17;
                    section.data(7).dtTransOffset = 6;

                    ;% ejhzoebun3.Gain_Gain_p42jtdlvy0
                    section.data(8).logicalSrcIdx = 18;
                    section.data(8).dtTransOffset = 7;

                    ;% ejhzoebun3.Gain_Gain_crytncxhkk
                    section.data(9).logicalSrcIdx = 19;
                    section.data(9).dtTransOffset = 8;

                    ;% ejhzoebun3.Gain_Gain_oov4c4xu1y
                    section.data(10).logicalSrcIdx = 20;
                    section.data(10).dtTransOffset = 9;

                    ;% ejhzoebun3.Gain1_Gain
                    section.data(11).logicalSrcIdx = 21;
                    section.data(11).dtTransOffset = 10;

                    ;% ejhzoebun3.Constant_Value
                    section.data(12).logicalSrcIdx = 22;
                    section.data(12).dtTransOffset = 11;

                    ;% ejhzoebun3.Switch_Threshold
                    section.data(13).logicalSrcIdx = 23;
                    section.data(13).dtTransOffset = 12;

                    ;% ejhzoebun3.Gain_Gain_fcfwrzioaz
                    section.data(14).logicalSrcIdx = 24;
                    section.data(14).dtTransOffset = 13;

                    ;% ejhzoebun3.Constant1_Value
                    section.data(15).logicalSrcIdx = 25;
                    section.data(15).dtTransOffset = 14;

                    ;% ejhzoebun3.Constant2_Value
                    section.data(16).logicalSrcIdx = 26;
                    section.data(16).dtTransOffset = 15;

                    ;% ejhzoebun3.Constant_Value_axoyoht1ml
                    section.data(17).logicalSrcIdx = 27;
                    section.data(17).dtTransOffset = 17;

                    ;% ejhzoebun3.Switch_Threshold_b1eng0x1sz
                    section.data(18).logicalSrcIdx = 28;
                    section.data(18).dtTransOffset = 18;

                    ;% ejhzoebun3.Gain_Gain_g4v1uapw3b
                    section.data(19).logicalSrcIdx = 29;
                    section.data(19).dtTransOffset = 19;

                    ;% ejhzoebun3.Constant1_Value_npwurdb1xs
                    section.data(20).logicalSrcIdx = 30;
                    section.data(20).dtTransOffset = 20;

                    ;% ejhzoebun3.Constant2_Value_f4vpv0auac
                    section.data(21).logicalSrcIdx = 31;
                    section.data(21).dtTransOffset = 21;

                    ;% ejhzoebun3.Constant_Value_nkjzcvm1pd
                    section.data(22).logicalSrcIdx = 32;
                    section.data(22).dtTransOffset = 23;

                    ;% ejhzoebun3.Switch_Threshold_bzshkgitvc
                    section.data(23).logicalSrcIdx = 33;
                    section.data(23).dtTransOffset = 24;

                    ;% ejhzoebun3.Gain_Gain_nwvx5b1l42
                    section.data(24).logicalSrcIdx = 34;
                    section.data(24).dtTransOffset = 25;

                    ;% ejhzoebun3.Constant1_Value_cxbaat2nbt
                    section.data(25).logicalSrcIdx = 35;
                    section.data(25).dtTransOffset = 26;

                    ;% ejhzoebun3.Constant2_Value_d2q1dqpvyt
                    section.data(26).logicalSrcIdx = 36;
                    section.data(26).dtTransOffset = 27;

                    ;% ejhzoebun3.Constant_Value_b5xeupgbfq
                    section.data(27).logicalSrcIdx = 37;
                    section.data(27).dtTransOffset = 29;

                    ;% ejhzoebun3.Constant1_Value_cixdqcjscc
                    section.data(28).logicalSrcIdx = 38;
                    section.data(28).dtTransOffset = 30;

                    ;% ejhzoebun3.Constant1_Value_jczvgwu4bk
                    section.data(29).logicalSrcIdx = 39;
                    section.data(29).dtTransOffset = 31;

                    ;% ejhzoebun3.Bias_Bias
                    section.data(30).logicalSrcIdx = 40;
                    section.data(30).dtTransOffset = 32;

                    ;% ejhzoebun3.Bias1_Bias
                    section.data(31).logicalSrcIdx = 41;
                    section.data(31).dtTransOffset = 33;

                    ;% ejhzoebun3.phithetapsi_WrappedStateUpperValue
                    section.data(32).logicalSrcIdx = 42;
                    section.data(32).dtTransOffset = 42;

                    ;% ejhzoebun3.phithetapsi_WrappedStateLowerValue
                    section.data(33).logicalSrcIdx = 43;
                    section.data(33).dtTransOffset = 43;

                    ;% ejhzoebun3.TransferFcn_A
                    section.data(34).logicalSrcIdx = 44;
                    section.data(34).dtTransOffset = 44;

                    ;% ejhzoebun3.TransferFcn_C
                    section.data(35).logicalSrcIdx = 45;
                    section.data(35).dtTransOffset = 45;

                    ;% ejhzoebun3.TransferFcn1_A
                    section.data(36).logicalSrcIdx = 46;
                    section.data(36).dtTransOffset = 46;

                    ;% ejhzoebun3.TransferFcn1_C
                    section.data(37).logicalSrcIdx = 47;
                    section.data(37).dtTransOffset = 47;

                    ;% ejhzoebun3.TransferFcn2_A
                    section.data(38).logicalSrcIdx = 48;
                    section.data(38).dtTransOffset = 48;

                    ;% ejhzoebun3.TransferFcn2_C
                    section.data(39).logicalSrcIdx = 49;
                    section.data(39).dtTransOffset = 49;

                    ;% ejhzoebun3.Gain4_Gain
                    section.data(40).logicalSrcIdx = 50;
                    section.data(40).dtTransOffset = 50;

                    ;% ejhzoebun3.TransferFcn3_A
                    section.data(41).logicalSrcIdx = 51;
                    section.data(41).dtTransOffset = 51;

                    ;% ejhzoebun3.TransferFcn3_C
                    section.data(42).logicalSrcIdx = 52;
                    section.data(42).dtTransOffset = 52;

                    ;% ejhzoebun3.Gain7_Gain
                    section.data(43).logicalSrcIdx = 53;
                    section.data(43).dtTransOffset = 53;

                    ;% ejhzoebun3.ServoDynamics_A
                    section.data(44).logicalSrcIdx = 54;
                    section.data(44).dtTransOffset = 54;

                    ;% ejhzoebun3.ServoDynamics_C
                    section.data(45).logicalSrcIdx = 55;
                    section.data(45).dtTransOffset = 55;

                    ;% ejhzoebun3.ServoDynamics1_A
                    section.data(46).logicalSrcIdx = 56;
                    section.data(46).dtTransOffset = 56;

                    ;% ejhzoebun3.ServoDynamics1_C
                    section.data(47).logicalSrcIdx = 57;
                    section.data(47).dtTransOffset = 57;

                    ;% ejhzoebun3.Gain_Gain_jj11vie1fs
                    section.data(48).logicalSrcIdx = 58;
                    section.data(48).dtTransOffset = 58;

                    ;% ejhzoebun3.Gain1_Gain_oydo40ajp4
                    section.data(49).logicalSrcIdx = 59;
                    section.data(49).dtTransOffset = 59;

                    ;% ejhzoebun3.Gain2_Gain
                    section.data(50).logicalSrcIdx = 60;
                    section.data(50).dtTransOffset = 60;

                    ;% ejhzoebun3.Gain5_Gain
                    section.data(51).logicalSrcIdx = 61;
                    section.data(51).dtTransOffset = 61;

                    ;% ejhzoebun3.Saturation_UpperSat_htwhs01fr3
                    section.data(52).logicalSrcIdx = 62;
                    section.data(52).dtTransOffset = 62;

                    ;% ejhzoebun3.Saturation_LowerSat_kcxkvwwdv0
                    section.data(53).logicalSrcIdx = 63;
                    section.data(53).dtTransOffset = 63;

                    ;% ejhzoebun3.alpha_dot_A
                    section.data(54).logicalSrcIdx = 64;
                    section.data(54).dtTransOffset = 64;

                    ;% ejhzoebun3.alpha_dot_C
                    section.data(55).logicalSrcIdx = 65;
                    section.data(55).dtTransOffset = 65;

                    ;% ejhzoebun3.alpha_dot_D
                    section.data(56).logicalSrcIdx = 66;
                    section.data(56).dtTransOffset = 66;

                    ;% ejhzoebun3.Saturation_UpperSat_aylehtgq01
                    section.data(57).logicalSrcIdx = 67;
                    section.data(57).dtTransOffset = 67;

                    ;% ejhzoebun3.Saturation_LowerSat_ndgcjhroam
                    section.data(58).logicalSrcIdx = 68;
                    section.data(58).dtTransOffset = 68;

                    ;% ejhzoebun3.Saturation_UpperSat_d1rjww4nbg
                    section.data(59).logicalSrcIdx = 69;
                    section.data(59).dtTransOffset = 69;

                    ;% ejhzoebun3.Saturation_LowerSat_litbrtzvri
                    section.data(60).logicalSrcIdx = 70;
                    section.data(60).dtTransOffset = 70;

                    ;% ejhzoebun3.Saturation_UpperSat_c3uix3heb2
                    section.data(61).logicalSrcIdx = 71;
                    section.data(61).dtTransOffset = 71;

                    ;% ejhzoebun3.Saturation_LowerSat_gehmbnjmeu
                    section.data(62).logicalSrcIdx = 72;
                    section.data(62).dtTransOffset = 72;

                    ;% ejhzoebun3.Switch_Threshold_bcdfk5ewvg
                    section.data(63).logicalSrcIdx = 73;
                    section.data(63).dtTransOffset = 73;

                    ;% ejhzoebun3.gain_Gain
                    section.data(64).logicalSrcIdx = 74;
                    section.data(64).dtTransOffset = 74;

                    ;% ejhzoebun3.Saturation_UpperSat_pb05vvfxhg
                    section.data(65).logicalSrcIdx = 75;
                    section.data(65).dtTransOffset = 75;

                    ;% ejhzoebun3.Saturation_LowerSat_ku5qdt5pdh
                    section.data(66).logicalSrcIdx = 76;
                    section.data(66).dtTransOffset = 76;

                    ;% ejhzoebun3.Saturation_UpperSat_jdnic1fm30
                    section.data(67).logicalSrcIdx = 77;
                    section.data(67).dtTransOffset = 77;

                    ;% ejhzoebun3.Saturation_LowerSat_h0ypdmyj1j
                    section.data(68).logicalSrcIdx = 78;
                    section.data(68).dtTransOffset = 78;

                    ;% ejhzoebun3.Saturation_UpperSat_dmxdc5sj5d
                    section.data(69).logicalSrcIdx = 79;
                    section.data(69).dtTransOffset = 79;

                    ;% ejhzoebun3.Saturation_LowerSat_bkujms4faw
                    section.data(70).logicalSrcIdx = 80;
                    section.data(70).dtTransOffset = 80;

                    ;% ejhzoebun3.Saturation_UpperSat_iz3v2skdar
                    section.data(71).logicalSrcIdx = 81;
                    section.data(71).dtTransOffset = 81;

                    ;% ejhzoebun3.Saturation_LowerSat_ert5yahf0x
                    section.data(72).logicalSrcIdx = 82;
                    section.data(72).dtTransOffset = 82;

                    ;% ejhzoebun3.Saturation_UpperSat_goq0fmwbyd
                    section.data(73).logicalSrcIdx = 83;
                    section.data(73).dtTransOffset = 83;

                    ;% ejhzoebun3.Saturation_LowerSat_ji1x0rnkti
                    section.data(74).logicalSrcIdx = 84;
                    section.data(74).dtTransOffset = 84;

                    ;% ejhzoebun3.Switch1_Threshold
                    section.data(75).logicalSrcIdx = 85;
                    section.data(75).dtTransOffset = 85;

                    ;% ejhzoebun3.Gain3_Gain
                    section.data(76).logicalSrcIdx = 86;
                    section.data(76).dtTransOffset = 86;

                    ;% ejhzoebun3.Gain6_Gain
                    section.data(77).logicalSrcIdx = 87;
                    section.data(77).dtTransOffset = 87;

                    ;% ejhzoebun3.Merge_InitialOutput
                    section.data(78).logicalSrcIdx = 88;
                    section.data(78).dtTransOffset = 88;

                    ;% ejhzoebun3.Constant_Value_a1crlzduby
                    section.data(79).logicalSrcIdx = 89;
                    section.data(79).dtTransOffset = 92;

                    ;% ejhzoebun3.Constant1_Value_e5cors3m1f
                    section.data(80).logicalSrcIdx = 90;
                    section.data(80).dtTransOffset = 93;

                    ;% ejhzoebun3.Constant2_Value_ka14f4y45i
                    section.data(81).logicalSrcIdx = 91;
                    section.data(81).dtTransOffset = 94;

                    ;% ejhzoebun3.AeroSwitch_Value
                    section.data(82).logicalSrcIdx = 92;
                    section.data(82).dtTransOffset = 103;

                    ;% ejhzoebun3.Constant_Value_fc0mezjahc
                    section.data(83).logicalSrcIdx = 93;
                    section.data(83).dtTransOffset = 104;

                    ;% ejhzoebun3.Constant8_Value
                    section.data(84).logicalSrcIdx = 94;
                    section.data(84).dtTransOffset = 107;

                    ;% ejhzoebun3.Cmq3_Value
                    section.data(85).logicalSrcIdx = 95;
                    section.data(85).dtTransOffset = 108;

                    ;% ejhzoebun3.Cmq1_Value
                    section.data(86).logicalSrcIdx = 96;
                    section.data(86).dtTransOffset = 109;

                    ;% ejhzoebun3.Constant6_Value
                    section.data(87).logicalSrcIdx = 97;
                    section.data(87).dtTransOffset = 110;

                    ;% ejhzoebun3.Cmq1_Value_pah1bbnlbx
                    section.data(88).logicalSrcIdx = 98;
                    section.data(88).dtTransOffset = 111;

                    ;% ejhzoebun3.Cmq3_Value_ihjv4exhiy
                    section.data(89).logicalSrcIdx = 99;
                    section.data(89).dtTransOffset = 112;

                    ;% ejhzoebun3.Cmq1_Value_bdczz4tfdc
                    section.data(90).logicalSrcIdx = 100;
                    section.data(90).dtTransOffset = 113;

                    ;% ejhzoebun3.Cmq3_Value_lpkfxuura1
                    section.data(91).logicalSrcIdx = 101;
                    section.data(91).dtTransOffset = 114;

                    ;% ejhzoebun3.Constant1_Value_e3lrn0tq01
                    section.data(92).logicalSrcIdx = 102;
                    section.data(92).dtTransOffset = 115;

                    ;% ejhzoebun3.Constant4_Value
                    section.data(93).logicalSrcIdx = 103;
                    section.data(93).dtTransOffset = 116;

                    ;% ejhzoebun3.Constant5_Value
                    section.data(94).logicalSrcIdx = 104;
                    section.data(94).dtTransOffset = 117;

                    ;% ejhzoebun3.Constant_Value_gaexcfymgv
                    section.data(95).logicalSrcIdx = 105;
                    section.data(95).dtTransOffset = 118;

                    ;% ejhzoebun3.Constant1_Value_e1kmy4vudp
                    section.data(96).logicalSrcIdx = 106;
                    section.data(96).dtTransOffset = 121;

                    ;% ejhzoebun3.Constant11_Value
                    section.data(97).logicalSrcIdx = 107;
                    section.data(97).dtTransOffset = 122;

                    ;% ejhzoebun3.Constant13_Value
                    section.data(98).logicalSrcIdx = 108;
                    section.data(98).dtTransOffset = 125;

                    ;% ejhzoebun3.Constant2_Value_gdybbqcsvv
                    section.data(99).logicalSrcIdx = 109;
                    section.data(99).dtTransOffset = 128;

                    ;% ejhzoebun3.Constant5_Value_bxm0gvh1s4
                    section.data(100).logicalSrcIdx = 110;
                    section.data(100).dtTransOffset = 129;

                    ;% ejhzoebun3.Constant7_Value
                    section.data(101).logicalSrcIdx = 111;
                    section.data(101).dtTransOffset = 132;

                    ;% ejhzoebun3.Constant8_Value_igqaa4heed
                    section.data(102).logicalSrcIdx = 112;
                    section.data(102).dtTransOffset = 135;

                    ;% ejhzoebun3.Constant9_Value
                    section.data(103).logicalSrcIdx = 113;
                    section.data(103).dtTransOffset = 138;

                    ;% ejhzoebun3.TiltAngle1_Value
                    section.data(104).logicalSrcIdx = 114;
                    section.data(104).dtTransOffset = 141;

                    ;% ejhzoebun3.Gain3_Gain_edy3rsxlbj
                    section.data(105).logicalSrcIdx = 115;
                    section.data(105).dtTransOffset = 142;

                    ;% ejhzoebun3.Gain2_Gain_mkw0vlxlzu
                    section.data(106).logicalSrcIdx = 116;
                    section.data(106).dtTransOffset = 143;

                    ;% ejhzoebun3.Gain5_Gain_czs0mwtap0
                    section.data(107).logicalSrcIdx = 117;
                    section.data(107).dtTransOffset = 144;

                    ;% ejhzoebun3.Gain3_Gain_dkq5njqwoe
                    section.data(108).logicalSrcIdx = 118;
                    section.data(108).dtTransOffset = 145;

                    ;% ejhzoebun3.Constant_Value_ohnaqb1c5m
                    section.data(109).logicalSrcIdx = 119;
                    section.data(109).dtTransOffset = 146;

                    ;% ejhzoebun3.Constant2_Value_g531dn02hg
                    section.data(110).logicalSrcIdx = 120;
                    section.data(110).dtTransOffset = 149;

                    ;% ejhzoebun3.Constant3_Value
                    section.data(111).logicalSrcIdx = 121;
                    section.data(111).dtTransOffset = 150;

                    ;% ejhzoebun3.Constant9_Value_bw3vkbj2eu
                    section.data(112).logicalSrcIdx = 122;
                    section.data(112).dtTransOffset = 151;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%

                        ;% uavParam
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 0;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(4) = section;
                        clear section


                        ;% minPWM
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 1;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(5) = section;
                        clear section


                        ;% tiltIni
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 2;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(6) = section;
                        clear section



        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (hjzk2zv0jgo)
        ;%
            section.nData     = 210;
            section.data(210)  = dumData; %prealloc

                    ;% hjzk2zv0jgo.iksuuwfiau
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% hjzk2zv0jgo.afv534dghn
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% hjzk2zv0jgo.j1sueqnip0
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% hjzk2zv0jgo.kuucijn2sg
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 15;

                    ;% hjzk2zv0jgo.i55alh4xud
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 24;

                    ;% hjzk2zv0jgo.mkn5nhvzbk
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 33;

                    ;% hjzk2zv0jgo.hbzn3wsbye
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 36;

                    ;% hjzk2zv0jgo.cqvuoudnvb
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 39;

                    ;% hjzk2zv0jgo.htt3requoy
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 42;

                    ;% hjzk2zv0jgo.k0yfsplt3r
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 45;

                    ;% hjzk2zv0jgo.cci3mwof5h
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 48;

                    ;% hjzk2zv0jgo.coqmemksef
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 51;

                    ;% hjzk2zv0jgo.gbjq4n01xo
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 54;

                    ;% hjzk2zv0jgo.mrkfq1tuhw
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 55;

                    ;% hjzk2zv0jgo.d00t0bvsqx
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 58;

                    ;% hjzk2zv0jgo.fjb2mtsd40
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 61;

                    ;% hjzk2zv0jgo.bgmcqai5at
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 64;

                    ;% hjzk2zv0jgo.cshi4ioghy
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 65;

                    ;% hjzk2zv0jgo.php2oi4kgy
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 66;

                    ;% hjzk2zv0jgo.guife5a2rz
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 67;

                    ;% hjzk2zv0jgo.opx2dl1oco
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 68;

                    ;% hjzk2zv0jgo.hm3usbndrd
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 69;

                    ;% hjzk2zv0jgo.plnoqtrtnf
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 70;

                    ;% hjzk2zv0jgo.m2r4ovuy32
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 71;

                    ;% hjzk2zv0jgo.cno5k4jjfd
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 72;

                    ;% hjzk2zv0jgo.aqzdxk22og
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 73;

                    ;% hjzk2zv0jgo.ajfq5lcy0h
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 74;

                    ;% hjzk2zv0jgo.bbvw1e1ik4
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 75;

                    ;% hjzk2zv0jgo.k5mggrlxlo
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 78;

                    ;% hjzk2zv0jgo.jzfclqedcy
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 81;

                    ;% hjzk2zv0jgo.foog324lmw
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 84;

                    ;% hjzk2zv0jgo.pmsojihl4i
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 85;

                    ;% hjzk2zv0jgo.lugw5r3njx
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 86;

                    ;% hjzk2zv0jgo.o2rn5svcvi
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 89;

                    ;% hjzk2zv0jgo.pht4pxvhfn
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 92;

                    ;% hjzk2zv0jgo.as3le1fis3
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 95;

                    ;% hjzk2zv0jgo.on0gwyvdng
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 96;

                    ;% hjzk2zv0jgo.mdmvsl4kx3
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 99;

                    ;% hjzk2zv0jgo.kf0l3ohhjz
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 102;

                    ;% hjzk2zv0jgo.anxysqocsy
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 103;

                    ;% hjzk2zv0jgo.dpxtsc4ct3
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 106;

                    ;% hjzk2zv0jgo.ao0nbwn4uy
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 109;

                    ;% hjzk2zv0jgo.l3ad44plkh
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 112;

                    ;% hjzk2zv0jgo.h3wr3a4ile
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 113;

                    ;% hjzk2zv0jgo.fyrtf4ffcd
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 116;

                    ;% hjzk2zv0jgo.jt2k5mojeq
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 119;

                    ;% hjzk2zv0jgo.h2ikurznh0
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 122;

                    ;% hjzk2zv0jgo.othwxxxiyh
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 125;

                    ;% hjzk2zv0jgo.bj1sxp1mzb
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 127;

                    ;% hjzk2zv0jgo.mnzaajuwwx
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 128;

                    ;% hjzk2zv0jgo.h4etmfy2eh
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 129;

                    ;% hjzk2zv0jgo.dmaajqujzv
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 130;

                    ;% hjzk2zv0jgo.lwakmo2ko1
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 131;

                    ;% hjzk2zv0jgo.l2t3z55cpu
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 132;

                    ;% hjzk2zv0jgo.jjgv3id10o
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 133;

                    ;% hjzk2zv0jgo.ccp2v0is3b
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 136;

                    ;% hjzk2zv0jgo.hknbaidp1p
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 139;

                    ;% hjzk2zv0jgo.fclw1sjfex
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 142;

                    ;% hjzk2zv0jgo.n54mahp50g
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 145;

                    ;% hjzk2zv0jgo.cr54syolwa
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 148;

                    ;% hjzk2zv0jgo.jcjs231yq3
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 151;

                    ;% hjzk2zv0jgo.pfj1kie4j4
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 154;

                    ;% hjzk2zv0jgo.dzxlnr5pi4
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 155;

                    ;% hjzk2zv0jgo.ltwbxo2m5t
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 156;

                    ;% hjzk2zv0jgo.iurr1vp4ab
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 157;

                    ;% hjzk2zv0jgo.ltjx0tyc53
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 158;

                    ;% hjzk2zv0jgo.mwz1mhk5so
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 159;

                    ;% hjzk2zv0jgo.pqy3siqenb
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 160;

                    ;% hjzk2zv0jgo.oat42lolv5
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 163;

                    ;% hjzk2zv0jgo.p025xqadcy
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 166;

                    ;% hjzk2zv0jgo.k1gukjalk1
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 168;

                    ;% hjzk2zv0jgo.ncb1cpqinu
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 169;

                    ;% hjzk2zv0jgo.pgnferr3ie
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 170;

                    ;% hjzk2zv0jgo.dvx4kfp2xu
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 171;

                    ;% hjzk2zv0jgo.iwjeqmaeng
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 180;

                    ;% hjzk2zv0jgo.oobwvvygfe
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 181;

                    ;% hjzk2zv0jgo.lsfjlacb3n
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 182;

                    ;% hjzk2zv0jgo.hhes4raj3w
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 183;

                    ;% hjzk2zv0jgo.ksibqgvnrm
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 184;

                    ;% hjzk2zv0jgo.pcopyw2qch
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 185;

                    ;% hjzk2zv0jgo.l2qm0okvna
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 188;

                    ;% hjzk2zv0jgo.p1xhzbkl4w
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 191;

                    ;% hjzk2zv0jgo.meez4ih2n2
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 194;

                    ;% hjzk2zv0jgo.cjplmpquxg
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 197;

                    ;% hjzk2zv0jgo.lydelxiu4y
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 200;

                    ;% hjzk2zv0jgo.luuvgmk2wi
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 203;

                    ;% hjzk2zv0jgo.gosnqni3fu
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 206;

                    ;% hjzk2zv0jgo.jjcp1ov2bg
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 209;

                    ;% hjzk2zv0jgo.ax00eeaw5r
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 210;

                    ;% hjzk2zv0jgo.jsezxywihe
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 211;

                    ;% hjzk2zv0jgo.fmxtgiqruo
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 212;

                    ;% hjzk2zv0jgo.ewinmui34k
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 213;

                    ;% hjzk2zv0jgo.crvz5ao1xy
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 214;

                    ;% hjzk2zv0jgo.ckqg5iy5aq
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 215;

                    ;% hjzk2zv0jgo.ngexc3pd5z
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 218;

                    ;% hjzk2zv0jgo.mmtwhhrgdw
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 221;

                    ;% hjzk2zv0jgo.kdhpinsv2d
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 222;

                    ;% hjzk2zv0jgo.inh3dtaqa0
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 226;

                    ;% hjzk2zv0jgo.dd43ilih2a
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 235;

                    ;% hjzk2zv0jgo.doydg2jjr3
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 244;

                    ;% hjzk2zv0jgo.bsemagm0nc
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 253;

                    ;% hjzk2zv0jgo.ay5d1ywjz3
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 254;

                    ;% hjzk2zv0jgo.naxqiwuy5k
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 255;

                    ;% hjzk2zv0jgo.enach2tzry
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 256;

                    ;% hjzk2zv0jgo.kcempososy
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 257;

                    ;% hjzk2zv0jgo.emd4as5gy1
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 258;

                    ;% hjzk2zv0jgo.ahoyikc4du
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 259;

                    ;% hjzk2zv0jgo.ao4zg2uppg
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 260;

                    ;% hjzk2zv0jgo.p43l53pvfy
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 261;

                    ;% hjzk2zv0jgo.hqoajxwt3g
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 262;

                    ;% hjzk2zv0jgo.pq24tfbcj3
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 263;

                    ;% hjzk2zv0jgo.an3542desc
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 264;

                    ;% hjzk2zv0jgo.hps1jp4vyd
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 265;

                    ;% hjzk2zv0jgo.ncvyzjqsre
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 266;

                    ;% hjzk2zv0jgo.jrjwj2rsbk
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 267;

                    ;% hjzk2zv0jgo.fdnmbw2vle
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 268;

                    ;% hjzk2zv0jgo.grq2vpxk3r
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 269;

                    ;% hjzk2zv0jgo.fnrgz4g1b4
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 270;

                    ;% hjzk2zv0jgo.csbvwarwmh
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 271;

                    ;% hjzk2zv0jgo.pbqolavxh1
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 272;

                    ;% hjzk2zv0jgo.l3k3mynljv
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 273;

                    ;% hjzk2zv0jgo.nyxi4ruo4k
                    section.data(122).logicalSrcIdx = 123;
                    section.data(122).dtTransOffset = 274;

                    ;% hjzk2zv0jgo.bnbjvkm0ow
                    section.data(123).logicalSrcIdx = 124;
                    section.data(123).dtTransOffset = 275;

                    ;% hjzk2zv0jgo.dgibgw2vs2
                    section.data(124).logicalSrcIdx = 125;
                    section.data(124).dtTransOffset = 276;

                    ;% hjzk2zv0jgo.agekrrwrxe
                    section.data(125).logicalSrcIdx = 126;
                    section.data(125).dtTransOffset = 277;

                    ;% hjzk2zv0jgo.mo2yojf2sc
                    section.data(126).logicalSrcIdx = 127;
                    section.data(126).dtTransOffset = 279;

                    ;% hjzk2zv0jgo.eskkgchcvy
                    section.data(127).logicalSrcIdx = 128;
                    section.data(127).dtTransOffset = 280;

                    ;% hjzk2zv0jgo.n5xzk05dzf
                    section.data(128).logicalSrcIdx = 129;
                    section.data(128).dtTransOffset = 283;

                    ;% hjzk2zv0jgo.avieazpzba
                    section.data(129).logicalSrcIdx = 130;
                    section.data(129).dtTransOffset = 286;

                    ;% hjzk2zv0jgo.ezh5prodbs
                    section.data(130).logicalSrcIdx = 131;
                    section.data(130).dtTransOffset = 289;

                    ;% hjzk2zv0jgo.jvf34px5ss
                    section.data(131).logicalSrcIdx = 132;
                    section.data(131).dtTransOffset = 290;

                    ;% hjzk2zv0jgo.p10gcot45r
                    section.data(132).logicalSrcIdx = 133;
                    section.data(132).dtTransOffset = 291;

                    ;% hjzk2zv0jgo.nshb4ned5q
                    section.data(133).logicalSrcIdx = 134;
                    section.data(133).dtTransOffset = 292;

                    ;% hjzk2zv0jgo.grt4kpc5gv
                    section.data(134).logicalSrcIdx = 135;
                    section.data(134).dtTransOffset = 294;

                    ;% hjzk2zv0jgo.osedtncxqb
                    section.data(135).logicalSrcIdx = 136;
                    section.data(135).dtTransOffset = 295;

                    ;% hjzk2zv0jgo.dt0lrzjk1o
                    section.data(136).logicalSrcIdx = 137;
                    section.data(136).dtTransOffset = 298;

                    ;% hjzk2zv0jgo.neni45xlk3
                    section.data(137).logicalSrcIdx = 138;
                    section.data(137).dtTransOffset = 301;

                    ;% hjzk2zv0jgo.hzkzgft450
                    section.data(138).logicalSrcIdx = 139;
                    section.data(138).dtTransOffset = 302;

                    ;% hjzk2zv0jgo.dbxom3ehuc
                    section.data(139).logicalSrcIdx = 140;
                    section.data(139).dtTransOffset = 303;

                    ;% hjzk2zv0jgo.ezsybgwh4t
                    section.data(140).logicalSrcIdx = 141;
                    section.data(140).dtTransOffset = 304;

                    ;% hjzk2zv0jgo.cadfnhzvto
                    section.data(141).logicalSrcIdx = 142;
                    section.data(141).dtTransOffset = 306;

                    ;% hjzk2zv0jgo.p01vpysmg2
                    section.data(142).logicalSrcIdx = 143;
                    section.data(142).dtTransOffset = 307;

                    ;% hjzk2zv0jgo.b5njilv2gn
                    section.data(143).logicalSrcIdx = 144;
                    section.data(143).dtTransOffset = 310;

                    ;% hjzk2zv0jgo.eo1hh0tubv
                    section.data(144).logicalSrcIdx = 145;
                    section.data(144).dtTransOffset = 311;

                    ;% hjzk2zv0jgo.fi3hy1tf5r
                    section.data(145).logicalSrcIdx = 146;
                    section.data(145).dtTransOffset = 312;

                    ;% hjzk2zv0jgo.c4xfdotpr0
                    section.data(146).logicalSrcIdx = 147;
                    section.data(146).dtTransOffset = 315;

                    ;% hjzk2zv0jgo.erkk23cbij
                    section.data(147).logicalSrcIdx = 148;
                    section.data(147).dtTransOffset = 316;

                    ;% hjzk2zv0jgo.d1mh3tvfxa
                    section.data(148).logicalSrcIdx = 149;
                    section.data(148).dtTransOffset = 317;

                    ;% hjzk2zv0jgo.dlxjhtpbgt
                    section.data(149).logicalSrcIdx = 150;
                    section.data(149).dtTransOffset = 318;

                    ;% hjzk2zv0jgo.abjck5vnui
                    section.data(150).logicalSrcIdx = 151;
                    section.data(150).dtTransOffset = 319;

                    ;% hjzk2zv0jgo.fteax4phdm
                    section.data(151).logicalSrcIdx = 152;
                    section.data(151).dtTransOffset = 320;

                    ;% hjzk2zv0jgo.gl4zkd4p00
                    section.data(152).logicalSrcIdx = 153;
                    section.data(152).dtTransOffset = 321;

                    ;% hjzk2zv0jgo.itsrgtvmef
                    section.data(153).logicalSrcIdx = 154;
                    section.data(153).dtTransOffset = 322;

                    ;% hjzk2zv0jgo.knh1oxgwo5
                    section.data(154).logicalSrcIdx = 155;
                    section.data(154).dtTransOffset = 323;

                    ;% hjzk2zv0jgo.jcc2w2dkmn
                    section.data(155).logicalSrcIdx = 156;
                    section.data(155).dtTransOffset = 324;

                    ;% hjzk2zv0jgo.dwuhvwcohi
                    section.data(156).logicalSrcIdx = 157;
                    section.data(156).dtTransOffset = 325;

                    ;% hjzk2zv0jgo.gtf4k10ktt
                    section.data(157).logicalSrcIdx = 158;
                    section.data(157).dtTransOffset = 326;

                    ;% hjzk2zv0jgo.c2qh0pkvez
                    section.data(158).logicalSrcIdx = 159;
                    section.data(158).dtTransOffset = 327;

                    ;% hjzk2zv0jgo.pmdvzy4gmv
                    section.data(159).logicalSrcIdx = 160;
                    section.data(159).dtTransOffset = 328;

                    ;% hjzk2zv0jgo.kx5f1zuazd
                    section.data(160).logicalSrcIdx = 161;
                    section.data(160).dtTransOffset = 329;

                    ;% hjzk2zv0jgo.oxu2x0ys3i
                    section.data(161).logicalSrcIdx = 162;
                    section.data(161).dtTransOffset = 330;

                    ;% hjzk2zv0jgo.bcj1qvwgpn
                    section.data(162).logicalSrcIdx = 163;
                    section.data(162).dtTransOffset = 331;

                    ;% hjzk2zv0jgo.luqg24xiyl
                    section.data(163).logicalSrcIdx = 164;
                    section.data(163).dtTransOffset = 332;

                    ;% hjzk2zv0jgo.a2o0lqsyq3
                    section.data(164).logicalSrcIdx = 165;
                    section.data(164).dtTransOffset = 333;

                    ;% hjzk2zv0jgo.acl4r2rqtj
                    section.data(165).logicalSrcIdx = 166;
                    section.data(165).dtTransOffset = 334;

                    ;% hjzk2zv0jgo.dtswxmk2cq
                    section.data(166).logicalSrcIdx = 167;
                    section.data(166).dtTransOffset = 335;

                    ;% hjzk2zv0jgo.famqpvr3fs
                    section.data(167).logicalSrcIdx = 168;
                    section.data(167).dtTransOffset = 336;

                    ;% hjzk2zv0jgo.ec0ibhsp05
                    section.data(168).logicalSrcIdx = 169;
                    section.data(168).dtTransOffset = 337;

                    ;% hjzk2zv0jgo.k3bzmsmu0e
                    section.data(169).logicalSrcIdx = 170;
                    section.data(169).dtTransOffset = 338;

                    ;% hjzk2zv0jgo.ptb3whyae5
                    section.data(170).logicalSrcIdx = 171;
                    section.data(170).dtTransOffset = 339;

                    ;% hjzk2zv0jgo.d1qtszyg1z
                    section.data(171).logicalSrcIdx = 172;
                    section.data(171).dtTransOffset = 342;

                    ;% hjzk2zv0jgo.hbvsypwj5y
                    section.data(172).logicalSrcIdx = 173;
                    section.data(172).dtTransOffset = 351;

                    ;% hjzk2zv0jgo.ep0h21kgsz
                    section.data(173).logicalSrcIdx = 174;
                    section.data(173).dtTransOffset = 360;

                    ;% hjzk2zv0jgo.gxiiif0c3d
                    section.data(174).logicalSrcIdx = 175;
                    section.data(174).dtTransOffset = 363;

                    ;% hjzk2zv0jgo.k1sza304jy
                    section.data(175).logicalSrcIdx = 176;
                    section.data(175).dtTransOffset = 364;

                    ;% hjzk2zv0jgo.blossfgznf
                    section.data(176).logicalSrcIdx = 177;
                    section.data(176).dtTransOffset = 365;

                    ;% hjzk2zv0jgo.cyi0sujumx
                    section.data(177).logicalSrcIdx = 178;
                    section.data(177).dtTransOffset = 366;

                    ;% hjzk2zv0jgo.ahn5wc4cba
                    section.data(178).logicalSrcIdx = 179;
                    section.data(178).dtTransOffset = 367;

                    ;% hjzk2zv0jgo.n4c1sjotli
                    section.data(179).logicalSrcIdx = 180;
                    section.data(179).dtTransOffset = 368;

                    ;% hjzk2zv0jgo.kgog4d1fl5
                    section.data(180).logicalSrcIdx = 181;
                    section.data(180).dtTransOffset = 369;

                    ;% hjzk2zv0jgo.oecdr5so0f
                    section.data(181).logicalSrcIdx = 182;
                    section.data(181).dtTransOffset = 370;

                    ;% hjzk2zv0jgo.gzga0d0jbw
                    section.data(182).logicalSrcIdx = 183;
                    section.data(182).dtTransOffset = 371;

                    ;% hjzk2zv0jgo.l1p25jpqry
                    section.data(183).logicalSrcIdx = 184;
                    section.data(183).dtTransOffset = 372;

                    ;% hjzk2zv0jgo.mntumjxb41
                    section.data(184).logicalSrcIdx = 185;
                    section.data(184).dtTransOffset = 373;

                    ;% hjzk2zv0jgo.k22abf0uj2
                    section.data(185).logicalSrcIdx = 186;
                    section.data(185).dtTransOffset = 374;

                    ;% hjzk2zv0jgo.b123034b0z
                    section.data(186).logicalSrcIdx = 187;
                    section.data(186).dtTransOffset = 375;

                    ;% hjzk2zv0jgo.jrqy11puxr
                    section.data(187).logicalSrcIdx = 188;
                    section.data(187).dtTransOffset = 376;

                    ;% hjzk2zv0jgo.fmmoructyp
                    section.data(188).logicalSrcIdx = 189;
                    section.data(188).dtTransOffset = 377;

                    ;% hjzk2zv0jgo.nfwhxbbek2
                    section.data(189).logicalSrcIdx = 190;
                    section.data(189).dtTransOffset = 378;

                    ;% hjzk2zv0jgo.pw3ddy1xfy
                    section.data(190).logicalSrcIdx = 191;
                    section.data(190).dtTransOffset = 379;

                    ;% hjzk2zv0jgo.aolb2w30s4
                    section.data(191).logicalSrcIdx = 192;
                    section.data(191).dtTransOffset = 380;

                    ;% hjzk2zv0jgo.jkypjxquxw
                    section.data(192).logicalSrcIdx = 193;
                    section.data(192).dtTransOffset = 381;

                    ;% hjzk2zv0jgo.jcgspnlpxp
                    section.data(193).logicalSrcIdx = 194;
                    section.data(193).dtTransOffset = 382;

                    ;% hjzk2zv0jgo.ptb3whyae5v
                    section.data(194).logicalSrcIdx = 195;
                    section.data(194).dtTransOffset = 383;

                    ;% hjzk2zv0jgo.k12edtwgur
                    section.data(195).logicalSrcIdx = 196;
                    section.data(195).dtTransOffset = 386;

                    ;% hjzk2zv0jgo.ftpzbdiaki
                    section.data(196).logicalSrcIdx = 197;
                    section.data(196).dtTransOffset = 395;

                    ;% hjzk2zv0jgo.jmzubjfi5o
                    section.data(197).logicalSrcIdx = 198;
                    section.data(197).dtTransOffset = 398;

                    ;% hjzk2zv0jgo.lmvkheskr5
                    section.data(198).logicalSrcIdx = 199;
                    section.data(198).dtTransOffset = 399;

                    ;% hjzk2zv0jgo.j1b0ohkohh
                    section.data(199).logicalSrcIdx = 200;
                    section.data(199).dtTransOffset = 400;

                    ;% hjzk2zv0jgo.nhe43pn5nh
                    section.data(200).logicalSrcIdx = 201;
                    section.data(200).dtTransOffset = 401;

                    ;% hjzk2zv0jgo.hehj2dz0gu
                    section.data(201).logicalSrcIdx = 202;
                    section.data(201).dtTransOffset = 402;

                    ;% hjzk2zv0jgo.ew4gntkbfp
                    section.data(202).logicalSrcIdx = 203;
                    section.data(202).dtTransOffset = 403;

                    ;% hjzk2zv0jgo.lemypiazxs
                    section.data(203).logicalSrcIdx = 204;
                    section.data(203).dtTransOffset = 404;

                    ;% hjzk2zv0jgo.nvhx5js3b5
                    section.data(204).logicalSrcIdx = 205;
                    section.data(204).dtTransOffset = 405;

                    ;% hjzk2zv0jgo.ew1xexz22w
                    section.data(205).logicalSrcIdx = 206;
                    section.data(205).dtTransOffset = 406;

                    ;% hjzk2zv0jgo.gp5b442d4z
                    section.data(206).logicalSrcIdx = 207;
                    section.data(206).dtTransOffset = 407;

                    ;% hjzk2zv0jgo.kp0rothnh4
                    section.data(207).logicalSrcIdx = 208;
                    section.data(207).dtTransOffset = 408;

                    ;% hjzk2zv0jgo.dzivdzp2ag
                    section.data(208).logicalSrcIdx = 209;
                    section.data(208).dtTransOffset = 409;

                    ;% hjzk2zv0jgo.ilayj5xnmf
                    section.data(209).logicalSrcIdx = 210;
                    section.data(209).dtTransOffset = 410;

                    ;% hjzk2zv0jgo.mzpu5t1jkm
                    section.data(210).logicalSrcIdx = 211;
                    section.data(210).dtTransOffset = 411;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hjzk2zv0jgo.nye15ofalv
                    section.data(1).logicalSrcIdx = 213;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 11;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (cd3zedlmwtk)
        ;%
            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% cd3zedlmwtk.loxtit5c1e
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.cu0k1tufjn
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% cd3zedlmwtk.nmooqw0hsr
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% cd3zedlmwtk.egbzhokzr0
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% cd3zedlmwtk.mk2hhitrny
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% cd3zedlmwtk.mkzihgyczk
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% cd3zedlmwtk.oec4smrr1x
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% cd3zedlmwtk.ogngmlftsj
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 9;

                    ;% cd3zedlmwtk.hy3naecleu
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 12;

                    ;% cd3zedlmwtk.bisb0vebkm
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% cd3zedlmwtk.jiuvpdeyn3
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 16;

                    ;% cd3zedlmwtk.dzy2xz0dmj
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 17;

                    ;% cd3zedlmwtk.i0hphjuxva
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 20;

                    ;% cd3zedlmwtk.nl31v5w0ne
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 21;

                    ;% cd3zedlmwtk.c5tnxxhmao
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 38;
            section.data(38)  = dumData; %prealloc

                    ;% cd3zedlmwtk.ipfkrbexcj.LoggedData
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.j4k4c0wov1.LoggedData
                    section.data(2).logicalSrcIdx = 16;
                    section.data(2).dtTransOffset = 1;

                    ;% cd3zedlmwtk.fbnq20w2t1.LoggedData
                    section.data(3).logicalSrcIdx = 17;
                    section.data(3).dtTransOffset = 2;

                    ;% cd3zedlmwtk.jvyokqwwga.LoggedData
                    section.data(4).logicalSrcIdx = 18;
                    section.data(4).dtTransOffset = 3;

                    ;% cd3zedlmwtk.exnzfknedx.LoggedData
                    section.data(5).logicalSrcIdx = 19;
                    section.data(5).dtTransOffset = 4;

                    ;% cd3zedlmwtk.a2qy0ksj02.LoggedData
                    section.data(6).logicalSrcIdx = 20;
                    section.data(6).dtTransOffset = 5;

                    ;% cd3zedlmwtk.eaaecj2u3w.LoggedData
                    section.data(7).logicalSrcIdx = 21;
                    section.data(7).dtTransOffset = 6;

                    ;% cd3zedlmwtk.omcoc4ypx4.LoggedData
                    section.data(8).logicalSrcIdx = 22;
                    section.data(8).dtTransOffset = 7;

                    ;% cd3zedlmwtk.ht5q1njptv.LoggedData
                    section.data(9).logicalSrcIdx = 23;
                    section.data(9).dtTransOffset = 8;

                    ;% cd3zedlmwtk.mz2ockkxco.LoggedData
                    section.data(10).logicalSrcIdx = 24;
                    section.data(10).dtTransOffset = 9;

                    ;% cd3zedlmwtk.n5jd0awems.LoggedData
                    section.data(11).logicalSrcIdx = 25;
                    section.data(11).dtTransOffset = 10;

                    ;% cd3zedlmwtk.dqno0vynm4.LoggedData
                    section.data(12).logicalSrcIdx = 26;
                    section.data(12).dtTransOffset = 11;

                    ;% cd3zedlmwtk.p110fflz3m.LoggedData
                    section.data(13).logicalSrcIdx = 27;
                    section.data(13).dtTransOffset = 12;

                    ;% cd3zedlmwtk.pc0sm3e0ai.LoggedData
                    section.data(14).logicalSrcIdx = 28;
                    section.data(14).dtTransOffset = 13;

                    ;% cd3zedlmwtk.daq513yd0w.LoggedData
                    section.data(15).logicalSrcIdx = 29;
                    section.data(15).dtTransOffset = 14;

                    ;% cd3zedlmwtk.ad0f3vvjvt.LoggedData
                    section.data(16).logicalSrcIdx = 30;
                    section.data(16).dtTransOffset = 15;

                    ;% cd3zedlmwtk.jvt2oa1rft.LoggedData
                    section.data(17).logicalSrcIdx = 31;
                    section.data(17).dtTransOffset = 16;

                    ;% cd3zedlmwtk.o5nx2tfhhr.LoggedData
                    section.data(18).logicalSrcIdx = 32;
                    section.data(18).dtTransOffset = 17;

                    ;% cd3zedlmwtk.b1sw42zjhi.AQHandles
                    section.data(19).logicalSrcIdx = 33;
                    section.data(19).dtTransOffset = 18;

                    ;% cd3zedlmwtk.gxbxhovrgp.AQHandles
                    section.data(20).logicalSrcIdx = 34;
                    section.data(20).dtTransOffset = 19;

                    ;% cd3zedlmwtk.aged3k2pcj.AQHandles
                    section.data(21).logicalSrcIdx = 35;
                    section.data(21).dtTransOffset = 20;

                    ;% cd3zedlmwtk.okgw2pzqbt.AQHandles
                    section.data(22).logicalSrcIdx = 36;
                    section.data(22).dtTransOffset = 21;

                    ;% cd3zedlmwtk.fnjq4dcfmy.AQHandles
                    section.data(23).logicalSrcIdx = 37;
                    section.data(23).dtTransOffset = 22;

                    ;% cd3zedlmwtk.aj4ml0ju0j.AQHandles
                    section.data(24).logicalSrcIdx = 38;
                    section.data(24).dtTransOffset = 23;

                    ;% cd3zedlmwtk.jfucdonibi.AQHandles
                    section.data(25).logicalSrcIdx = 39;
                    section.data(25).dtTransOffset = 24;

                    ;% cd3zedlmwtk.ldwyse5jwq.AQHandles
                    section.data(26).logicalSrcIdx = 40;
                    section.data(26).dtTransOffset = 25;

                    ;% cd3zedlmwtk.n2klgvknco.AQHandles
                    section.data(27).logicalSrcIdx = 41;
                    section.data(27).dtTransOffset = 26;

                    ;% cd3zedlmwtk.i253u1jn33.AQHandles
                    section.data(28).logicalSrcIdx = 42;
                    section.data(28).dtTransOffset = 27;

                    ;% cd3zedlmwtk.ofdxtr0v22.LoggedData
                    section.data(29).logicalSrcIdx = 43;
                    section.data(29).dtTransOffset = 28;

                    ;% cd3zedlmwtk.c2katuywif.AQHandles
                    section.data(30).logicalSrcIdx = 44;
                    section.data(30).dtTransOffset = 32;

                    ;% cd3zedlmwtk.cijilelxe3.AQHandles
                    section.data(31).logicalSrcIdx = 45;
                    section.data(31).dtTransOffset = 33;

                    ;% cd3zedlmwtk.fguaac4ehu.AQHandles
                    section.data(32).logicalSrcIdx = 46;
                    section.data(32).dtTransOffset = 34;

                    ;% cd3zedlmwtk.e1zyqwjknc.AQHandles
                    section.data(33).logicalSrcIdx = 47;
                    section.data(33).dtTransOffset = 35;

                    ;% cd3zedlmwtk.f44csx1gfq.AQHandles
                    section.data(34).logicalSrcIdx = 48;
                    section.data(34).dtTransOffset = 36;

                    ;% cd3zedlmwtk.b4qcpdu5rl.AQHandles
                    section.data(35).logicalSrcIdx = 49;
                    section.data(35).dtTransOffset = 37;

                    ;% cd3zedlmwtk.pu5zuzij3z.AQHandles
                    section.data(36).logicalSrcIdx = 50;
                    section.data(36).dtTransOffset = 38;

                    ;% cd3zedlmwtk.fccbqfvccp.LoggedData
                    section.data(37).logicalSrcIdx = 51;
                    section.data(37).dtTransOffset = 39;

                    ;% cd3zedlmwtk.dooqksm55e.LoggedData
                    section.data(38).logicalSrcIdx = 52;
                    section.data(38).dtTransOffset = 40;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% cd3zedlmwtk.ksszy2s0p4
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.mruvr1k0o4
                    section.data(2).logicalSrcIdx = 54;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% cd3zedlmwtk.hpbs0pv0ja
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.ksxay1wm50
                    section.data(2).logicalSrcIdx = 56;
                    section.data(2).dtTransOffset = 1;

                    ;% cd3zedlmwtk.i4tbqjyhaq
                    section.data(3).logicalSrcIdx = 57;
                    section.data(3).dtTransOffset = 2;

                    ;% cd3zedlmwtk.eem1bmg2vx
                    section.data(4).logicalSrcIdx = 58;
                    section.data(4).dtTransOffset = 3;

                    ;% cd3zedlmwtk.ptpami1mqf
                    section.data(5).logicalSrcIdx = 59;
                    section.data(5).dtTransOffset = 4;

                    ;% cd3zedlmwtk.dsgl5lbh0v
                    section.data(6).logicalSrcIdx = 60;
                    section.data(6).dtTransOffset = 5;

                    ;% cd3zedlmwtk.hj4clfy4lk
                    section.data(7).logicalSrcIdx = 61;
                    section.data(7).dtTransOffset = 6;

                    ;% cd3zedlmwtk.pwej4sp12d
                    section.data(8).logicalSrcIdx = 62;
                    section.data(8).dtTransOffset = 7;

                    ;% cd3zedlmwtk.dne2ysu0rs
                    section.data(9).logicalSrcIdx = 63;
                    section.data(9).dtTransOffset = 8;

                    ;% cd3zedlmwtk.nmwptmhta5
                    section.data(10).logicalSrcIdx = 64;
                    section.data(10).dtTransOffset = 9;

                    ;% cd3zedlmwtk.mpo4kumew4
                    section.data(11).logicalSrcIdx = 65;
                    section.data(11).dtTransOffset = 10;

                    ;% cd3zedlmwtk.a2yveaeuqa
                    section.data(12).logicalSrcIdx = 66;
                    section.data(12).dtTransOffset = 11;

                    ;% cd3zedlmwtk.a1a5rahew4
                    section.data(13).logicalSrcIdx = 67;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 23;
            section.data(23)  = dumData; %prealloc

                    ;% cd3zedlmwtk.j5mbuidgdb
                    section.data(1).logicalSrcIdx = 68;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.fqno2nhg0i
                    section.data(2).logicalSrcIdx = 69;
                    section.data(2).dtTransOffset = 1;

                    ;% cd3zedlmwtk.jcxbkbqufo
                    section.data(3).logicalSrcIdx = 70;
                    section.data(3).dtTransOffset = 2;

                    ;% cd3zedlmwtk.grss1hcqfy
                    section.data(4).logicalSrcIdx = 71;
                    section.data(4).dtTransOffset = 3;

                    ;% cd3zedlmwtk.gwsyjhto3i
                    section.data(5).logicalSrcIdx = 72;
                    section.data(5).dtTransOffset = 4;

                    ;% cd3zedlmwtk.j2lgfwz4nb
                    section.data(6).logicalSrcIdx = 73;
                    section.data(6).dtTransOffset = 5;

                    ;% cd3zedlmwtk.nmjkdxbctr
                    section.data(7).logicalSrcIdx = 74;
                    section.data(7).dtTransOffset = 6;

                    ;% cd3zedlmwtk.mlektwyh03
                    section.data(8).logicalSrcIdx = 75;
                    section.data(8).dtTransOffset = 7;

                    ;% cd3zedlmwtk.hkexsdmmiq
                    section.data(9).logicalSrcIdx = 76;
                    section.data(9).dtTransOffset = 8;

                    ;% cd3zedlmwtk.jouu1ys3n0
                    section.data(10).logicalSrcIdx = 77;
                    section.data(10).dtTransOffset = 9;

                    ;% cd3zedlmwtk.dy3it3hprz
                    section.data(11).logicalSrcIdx = 78;
                    section.data(11).dtTransOffset = 10;

                    ;% cd3zedlmwtk.apkslfbs4p
                    section.data(12).logicalSrcIdx = 79;
                    section.data(12).dtTransOffset = 11;

                    ;% cd3zedlmwtk.cftrcsvurp
                    section.data(13).logicalSrcIdx = 80;
                    section.data(13).dtTransOffset = 12;

                    ;% cd3zedlmwtk.fodrtj5jvy
                    section.data(14).logicalSrcIdx = 81;
                    section.data(14).dtTransOffset = 13;

                    ;% cd3zedlmwtk.ei1iqzsamz
                    section.data(15).logicalSrcIdx = 82;
                    section.data(15).dtTransOffset = 14;

                    ;% cd3zedlmwtk.cndsbiglgj
                    section.data(16).logicalSrcIdx = 83;
                    section.data(16).dtTransOffset = 15;

                    ;% cd3zedlmwtk.pi3di1b0u1
                    section.data(17).logicalSrcIdx = 84;
                    section.data(17).dtTransOffset = 16;

                    ;% cd3zedlmwtk.aqzoa0ngxb
                    section.data(18).logicalSrcIdx = 85;
                    section.data(18).dtTransOffset = 17;

                    ;% cd3zedlmwtk.jy2jzur21d
                    section.data(19).logicalSrcIdx = 86;
                    section.data(19).dtTransOffset = 18;

                    ;% cd3zedlmwtk.huc0wlm4jz
                    section.data(20).logicalSrcIdx = 87;
                    section.data(20).dtTransOffset = 19;

                    ;% cd3zedlmwtk.cnnxvlxj4k
                    section.data(21).logicalSrcIdx = 88;
                    section.data(21).dtTransOffset = 20;

                    ;% cd3zedlmwtk.jfsreelaxk
                    section.data(22).logicalSrcIdx = 89;
                    section.data(22).dtTransOffset = 21;

                    ;% cd3zedlmwtk.imaif5mqhv
                    section.data(23).logicalSrcIdx = 90;
                    section.data(23).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% cd3zedlmwtk.nz22oshr1s
                    section.data(1).logicalSrcIdx = 91;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.gtpsr3jsav
                    section.data(2).logicalSrcIdx = 92;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% cd3zedlmwtk.bdb2drldzc
                    section.data(1).logicalSrcIdx = 93;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.ijem1srja2
                    section.data(2).logicalSrcIdx = 94;
                    section.data(2).dtTransOffset = 1;

                    ;% cd3zedlmwtk.nqf2anvknn
                    section.data(3).logicalSrcIdx = 95;
                    section.data(3).dtTransOffset = 2;

                    ;% cd3zedlmwtk.i55hj3bwoh
                    section.data(4).logicalSrcIdx = 96;
                    section.data(4).dtTransOffset = 3;

                    ;% cd3zedlmwtk.gdxc324iwa
                    section.data(5).logicalSrcIdx = 97;
                    section.data(5).dtTransOffset = 4;

                    ;% cd3zedlmwtk.cmennrwj1m
                    section.data(6).logicalSrcIdx = 98;
                    section.data(6).dtTransOffset = 5;

                    ;% cd3zedlmwtk.oeildbcyu5
                    section.data(7).logicalSrcIdx = 99;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% cd3zedlmwtk.bm3reeetok
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

                    ;% cd3zedlmwtk.kqm1lj2att
                    section.data(2).logicalSrcIdx = 101;
                    section.data(2).dtTransOffset = 1;

                    ;% cd3zedlmwtk.eoy4o1rwoy
                    section.data(3).logicalSrcIdx = 102;
                    section.data(3).dtTransOffset = 2;

                    ;% cd3zedlmwtk.liakohv2jb
                    section.data(4).logicalSrcIdx = 103;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cd3zedlmwtk.fv0l3l0qhm.dynzrd2nl1
                    section.data(1).logicalSrcIdx = 104;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cd3zedlmwtk.en4thmesjh.dynzrd2nl1
                    section.data(1).logicalSrcIdx = 105;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cd3zedlmwtk.kfjac3xldmi.dynzrd2nl1
                    section.data(1).logicalSrcIdx = 106;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 2644094280;
    targMap.checksum1 = 1939489914;
    targMap.checksum2 = 722370026;
    targMap.checksum3 = 2297019896;

