#include <cstdio>
#include <algorithm>
using namespace std;

int a[8];

int main() {
	for (int i = 0; i < 8; i++)
		scanf("%d", &a[i]);
	
	int tmp = a[0];
	if (a[0] == 1) {
		for (int i = 1; i < 8; i++) {
			if (a[i] != ++tmp) {
				printf("mixed\n");
				return 0;
			}
		}
		printf("ascending\n");
		return 0;
	}
	else if (a[0] == 8) {
		for (int i = 1; i < 8; i++) {
			if (a[i] != --tmp) {
				printf("mixed\n");
				return 0;
			}
		}
		printf("descending\n");
		return 0;
	}
	else
		printf("mixed\n");
}