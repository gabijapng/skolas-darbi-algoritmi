#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float y, x;
    const double pi = 3.14;
    cout << "Enter x value: ";
    cin >> x; 
    x = x * pi / 180; 

    if (x <= 0) y = sin(x);
    else if (x > 0 && x <= pi) y = atan(x);
    else if (pi / 4 < x && x <= 32) y = log2(x);
    else y = 1 / x;
    printf("y: %.2f", y);
    std::endl(std::cout); 
    system("pause");
    return 0;
}