// -lmpfr -lgmp 

#include <iostream>
#include "mpreal.h"
#include <cmath>
#include <fstream>
#include <vector>
#include <complex>

using namespace mpfr;

// Constants initialization
const mpreal A = mpreal(1.0);
const mpreal B = mpreal(-1.03);
const mpreal a = 2 * const_pi() / 100;
const mpreal b = 2 * const_pi() / 99;
const mpreal Delta_w0 = mpreal(0.0);

// Function definitions
mpreal V_func(const mpreal& reT) {    
    mpreal term1 = (a * A * B * exp(-(a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term2 = (A * b * B * exp(-(a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term3 = (b * pow(B, 2) * exp(2 * a * reT - 2 * (a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term4 = (a * pow(A, 2) * exp(2 * b * reT - 2 * (a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term5 = (A * b * -pow(-(a * A) / (b * B), a / (-a + b)) * B * exp(a * reT - (a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term6 = -(b * pow(-(a * A) / (b * B), b / (-a + b)) * pow(B, 2) * exp(a * reT - (a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term7 = (a * -pow(A, 2) * pow(-(a * A) / (b * B), a / (-a + b)) * exp(b * reT - (a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term8 = -(a * A * pow(-(a * A) / (b * B), b / (-a + b)) * B * exp(b * reT - (a + b) * reT)) / (2 * pow(reT, 2));
    mpreal term9 = (a * A * b * B * exp(-(a + b) * reT)) / (3 * reT);
    mpreal term10 = (pow(b, 2) * pow(B, 2) * exp(2 * a * reT - 2 * (a + b) * reT)) / (6 * reT);
    mpreal term11 = (pow(a, 2) * pow(A, 2) * exp(2 * b * reT - 2 * (a + b) * reT)) / (6 * reT);
    mpreal term12 = (b * B * exp(a * reT - (a + b) * reT) * Delta_w0) / (2 * pow(reT, 2));
    mpreal term13 = (a * A * exp(b * reT - (a + b) * reT) * Delta_w0) / (2 * pow(reT, 2));         
    return term1 + term2 + term3 + term4 + term5 + term6 + term7 + term8 + term9 + term10 + term11 + term12 + term13;
}

mpreal V_prime(const mpreal& reT) {
    mpreal h = mpreal("1e-500");
    return (V_func(reT + h) - V_func(reT - h)) / (2 * h);
}

mpreal W_func(const mpreal& reT) {
    mpreal term1 = A * -pow(-(a * A) / (b * B), a / (-a + b)) - pow(-(a * A) / (b * B), b / (-a + b)) * B;
    mpreal term2 = A * exp (- a * reT);
    mpreal term3 = B * exp (- b * reT);
    mpreal term4 = Delta_w0;
    return term1 + term2 + term3 + term4;
}

mpreal newton_method(const mpreal& init_reT, const mpreal& tol = mpreal("1e-200"), int max_iter = 10000) {
    mpreal reT = init_reT;
    for (int i = 0; i < max_iter; ++i) {  
        mpreal f_reT = V_func(reT);
        mpreal f_prime_reT = V_prime(reT);
        mpreal reT_new = reT - f_reT / f_prime_reT;
        if (abs(reT_new - reT) < tol) {
            std::cout << "Newton method finished before reaching the Max Iteration!" << std::endl;
            return reT_new;
        }
        reT = reT_new;
    }
    return reT;  // Return last approximation if convergence not achieved
}

int main() {
    mpreal::set_default_prec(256000);  // Set precision

    mpreal initial_guess = 63;
    mpreal min_ReT = newton_method(initial_guess);

    std::cout << "Minimum point: <T> = " << min_ReT << std::endl;
    std::cout << "Minimum value: V = " << V_func(min_ReT) << std::endl;
    std::cout << "Minimum value: W = " << W_func(min_ReT) << std::endl;

    // Calculate range around the minimum point and save to file
    std::ofstream data_file("V_values.csv");
    data_file << "ReT,V\n";
    mpreal step = mpreal("0.001");
    for (mpreal reT = min_ReT - 1; reT <= min_ReT + 1; reT += step) {
        mpreal V_value = V_func(reT);
        data_file << reT << "," << V_value << "\n";
    }
    data_file.close();

    return 0;
}
