function optimalSolution()
    % TiltAngle 고정
    TiltAngle = [0 deg2rad(90)];

    % 초기 추정값
    x0 = [0.0, 0.5];

    % 제약조건
    lb = [-1.7, 0.0];
    ub = [1.7, 1.0];

    % 목적 함수
    fun = @(x) myfun(x, TiltAngle);

    % 최적화 옵션 설정
    options = optimoptions('fmincon', 'Display', 'iter', 'OutputFcn', @(x, optimValues, state) plotOptimization(x, optimValues, state, fun));

    % 최적화 수행
    [x, fval] = fmincon(fun, x0, [], [], [], [], lb, ub, [], options);

    % 최적해 출력
    fprintf('TiltAngle: %.10f, dE: %.10f, dT: %.10f\n', TiltAngle(2), x(1), x(2));
end

function f = myfun(x, TiltAngle)
    % 변수 설정
    dE = [0 x(1)];
    dT = [0 x(2)];

    % 시뮬링크 모델 실행
    assignin('base', 'dE', dE);
    assignin('base', 'dT', dT);
    assignin('base', 'TiltAngle', TiltAngle);
    out1 = sim("Dynamics3");

    % 목적 함수 정의 (각 항을 시뮬레이션 마지막 값의 제곱으로 계산)
    Vb_dot1 = out1.Vb_dot(end,1)^2;
    Vb_dot3 = out1.Vb_dot(end,3)^2;
    Ve3 = out1.Ve(end,3)^2;
    pitchRate1 = out1.pitchRate(end,1)^2;
    pitchRate_dot1 = out1.pitchRate_dot(end,1)^2;

    f = Vb_dot1 + Vb_dot3 + Ve3 + pitchRate1 + pitchRate_dot1;
end

function stop = plotOptimization(x, optimValues, state, fun)
    stop = false;

    switch state
        case 'init'
            hold on
        case 'iter'
            % 그래프에 점 추가
            h = plot(optimValues.iteration, optimValues.fval, 'ro');
            % 점에 데이터 연결
            fval = fun(x);
            set(h, 'UserData', [x, fval]);
            % 점 클릭 시 dE, dT, f 출력
            set(h, 'ButtonDownFcn', @(src, event) displayValues(get(src, 'UserData')));
            drawnow
        case 'done'
            hold off
        otherwise
    end
end

function displayValues(data)
    dE = data(1);
    dT = data(2);
    f = data(3);

    fprintf('dE: %.10f, dT: %.10f, f: %.10f\n', dE, dT, f);
end