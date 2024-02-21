import matplotlib.pyplot as plt
import numpy as np

wdata = []
fdata = []
a = float(input())

def f(w,alpha):
    return abs((pow( w + alpha -1, alpha))*(pow(w + 1,1-alpha)))

def dat(alpha):
    w_max = 1-alpha
    dat = np.arange(-alpha,w_max,0.01)
    for i in dat:
        wdata.append(i)
        fdata.append(f(float(i),alpha))
    f_min = min(fdata)
    f_max = max(fdata)
    plt.xlabel("w")
    plt.ylabel("f(w)")
    plt.xlim(-alpha,w_max)
    plt.ylim(f_min-1, f_max+1)
    plt.plot(wdata, fdata, label='alpha='+str(alpha),linewidth=1)
    plt.legend()
    plt.show()
    
dat(a)