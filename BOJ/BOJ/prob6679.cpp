#include <iostream>

using namespace std;

int CalculateDigit(int n, int digit)
{
	int result = 0;
	while (n) 
	{
		result += n%digit;
		n /= digit;
	}
	return result;
}

int main()
{
	for (int i = 2992; i <= 9999; i++)
	{
		int a = CalculateDigit(i, 10);
		int b = CalculateDigit(i, 12);
		int c = CalculateDigit(i, 16);

		if (a == b && b == c)
			printf("%d\n", i);
	}
}