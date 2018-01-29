#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			for (int j = 1; j <= 2 * n - 1; j++)
				printf("*");
			puts("");
		}
		else
		{
			for (int j = 0; j < n - i - 1; j++)
				printf(" ");

			printf("*");

			for (int j = 0; j < 2 * i - 1; j++)
				printf(" ");

			if (i != 0)
				printf("*");
			puts("");
		}
	}
	return 0;
}