#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;

int main()
{
	cout << "Euler Problem 002\n";

	int fib[100000];
	fib[0] = 1;
	fib[1] = 2;
	int currentFib = 1;
	int fibsum = 2;
	

	while (fib[currentFib] < 4000000)
	{
		currentFib++;
		fib[currentFib] = fib[currentFib - 1] + fib[currentFib - 2];
		if ((fib[currentFib] / 2) * 2 == fib[currentFib])
		{
			fibsum += fib[currentFib];
		}
	}

	cout << "Sum: " << fibsum << "\n";
	cin.get();
	return 0;
}