#include <iostream>
#include "mpreal.h"
#include <cmath>
#include <fstream>
#include <vector>
#include <complex>
#include <cstdio> // for popen, pclose

#include <chrono>

using namespace mpfr;

// Constants initialization
const mpreal A = mpreal("1.0");
const mpreal B = mpreal("-1.03");
const mpreal a = 2 * const_pi() / 100 + 0.1;
const mpreal b = 2 * const_pi() /  99 + 0.1;
const mpreal Delta_w0 = mpreal(0.0);

const mpreal num_points = mpreal(2 * pow(10,2));
const mpreal difference = mpreal(2 * pow(10,0));
const mpreal delta = 2 * difference / (num_points - 1);

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
    mpreal h = mpreal("1e-5000");
    return (V_func(reT + h) - V_func(reT - h)) / (2 * h);
}

mpreal W_func(const mpreal& reT) {
    mpreal term1 = A * -pow(-(a * A) / (b * B), a / (-a + b)) - pow(-(a * A) / (b * B), b / (-a + b)) * B;
    mpreal term2 = A * exp (- a * reT);
    mpreal term3 = B * exp (- b * reT);
    mpreal term4 = Delta_w0;
    return -(term1 + term2 + term3 + term4);
}

mpreal W_prime(const mpreal& reT) {
    mpreal h = mpreal("1e-500");
    return (W_func(reT + h) - W_func(reT - h)) / (2 * h);
}

mpreal VW(const mpreal& reT, const mpreal& lambda){
    return V_func(reT) - lambda * W_func(reT);
}

mpreal VW_prime(const mpreal& reT, const mpreal& lambda) {
    mpreal h = mpreal("1e-500");
    return (VW(reT + h, lambda) - VW(reT - h, lambda)) / (2 * h);
}

mpreal W_newton_method(const mpreal& init_reT, const mpreal& tol = mpreal("1e-100"), int max_iter = 1000){
    // mpreal lambda = mpreal("1e-100");
    mpreal reT = init_reT;
    for (int i = 0; i < max_iter; ++i){
        mpreal f_reT = W_func(reT);
        mpreal f_prime_reT = W_prime(reT);
        mpreal reT_new = reT - f_reT / f_prime_reT;
        if (abs(reT_new - reT) < tol) {
            std::cout << "Newton method finished before reaching the Max Iteration!" << std::endl;
            return reT_new;
        }
        reT = reT_new;
    }
    return reT;  // Return last approximation if convergence not achieved
}

mpreal V_newton_method(const mpreal& init_reT, const mpreal& tol = mpreal("1e-100"), int max_iter = 50){
    mpreal reT = init_reT;
    std::cout  << "Max iteration: " << max_iter << std::endl;
    for (int i = 0; i < max_iter; ++i){
        std::cout  << "Iteration: " << i << std::endl;
        std::cout  << "<T> = " << reT << std::endl;
        std::cout << "Minimum value: V = " << V_func(reT) << std::endl;
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
    auto start = std::chrono::high_resolution_clock::now(); // Get the start time of the program

    mpreal::set_default_prec(256000);  // Set precision

    mpreal initial_guess = mpreal("42.15");
    mpreal min_ReT = V_newton_method(initial_guess);

    std::cout << "Minimum point: <T> = " << min_ReT << std::endl;
    std::cout << "Minimum value: V = " << V_func(min_ReT) << std::endl;
    std::cout << "Minimum value: W = " << W_func(min_ReT) << std::endl;

    // Calculate range around the minimum point and save to file
    
    const mpreal plot_initial = min_ReT - difference;

    std::ofstream data_file("data.csv");
    mpreal step = delta;
    // std::cout << "step = " << step << std::endl;
    for (mpreal reT = min_ReT - difference; reT <= min_ReT + difference; reT += step) {
        mpreal V_value = V_func(reT);
        mpreal W_value = W_func(reT);
        data_file << reT << " " << V_value << " " << W_value << "\n";
    }
    data_file.close();

    auto end = std::chrono::high_resolution_clock::now(); // Get the end time of the program

    std::chrono::duration<double> elapsed = end - start; // Calculate the elapsed time

    std::cout << "Program execution time: " << elapsed.count() << " seconds" << std::endl;
    
    FILE *gnuplotPipe = popen("gnuplot -persist", "w"); // Open a pipe to gnuplot

    if (gnuplotPipe) {
        // Send commands to gnuplot for f(x) plot
        fprintf(gnuplotPipe, "plot \"data.csv\" using 1:2 with lines title \"$V$\"\n");
        fflush(gnuplotPipe); // Flush the pipe to send the commands to gnuplot
        std::cout << "Press Enter to exit gnuplot..." << std::endl;
        std::cin.get(); // Wait for user to press Enter
        pclose(gnuplotPipe); // Close the pipe to gnuplot
    } else {
        std::cerr << "Failed to open gnuplot." << std::endl;
    }

    if (gnuplotPipe) {
        // Send commands to gnuplot for f(x) plot
        fprintf(gnuplotPipe, "plot \"data.csv\" using 1:3 with lines title \"$W$\"\n");
        fflush(gnuplotPipe); // Flush the pipe to send the commands to gnuplot
        std::cout << "Press Enter to exit gnuplot..." << std::endl;
        std::cin.get(); // Wait for user to press Enter
        pclose(gnuplotPipe); // Close the pipe to gnuplot
    } else {
        std::cerr << "Failed to open gnuplot." << std::endl;
    }

    return 0;
}

// cd "/home/imiya/git/docs/c/" && g++ klproblem.cpp -o klproblem -O3 -lmpfr -lgmp && "/home/imiya/git/docs/c/"klproblem
