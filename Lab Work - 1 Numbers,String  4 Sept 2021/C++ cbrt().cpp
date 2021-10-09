//C++ cbrt()
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long x = 964353422;
    double result = cbrt(x);
    cout << "Cube root of " << x << " is " << result << endl;
    x = -1000.0;
    result = cbrt(x);
    cout << "Cube root of " << x << " is " << result << endl;
    return 0;
}
