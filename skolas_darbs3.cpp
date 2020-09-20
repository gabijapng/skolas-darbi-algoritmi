#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	float z, x, y;
	const double pi = 3.14;
	cout << "Enter x value: ";
	cin >> x;
	cout << "Enter y value: ";
	cin >> y;


	if (x < -10, y < -5) z = 1 / x + 1 / y;
	else if (-10 <= x && x < 0, -5 <= y && y < 0) z = (x - y) / (x + y);
	else if (0 <= x && x < 2 * pi, 0 <= y && y < pi / 2) z = sin(x) / cos(y);
	else z = log(x * x + y * y); 
	printf("z: %.2f", z);
	std::endl(std::cout);
	return 0;

}