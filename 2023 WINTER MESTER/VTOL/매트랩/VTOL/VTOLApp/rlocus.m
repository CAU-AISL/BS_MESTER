% sysc=d2c(linsys_PitchRate)

% tf(sysc)

% sys=tf([-398.5 -2184 -1118],[1 7.08 391.4 90.86 351.4]);
% [r,k]=rlocus(sys);
% rlocus(sys,k)

sys=tf([-64.67 -175.3 -107.4 -6.117e-11],[1 3.95 66.41 28.11 57.24]);
[r,k]=rlocus(sys);
rlocus(sys,k)

% controlSystemDesigner(sysc)

% pidTuner

sysc2=tf([-0.071056 -0.078331],[1 0])*tf(sysc)

% nyquist(sysc)

%% base OP
% 4차 시스템의 분모 계수
denominator_4th = [1 7.08 391.4 90.86 351.4];

% 분모의 근 계산
roots_denominator = roots(denominator_4th);

% -3.4312 + 19.4224i와 -3.4312 - 19.4224i를 제외한 나머지 근 선택
selected_roots = [-0.1088 + 0.9442i, -0.1088 - 0.9442i];
% selected_roots = [-3.4312 + 19.4224i, -3.4312 - 19.4224i];

% 선택한 근으로 2차 시스템 근사화
denominator_2nd = poly(selected_roots);

% 4차 시스템과 2차 시스템의 전달 함수 정의
sys_4th = tf(1, denominator_4th);
sys_2nd = tf(1, denominator_2nd);

% K 값 계산
K = dcgain(sys_4th) / dcgain(sys_2nd)

%%
% 4차 시스템 전달 함수의 계수
numerator_4th = [-398.5 -2184 -1118];
denominator_4th = [1 7.08 391.4 90.86 351.4];

% 4차 시스템 전달 함수 정의
sys_4th = tf(numerator_4th, denominator_4th);

% 2차 시스템 전달 함수의 계수
z1 = -0.1088 + 0.9442i; % z1 = -3.4312 + 19.4224i
z2 = -0.1088 - 0.9442i; % z2 = -3.4312 - 19.4224i
numerator_2nd = [K];
denominator_2nd = [1, -z1-z2, z1*z2];

% 2차 시스템 전달 함수 정의
sys_2nd = tf(numerator_2nd, denominator_2nd);

% 주파수 응답을 그리기 위한 범위 설정
w = logspace(-1, 2, 100);

% 기존 4차 시스템과 2차 근사 시스템의 주파수 응답 계산
[mag_4th, phase_4th] = bode(sys_4th, w);
[mag_2nd, phase_2nd] = bode(sys_2nd, w);

mag_4th = squeeze(mag_4th);
mag_2nd = squeeze(mag_2nd);
phase_4th = squeeze(phase_4th);
phase_2nd = squeeze(phase_2nd);

% 그래프 그리기
figure;
subplot(2, 1, 1);
semilogx(w, 20*log10(mag_4th), 'b');
hold on;
semilogx(w, 20*log10(mag_2nd), 'r--');
grid on;
title('Magnitude Response');
legend('4차 시스템', '2차 근사 시스템');

subplot(2, 1, 2);
semilogx(w, phase_4th, 'b');
hold on;
semilogx(w, phase_2nd, 'r--');
grid on;
title('Phase Response');
legend('4차 시스템', '2차 근사 시스템');
%%
% 시간 범위 설정
t = 0:0.01:5;

% 4차 시스템과 2차 근사 시스템의 계단 응답 계산
step_4th = step(sys_4th, t);
step_2nd = step(sys_2nd, t);

% 그래프 그리기
figure;
plot(t, step_4th, 'b', 'LineWidth', 2);
hold on;
plot(t, step_2nd, 'r--', 'LineWidth', 2);
grid on;
title('Step Response Comparison');
legend('4차 시스템', '2차 근사 시스템');
xlabel('Time');
ylabel('Amplitude');
%% new OP
% 4차 시스템의 분모 계수
denominator_4th = [1 3.95 66.41 28.11 57.24];

% 분모의 근 계산
roots_denominator = roots(denominator_4th)

% -3.4312 + 19.4224i와 -3.4312 - 19.4224i를 제외한 나머지 근 선택
selected_roots = [-1.7806 + 7.8078i, -1.7806 - 7.8078i];
% selected_roots = [-0.1944 + 0.9245i, -0.1944 - 0.9245i];

% 선택한 근으로 2차 시스템 근사화
denominator_2nd = poly(selected_roots);

% 4차 시스템과 2차 시스템의 전달 함수 정의
sys_4th = tf(1, denominator_4th);
sys_2nd = tf(1, denominator_2nd);

% K 값 계산
K = dcgain(sys_4th) / dcgain(sys_2nd)
%%
% 4차 시스템 전달 함수의 계수
numerator_4th = [-64.67 -175.3 -107.4 -6.117e-11];
denominator_4th = [1 3.95 66.41 28.11 57.24];

% 4차 시스템 전달 함수 정의
sys_4th = tf(numerator_4th, denominator_4th);

% 2차 시스템 전달 함수의 계수
z1 = -1.7806 + 7.8078i; % z1 = -0.1944 + 0.9245i
z2 = -1.7806 - 7.8078i; % z2 = -0.1944 - 0.9245i
numerator_2nd = [K];
denominator_2nd = [1, -z1-z2, z1*z2];

% 2차 시스템 전달 함수 정의
sys_2nd = tf(numerator_2nd, denominator_2nd);

% 주파수 응답을 그리기 위한 범위 설정
w = logspace(-1, 2, 100);

% 기존 4차 시스템과 2차 근사 시스템의 주파수 응답 계산
[mag_4th, phase_4th] = bode(sys_4th, w);
[mag_2nd, phase_2nd] = bode(sys_2nd, w);

mag_4th = squeeze(mag_4th);
mag_2nd = squeeze(mag_2nd);
phase_4th = squeeze(phase_4th);
phase_2nd = squeeze(phase_2nd);

% 그래프 그리기
figure;
subplot(2, 1, 1);
semilogx(w, 20*log10(mag_4th), 'b');
hold on;
semilogx(w, 20*log10(mag_2nd), 'r--');
grid on;
title('Magnitude Response');
legend('4차 시스템', '2차 근사 시스템');

subplot(2, 1, 2);
semilogx(w, phase_4th, 'b');
hold on;
semilogx(w, phase_2nd, 'r--');
grid on;
title('Phase Response');
legend('4차 시스템', '2차 근사 시스템');

%%
controlSystemDesigner(sys_2nd)


