#include <cstdio>

using namespace std;

int main() {
	int n; scanf("%d ", &n);
	int a, b;
	a = b = 0;
	char tmp;
	while (n--) {
		scanf("%c", &tmp);
		if (tmp == 'A')
			a++;
		else
			b++;
	}

	if (a > b)
		puts("A");
	else if (a == b)
		puts("Tie");
	else
		puts("B");
}