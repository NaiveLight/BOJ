#include <cstdio>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		int tmp = (i / 10) % 10 - i % 10;
		for (int j = 10; j <= i; j *= 10) {
			if ((i / j) % 10 - (i * 10 / j) % 10 != tmp) {
				cnt--; break;
			}
		}
		cnt++;
	}
	printf("%d\n", cnt);
}