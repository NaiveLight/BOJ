#include <cstdio>

using namespace std;

int main() {
	int input;
	scanf("%d", &input);

	int x = 0;
	int dist;

	//수의 군을 구한다.
	while (x * (x + 1) / 2 < input) {
		x++; 
	}
	x--;

	//군을 구한 후 거리 찾음
	dist = input - x * (x + 1) / 2;

	if (x % 2)
		printf("%d/%d\n", dist, x - dist + 2);
	else
		printf("%d/%d\n", x - dist + 2, dist);

}