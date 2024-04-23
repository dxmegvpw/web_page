// g++ plot_anime.cpp -o plot_anime -I/usr/include/python3.10 -lpython3.10 && ./plot_anime

#include<iostream>
#include<matplotlibcpp.h>
using namespace std;

namespace plt = matplotlibcpp;

int main(){
  cout<<"matplotlib-cpp sample start"<<endl;

  int n = 5000;

  vector <double> x(1), y(1);

  for(int i = 0; i < n; ++i) {
      x[0] = i;
      y[0] = sin(2 * M_PI * i / 360.0);
      plt::plot(x, y, "xr");
      plt::pause(0.01);
  } 

  return 0;
}
