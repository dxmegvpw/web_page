#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, x;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    cout << "linear equation: " << a << " * x +" << b << " =0" << endl;

    if(a==0.0)
    {
        cout << "Cannot solve!" << endl;
        return -1;
    }

    x = -b/a;

    cout << "x= " << x << endl;

    return 0;
}
