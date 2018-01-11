//TimeOver

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	long long ans = 0;
	scanf("%d %d", &n, &k);

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}

	for (int i = 0; i <= n - k; i++)
	{
		vector<int> copy(v.begin()+i, v.begin()+i+k);
		sort(copy.begin(), copy.end());
		ans += (long long) copy[k%2 == 0 ? k/2-1 : (k+1)/2-1];
	}


	printf("%lld\n", ans);
}