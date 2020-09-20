#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	float z, x;
	const double pi = 3.14;
	cout << "Enter x value: ";
	cin >> x;
	

	if (x < -pi) z = log(fabs(x));
	else if (-pi <= x && x < pi) z = sin(x) + cos(2 * x);
	else if (pi <= x && x < 10) z = x * x * x + 1;
	else if (10 <= x && x < 100) z = (x + 1) / (x * x + 8);
	else z = log(x); 
	printf("z: %.2f", z);
	
	std::endl(std::cout);
	return 0;
}