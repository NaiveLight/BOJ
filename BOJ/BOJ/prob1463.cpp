#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001];

int divide(int n)
{
	if (dp[n] != 2e9)
		return dp[n];
	if (n == 1)
		return dp[n] = 0;
	if (n == 2 || n == 3)
		return dp[n] = 1;

	if (n % 3 == 0)
		dp[n] = divide(n / 3);
	if (n % 2 == 0)
		dp[n] = min(dp[n], divide(n / 2));
	dp[n] = min(dp[n], divide(n - 1)) + 1;

	return dp[n];
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
		dp[i] = 2e9;

	//cout << divide(n) << endl;

	dp[2] = dp[3] = 1;

	for (int i = 4; i <= n; i++)
	{
		if (i % 3 == 0)
			dp[i] = dp[i / 3];
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2]);

		dp[i] = min(dp[i], dp[i - 1]) + 1;
	}

	cout << dp[n] << endl;

	return 0;
}