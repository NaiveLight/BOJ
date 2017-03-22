#include <cstdio>
#include <string>

using namespace std;

void print(int x) {
	for (int i = 0; i < x; i++) {
		if (i == 0 || i == x - 1) {
			for (int j = 0; j < x; j++)
				printf("%c", '#');
		}
		else {
			printf("%c", '#');
			for (int j = 0; j < x - 2; j++)
				printf("%c", 'J');
			printf("%c", '#');;
		}
		puts("");
	}
}

int main() {
	int n; scanf("%d", &n);
	while (n--) {
		int x; scanf("%d", &x);
		print(x);
		puts("");
	}
}