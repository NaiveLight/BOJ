#include <cstdio>

using namespace std;

int main() {
	int input;
	scanf("%d", &input);

	int x = 0;
	int dist;

	//���� ���� ���Ѵ�.
	while (x * (x + 1) / 2 < input) {
		x++; 
	}
	x--;

	//���� ���� �� �Ÿ� ã��
	dist = input - x * (x + 1) / 2;

	if (x % 2)
		printf("%d/%d\n", dist, x - dist + 2);
	else
		printf("%d/%d\n", x - dist + 2, dist);

}