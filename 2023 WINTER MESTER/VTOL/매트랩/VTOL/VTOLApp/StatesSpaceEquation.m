%%
g=9.81; 
u_trim=14.4739;   q_trim=0;   w_trim=0;   Va_trim=14.4739;  deltat_trim=0.6675;    deltae_trim=0;  alpha_trim=0.0043; theta_trim=0.0043;
rho=1.2250;     S=0.55;   m=6.0230;   c=0.2750;   k=1/650;   S_prop=pi/4*(0.3052)^2;  C_prop=0.03338*(14.4739/30.52)^3-0.1265*(14.4739/30.52)^2-0.1210*(14.4739/30.52)+0.1142;

C_L0=0.81857;    C_Lalpha=4.09127;    C_Ldeltae=0.50787;      C_Lq=7.31097;

C_Dmin=0.06047;    K=0.1328;    C_LCDmin=0.4806; C_Ddeltae=0.016043; 
C_D0=C_Dmin+K*(C_L0-C_LCDmin); C_Dalpha=C_Dmin+K*(C_Lalpha-C_LCDmin); C_Dq=C_Dmin+K*(C_Lq-C_LCDmin);

C_X0=C_L0*sin(alpha_trim)-C_D0*cos(alpha_trim);    C_Xalpha=C_Lalpha*sin(alpha_trim)-C_Dalpha*cos(alpha_trim);    
C_Xdeltae=C_Ldeltae*sin(alpha_trim)-C_Ddeltae*cos(alpha_trim);       C_Xq=C_Lq*sin(alpha_trim)-C_Dq*cos(alpha_trim);
C_Z0=-C_L0*cos(alpha_trim)-C_D0*sin(alpha_trim);    C_Zalpha=-C_Lalpha*cos(alpha_trim)-C_Dalpha*sin(alpha_trim);    
C_Zdeltae=-C_Ldeltae*cos(alpha_trim)-C_Ddeltae*sin(alpha_trim);   C_Zq=-C_Lq*cos(alpha_trim)-C_Dq*sin(alpha_trim);
C_m0=0.00763;    C_malpha=-1.76966;    C_mdeltae=-1.83747;   C_mq=-19.22663;
J_y=0.2670;
%%
X_u = u_trim *rho * S / m * (C_X0 + C_Xalpha * alpha_trim + C_Xdeltae * deltae_trim) - rho * S * w_trim * C_Xalpha / (2 * m ) + rho *S*c*C_Xq*u_trim*q_trim/(4*m*Va_trim)-rho*S_prop*C_prop*u_trim/m;
X_w = -q_trim+w_trim*rho*S/m*(C_X0+C_Xalpha*alpha_trim+C_Xdeltae*deltae_trim)+rho*S*c*C_Xq*w_trim*q_trim/(4*m*Va_trim)+rho*S*C_Xalpha*u_trim/(2*m )-rho*S_prop*C_prop*w_trim/m;
X_q = -w_trim+rho*Va_trim*S*C_Xq*c/(4*m );

X_deltae = rho*Va_trim^2*S*C_Xdeltae/(2*m );
X_deltat = rho*S_prop*C_prop*k^2*deltat_trim/m;

Z_u = q_trim + u_trim*rho*S/m*(C_Z0+C_Zalpha*alpha_trim+C_Zdeltae*deltae_trim)-rho*S*C_Zalpha*w_trim/(2*m ) +u_trim*rho*S*C_Zq*c*q_trim/(4*m*Va_trim);
Z_w = w_trim*rho*S/m*(C_Z0+C_Zalpha*alpha_trim+C_Zdeltae*deltae_trim)+rho*S*C_Zalpha*w_trim/(2*m ) +rho*w_trim*S*C_Zq*c*q_trim/(4*m*Va_trim);
Z_q = u_trim+rho*Va_trim*S*C_Zq*c /(4*m );

Z_deltae = rho*Va_trim^2*S*C_Zdeltae/(2*m );

M_u = u_trim*rho*S*c/J_y*(C_m0+C_malpha*alpha_trim+C_mdeltae*deltae_trim)-rho*S*c*C_malpha*w_trim/(2*J_y)+rho*S*c^2*C_mq*q_trim*u_trim/(4*J_y*Va_trim);
M_w = w_trim*rho*S*c/J_y*(C_m0+C_malpha*alpha_trim+C_mdeltae*deltae_trim)+rho*S*c*C_malpha*u_trim/(2*J_y)+rho*S*c^2*C_mq*q_trim*w_trim/(4*J_y*Va_trim);
M_q = rho*Va_trim*S*c^2*C_mq/(4*J_y );

M_deltae = rho*Va_trim^2*S*c*C_mdeltae/(2*J_y);
%%
% u w q theta h
A=[X_u X_w X_q -g*cos(theta_trim) 0; Z_u Z_w Z_q -g*sin(theta_trim) 0; M_u M_w M_q 0 0; 0 0 1 0 0; sin(theta_trim) -cos(theta_trim) 0 u_trim*cos(theta_trim)+w_trim*sin(theta_trim) 0]
B=[X_deltae X_deltat; Z_deltae 0; M_deltae 0; 0 0; 0 0;]
% u alpha q theta h
A1=[X_u X_w*Va_trim*cos(alpha_trim) X_q -g*cos(theta_trim) 0; Z_u/(Va_trim*cos(alpha_trim)) Z_w Z_q/(Va_trim*cos(alpha_trim)) -g*sin(theta_trim)/(Va_trim*cos(alpha_trim)) 0; M_u M_w*Va_trim*cos(alpha_trim) M_q 0 0; 0 0 1 0 0; sin(theta_trim) -Va_trim*cos(theta_trim)*cos(alpha_trim) 0 u_trim*cos(theta_trim)+w_trim*sin(theta_trim) 0]
B1=[X_deltae X_deltat; Z_deltae/(Va_trim*cos(alpha_trim)) 0; M_deltae 0; 0 0; 0 0;]
%%
% A=[-0.5585 0.4033 -0.08065 -9.793; -1.463 -3.796 15.1 -1.421*exp(-14); 0.08472 -9.824 -14.68 -5.684*exp(-14); 0 0 1 0]
% B=[-0.6519 0.06584; -7.262 -4.031*exp(-18); -163.2 3.415*exp(-17); 0 0]