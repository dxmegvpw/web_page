// -lboost_iostreams -lboost_system -lboost_filesystem

#include <iostream>
#include <cmath>
#include <vector>
#include <math.h>

#include "gnuplot-iostream.h"

int main() {
    Gnuplot gp;

    // データポイントを生成
    std::vector<std::pair<double, double>> data;
    for (double x = 0; x <= 2 * M_PI; x += pow(10, -5)) {
        double y = std::pow(std::sin(x), 2);
        data.push_back(std::make_pair(x, y));
    }

    // グラフを描画
    gp << "set title 'Plot of sin^2(x)'\n";
    gp << "set xlabel 'x'\n";
    gp << "set ylabel 'sin^2(x)'\n";
    gp << "plot '-' with lines title 'sin^2(x)'\n";
    gp.send(data);

    // プログラムの終了までgnuplotのウィンドウを保持
    std::cin.get();

    return 0;
}
