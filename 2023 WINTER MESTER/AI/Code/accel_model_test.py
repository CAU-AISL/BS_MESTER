from keras.models import load_model
import random
import math
import numpy as np
import matplotlib.pyplot as plt
from filterpy.common import Q_discrete_white_noise
from matplotlib.animation import FuncAnimation,PillowWriter
import joblib
from kalman_filter import KF
from imm import Imm

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

        # Initial state vector
        x_hat = np.array([0, 0, 0, 0]).reshape(-1, 1)
        P = 10* np.eye(4)

        first_run = True

    xp = A @ x_hat
    Pp = A @ P @ A.T + Q
    K = Pp @ H.T @ np.linalg.inv(H @ Pp @ H.T + R)

    z = np.array([xm, ym]).reshape(-1, 1)
    x_hat = xp + K @ (z - H @ xp)
    P = Pp - K @ H @ Pp

    return x_hat[0, 0], x_hat[2, 0], x_hat[1, 0], x_hat[3, 0]


def Ajacob(xhat,dt):
    A = np.zeros([6,6])
    theta = xhat[2, 0]
    V = xhat[3,0]

    A[0][0] = 1
    A[0][2] = -V * dt * np.sin(theta)
    A[0][3] = dt* np.cos(theta)
    A[0][5] = 0.5 * dt **2 *np.cos(theta)

    A[1][1] = 1
    A[1][2] = V * dt * np.cos(theta)
    A[1][3] = dt* np.sin(theta)
    A[1][5] = 0.5 * dt **2 *np.sin(theta)

    A[2][2] = 1
    A[2][4] = dt

    A[3][3] = 1
    A[3][5] = dt

    A[4][4] = 1
    A[5][5] = 1

    return A

def fx(x_hat, dt):
    X = x_hat[0]
    Y = x_hat[1]
    theta = x_hat[2]
    V = x_hat[3]
    W = x_hat[4]
    A = x_hat[5]
    
    xdot = np.zeros([6,1])
    xdot[0] = X + (V * dt + 0.5 * A * dt**2) * np.cos(theta)
    xdot[1] = Y + (V * dt + 0.5 * A * dt**2) * np.sin(theta)
    xdot[2] = theta + W * dt
    xdot[3] = V
    xdot[4] = W
    xdot[5] = A
    
    return xdot

# 가속도 포함 모델
def EKF(xm, ym):
    global first_run
    global Q, H, R
    global x_hat, P
    dt = 0.1
    
    if not first_run:
        H = np.array([[1, 0, 0, 0, 0, 0],
                      [0, 1, 0, 0, 0, 0]])
        var1 = 10
        var2 = 10
        Q = np.zeros([6,6])
        Q[0][0] = dt**4/4*var1
        Q[0][3] = dt**3/2*var1
        
        Q[1][1] = dt**4/4*var1
        Q[1][3] = dt**3/2*var1

        Q[2][2] = dt**4/4*var2
        Q[2][4] = dt**3/2*var2

        Q[3][0] = dt**3/2*var1
        Q[3][1] = dt**3/2*var1
        Q[3][3] = dt**2*var1

        Q[4][2] = dt**3/2*var2
        Q[4][4] = dt**2*var2
        R = 9 * np.eye(2)

        x_hat = np.array([0, 0, 0, 0, 0, 0]).reshape(-1, 1)
        P = 100 * np.eye(6)

        first_run = True
    else:
        A = Ajacob(x_hat, dt)
        Xp = fx(x_hat, dt) 
        Pp = A @ P @ A.T + Q 

        K = (Pp @ H.T) @ np.linalg.inv(H@Pp@H.T + R) # K : Kalman Gain
        z = np.array([xm, ym]).reshape(-1, 1)
        x_hat = Xp + K@(z.reshape(-1,1) - H@Xp) 
        P = Pp - K@H@Pp 

    return x_hat[0, 0], x_hat[1, 0]

