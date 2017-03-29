#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n, L; scanf("%d %d", &n, &L);
	int ans = 0;
	int pos = 0;
	int d, r, g;
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &d, &r, &g);
		ans += d - pos;
		pos = d;

		if (ans % (r + g) <= r)
			ans += r - ans % (r + g);
	}
	printf("%d\n", ans + L - pos);	
}