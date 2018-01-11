#include <cstdio>
#include <algorithm>

using namespace std;

bool check[10001];

void CheckPrime()
{
	for (int i = 0; i <= 10000; i++)
		check[i] = 0;

	check[0] = check[1] = true;
	for (int i = 2; i <= 10000; i++)
	{
		if (check[i] == false)
			for (int j = i * 2; j <= 10000; j += i)
				check[j] = true;
	}
}

int main()
{
	CheckPrime();

	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);

	int sum = 0;
	int min = 0;

	for (int i = m; i <= n; i++)
	{
		if (!check[i])
		{
			sum += i;
			if (!min)
				min = i;
		}
	}

	if (sum == 0)
		puts("-1");
	else
		printf("%d\n%d\n", sum, min);

	return 0;
}