def kf_cv():
    dt = 0.1
    A_cv = np.array([
        [1., dt, 0., 0.],
        [0., 1., 0., 0.],
        [0., 0., 1., dt],
        [0., 0., 0., 1.]
    ])
    H_cv = np.array([
        [1., 0., 0., 0.],
        [0., 0., 1., 0.]
    ])
    Q_cv = Q_discrete_white_noise(dim=2, dt = dt, var = 10, block_size=2)
    R_cv = 9 * np.eye(2)
    P_cv = 10 * np.eye(4)
    
    return KF(A_cv, H_cv, Q_cv, R_cv, P_cv)

def kf_ca():
    dt = 0.1
    A_ca = np.array([
        [1., dt, 0.5 * dt**2, 0., 0., 0.],
        [0., 1., dt, 0., 0., 0.],
        [0., 0., 1., 0., 0., 0.],
        [0., 0., 0., 1., dt, 0.5 * dt**2],
        [0., 0., 0., 0., 1., dt],
        [0., 0., 1., 0., 0., 1.]
    ])
    H_ca = np.array([
        [1., 0., 0., 0., 0., 0.],
        [0., 0., 0., 1., 0., 0.]
    ])
    Q_ca = Q_discrete_white_noise(dim=3, dt = dt, var = 10, block_size=2)
    R_ca = 9 * np.eye(2)
    P_ca = 10 * np.eye(6)
    return KF(A_ca, H_ca, Q_ca, R_ca, P_ca)

def kf_ct():
    dt = 0.1
    dtheta = math.pi / 180 * 5
    theta = dtheta * dt
    A_ct = np.array([
         [1., math.sin(theta)/dtheta, 0., -(1 - math.cos(theta))/dtheta, 0.],
         [0., math.cos(theta), 0., -math.sin(theta), 0.],
         [0., (1 - math.cos(theta)) / dtheta, 1., math.sin(theta)/dtheta, 0.],
         [0., math.sin(theta), 0., math.cos(theta), 0.],
         [0., 0., 0., 0., 1.],
         ])
    H_ct = np.array([
        [1., 0., 0., 0., 0.],
        [0., 0., 1., 0., 0.]
        ])
    Q_ct = Q_discrete_white_noise(dim=2, dt = dt, var = 10, block_size=2)
    Q_ct = np.insert(Q_ct, 4, [0, 0, 0, 0], axis=0)
    Q_ct = np.insert(Q_ct, 4, [0, 0, 0, 0, 0], axis=1)
    R_ct = 9 * np.eye(2)
    P_ct = 10 * np.eye(5)
    return KF(A_ct, H_ct, Q_ct, R_ct, P_ct)

def imm_cvat():
    P_trans = np.array([
        [0.98, 0.01, 0.01],
        [0.01, 0.98, 0.01],
        [0.01, 0.01, 0.98]
    ])
    U_prob = np.array([0.8, 0.1, 0.1]).reshape((-1, 1))

    models = [kf_cv(), kf_ca(), kf_ct()]

    T12 = np.array([
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 1, 0],
        [0, 0, 0, 1],
        [0, 0, 0, 0]
    ])
    T23 = np.array([
        [1, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 0, 0, 1, 0, 0],
        [0, 0, 0, 0, 1, 0],
        [0, 0, 0, 0, 0, 0]
    ])
    model_trans = [
        [np.eye(models[0].A.shape[0]), T12.T, np.dot(T12.T, T23.T)],
        [T12, np.eye(models[1].A.shape[0]), T23.T],
        [np.dot(T23, T12), T23, np.eye(models[2].A.shape[0])]
    ]

    return Imm(models, model_trans, P_trans, U_prob)

