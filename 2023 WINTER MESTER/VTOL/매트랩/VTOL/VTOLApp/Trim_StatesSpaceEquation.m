%% dT=0.79, dE=0.0685675, TiltAngle=90deg 
% 순서대로 x = u , w , q , theta / u = dE , dT / y : pitchRate 
A1=[-0.5993 0.4007 -0.08896 -9.793; -1.525 -3.8 15.1 -1.421*10^(-14); -1.314 -9.824 -14.68 -5.684*10^(-14); 0 0 1 0];
B1=[-0.9485 13.78; -7.262 -8.436*10^(-16); -163.2 7.145*10^(-17); 0 0];
C1=[0 0 1 0];
D1=[0 0];

sys_ss_1=ss(A1,B1,C1,D1)
G_1=tf(sys_ss_1)

% dE
sys_dE=tf([-163.2 -645.4 -434.3 4.061*10^(-13)],[1 19.08 215.7 127.3 97.82]);
[r,k]=rlocus(sys_dE);
rlocus(sys_dE,k)

% dT
sys_dT=tf([-18.11 137.6 1.032*10^(-29)],[1 19.08 215.7 127.3 97.82]);
[r,k]=rlocus(sys_dT);
rlocus(sys_dT,k)

%
controlSystemDesigner(sys_dE)
%
controlSystemDesigner(sys_dT)

%% dT=0.5694084123, dE=-0.2086060417, TiltAngle=90deg 
A2=[-0.5224 0.41116 -0.05537 -9.793; -1.274 -3.791 15.1 -1.421*10^(-14); 4.341 -9.824 -14.68 -5.684*10^(-14); 0 0 1 0];
B2=[-0.2181 8.693; -7.262 -5.323*10^(-16); -163.2 4.509*10^(-15); 0 0];
C2=[0 0 1 0];
D2=[0 0];

sys_ss_2=ss(A2,B2,C2,D2)
G_2=tf(sys_ss_2)

% dE
sys_dE2=tf([-163.2 -633.6 -390.7 -4.523*10^(-13)],[1 18.99 214.4 131.4 283.7]);
[r,k]=rlocus(sys_dE2);
rlocus(sys_dE2,k)

% dT
sys_dT2=tf([37.74 251.9 -2.791*10^(-28)],[1 18.99 214.4 131.4 283.7]);
[r,k]=rlocus(sys_dT2);
rlocus(sys_dT2,k)

%
controlSystemDesigner(sys_dE2)
%
controlSystemDesigner(sys_dT2)