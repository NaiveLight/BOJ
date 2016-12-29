#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	vector<double> a(n);
	
	for (int i = 0; i < n; i++)
		scanf("%lf", &a[i]);
	
	sort(a.begin(), a.end());

	double ans = 0.0;
	for (int i = 0; i < n; i++) {
		a[i] = (a[i] / a[n - 1]) * 100.0;
		ans += a[i];
	}
	
	ans /= (double)n;

	printf("%.2lf\n", ans);
}