#include <cstdio>
using namespace std;

int main() {
	int t;

	scanf("%d", &t);

	while (t--) {
		int n, sum = 0, cnt = 0;
		int a[1001];
		double avg = 0.0;

		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}

		avg = sum / n;

		for (int i = 0; i < n; i++) {
			if (a[i] > avg)
				cnt++;
		}

		printf("%.3lf%%\n", (double)((double)cnt / (double)n) * 100.0);
	}
}