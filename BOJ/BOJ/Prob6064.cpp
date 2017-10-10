#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}

int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--) {
		int m, n, x, y;
		scanf("%d %d %d %d", &m, &n, &x, &y);

		int lcm = m*n / gcd(m, n);
		
		if (x > n) {
			swap(m, n);
			swap(x, y);
		}

		int tmp, i;
		
		for (i = tmp = x; i <= lcm; i += m) {
			if (tmp == y)
				break;
			tmp = (tmp + m - 1) % n + 1;
		}

		printf("%d\n", i > lcm ? -1 : i);
	}
}