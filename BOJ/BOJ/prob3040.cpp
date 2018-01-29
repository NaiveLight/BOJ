#include <iostream>

using namespace std;

int main()
{
	int a[9] = { 0, };

	for (int i = 0; i < 9; i++)
		scanf("%d", &a[i]);

	int sum = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				if (k == i || k == j)
					continue;
				sum += a[k];
			}

			if (sum == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k == i || k == j)
						continue;
					printf("%d\n", a[k]);
				}

				return 0;
			}
			sum = 0;
		}
	}

	return 0;
}