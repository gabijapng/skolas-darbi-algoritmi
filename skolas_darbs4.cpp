#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	float y, x{};
	const double pi = 3.14;
	cout << "Enter x value: ";
	cin >> x;
	


	if (x <= 0) y = 0;
	else if (0 < x && x <= 1) y = 1 / x;
	else if (1 < x && x <= 4) y = x * x;
	else (x > 4); y = 14 + log2(x);
	printf("y: %.2f", y);
	std::endl(std::cout);
	return 0;
}