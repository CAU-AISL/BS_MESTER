import numpy as np
import matplotlib.pyplot as plt
import random

steering_start_time = 0
line_start_time = 0
steering_start_time2 = 0
line_start_time2 = 0
additional_time = 0

############# 각가속도 x ###############

# def generate_accle_nonlinear_path(dt):
#     global steering_start_time, line_start_time, steering_start_time2,line_start_time2,additional_time
#     x = [0]
#     y = [0]
#     theta = [np.radians(np.random.uniform(0,360))]

#     stop_at_curve = random.choices([True, False], weights=[0.3, 0.7], k=1)[0]
#     additional_time = random.randint(2, 3) * 1 / dt if stop_at_curve else 0  # 첫 번째 곡선에서 정지하는 경우만 추가 시간을 고려

#     delta_range = [(-np.radians(6), -np.radians(2)), (np.radians(6), np.radians(2))]  # 두 범위 설정
#     delta1 = np.random.uniform(*delta_range[random.choice([0, 1])])
#     delta2 = np.random.uniform(*delta_range[random.choice([0, 1])])
#     steering_start_time = 100
#     line_start_time = int(steering_start_time + 60+ additional_time) 
#     steering_start_time2 = line_start_time + 40
#     line_start_time2 = steering_start_time2 + 60
#     num_points = line_start_time2 + 60 
    
#     acceleration_range = (0.1, 0.5)
#     deceleration_range = (-0.5, -0.1) 
#     acceleration = np.random.uniform(0.1,0.3)
#     velocity = np.random.uniform(0, 30)
#     max_velocity = 30
#     min_velocity = 5
#     velocities = [velocity]
#     accelerations = [acceleration]

#     for i in range(1, num_points):
#         #############가속도 계산###########
#         # 초반 직선 가속도 적용
#         if i < steering_start_time:
#             velocity = min(max_velocity, velocity + acceleration)
#         # 1 조향 시작 or 정지 
#         if i == steering_start_time and not stop_at_curve:
#             if velocity >= 25:  # 속도가 20 이상이면 감속
#                 acceleration = np.random.uniform(*deceleration_range)
#             else:  # 속도가 25 미만이면 감속 또는 속도 유지
#                 acceleration = np.random.uniform(*deceleration_range) if random.choice([True, False]) else 0
#         elif i == steering_start_time and stop_at_curve:
#             acceleration = -2
#         # 정지이후 가속 
#         elif i == steering_start_time + additional_time and stop_at_curve:
#             acceleration = np.random.uniform(0.2,0.35)
#         # 1 직선 가속 or 등속
#         elif i == line_start_time :
#             acceleration = np.random.uniform(*acceleration_range) if random.choice([True, False]) else 0 # 가속도 변경 또는 속도 유지
#         # 2 조향 시작 일정 속도 조건 
#         elif i == steering_start_time2:
#             if velocity >= 25:  # 속도가 25 이상이면 감속
#                 acceleration = np.random.uniform(*deceleration_range)
#             else:  # 속도가 25 미만이면 감속 또는 속도 유지
#                 acceleration = np.random.uniform(*deceleration_range) if random.choice([True, False]) else 0
#         # 2 직선 가속 or 등속
#         elif i == line_start_time2:
#             acceleration = np.random.uniform(*acceleration_range) if random.choice([True, False]) else 0 # 가속도 변경 또는 속도 유지

#         #############속도 계산###########
#         # 조향 시작 시간에 도달하면 조향변화율을 적용
#         if i >= line_start_time2:
#             velocity = min(max_velocity, velocity + acceleration)
        
#         elif i >= steering_start_time2:
#             theta[-1] += delta2
#             velocity = max(min_velocity, velocity + acceleration) 
        
#         elif i >= line_start_time:
#             velocity = min(max_velocity, velocity + acceleration) 
        
#         elif i >= steering_start_time + additional_time and stop_at_curve:
#             theta[-1] += delta1
#             velocity = min(max_velocity, velocity + acceleration) 

#         elif i >= steering_start_time and stop_at_curve:
#             theta[-1] += delta1
#             velocity = max(0, velocity + acceleration) 
       
#         elif i >= steering_start_time and not stop_at_curve:
#             theta[-1] += delta1
#             velocity = max(15, velocity + acceleration) 

#         x.append(x[-1] + velocity * np.cos(theta[-1]) * dt)
#         y.append(y[-1] + velocity * np.sin(theta[-1]) * dt) 

#         theta.append(theta[-1])
#         velocities.append(velocity)
#         accelerations.append(acceleration)
#     true_position= np.concatenate((np.array(x).reshape(-1,1),np.array(y).reshape(-1,1)), axis= 1)

#     return true_position, velocities, accelerations


############# 각가속도 적용 ###############

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

    return true_position, velocities, accelerations





dt = 0.1
path, velocities, accelerations = generate_accle_nonlinear_path(dt)
x = path[:, 0]
y = path[:, 1]


fig, axs = plt.subplots(3, figsize=(8, 12))
axs[0].scatter(x, y, label='Generated path',s=1)
axs[0].set_title('Nonlinear Path')
axs[0].set_xlabel('x')
axs[0].set_ylabel('y')
axs[0].legend()
axs[0].grid(True)

axs[1].plot(velocities, label='Velocity')
axs[1].axvline(x=steering_start_time+additional_time, color='r', linestyle='--', label='Start of curve 1')
axs[1].axvline(x=line_start_time, color='b', linestyle='--', label='End of curve 1')
axs[1].axvline(x=steering_start_time2, color='r', linestyle='--', label='Start of curve 2')
axs[1].axvline(x=line_start_time2, color='b', linestyle='--', label='End of curve 2')
axs[1].set_title('Velocity over time')
axs[1].set_xlabel('Time steps')
axs[1].set_ylabel('Velocity')
axs[1].legend()
axs[1].grid(True)

axs[2].plot(accelerations, label='Acceleration')
axs[2].axvline(x=steering_start_time+additional_time, color='r', linestyle='--', label='Start of curve 1')
axs[2].axvline(x=line_start_time, color='b', linestyle='--', label='End of curve 1')
axs[2].axvline(x=steering_start_time2, color='r', linestyle='--', label='Start of curve 2')
axs[2].axvline(x=line_start_time2, color='b', linestyle='--', label='End of curve 2')
axs[2].set_title('Acceleration over time')
axs[2].set_xlabel('Time steps')
axs[2].set_ylabel('Acceleration')
axs[2].legend()
axs[2].grid(True)

plt.tight_layout()
plt.show()