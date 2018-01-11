#include <iostream>
#include <cstdio>

using namespace std;

int dp[2001][2001];
int arr[2001];

int solve(int s, int e)
{
	if (s == e) return dp[s][e] = 1;
	if (e < s) return 1;
	if (dp[s][e] != -1) return dp[s][e];
	if (arr[s] != arr[e]) return dp[s][e] = 0;

	return dp[s][e] = solve(s + 1, e - 1);
}
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 2001; i++)
		for (int j = 0; j < 2001; j++)
			dp[i][j] = -1;

	int m;
	scanf("%d", &m);

	int s, e;
	while (m--)
	{
		scanf("%d %d", &s, &e);
		printf("%d\n", solve(s - 1, e - 1));
	}

	return 0;
}
