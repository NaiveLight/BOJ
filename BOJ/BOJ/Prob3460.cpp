#include <cstdio>

using namespace std;

int main() {
	int n; scanf("%d", &n);
	while (n--) {
		int a; scanf("%d", &a);
		for (int i = 0; a; i++) {
			if (a & 1)
				printf("%d ", i);
			a >>= 1;
		}
		puts("");
	}
}
