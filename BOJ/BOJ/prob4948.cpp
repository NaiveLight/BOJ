#include <cstdio>

using namespace std;

bool check[250001];

void CheckPrime()
{
	check[0] = check[1] = true;
	for (int i = 2; i <= 250000; i++)
	{
		if(check[i] == false)
			for (int j = i * 2; j <= 250000; j += i)
				check[j] = true;
	}
}

int main()
{
	CheckPrime();

	int n;
	
	while (scanf("%d", &n))
	{
		if (!n)
			break;
		
		int cnt = 0;
		for (int i = n + 1; i <= n * 2; i++)
		{
			if (!check[i])
				cnt++;
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}