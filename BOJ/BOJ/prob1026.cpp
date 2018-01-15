#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	vector<int> a(n), b(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i] * b[i];
	printf("%d\n", sum);
	return 0;
}
