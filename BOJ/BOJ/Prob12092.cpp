#include <cstdio>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	int a[3];
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) {
		a[i] = (rand() % 3);
	}

	if (a[2] == 0)
		puts("Vaporeon");
	else if (a[2] == 1)
		puts("Jolteon");
	else
		puts("Flareon");
}