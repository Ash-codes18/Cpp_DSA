#include <cmath>
#include <iostream>
using namespace std;


int calculatePower(int x, int n)
{
	double result = exp(log(x) * n);

	result = round(result);

	return static_cast<int>(result);
}

int main()
{
	int x = 2;
	int n = 3;

	cout << "Result: " << calculatePower(x, n) << endl;

	return 0;
}
