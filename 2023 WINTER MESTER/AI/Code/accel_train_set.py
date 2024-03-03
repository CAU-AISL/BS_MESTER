import numpy as np
import random
from filterpy.common import Q_discrete_white_noise
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
import joblib

# Initialization
A, H, Q, R, x_hat, P, first_run = None, None, None, None, None, None, False

def TrackKalman(xm, ym):
    global A, H, Q, R, x_hat, P, first_run
    
    if not first_run:
        dt = 0.1  # 1 Hz
        A = np.array([[1, dt, 0, 0],
                      [0, 1, 0, 0],
                      [0, 0, 1, dt],
                      [0, 0, 0, 1]])

        H = np.array([[1, 0, 0, 0],
                      [0, 0, 1, 0]])

        Q = Q_discrete_white_noise(dim=2, dt = dt, var = 10, block_size=2)
        R = 9 * np.eye(2)

        x_hat = np.array([0, 0, 0, 0]).reshape(-1, 1)
        P = 10 * np.eye(4)

        first_run = True

    xp = A @ x_hat
    Pp = A @ P @ A.T + Q
    K = Pp @ H.T @ np.linalg.inv(H @ Pp @ H.T + R)

    z = np.array([xm, ym]).reshape(-1, 1)
    x_hat = xp + K @ (z - H @ xp)
    P = Pp - K @ H @ Pp

    # Estimated position
    xh, vxh, yh, vyh = x_hat[0, 0], x_hat[1, 0], x_hat[2, 0],x_hat[3, 0]

    return xh, yh, vxh, vyh

def add_gaussian_noise(true_position, noise_stddev):
    noise = np.random.normal(scale=noise_stddev, size=true_position.shape)
    observed_position = true_position + noise
    return observed_position.astype(np.float32)

def generate_accle_nonlinear_path(dt):
    global steering_start_time, line_start_time, steering_start_time2, line_start_time2, additional_time
    x = [0]
    y = [0]
    theta = [np.radians(np.random.uniform(0,360))]

    stop_at_curve = random.choices([True, False], weights=[0.2, 0.8], k=1)[0]
    additional_time = random.randint(2, 3) * 1 / dt if stop_at_curve else 0  # 첫 번째 곡선에서 정지하는 경우만 추가 시간을 고려

    angular_acceleration_range = [(-np.radians(0.1), -np.radians(0.02)), (np.radians(0.1), np.radians(0.02))]  # 두 범위 설정
    angular_acceleration1 = np.random.uniform(*angular_acceleration_range[random.choice([0, 1])])
    angular_acceleration2 = np.random.uniform(*angular_acceleration_range[random.choice([0, 1])])
    angular_velocity1 = 0
    angular_velocity2 = 0

    steering_start_time = 100
    line_start_time = int(steering_start_time + 60+ additional_time) 
    steering_start_time2 = line_start_time + 40
    line_start_time2 = steering_start_time2 + 60
    num_points = line_start_time2 + 60 
    
    acceleration_range = (0.1, 0.5)
    deceleration_range = (-0.5, -0.1) 
    acceleration = np.random.uniform(0.1,0.3)
    velocity = np.random.uniform(0, 30)
    max_velocity = 30
    min_velocity = 5
    velocities = [velocity]
    accelerations = [acceleration]

    for i in range(1, num_points):
        #############가속도 계산###########
        # 초반 직선 가속도 적용
        if i < steering_start_time:
            velocity = min(max_velocity, velocity + acceleration)
        # 1 조향 시작 or 정지 
        if i == steering_start_time and not stop_at_curve:
            if velocity >= 25:  # 속도가 20 이상이면 감속
                acceleration = np.random.uniform(*deceleration_range)
            else:  # 속도가 25 미만이면 감속 또는 속도 유지
                acceleration = np.random.uniform(*deceleration_range) if random.choice([True, False]) else 0
        elif i == steering_start_time and stop_at_curve:
            acceleration = -2
        # 정지이후 가속 
        elif i == steering_start_time + additional_time and stop_at_curve:
            acceleration = np.random.uniform(0.2,0.35)
        # 1 직선 가속 or 등속
        elif i == line_start_time :
            acceleration = np.random.uniform(*acceleration_range) if random.choice([True, False]) else 0 # 가속도 변경 또는 속도 유지
        # 2 조향 시작 일정 속도 조건 
        elif i == steering_start_time2:
            if velocity >= 25:  # 속도가 25 이상이면 감속
                acceleration = np.random.uniform(*deceleration_range)
            else:  # 속도가 25 미만이면 감속 또는 속도 유지
                acceleration = np.random.uniform(*deceleration_range) if random.choice([True, False]) else 0
        # 2 직선 가속 or 등속
        elif i == line_start_time2:
            acceleration = np.random.uniform(*acceleration_range) if random.choice([True, False]) else 0 # 가속도 변경 또는 속도 유지

        #############속도 계산###########
        # 조향 시작 시간에 도달하면 조향변화율을 적용
        if i >= line_start_time2:
            velocity = min(max_velocity, velocity + acceleration)
        
        elif i >= steering_start_time2:
            angular_velocity2 += angular_acceleration2
            theta[-1] += angular_velocity2
            velocity = max(min_velocity, velocity + acceleration) 
        
        elif i >= line_start_time:
            velocity = min(max_velocity, velocity + acceleration) 
        
        elif i >= steering_start_time + additional_time and stop_at_curve:
            angular_velocity1 += angular_acceleration1
            theta[-1] += angular_velocity1
            velocity = min(max_velocity, velocity + acceleration) 

        elif i >= steering_start_time and stop_at_curve:
            angular_velocity1 += angular_acceleration1
            theta[-1] += angular_velocity1
            velocity = max(0, velocity + acceleration) 
       
        elif i >= steering_start_time and not stop_at_curve:
            angular_velocity1 += angular_acceleration1
            theta[-1] += angular_velocity1
            velocity = max(15, velocity + acceleration) 

        x.append(x[-1] + velocity * np.cos(theta[-1]) * dt)
        y.append(y[-1] + velocity * np.sin(theta[-1]) * dt) 

        theta.append(theta[-1])
        velocities.append(velocity)
        accelerations.append(acceleration)

    true_position= np.concatenate((np.array(x).reshape(-1,1),np.array(y).reshape(-1,1)), axis= 1)

    return true_position


