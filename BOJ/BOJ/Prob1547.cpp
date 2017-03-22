#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int n; scanf("%d", &n);
	int a[3] = { 1, 0, 0 };
	while (n--) {
		int x, y;
		scanf("%d %d", &x, &y);
		swap(a[x - 1], a[y - 1]);
	}
	for (int i = 0; i < 3; i++) {
		if (a[i] == 1) {
			printf("%d\n", i + 1);
			break;
		}
	}
}