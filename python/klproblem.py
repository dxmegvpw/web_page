import mpmath
import numpy as np
import matplotlib.pyplot as plt
import time

start_time = time.time()

# 精度の設定
mpmath.mp.dps = 5000

# 定数の定義
A = mpmath.mpf('1')
B = mpmath.mpf('-1.03')
a = mpmath.mpf(2 * np.pi / 100)
b = mpmath.mpf(2 * np.pi / 99)
Delta_w0 = mpmath.mpf('0')

# Vの定義
def V_func(reT):
    term1 = (a * A * B * mpmath.exp(-(a + b) * reT)) / (2 * reT**2)
    term2 = (A * b * B * mpmath.exp(-(a + b) * reT)) / (2 * reT**2)
    term3 = (b * B**2 * mpmath.exp(2 * a * reT - 2 * (a + b) * reT)) / (2 * reT**2)
    term4 = (a * A**2 * mpmath.exp(2 * b * reT - 2 * (a + b) * reT)) / (2 * reT**2)
    term5 = (A * b * ((a * A) / (b * B))**(a / (-a + b)) * B * mpmath.exp(a * reT - (a + b) * reT)) / (2 * reT**2)
    term6 = -(b * ((a * A) / (b * B))**(b / (-a + b)) * B**2 * mpmath.exp(a * reT - (a + b) * reT)) / (2 * reT**2)
    term7 = (a * A**2 * ((a * A) / (b * B))**(a / (-a + b)) * mpmath.exp(b * reT - (a + b) * reT)) / (2 * reT**2)
    term8 = -(a * A * ((a * A) / (b * B))**(b / (-a + b)) * B * mpmath.exp(b * reT - (a + b) * reT)) / (2 * reT**2)
    term9 = (a * A * b * B * mpmath.exp(-(a + b) * reT)) / (3 * reT)
    term10 = (b**2 * B**2 * mpmath.exp(2 * a * reT - 2 * (a + b) * reT)) / (6 * reT)
    term11 = (a**2 * A**2 * mpmath.exp(2 * b * reT - 2 * (a + b) * reT)) / (6 * reT)
    term12 = (b * B * mpmath.exp(a * reT - (a + b) * reT) * Delta_w0) / (2 * reT**2)
    term13 = (a * A * mpmath.exp(b * reT - (a + b) * reT) * Delta_w0) / (2 * reT**2)
    return term1 + term2 + term3 + term4 + term5 + term6 + term7 + term8 + term9 + term10 + term11 + term12 + term13

def W_func(reT):
    numerator = A * ((a * A) / (b * B))**(a / (-a + b)) - ((a * A) / (b * B))**(b / (-a + b)) * B
    exponential_terms = A * mpmath.exp(-a * reT) + B * mpmath.exp(-b * reT)
    return numerator + exponential_terms + Delta_w0

# Vの一階導関数
def V_prime(reT):
    h = mpmath.mpf(10**(-50))
    return (V_func(reT + h) - V_func(reT - h)) / (2 * h)

# ニュートン法による最小点の探索
def newton_method(init_reT, tol=1e-50, max_iter=1000):
    reT = init_reT
    for i in range(max_iter):
        reT_new = reT - V_func(reT) / V_prime(reT)
        if abs(reT_new - reT) < tol:
            print("Finished Newton method before reached Max Iteration!")
            return reT_new
        reT = reT_new
    return reT

# 二分法でWの最大値を探す
def find_maximum_W(left, right, tol=mpmath.mpf('1e-200'), max_iter=1000):
    iterations = 0
    while abs(right - left) > tol and iterations < max_iter:
        midpoint = (left + right) / 2
        if W_func(midpoint).real < W_func(midpoint + tol).real:
            left = midpoint
        else:
            right = midpoint
        iterations += 1
    return (left + right) / 2

# 初期値を設定してニュートン法を実行
# initial_guess = 62
# min_ReT = newton_method(initial_guess).real

max_ReT_W = find_maximum_W(62,63).real
min_ReT = max_ReT_W

if min_ReT is not None:
    print(f"Minimum point: ReT = {'{:.3}'.format(float(min_ReT.real))}")
else:
    print("Failed to converge")

V_min = float(V_func(mpmath.mpf(min_ReT)).real)
print(f"V_min = {'{:.3e}'.format(V_min)}")

W0 = float(W_func(mpmath.mpf(min_ReT)).real)
print(f"W_min = {'{:.3e}'.format(W0)}")

# 最小点の周りをプロット
num_points = 5*10**(2)
difference = mpmath.mpf(10**(-12))
plot_initial = min_ReT - difference
delta = 2 * difference / (num_points - 1)

ReT_values = []
V_values = []
W_values = []

for i in range(num_points):
    reT = plot_initial + i * delta
    ReT_values.append(reT)
    V_values.append(V_func(mpmath.mpf(reT)).real)  
    W_values.append(W_func(mpmath.mpf(reT)).real) 

end_time = time.time() 

plt.plot(ReT_values, W_values, label='$W$')
plt.xlabel(f'$T$')
plt.ylabel(f'$W$')
plt.title(f'Plot of $W$')
plt.legend()
plt.grid(True)
plt.show()

elapsed_time = end_time - start_time
print(f"Elapsed time: {elapsed_time} seconds")

# python3 -u "/home/imiya/git/docs/python/klproblem.py"
