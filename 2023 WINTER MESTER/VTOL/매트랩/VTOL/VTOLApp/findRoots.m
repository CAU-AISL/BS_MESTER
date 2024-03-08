function findRoots()
    % TiltAngle 고정
    TiltAngle = [0 deg2rad(90)];

    % 초기 추정값
    dE0 = 0.0;
    dT0 = 0.0;

    % 목적 함수
    fun = @(x) myfun(x, TiltAngle);

    % root finding 수행
    x = fsolve(fun, [dE0, dT0]);

    % 루트 출력
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

    % 함수 정의 (각 항을 시뮬레이션 마지막 값으로 계산)
    Vb_dot1 = out1.Vb_dot(end,1);
    Vb_dot3 = out1.Vb_dot(end,3);
    Ve3 = out1.Ve(end,3);
    pitchRate1 = out1.pitchRate(end,1);
    pitchRate_dot1 = out1.pitchRate_dot(end,1);

    f = [Vb_dot1; Vb_dot3; Ve3; pitchRate1; pitchRate_dot1];
end
