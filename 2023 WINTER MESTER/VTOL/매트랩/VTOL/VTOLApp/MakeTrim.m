% 
% for TiltAngle = rad2deg(90) : rad2deg(-1) : rad2deg(0)
%     for dE = -1.7 : 0.001 : 1.7
%         for dT = 110 : 0.001 : 130
%             out1=sim("Dynamics");
% 
%         end
%     end
% end
%%
% threshold = exp(-9);
% results =[]; % 결과를 저장할 배열
% 
% for TiltAngle = deg2rad(90) : deg2rad(-1) : deg2rad(0)
%     for dE = -1.7 : 0.001 : 1.7
%         for dT = 110 : 0.001 : 130
% 
%             out1 = sim("Dynamics");
% 
%             if out1.Vb_dot(end,1) < threshold && out1.Vb_dot(end,3) < threshold && ...
%                out1.Ve(end,3) < threshold && out1.pitchRate(end,1) < threshold && ...
%                out1.pitchRate_dot(end,1) < threshold
% 
%                 results(end+1, :) = [dT, dE, TiltAngle];
% 
%             end
%         end
%     end
% end

%%
% threshold = exp(-9);
% results = []; % 결과를 저장할 배열
% 
% TiltAngles = deg2rad(90) : deg2rad(-1) : deg2rad(0);
% dEs = -1.7 : 0.01 : 1.7;
% dTs = 110 : 0.01 : 130;
% 
% % 시간에 대한 2차원 배열 초기화
% numTiltAngles = numel(TiltAngles);
% numdEs = numel(dEs);
% numdTs = numel(dTs);
% timeMatrix = zeros(numTiltAngles, numdEs, numdTs);
% 
% for k = 1:numTiltAngles
%     TiltAngle = TiltAngles(k);
%     for j = 1:numdEs
%         dE = dEs(j);
%         for i = 1:numdTs
%             dT = dTs(i);
%             out1 = sim("Dynamics");
% 
%             % 조건을 만족하는지 확인하고, 만족할 경우 시간 값 저장
%             if out1.Vb_dot(end,1) < threshold && out1.Vb_dot(end,3) < threshold && ...
%                out1.Ve(end,3) < threshold && out1.pitchRate(end,1) < threshold && ...
%                out1.pitchRate_dot(end,1) < threshold
%                 timeMatrix(k, j, i) = out1.tout(end);
%             end
%         end
%     end
% end
% 
%%
% threshold = exp(-9);
% results = []; % 결과를 저장할 배열
% 
% TiltAngles = deg2rad(90) : deg2rad(-1) : deg2rad(0);
% dEs = -1.7 : 0.001 : 1.7;
% dTs = 110 : 0.001 : 130;
% 
% TiltAngleArray = zeros(1, numel(TiltAngles));
% dEArray = zeros(1, numel(dEs));
% dTArray = zeros(1, numel(dTs));
% 
% % TiltAngle, dE, dT를 배열로 저장
% for i = 1:numel(TiltAngles)
%     TiltAngleArray(i) = TiltAngles(i);
% end
% 
% for j = 1:numel(dEs)
%     dEArray(j) = dEs(j);
% end
% 
% for k = 1:numel(dTs)
%     dTArray(k) = dTs(k);
% end
% 
% for i = 1:numel(TiltAngleArray)
%     TiltAngle = TiltAngleArray(i);
%     for j = 1:numel(dEArray)
%         dE = dEArray(j);
%         for k = 1:numel(dTArray)
%             dT = dTArray(k);
%             out1 = sim("Dynamics");
% 
%             if out1.Vb_dot(end,1) < threshold && out1.Vb_dot(end,3) < threshold && ...
%                out1.Ve(end,3) < threshold && out1.pitchRate(end,1) < threshold && ...
%                out1.pitchRate_dot(end,1) < threshold
% 
%                 results(end+1, :) = [dT, dE, TiltAngle];
% 
%             end
%         end
%     end
% end
%% 일단 이거
% threshold = exp(-9);
% results = []; 
% 
% TiltAngles = deg2rad(90) : deg2rad(-1) : deg2rad(0);
% dEs = -1.7 : 0.001 : 1.7;
% dTs = 110 : 0.001 : 130;
% 
% for i = 1:numel(TiltAngles)
%     TiltAngle = TiltAngles(i);
%     for j = 1:numel(dEs)
%         dE = dEs(j);
%         for k = 1:numel(dTs)
%             dT = dTs(k);
%             out1 = sim("Dynamics");
% 
%             if out1.Vb_dot(end,1) < threshold && out1.Vb_dot(end,3) < threshold && ...
%                out1.Ve(end,3) < threshold && out1.pitchRate(end,1) < threshold && ...
%                out1.pitchRate_dot(end,1) < threshold
% 
%                 results(end+1, :) = [dT, dE, TiltAngle];
%             end
% 
%         end
%     end
% end
%% 이거 실행은 됨. 근데 시뮬횟수 너무 많음.
% threshold = exp(-9);
% results = []; 
% 
% TiltAngles = deg2rad(90) : deg2rad(-10) : deg2rad(0);
% dEs = -1.7 : 0.001 : 1.7;
% dTs = 110 : 1 : 130;
% 
% % 각 변수에 대한 시간 벡터를 추가합니다.
% time_TiltAngles = 1:numel(TiltAngles);
% time_dEs = 1:numel(dEs);
% time_dTs = 1:numel(dTs);
% 
% for i = 1:numel(TiltAngles)
%     TiltAngle_time = [time_TiltAngles(i) TiltAngles(i)];
%     TiltAngle = TiltAngles(i);
%     for j = 1:numel(dEs)
%         dE_time = [time_dEs(j) dEs(j)];
%         dE = dEs(j);
%         for k = 1:numel(dTs)
%             dT_time = [time_dTs(k) dTs(k)];
%             dT = dTs(k);
%             out1 = sim("Dynamics");
% 
%             if out1.Vb_dot(end,1) < threshold && out1.Vb_dot(end,3) < threshold && ...
%                out1.Ve(end,3) < threshold && out1.pitchRate(end,1) < threshold && ...
%                out1.pitchRate_dot(end,1) < threshold
% 
%                 results(end+1, :) = [dT_time, dE_time, TiltAngle_time];
%             end
% 
%         end
%     end
% end
%% TiltAngle을 90도로 고정
% threshold = exp(-9);
% results = []; 
% 
% TiltAngle = deg2rad(90); % TiltAngle을 90도로 고정
% dEs = -1.7 : 0.001 : 1.7;
% dTs = 110 : 0.001 : 130;
% 
% % 각 변수에 대한 시간 벡터를 추가합니다.
% time_dEs = 1:numel(dEs);
% time_dTs = 1:numel(dTs);
% 
% for j = 1:numel(dEs)
%     dE_time = [time_dEs(j) dEs(j)];
%     dE = dEs(j);
%     for k = 1:numel(dTs)
%         dT_time = [time_dTs(k) dTs(k)];
%         dT = dTs(k);
%         out1 = sim("Dynamics");
% 
%         if out1.Vb_dot(end,1) < threshold && out1.Vb_dot(end,3) < threshold && ...
%            out1.Ve(end,3) < threshold && out1.pitchRate(end,1) < threshold && ...
%            out1.pitchRate_dot(end,1) < threshold
% 
%             results(end+1, :) = [dT_time, dE_time, TiltAngle];
%         end
% 
%     end
% end
%% 반복횟수 적게 -> 자세히.
% threshold = exp(-9);
% results = []; 
% 
% TiltAngle = deg2rad(90); % TiltAngle을 90도로 고정
% dEs = -1.7 : 0.1 : 1.7;
% dTs = 110 : 1 : 130;
% 
% % 각 변수에 대한 시간 벡터를 추가합니다.
% time_dEs = 1:numel(dEs);
% time_dTs = 1:numel(dTs);
% 
% minVal = inf;
% minIndex = [0, 0];
% 
% % 큰 범위에서 최적의 값을 찾습니다.
% for j = 1:numel(dEs)
%     dE_time = [time_dEs(j) dEs(j)];
%     dE = dEs(j);
%     for k = 1:numel(dTs)
%         dT_time = [time_dTs(k) dTs(k)];
%         dT = dTs(k);
%         out1 = sim("Dynamics");
% 
%         currentVal = out1.Vb_dot(end,1) + out1.Vb_dot(end,3) + out1.Ve(end,3) + out1.pitchRate(end,1) + out1.pitchRate_dot(end,1);
%         if currentVal < minVal
%             minVal = currentVal;
%             minIndex = [j, k];
%         end
%     end
% end

