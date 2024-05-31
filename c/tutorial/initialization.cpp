// -lmpfr -lgmp 

#include "mpreal.h"
#include <iostream>

int main() {
    // Set the default precision (optional, but recommended)
    mpfr::mpreal::set_default_prec(256);

    // Initialize X and term with mpreal
    mpfr::mpreal X;
    mpfr::mpreal term;

    // Assign a valid value to X
    X = "3.14159"; // Use string initialization for precision

    // Perform the operation
    term = X * 2;

    // Output the result
    std::cout << "X = " << X << std::endl;
    std::cout << "term = " << term << std::endl;

    return 0;
}
