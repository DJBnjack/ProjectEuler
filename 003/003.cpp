#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;

int main()
{
	cout << "Euler Problem 003\n";

	long long number = 600851475143;
	const int amountOfPrimes = 1228;
	long long primes[amountOfPrimes];
	primes[0] = 2;
	primes[1] = 3;
	int z = 2;
	for (int i = 2; i<10000; i++)
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
				break;
			else if (j + 1 > sqrt(i)) {
//				cout << i << " ";
				primes[z++] = i;
			}

		}

	long long largestFactor = 2;

	while (1)
	{
		for (int i = 0; i < amountOfPrimes; i++)
		{
			long long rest = number / primes[i];
			long long restSum = rest * primes[i];
			if (restSum == number)
			{
				if (primes[i] > largestFactor)
				{
					largestFactor = primes[i];
				}

				if (number == primes[i])
				{
					cout << "Largest prime factor: " << largestFactor << "\n";
					cin.get();
					return 0;
				}

				number = number / primes[i];
			}
		}
	}

	return 0;
}