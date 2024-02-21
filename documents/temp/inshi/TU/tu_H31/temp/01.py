'''
積分方程式をもとめるためのゴリ押しプログラム．
'''

import numpy as np
from scipy import integrate
import matplotlib.pyplot as plt

def g(x,E):
    if E - a * x**2 - b * x**4 > 0 :
        return np.sqrt( E - a * x**2 - b * x**4 )
    else :
        return -np.sqrt( -(E - a * x**2 - b * x**4) )

def finBin(upper,lower,err,Func):
    up=upper
    low=lower
    count=0
    while True:
        count=count+1
        mid=(up+low)/2
        y=Func(mid)
        if abs(y)<err or count==cnt: 
            break
        elif Func(low)*y<0: 
            up=mid
        else:         
            low=mid
    return mid

def int(Func):
    x_1 = finBin(2.0,0.0,0.0001,Func)
    x_0 = -1*x_1
    x = np.linspace(x_0, x_1, 1000)
    y = np.vectorize(Func)
    s = integrate.simps(y(x), x)
    return s

a = 1
b = 1
cnt = 100

n_min = 10
n_max = 15000

xdata = []
ydata = []
n2data = []
n4data = []
n43data = []

def LHS(E):    
    Efixedintegrand = lambda x:  g(x,E)
    return int(Efixedintegrand)

f = lambda x : LHS(x)-n_max-1/2
m = finBin(10**10,10,0.001,f)

f = lambda x : LHS(x)-n_max-1/2
c = finBin(10**10,10,0.001,f)
f = lambda x : LHS(x)-(n_max-1)-1/2
d = finBin(10**10,10,0.001,f)
diff = c-d

tend2 = diff/(2*n_max)
tend43 = diff/((4/3)*(n_max**(1/3)))
tend4 = diff/(4*(n_max**3))

for i in range(n_min,n_max):
    xdata.append(i)
    f = lambda x : LHS(x)-i-1/2
    E_out = finBin(10**10,10,0.001,f)
    ydata.append(E_out)
    n2data.append(tend2*(i*i-n_max*n_max)+m)    
    n4data.append(tend4*(i**4-n_max**4)+m)
    n43data.append(tend43*(i**(4/3)-n_max**(4/3))+m)

E_max = max(ydata)
E_min = min(ydata)

max_temp = max(n2data)
min_temp = min(n2data)

plt.xlabel("n")
plt.ylabel("E_n")
plt.xlim(n_min, n_max)
plt.ylim(E_min-1, E_max+1)
plt.yticks([])

plt.plot(xdata, ydata, label='E_n')
plt.plot(xdata, n2data, label='n^2')
plt.plot(xdata, n4data, label='n^4')
plt.plot(xdata, n43data, label='n^4/3')
plt.legend()
plt.show()