#include <cstdio>

using namespace std;

int main() {
	int n; scanf("%d", &n);
	while (n--) {
		int m; scanf("%d", &m);
		int q, d, n, p; q = d = n = p = 0;
		if (m / 25 != 0) {
			q += m / 25; m -= q*25;
		}
		if (m / 10 != 0) {
			d += m / 10; m -= d*10;
		}
		if (m / 5 != 0) {
			n += m / 5; m -= n*5;
		}
		if (m / 1 != 0) {
			p += m / 1; m = 0;
		}
		printf("%d %d %d %d\n", q, d, n, p);
	}
}