% 최적의 값 주변에서 더 세밀하게 탐색합니다.
% dEs = dEs(minIndex(1)) - 1 : 0.001 : dEs(minIndex(1)) + 1;
% dTs = dTs(minIndex(2)) - 1 : 0.01 : dTs(minIndex(2)) + 1;
% 
% for j = 1:numel(dEs)
%     dE_time = [time_dEs(j) dEs(j)];
%     dE = dEs(j);
%     for k = 1:numel(dTs)
%         dT_time = [time_dTs(k) dTs(k)];
%         dT = dTs(k);
%         out1 = sim("Dynamics");
% 
%         if out1.Vb_dot(end,1) < threshold && out1.Vb_dot(end,3) < threshold && ...
%            out1.Ve(end,3) < threshold && out1.pitchRate(end,1) < threshold && ...
%            out1.pitchRate_dot(end,1) < threshold
% 
%             results(end+1, :) = [dT_time, dE_time, TiltAngle];
%         end
%     end
% end

%% 최적화 fmincon
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0, 125];
% 
%     % 비선형 제약 조건
%     nonlcon = [];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % 변수의 하한과 상한
%     lb = [-1.7, 100];
%     ub = [1.7, 150];
% 
%     % fmincon 함수 사용
%     x = fmincon(fun, x0, [], [], [], [], lb, ub, nonlcon);
% 
%     % 최적해 출력
%     disp(x);
% end
% 
% function f = myfun(x)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     out1 = sim("Dynamics");
% 
%     % 목적 함수 정의
%     f = out1.Vb_dot(end,1) + out1.Vb_dot(end,3) + out1.Ve(end,3) + out1.pitchRate(end,1) + out1.pitchRate_dot(end,1);
% end
%% TiltAngle 변화에 따른 fmincon 함수
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0, 125];
% 
%     % 비선형 제약 조건
%     nonlcon = [];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % 변수의 하한과 상한
%     lb = [-1.7, 100];
%     ub = [1.7, 150];
% 
%     % TiltAngle 범위
%     TiltAngles = deg2rad(90) : deg2rad(-10) : deg2rad(0);
% 
%     % 결과를 저장할 배열
%     results = zeros(length(TiltAngles), 3);
% 
%     % 각 TiltAngle에 대해 최적화 수행
%     for i = 1:length(TiltAngles)
%         TiltAngle = [0 TiltAngles(i)];
%         x = fmincon(@(x) fun(x, TiltAngle), x0, [], [], [], [], lb, ub, nonlcon);
%         results(i, :) = [TiltAngles(i), x];
%     end
% 
%     % 최적해 출력
%     disp(results);
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의
%     f = out1.Vb_dot(end,1) + out1.Vb_dot(end,3) + out1.Ve(end,3) + out1.pitchRate(end,1) + out1.pitchRate_dot(end,1);
% end
%% PSO 알고리즘 (global optimization toolbox 필요)
% function MakeTrim() % optimalSolution()
%     % 초기 추정값
%     x0 = [0, 150];
% 
%     % 변수의 하한과 상한
%     lb = [-1.7, 100];
%     ub = [1.7, 200];
% 
%     % TiltAngle 범위
%     TiltAngles = deg2rad(90) : deg2rad(-10) : deg2rad(0);
% 
%     % 결과를 저장할 배열
%     results = zeros(length(TiltAngles), 3);
% 
%     % 각 TiltAngle에 대해 최적화 수행
%     for i = 1:length(TiltAngles)
%         TiltAngle = [0 TiltAngles(i)];
%         options = optimoptions('particleswarm','SwarmSize',30,'HybridFcn',@fmincon);
%         x = particleswarm(@(x) myfun(x, TiltAngle), length(x0), lb, ub, options);
%         results(i, :) = [TiltAngles(i), x];
%     end
% 
%     % 최적해 출력
%     disp(results);
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics");
% 
%     % 목적 함수 정의
%     f = out1.Vb_dot(end,1) + out1.Vb_dot(end,3) + out1.Ve(end,3) + out1.pitchRate(end,1) + out1.pitchRate_dot(end,1);
% end
%% TiltAngle 고정 -> fmincon 함수
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0, 125];
% 
%     % 비선형 제약 조건
%     nonlcon = [];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % 변수의 하한과 상한
%     lb = [-1.7, 100];
%     ub = [1.7, 150];
% 
%     % TiltAngle 고정
%     TiltAngle = deg2rad(90);
% 
%     % 최적화 수행
%     x = fmincon(@(x) fun(x, TiltAngle), x0, [], [], [], [], lb, ub, nonlcon);
% 
%     % 최적해 출력
%     disp([TiltAngle, x]);
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의
%     f = out1.Vb_dot(end,1) + out1.Vb_dot(end,3) + out1.Ve(end,3) + out1.pitchRate(end,1) + out1.pitchRate_dot(end,1);
% end
%% 목적 함수: rms & TiltAngle 고정 -> fmincon 함수
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0, 125];
% 
%     % 비선형 제약 조건
%     nonlcon = [];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % 변수의 하한과 상한
%     lb = [-1.7, 100];
%     ub = [1.7, 150];
% 
%     % TiltAngle 고정
%     TiltAngle = deg2rad(90);
% 
%     % 최적화 수행
%     x = fmincon(@(x) fun(x, TiltAngle), x0, [], [], [], [], lb, ub, nonlcon);
% 
%     % 최적해 출력
%     disp([TiltAngle, x]);
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 RMS로 계산)
%     Vb_dot_rms1 = rms(out1.Vb_dot(:,1));
%     Vb_dot_rms3 = rms(out1.Vb_dot(:,3));
%     Ve_rms3 = rms(out1.Ve(:,3));
%     pitchRate_rms1 = rms(out1.pitchRate(:,1));
%     pitchRate_dot_rms1 = rms(out1.pitchRate_dot(:,1));
% 
%     f = Vb_dot_rms1 + Vb_dot_rms3 + Ve_rms3 + pitchRate_rms1 + pitchRate_dot_rms1;
% end
%% fminunc를 사용하여 경사하강법 적용
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0.0, 111.0];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 최적화 옵션 설정: 경사하강법 사용
%     options = optimoptions('fminunc', 'Algorithm', 'quasi-newton', 'OptimalityTolerance', 1e-12, 'StepTolerance', 1e-12);
% 
%     % 최적화 수행
%     x = fminunc(@(x) fun(x, TiltAngle), x0, options);
% 
%     % 최적해 출력
%     disp([TiltAngle, x]);
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 제곱으로 계산)
%     Vb_dot_sq1 = out1.Vb_dot(end,1)^2;
%     Vb_dot_sq3 = out1.Vb_dot(end,3)^2;
%     Ve_sq3 = out1.Ve(end,3)^2;
%     pitchRate_sq1 = out1.pitchRate(end,1)^2;
%     pitchRate_dot_sq1 = out1.pitchRate_dot(end,1)^2;
% 
%     f = Vb_dot_sq1 + Vb_dot_sq3 + Ve_sq3 + pitchRate_sq1 + pitchRate_dot_sq1;
% end
%% fminunc를 사용한 경사하강법 / 최적화 수행 과정 보여줌
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0.0, 150.0];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 검토한 값들을 저장할 배열 초기화
%     global iter_values;
%     iter_values = [];
% 
%     % 최적화 옵션 설정: 경사하강법 사용
%     options = optimoptions('fminunc', 'Algorithm', 'quasi-newton', 'OptimalityTolerance', 1e-12, 'StepTolerance', 1e-12, 'PlotFcn', @optimplotfval);
% 
%     % 최적화 수행
%     [x,fval,exitflag,output] = fminunc(@(x) fun(x, TiltAngle), x0, options)
% 
%     % 최적해 출력
%     fprintf('TiltAngle: [%.10f, %.10f], dE: %.10f, dT: %.10f\n', TiltAngle(1), TiltAngle(2), x(1), x(2));
% 
%     % 저장된 검토값들 출력
%     for i=1:size(iter_values, 1)
%         fprintf('Iteration: %d, dE: %.10f, dT: %.10f, f: %.10f\n', i, iter_values(i, 1), iter_values(i, 2), iter_values(i, 3));
%     end
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% 
%     % 검토한 dE, dT 및 목적 함수 값 저장
%     global iter_values;
%     iter_values = [iter_values; x(1), x(2), f];
% end
%% fmincon 사용
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0.0, 130.00000];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 변수의 하한과 상한 설정
%     lb = [-1.7, 0.0];
%     ub = [1.7, 166.66666];
% 
%     % 검토한 값들을 저장할 배열 초기화
%     global iter_values;
%     iter_values = [];
% 
%     % 최적화 옵션 설정: 경사하강법 사용
%     options = optimoptions('fmincon', 'Algorithm', 'interior-point', 'OptimalityTolerance', exp(-15), 'StepTolerance', exp(-15), 'PlotFcn', @optimplotfval);
% 
%     % 최적화 수행
%     x = fmincon(@(x) fun(x, TiltAngle), x0, [], [], [], [], lb, ub, [], options);
% 
%     % 최적해 출력
%     fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), x(1), x(2));
% 
%     % 저장된 검토값들 출력
%     for i=1:size(iter_values, 1)
%         fprintf('Iteration: %d, dE: %.10f, dT: %.10f, f: %.10f\n', i, iter_values(i, 1), iter_values(i, 2), iter_values(i, 3));
%     end
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% 
%     % 검토한 dE, dT 및 목적 함수 값 저장
%     global iter_values;
%     iter_values = [iter_values; x(1), x(2), f];
% end
%% global minimum 찾기
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0.0, 130.00000];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 변수의 하한과 상한 설정
%     lb = [-1.7, 0.0];
%     ub = [1.7, 166.66666];
% 
%     % 검토한 값들을 저장할 배열 초기화
%     global iter_values;
%     iter_values = [];
% 
%     % 최적화 옵션 설정: 경사하강법 사용, 'MaxFunctionEvaluations' 값 설정
%     options = optimoptions('fmincon', 'Algorithm', 'interior-point', 'OptimalityTolerance', exp(-15), 'StepTolerance', exp(-15), 'PlotFcn', @optimplotfval);
% 
%     % GlobalSearch 객체 생성
%     gs = GlobalSearch;
% 
%     % 최적화 문제 설정
%     problem = createOptimProblem('fmincon','x0',x0,'objective',@(x) fun(x, TiltAngle),'lb',lb,'ub',ub,'options',options);
% 
%     % 전역 최적화 수행
%     x = run(gs,problem);
% 
%     % 최적해 출력
%     fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), x(1), x(2));
% 
%     % 저장된 검토값들 출력
%     for i=1:size(iter_values, 1)
%         fprintf('Iteration: %d, dE: %.10f, dT: %.10f, f: %.10f\n', i, iter_values(i, 1), iter_values(i, 2), iter_values(i, 3));
%     end
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% 
%     % 검토한 dE, dT 및 목적 함수 값 저장
%     global iter_values;
%     iter_values = [iter_values; x(1), x(2), f];
% end
%% dE의 값을 0.1간격으로 바꾸며 dT의 값 찾기
% function optimalSolution()
%     % dE의 값 설정
%     dE_values = -1.7:0.1:1.7;
% 
%     % 변수의 하한과 상한 설정
%     lb = -Inf;
%     ub = Inf;
% 
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 최적화 옵션 설정: 경사하강법 사용
%     options = optimoptions('fminunc', 'Algorithm', 'quasi-newton', 'OptimalityTolerance', 1e-12, 'StepTolerance', 1e-12, 'PlotFcn', @optimplotfval);
% 
%     % 결과를 저장할 배열 초기화
%     results = zeros(length(dE_values), 2);
% 
%     % 각 dE 값에 대해 최적화 수행
%     for i = 1:length(dE_values)
%         dE = [0 dE_values(i)];
%         fun = @(dT) myfun(dE, dT, TiltAngle);
%         dT = fminunc(fun, 111.0, options);
%         results(i, :) = [dE_values(i), dT];
%     end
% 
%     % 최적해 출력
%     disp(results);
% end
% 
% function f = myfun(dE, dT, TiltAngle)
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', [0 dT]);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% end
%% dE는 [-1.7,1.7]에서 0.1간격으로 변화 & dT는 [0,166]에서 1간격으로 변화
% function optimalSolution()
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % dE 범위 및 단계 설정
%     dE_range = [-1.7, 1.7];
%     dE_step = 0.1;
% 
%     % dT 범위 및 단계 설정
%     dT_range = [0, 166];
%     dT_step = 1;
% 
%     % 목적 함수
%     fun = @(dT, dE) myfun(dT, dE, TiltAngle);
% 
%     % dE에 대해서 최적화 수행
%     for dE = dE_range(1):dE_step:dE_range(2)
%         % dT에 대해서 최적화 수행
%         dT_optimal = stepwiseOptimization(@(dT) fun(dT, dE), dT_range, dT_step);
% 
%         % 최적해 출력
%         fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), dE, dT_optimal);
%     end
% end
% 
% function f = myfun(dT, dE, TiltAngle)
%     % 변수 설정
%     dE = [0 dE];
%     dT = [0 dT];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% end
% 
% function x_optimal = stepwiseOptimization(fun, range, step)
%     % 초기 설정
%     x_optimal = range(1);
%     f_min = fun(x_optimal);
% 
%     % 범위 내에서 최적점 찾기
%     for x = range(1):step:range(2)
%         f = fun(x);
%         if f < f_min
%             x_optimal = x;
%             f_min = f;
%         end
%     end
% 
%     % 최적점 주변에서 다시 최적점 찾기
%     if step > 0.1
%         x_optimal = stepwiseOptimization(fun, [x_optimal-step, x_optimal+step], step/10);
%     end
% 
%     % f가 exp(-6)보다 작으면 최적화 종료
%     if f_min < exp(-6)
%         return;
%     else
%         x_optimal = stepwiseOptimization(fun, [x_optimal-step, x_optimal+step], step/10);
%     end
% end
%% dE는 [-1.7,1.7]에서 0.1간격으로 변화 & dT는 [0,160]에서 10간격으로 변화 & 실시간 plot(은 안됨)
% function optimalSolution()
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % dE 범위 및 단계 설정
%     dE_range = [-1.7, 1.7];
%     dE_step = 0.1;
% 
%     % dT 범위 및 단계 설정
%     dT_range = [0, 160];
%     dT_step = 10;
% 
%     % 목적 함수
%     fun = @(dT, dE) myfun(dT, dE, TiltAngle);
% 
%     % 그림 플롯 설정
%     figure;
%     hold on;
%     xlabel('dE');
%     ylabel('dT');
%     zlabel('f');
% 
%     % 그래프를 위한 데이터 저장소
%     dE_data = [];
%     dT_data = [];
%     f_data = [];
% 
%     % dE에 대해서 최적화 수행
%     for dE = dE_range(1):dE_step:dE_range(2)
%         % dT에 대해서 최적화 수행
%         dT_optimal = stepwiseOptimization(@(dT) fun(dT, dE), dT_range, dT_step);
% 
%         % 최적해 출력
%         fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), dE, dT_optimal);
% 
%         % 그래프를 위한 데이터 저장
%         f_optimal = fun(dT_optimal, dE);
%         dE_data = [dE_data; dE];
%         dT_data = [dT_data; dT_optimal];
%         f_data = [f_data; f_optimal];
% 
%         % 그림 플롯 업데이트
%         plot3(dE_data, dT_data, f_data, 'bo');
%         drawnow;
%     end
% end
% 
% 
% function f = myfun(dT, dE, TiltAngle)
%     % 변수 설정
%     dE = [0 dE];
%     dT = [0 dT];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% end
% 
% function x_optimal = stepwiseOptimization(fun, range, step)
%     % 초기 설정
%     x_optimal = range(1);
%     f_min = fun(x_optimal);
% 
%     % 범위 내에서 최적점 찾기
%     for x = range(1):step:range(2)
%         f = fun(x);
%         if f < f_min
%             x_optimal = x;
%             f_min = f;
%         end
%     end
% 
%     % 최적점 주변에서 다시 최적점 찾기
%     if step > 0.1
%         new_step = round(step/10, 1);  % 간격을 10등분하고 소수점 이하 첫째 자리까지만 유지
%         x_optimal = stepwiseOptimization(fun, [x_optimal-new_step, x_optimal+new_step], new_step);
%     end
% 
%     % f가 exp(-6)보다 작으면 최적화 종료
%     if f_min < exp(-6)
%         return;
%     else
%         new_step = round(step/10, 1);  % 간격을 10등분하고 소수점 이하 첫째 자리까지만 유지
%         x_optimal = stepwiseOptimization(fun, [x_optimal-new_step, x_optimal+new_step], new_step);
%     end
% end
%% dE를 0으로 고정했을 때 dT를 찾는 과정
% function optimalSolution()
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % dE 고정
%     dE = 0.0;
% 
%     % dT 범위 설정
%     dT_range = [0, 160];
% 
%     % 목적 함수
%     fun = @(dT) myfun(dT, dE, TiltAngle);
% 
%     % 그래프 설정
%     figure;
%     hold on;
%     xlabel('Iteration');
%     ylabel('dT');
%     zlabel('f');
% 
%     % 그래프를 위한 데이터 저장소
%     iter_data = [];
%     dT_data = [];
%     f_data = [];
% 
%     % dT에 대해서 최적화 수행
%     iter = 0;
%     while true
%         % dT 범위를 10등분
%         dT_values = linspace(dT_range(1), dT_range(2), 11);
% 
%         % 각 dT 값에 대한 목적 함수 값 계산
%         f_values = arrayfun(fun, dT_values);
% 
%         % 목적 함수의 최솟값과 그 때의 dT 값 찾기
%         [f_min, idx_min] = min(f_values);
%         dT_min = dT_values(idx_min);
% 
%         % 최적해 출력
%         fprintf('Iteration: %d, dT: %.10f, f: %.10f\n', iter, dT_min, f_min);
% 
%         % 그래프를 위한 데이터 저장
%         iter_data = [iter_data; iter];
%         dT_data = [dT_data; dT_min];
%         f_data = [f_data; f_min];
% 
%         % 그래프 업데이트
%         plot3(iter_data, dT_data, f_data, 'bo');
%         drawnow;
% 
%         % 종료 조건 검사
%         if f_min < 1e-6
%             break;
%         end
% 
%         % 다음 반복을 위해 dT 범위 조정
%         if idx_min == 1
%             dT_range = dT_values(1:2);
%         elseif idx_min == 11
%             dT_range = dT_values(10:11);
%         else
%             dT_range = dT_values(idx_min-1:idx_min+1);
%         end
% 
%         iter = iter + 1;
%     end
% end
% 
% function f = myfun(dT, dE, TiltAngle)
%     % 변수 추출
%     dE = [0 dE];
%     dT = [0 dT];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% end
%% dE [-1.7,1.7]에서 0.1간격으로 바뀜, dT [0, 160]에서 10간격으로 바뀜
% function optimalSolution()
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % dE 범위 설정
%     dE_range = -1.7:0.1:1.7;
% 
%     % dT 범위 설정
%     dT_range = [0, 160];
% 
%     % 목적 함수
%     fun = @(dT, dE) myfun(dT, dE, TiltAngle);
% 
%     % 그래프 설정
%     figure;
%     hold on;
%     xlabel('dE');
%     ylabel('dT');
%     zlabel('f');
% 
%     % 그래프를 위한 데이터 저장소
%     dE_data = [];
%     dT_data = [];
%     f_data = [];
% 
%     % dE에 대해서 최적화 수행
%     for dE = dE_range
%         % dT에 대해서 최적화 수행
%         dT_optimal = stepwiseOptimization(@(dT) fun(dT, dE), dT_range, 10);
% 
%         % 최적해 출력
%         fprintf('dE: %.10f, dT: %.10f, f: %.10f\n', dE, dT_optimal, fun(dT_optimal, dE));
% 
%         % 그래프를 위한 데이터 저장
%         dE_data = [dE_data; dE];
%         dT_data = [dT_data; dT_optimal];
%         f_data = [f_data; fun(dT_optimal, dE)];
% 
%         % 그래프 업데이트
%         plot3(dE_data, dT_data, f_data, 'bo');
%         drawnow;
%     end
% end
% 
% function dT_optimal = stepwiseOptimization(fun, dT_range, num_points)
%     % dT 범위를 num_points로 나눔
%     dT_values = linspace(dT_range(1), dT_range(2), num_points);
% 
%     % 각 dT 값에 대한 목적 함수 값 계산
%     f_values = arrayfun(fun, dT_values);
% 
%     % 목적 함수의 최솟값과 그 때의 dT 값 찾기
%     [~, idx_min] = min(f_values);
%     dT_optimal = dT_values(idx_min);
% 
%     % dT 범위가 충분히 작아지면 종료
%     if dT_range(2) - dT_range(1) < 1e-6
%         return;
%     end
% 
%     % 다음 반복을 위해 dT 범위 조정
%     if idx_min == 1
%         dT_range = dT_values(1:2);
%     elseif idx_min == num_points
%         dT_range = dT_values(num_points-1:num_points);
%     else
%         dT_range = dT_values(idx_min-1:idx_min+1);
%     end
% 
%     % 재귀적으로 최적화 수행
%     dT_optimal = stepwiseOptimization(fun, dT_range, num_points);
% end
% 
% function f = myfun(dT, dE, TiltAngle)
%     % 변수 추출
%     dE = [0 dE];
%     dT = [0 dT];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1    Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% end
%% dT의 범위를 [0, 1]로 바꿈. (PWM 값)
% function optimalSolution()
%     % 초기 추정값
%     x0 = [0.0, 0.6];
% 
%     % 목적 함수
%     fun = @myfun;
% 
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 변수의 하한과 상한 설정
%     lb = [-1.7, 0.0];
%     ub = [1.7, 1.0];
% 
%     % 검토한 값들을 저장할 배열 초기화
%     global iter_values;
%     iter_values = [];
% 
%     % 최적화 옵션 설정: 경사하강법 사용, 'OutputFcn' 옵션 사용
%     options = optimoptions('fmincon', 'Algorithm', 'interior-point', 'OptimalityTolerance', 1e-6, 'StepTolerance', 1e-6, 'MaxFunctionEvaluations', 1e6, 'MaxIterations', 1e6, 'OutputFcn', @outfun);
% 
%     % 최적화 수행
%     x = fmincon(@(x) fun(x, TiltAngle), x0, [], [], [], [], lb, ub, [], options);
% 
%     % 최적해 출력
%     fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), x(1), x(2));
% 
%     % 저장된 검토값들 출력
%     for i=1:size(iter_values, 1)
%         fprintf('Iteration: %d, dE: %.10f, dT: %.10f, f: %.10f\n', i, iter_values(i, 1), iter_values(i, 2), iter_values(i, 3));
%     end
% end
% 
% 
% function stop = outfun(x, optimValues, state)
%     stop = false;
% 
%     % 'iter' 상태일 때 검토하는 점을 그래프에 표시
%     if isequal(state, 'iter')
%         figure(1);
%         hold on;
%         plot3(x(1), x(2), optimValues.fval, 'ro');
%         drawnow;
%     end
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 추출
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 절대값으로 계산)
%     Vb_dot_abs1 = abs(out1.Vb_dot(end,1));
%     Vb_dot_abs3 = abs(out1.Vb_dot(end,3));
%     Ve_abs3 = abs(out1.Ve(end,3));
%     pitchRate_abs1 = abs(out1.pitchRate(end,1));
%     pitchRate_dot_abs1 = abs(out1.pitchRate_dot(end,1));
% 
%     f = Vb_dot_abs1 + Vb_dot_abs3 + Ve_abs3 + pitchRate_abs1 + pitchRate_dot_abs1;
% 
%     % 검토한 dE, dT 및 목적 함수 값 저장
%     global iter_values;
%     iter_values = [iter_values; x(1), x(2), f];
% end
%% Trim 찾기 성공적
% function optimalSolution()
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 초기 추정값
%     x0 = [0.0, 0.5];
% 
%     % 제약조건
%     lb = [-1.7, 0.0];
%     ub = [1.7, 1.0];
% 
%     % 목적 함수
%     fun = @(x) myfun(x, TiltAngle);
% 
%     % 최적화 옵션 설정
%     options = optimoptions('fmincon', 'Display', 'iter', 'OutputFcn', @(x, optimValues, state) plotOptimization(x, optimValues, state, fun));
% 
%     % 최적화 수행
%     [x, fval] = fmincon(fun, x0, [], [], [], [], lb, ub, [], options);
% 
%     % 최적해 출력
%     fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), x(1), x(2));
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 설정
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 제곱으로 계산)
%     Vb_dot1 = out1.Vb_dot(end,1)^2;
%     Vb_dot3 = out1.Vb_dot(end,3)^2;
%     Ve3 = out1.Ve(end,3)^2;
%     pitchRate1 = out1.pitchRate(end,1)^2;
%     pitchRate_dot1 = out1.pitchRate_dot(end,1)^2;
% 
%     f = Vb_dot1 + Vb_dot3 + Ve3 + pitchRate1 + pitchRate_dot1;
% end
% 
% function stop = plotOptimization(x, optimValues, state, fun)
%     stop = false;
% 
%     switch state
%         case 'init'
%             hold on
%         case 'iter'
%             % 그래프에 점 추가
%             h = plot(optimValues.iteration, optimValues.fval, 'ro');
%             % 점에 데이터 연결
%             fval = fun(x);
%             set(h, 'UserData', [x, fval]);
%             % 점 클릭 시 dE, dT, f 출력
%             set(h, 'ButtonDownFcn', @(src, event) displayValues(get(src, 'UserData')));
%             drawnow
%         case 'done'
%             hold off
%         otherwise
%     end
% end
% 
% function displayValues(data)
%     dE = data(1);
%     dT = data(2);
%     f = data(3);
% 
%     fprintf('dE: %.10f, dT: %.10f, f: %.10f\n', dE, dT, f);
% end
%% TiltAngle 바꾸면서 Trim 찾기
% function optimalSolution()
%     % TiltAngle 값 정의
%     TiltAngles = [0, deg2rad(30), deg2rad(60), deg2rad(90)];
% 
%     % 초기 추정값
%     x0 = [0.0, 0.5];
% 
%     % 제약조건
%     lb = [-1.7, 0.0];
%     ub = [1.7, 1.0];
% 
%     % 목적함수
%     fun = @(x, TiltAngle) myfun(x, TiltAngle);
% 
%     % 각 TiltAngle에 대해 최적화 수행
%     for i = 1:length(TiltAngles)
%         TiltAngle = [0 TiltAngles(i)];
% 
%         % 최적화 옵션 설정
%         options = optimoptions('fmincon', 'Display', 'iter', 'OutputFcn', @(x, optimValues, state) plotOptimization(x, optimValues, state, fun, TiltAngle));
% 
%         % 최적화 수행
%         [x, fval] = fmincon(@(x) fun(x, TiltAngle), x0, [], [], [], [], lb, ub, [], options);
% 
%         % 최적해 출력
%         fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle, x(1), x(2));
% 
%         % 그래프 제목 설정
%         title(sprintf('TiltAngle: %.10f', TiltAngle));
% 
%         % 다음 plot을 위해 새로운 figure 생성
%         figure;
%     end
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 설정
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 제곱 계산)
%     Vb_dot1 = out1.Vb_dot(end,1)^2;
%     Vb_dot3 = out1.Vb_dot(end,3)^2;
%     Ve3 = out1.Ve(end,3)^2;
%     pitchRate1 = out1.pitchRate(end,1)^2;
%     pitchRate_dot1 = out1.pitchRate_dot(end,1)^2;
% 
%     f = Vb_dot1 + Vb_dot3 + Ve3 + pitchRate1 + pitchRate_dot1;
% end
% 
% function stop = plotOptimization(x, optimValues, state, fun, TiltAngle)
%     stop = false;
% 
%     switch state
%  case 'init'
%             hold on
%         case 'iter'
%             % 그래프에 점 추가
%             h = plot(optimValues.iteration, optimValues.fval, 'ro');
%             % 점에 데이터 연결
%             fval = fun(x, TiltAngle);
%             set(h, 'UserData', [x, fval]);
%             % 점 클릭 시 dE, dT, f 출력
%             set(h, 'ButtonDownFcn', @(src, event) displayValues(get(src, 'UserData')));
%             drawnow
%         case 'done'
%             hold off
%         otherwise
%     end
% end
% 
% function displayValues(data)
%     dE = data(1);
%     dT = data(2);
%     f = data(3);
% 
%     fprintf('dE: %.10f, dT: %.10f, f: %.10f\n', dE, dT, f);
% end
%% dT: 0.0:0.1:1.0 변하며 최적점 찾기
% function optimalSolution()
%     % TiltAngle 고정
%     TiltAngle = [0 deg2rad(90)];
% 
%     % 제약조건
%     lb = [-1.7, 0.0];
%     ub = [1.7, 1.0];
% 
%     % 목적 함수
%     fun = @(x) myfun(x, TiltAngle);
% 
%     % 최적화 옵션 설정
%     options = optimoptions('fmincon', 'Display', 'iter', 'OutputFcn', @(x, optimValues, state) plotOptimization(x, optimValues, state, fun));
% 
%     % dT 초기 추정값 범위
%     dT_start = 0.0;
%     dT_end = 1.0;
%     dT_step = 0.1;
% 
%     for dT_init = dT_start:dT_step:dT_end
%         % 초기 추정값
%         x0 = [0.0, dT_init];
% 
%         % 새로운 figure 창 열기
%         figure;
%         % plot 제목 설정
%         title(['Initial dT: ', num2str(dT_init)])
% 
%         % 최적화 수행
%         [x, fval] = fmincon(fun, x0, [], [], [], [], lb, ub, [], options);
% 
%         % 최적해 출력
%         fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), x(1), x(2));
%     end
% end
% 
% function f = myfun(x, TiltAngle)
%     % 변수 설정
%     dE = [0 x(1)];
%     dT = [0 x(2)];
% 
%     % 시뮬링크 모델 실행
%     assignin('base', 'dE', dE);
%     assignin('base', 'dT', dT);
%     assignin('base', 'TiltAngle', TiltAngle);
%     out1 = sim("Dynamics3");
% 
%     % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 제곱으로 계산)
%     Vb_dot1 = out1.Vb_dot(end,1)^2;
%     Vb_dot3 = out1.Vb_dot(end,3)^2;
%     Ve3 = out1.Ve(end,3)^2;
%     pitchRate1 = out1.pitchRate(end,1)^2;
%     pitchRate_dot1 = out1.pitchRate_dot(end,1)^2;
% 
%     f = Vb_dot1 + Vb_dot3 + Ve3 + pitchRate1 + pitchRate_dot1;
% end
% 
% function stop = plotOptimization(x, optimValues, state, fun)
%     stop = false;
% 
%     switch state
%         case 'init'
%             hold on
%         case 'iter'
%             % 그래프에 점 추가
%             h = plot(optimValues.iteration, optimValues.fval, 'ro');
%             % 점에 데이터 연결
%             fval = fun(x);
%             set(h, 'UserData', [x, fval]);
%             % 점 클릭 시 dE, dT, f 출력
%             set(h, 'ButtonDownFcn', @(src, event) displayValues(get(src, 'UserData')));
%             drawnow
%         case 'done'
%             hold off
%         otherwise
%     end
% end
% 
% function displayValues(data)
%     dE = data(1);
%     dT = data(2);
%     f = data(3);
% 
%     fprintf('dE: %.10f, dT: %.10f, f: %.10f\n', dE, dT, f);
% end

