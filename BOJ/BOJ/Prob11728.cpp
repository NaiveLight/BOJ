#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n + m);

	for (int i = 0; i < n + m; i++)
		scanf("%d", &a[i]);

	sort(a.begin(), a.end());

	for (int i = 0; i < n + m; i++)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}