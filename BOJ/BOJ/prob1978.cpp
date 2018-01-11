#include <cstdio>
#include <vector>

using namespace std;

bool check[1001];

void CheckPrime()
{
	for (int i = 0; i <= 1000; i++)
		check[i] = 0;
	
	check[0] = check[1] = true;
	for (int i = 2; i <= 1000; i++)
	{
		if (check[i] == false)
			for (int j = i*2; j <= 1000; j += i)
				check[j] = true;
	}
}

int CountPrime(const vector<int> &v)
{
	int ans = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (!check[v[i]])
			ans++;
	}

	return ans;
}

int main()
{
	CheckPrime();

	int n;
	scanf("%d", &n);
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);

	printf("%d\n", CountPrime(v));
	return 0;
}