#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	int sugar[2] = { 3, 5 };
	vector<int> dp(n + 1, -1);
	dp[0] = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j <= n; j++) {
			if (sugar[i] <= j && dp[j - sugar[i]] != -1) {
				if (dp[j] == -1)
					dp[j] = dp[j - sugar[i]] + 1;
				else
					dp[j] = min(dp[j], dp[j - sugar[i]] + 1);
			}
		}
	}

	printf("%d\n", dp[n]);

	return 0;
}