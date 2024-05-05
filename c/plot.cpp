#include "matplotlibcpp.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <tuple>

namespace plt = matplotlibcpp;

double error{0.0000001};
double number{999.0};

std::tuple<std::vector<int>, std::vector<double>> compute_sqrt(double number, double error)
{

    std::vector<int> iterX;
    std::vector<double> valueY;
    int iter{0};
    double xx{1.0};
    double xx_next{0};

    iterX.push_back(iter);
    valueY.push_back(xx);

    while (fabs(xx * xx - number) > error)
    {

        xx_next = 0.5 * (xx + number / xx);
        iter++;
        std::cout << xx_next << std::endl;
        xx = xx_next;
        iterX.push_back(iter);
        valueY.push_back(xx);
    }

    std::cout << "solution : " << xx << " after iteration : " << iter << std::endl;
    return std::make_tuple(iterX, valueY);
}

void plotNumericalApproach(std::vector<int> ii, std::vector<double> yy)
{
    plt::figure_size(1200, 780);
    plt::title("Iteration. Newton method");
    plt::plot(ii, yy);
    plt::show();
}

int main()
{

    std::tuple<std::vector<int>, std::vector<double>> results;
    results = compute_sqrt(number, error);
    plotNumericalApproach(std::get<0>(results), std::get<1>(results));
}
