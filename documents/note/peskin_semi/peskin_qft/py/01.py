import matplotlib.pyplot as plt
import numpy as np

def f(x):
    return np.sqrt(1+x*x)+x

xdata = []
ydata = []

dat = np.arange(0,1000,0.1)

for x in dat:
    xdata.append(x)
    ydata.append(f(x))

plt.plot(xdata,ydata)
plt.show()