from keras.callbacks import EarlyStopping
from keras.models import Sequential
from keras.layers import Dense, Dropout, LSTM
from keras.optimizers import Adam
from keras.losses import MeanSquaredError
import numpy as np
import pickle

data = np.load('train_set_accel_s6.npz')
x_train = data['x_train']
y_train = data['y_train']
x_val = data['x_val']
y_val = data['y_val']

print(f'x_train.shape: {x_train.shape}')
print(f'y_train.shape: {y_train.shape}') 
print(f'x_val.shape: {x_val.shape}')
print(f'y_val.shape: {y_val.shape}') 

######################################################학습###################################################################################
WL = 14
input_shape = (WL,6) # x,y pos, vel, obse
num_epochs = 150
early_stop = EarlyStopping(monitor='val_loss', patience=15)


##############################################S6-128-32#######################################
model = Sequential()
model.add(LSTM(128, return_sequences=True, input_shape=input_shape))
model.add(Dropout(0.2))
model.add(LSTM(32, return_sequences=False, input_shape=input_shape))
model.add(Dropout(0.2))
model.add(Dense(2))
model.compile(optimizer=Adam(learning_rate=0.001), loss=MeanSquaredError(), metrics='accuracy')
model.summary()

history = model.fit(x_train, y_train, epochs=num_epochs, validation_data=(x_val, y_val), callbacks=[early_stop])
model.save('AISL.accel-S6-128-32')
with open('history-accel-S6-128-32.pkl', 'wb') as f:
    pickle.dump(history.history, f)