def imm_cvt():
    P_trans = np.array([
        [0.98, 0.02],
        [0.02, 0.98]
    ])
    U_prob = np.array([0.5, 0.5]).reshape((-1, 1))

    models = [kf_cv(), kf_ct()]

    T12 = np.array([
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 1, 0],
        [0, 0, 0, 1],
        [0, 0, 0, 0]
    ])
    T23 = np.array([
        [1, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 0, 0, 1, 0, 0],
        [0, 0, 0, 0, 1, 0],
        [0, 0, 0, 0, 0, 0]
    ])
    T13 = np.dot(T23, T12)
    model_trans = [
        [np.eye(models[0].A.shape[0]), T13.T],
        [T13, np.eye(models[1].A.shape[0])]
    ]

    return Imm(models, model_trans, P_trans, U_prob)

def add_gaussian_noise(true_position, noise_stddev):
    noise = np.random.normal(scale=noise_stddev, size=true_position.shape)
    observed_position = true_position + noise
    return observed_position.astype(np.float32)


def calculate_rmse(true_position, position):
    return np.sqrt(np.mean((true_position - position.astype(float)) ** 2))


def a_calculate_rmse(true_position, position, a):
    mask = position[:, 0] < a
    rmse1 = np.sqrt(np.mean((true_position[mask] - position[mask,:2].astype(float)) ** 2))
    rmse2 = np.sqrt(np.mean((true_position[~mask] - position[~mask,:2].astype(float)) ** 2))
    return rmse1, rmse2


def calculate_residuals(true_position, position):
    return np.sqrt(np.sum((true_position - position[:,:2]) ** 2, axis=1)).reshape(-1, 1)


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

    steering_start_time = np.random.randint(80, 120)
    line_start_time = int(steering_start_time + np.random.randint(20, 100)+ additional_time) 
    steering_start_time2 = line_start_time + np.random.randint(20, 100)
    line_start_time2 = steering_start_time2 + np.random.randint(20, 120)
    num_points = line_start_time2 + np.random.randint(20, 100)
    
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

WL=14
EG=70

########################################################데이터 준비##################################################################################
true_position=[]
observed_position=[]
filtered_position=[]
EKF_filtered_position=[]
filtered_position_3d = []
true_position_3d = []

path = generate_accle_nonlinear_path(0.1)
true_position = np.vstack(path)
observed_position = add_gaussian_noise(true_position,3)
z_noise = observed_position

##### KF #####
for i in range(len(observed_position)):
    filtered = TrackKalman(observed_position[i,0], observed_position[i,1])
    filtered_position.append(filtered)
filtered_position = np.array(filtered_position)
print(f"filtered_position.shape : {filtered_position.shape}")
print(f"observed_position.shape : {observed_position.shape}")

##### EKF #####
A, H, Q, R, x_hat, P, first_run = None, None, None, None, None, None, False
for i in range(len(observed_position)):
    EKF_filtered = EKF(observed_position[i,0], observed_position[i,1])
    EKF_filtered_position.append(EKF_filtered)
EKF_filtered_position = np.array(EKF_filtered_position)


##### IMM #####
imm = imm_cvat()
imm.models[0].X = np.array([[0.],[0.],[0.],[0.]])
imm.models[1].X = np.array([[0.],[0.],[0.],[0.],[0.],[0.]])
imm.models[2].X = np.array([[0.],[0.],[0.],[0.],[0.]])

prob = []
z_filt = []
z_noise = np.array(z_noise).reshape(-1, 2, 1)
for z in z_noise:
    prob.append(np.copy(imm.filt(z)))
    x = np.zeros(imm.models[0].X.shape)
    for i in range(len(imm.models)):
        x += np.dot(imm.model_trans[0][i], imm.models[i].X) * prob[-1][i]
    z_filt.append(x)
z_filt = np.array(z_filt)
imm_filtered_position = z_filt.reshape(-1, 4)
imm_filtered_position = imm_filtered_position[:, [0, 2, 1, 3]]

##### AI #####
for k in range(0, len(filtered_position) - WL + 1, 1):
    temp =np.concatenate((filtered_position[k:k+WL, :],observed_position[k:k+WL, :]), axis=1)
    temp1 = true_position[k:k+WL, :]
    filtered_position_3d.append(temp)
    true_position_3d.append(temp1)
