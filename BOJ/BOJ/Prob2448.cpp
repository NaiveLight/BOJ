#include <cstdio>
using namespace std;

char a[3 * (1 << 11)][3 * (1 << 11)];

void star(int x, int y, int n, bool blank) {
	int i, j, k;
	if (blank) {
		k = 2 * n - 1;
		for (i = x; i < x + n; i++) {
			for (j = 0; j < k; j++)
				a[i][j + i - x + y] = ' ';
			k -= 2;
		}
	}
	else {
		if (n != 1) {
			int m = n / 2;
			star(x, y, m, false);
			star(x + m, y - m, m, false);
			star(x + m, y + m, m, false);
			if (n == 3)
				star(x + 1, y, 1, true);
			else
				star(x + m, y - m + 1, m, true);
		}
	}
}

int main() {
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++)
			a[i][j] = '*';
		a[i][2 * n] = 0;
	}
	star(0, n - 1, n, false);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			a[i][j] = ' ';
			a[i][2 * n - j - 2] = ' ';
		}
		a[i][2 * n - 1] = ' ';
	}

	for (int i = 0; i < n; i++)
		printf("%s\n", a[i]);
}