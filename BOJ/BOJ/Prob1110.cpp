#include <cstdio>

#include <algorithm>
using namespace std;

int check(int n, int cnt, int start) {
	if (cnt > 0 && n == start)
		return cnt;
	int tmp = n / 10 + n % 10;
	int newNum = (n % 10 * 10) + tmp % 10;
	return check(newNum, ++cnt, start);
}

int main() {
	int n; scanf("%d", &n);
	printf("%d\n", check(n, 0, n));
}