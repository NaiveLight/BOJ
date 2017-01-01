//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int a[100001];
//int s[100001];
//
//int main() {
//	int n; scanf("%d", &n);
//	int m; scanf("%d", &m);
//
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//		s[i] = s[i - 1] + a[i];
//	}
//
//	int ans = 2e9;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j <= n; j++) {
//			if (s[j] - s[i] >= m) {
//				ans = min(ans, j - i);
//				break;
//			}
//		}
//	}
//
//	printf("%d\n", ans == 2e9 ? 0 : ans);
//}

#include <cstdio>
#include <algorithm>
using namespace std;

int a[100001];

int main() {
	int n; scanf("%d", &n);
	int m; scanf("%d", &m);

	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	int ans = 2e9;
	int s = 0, pos = 0;

	for (int i = 0; i < n; i++) {
		while (pos < n && s < m)
			s += a[pos++];
		if (s >= m)
			ans = min(ans, pos - i);
		s -= a[i];
	}

	printf("%d\n", ans == 2e9 ? 0 : ans);
}
