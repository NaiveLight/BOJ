#include <cstdio>

using namespace std;

int dp[15][15];

int main() {
	int tc;
	
	for (int i = 1; i <= 14; i++) {
		dp[0][i] = i;
		dp[i][1] = 1;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 2; j < 15; j++) {
			for (int k = 1; k <= j; k++) {
				dp[i][j] += dp[i-1][k];
			}
		}
	}

	scanf("%d", &tc);
	while (tc--) {
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", dp[k][n]);
	}

}