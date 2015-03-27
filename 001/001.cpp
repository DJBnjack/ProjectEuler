#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		if ((i / 3) * 3 == i || (i / 5) * 5 == i)
		{
			sum += i;
		}
	}
	cout << "Sum: " << sum << "\n";
	cin.get();
	return 0;
}