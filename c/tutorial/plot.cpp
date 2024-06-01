#include <iostream>
#include <fstream>

int main() {
    // Create a file to store the data
    std::ofstream dataFile("data.csv");
    
    // Generate data points for the function y = x^2
    for (double x = -10.0; x <= 10.0; x += 0.1) {
        double y = x * x;
        double z = x * x * x;
        dataFile << x << " " << y << " " << z << std::endl;
    }
    
    dataFile.close();
    
    // Launch gnuplot and plot the data
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "plot \"data.csv\" using 1:2 with lines title \"y=x^2\"\n");
        fflush(gnuplotPipe);
        std::cout << "Press Enter to exit gnuplot..." << std::endl;
        std::cin.get(); // Wait for user to press Enter
        pclose(gnuplotPipe);
    } else {
        std::cerr << "Failed to open gnuplot." << std::endl;
    }

    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "plot \"data.csv\" using 1:3 with lines title \"y=x^3\"\n");
        fflush(gnuplotPipe);
        std::cout << "Press Enter to exit gnuplot..." << std::endl;
        std::cin.get(); // Wait for user to press Enter
        pclose(gnuplotPipe);
    } else {
        std::cerr << "Failed to open gnuplot." << std::endl;
    }
    
    return 0;
}
