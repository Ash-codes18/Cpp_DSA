#include <iostream>
using namespace std;

int power(int x, int n)
{
	int result = 1;
	while (n > 0) {
		if (n & 1 == 1) 
		{
			result = result * x;
		}
		x = x * x;
		n = n >> 1; 
	}
	return result;
}


int main()
{
	int x = 2;
	int n = 3;

	cout << (power(x, n));
	return 0;
}
