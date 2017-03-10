#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int calDist(char x, char y) {
	if (x <= y)
		return (y - 'A') - (x - 'A');
	else
		return (y -'A' + 26) - (x - 'A');
}

int main() {
	int n; scanf("%d", &n);
	while (n--) {
		string a, b;
		cin >> a >> b;
		int len = a.size();
		printf("Distances: ");
		for (int i = 0; i < len; i++)
			printf("%d ", calDist(a[i], b[i]));
		puts("");
	}
}