def generate_train_val_data(window_length, step):
    global A, H, Q, R, x_hat, P, first_run

    x_data = []
    y_data = []
    step = 3

    for _ in range(6000):
        # Reset global variables
        A, H, Q, R, x_hat, P, first_run = None, None, None, None, None, None, False

        # Generate true and observed positions
        true_position = generate_accle_nonlinear_path(0.1)
        observed_position = add_gaussian_noise(true_position, 3)
        filtered_position = [TrackKalman(*pos) for pos in observed_position]
        filtered_position = np.array(filtered_position)

        # Create 3D data
        filtered_position_3d = []
        true_position_3d = []
        for k in range(0, len(filtered_position) - window_length + 1, step):
            temp = np.concatenate((filtered_position[k:k+window_length], observed_position[k:k+window_length]), axis=1)
            filtered_position_3d.append(temp)
            true_position_3d.append(true_position[k:k+window_length])
        filtered_position_3d = np.array(filtered_position_3d, dtype=np.float32)[10:]
        true_position_3d = np.array(true_position_3d, dtype=np.float32)[10:]

        # Calculate target values
        target_values = true_position_3d[:, -1, :2] - filtered_position_3d[:, -1, :2]
        x_data.extend(filtered_position_3d)
        y_data.extend(target_values)


    x_data = np.array(x_data)
    y_data = np.array(y_data)

    # Split into training and validation sets
    x_train, x_val, y_train, y_val = train_test_split(x_data, y_data, test_size=0.2, random_state=42)

    print(f'x_train.shape: {x_train.shape}')
    print(f'y_train.shape: {y_train.shape}') 
    print(f'x_val.shape: {x_val.shape}')
    print(f'y_val.shape: {y_val.shape}') 

    return x_train, y_train, x_val, y_val

######################################################학습###################################################################################
WL = 14
step = 3
x_train, y_train, x_val, y_val= generate_train_val_data(WL, step)

# 각 축에 대한 스케일러를 생성
scaler0 = StandardScaler()
scaler1 = StandardScaler()

# y_train에 대해 스케일러를 학습하고, 동시에 데이터를 변환합니다.
y_train_scaled = y_train.copy()
y_train_scaled[:, 0] = scaler0.fit_transform(y_train[:, 0].reshape(-1, 1)).ravel()
y_train_scaled[:, 1] = scaler1.fit_transform(y_train[:, 1].reshape(-1, 1)).ravel()

# y_val에 대해 학습된 스케일러를 적용합니다.
y_val_scaled = y_val.copy()
y_val_scaled[:, 0] = scaler0.transform(y_val[:, 0].reshape(-1, 1)).ravel()
y_val_scaled[:, 1] = scaler1.transform(y_val[:, 1].reshape(-1, 1)).ravel()


joblib.dump(scaler0, 'scaler0_accel_s6_X_ERR.pkl')
joblib.dump(scaler1, 'scaler1_accel_s6_Y_ERR.pkl')

np.savez('train_set_accel_s6.npz', x_train=x_train, y_train=y_train_scaled, x_val=x_val, y_val=y_val_scaled)