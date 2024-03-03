import numpy as np

class KF:
    def __init__(self, A, H, Q, R, P):
        self.A = A
        self.H = H
        self.Q = Q
        self.R = R

        self.X = np.zeros((A.shape[0], 1))
        self.X_pre = self.X
        self.P = P
        self.P_pre = self.P

    def filt(self, Z):
        self.__predict()
        self.__update(Z)
        return self.X

    def __predict(self):
        self.X_pre = np.dot(self.A, self.X)
        self.P_pre = np.dot(np.dot(self.A, self.P), self.A.T) + self.Q

    def __update(self, Z):
        K = np.dot(np.dot(self.P_pre, self.H.T),
                   np.linalg.inv(np.dot(np.dot(self.H, self.P_pre), self.H.T) +\
                                 self.R))
        self.X = self.X_pre + np.dot(K, Z - np.dot(self.H, self.X_pre))
        self.P = self.P_pre - np.dot(np.dot(K, self.H), self.P_pre)