x_test = np.array(filtered_position_3d,dtype = np.float32)
true_position_3d = np.array(true_position_3d)
before_corrected_position = x_test[:,-1,:2]

########################################################검증###################################################################################
model = load_model('AISL.accel-S6-128-32')

scaler0 = joblib.load('scaler0_accel_s6_X_ERR.pkl')
scaler1 = joblib.load('scaler1_accel_s6_Y_ERR.pkl')

model_prediction_error = model.predict(x_test)



predicted_position = np.zeros(model_prediction_error.shape)
predicted_position[:, 0] = scaler0.inverse_transform(model_prediction_error[:, 0].reshape(-1, 1)).ravel()
predicted_position[:, 1] = scaler1.inverse_transform(model_prediction_error[:, 1].reshape(-1, 1)).ravel()
corrected_position = predicted_position + before_corrected_position




Observed_rms= calculate_rmse(true_position, observed_position)
#print(f"Observed_rms : {Observed_rms}")
filtered_rms = calculate_rmse(true_position[WL-1+EG:,:], filtered_position[WL-1+EG:,:2])
#print(f"filtered_rms : {filtered_rms}")
EKF_filtered_rms = calculate_rmse(true_position[WL-1+EG:,:], EKF_filtered_position[WL-1+EG:,:2])
#print(f"EKF_filtered_rms : {EKF_filtered_rms}")
imm_filtered_rms = calculate_rmse(true_position[WL-1+EG:,:], imm_filtered_position[WL-1+EG:,:2])
# print(f"IMM filtered_rms : {imm_filtered_rms}")
corrected_rms = calculate_rmse(true_position[WL-1+EG:,:],corrected_position[EG:,:] )
#print(f"corrected_rms : {corrected_rms}")





Observed_Error = calculate_residuals(true_position, observed_position)
filtered_Error = calculate_residuals(true_position, filtered_position)
EKF_filtered_Error = calculate_residuals(true_position, EKF_filtered_position)
imm_filtered_Error = calculate_residuals(true_position, imm_filtered_position)
corrected_Error = calculate_residuals(true_position[WL-1+EG:,:], corrected_position[EG:,:])


#######################################################그래프###################################################################################
padded_Error = np.pad(corrected_Error.ravel(), (WL-1+EG, 0), mode='constant', constant_values=np.nan)


ax1 = plt.subplot(2, 1, 1)
ax1.plot(Observed_Error, color='blue', linewidth=0.1)
ax1.plot(filtered_Error, color='orange', linewidth=0.5)
ax1.plot(padded_Error, color='green', linewidth=0.5)
ax1.axhline(Observed_rms, color='blue', label=f'Observed RMS: {Observed_rms:.2f}')
ax1.axhline(y=filtered_rms, color='orange',label=f'Kalman Filtered RMSE : {filtered_rms:.2f}') 
ax1.axhline(y=corrected_rms,  color='green',label=f'AI accel S6-128-32 RMSE: {corrected_rms:.2f}')  
ax1.set(xlabel='Data Point', ylabel='Euclidean error', title='Euclidean error Plot')
ax1.tick_params(axis='y', labelcolor='black')
ax1.legend()


# 테스트 손실 그리기
ax2 = plt.subplot(2, 1, 2)
ax2.plot(true_position[:,0],true_position[:,1], linestyle='dashed', color='green', label='True data', linewidth=1.5)
ax2.scatter(observed_position[:,0], observed_position[:,1], color='blue', label='Observed Data',s=4)
ax2.scatter(filtered_position[:,0], filtered_position[:,1], color='orange', label='Kalman Filtered Data',s=4)
ax2.plot(corrected_position[:,0], corrected_position[:,1], color='green', label='AI accel S6-128-32')
ax2.set(xlabel='x', ylabel='y')
ax2.legend()
plt.tight_layout()
plt.show()
