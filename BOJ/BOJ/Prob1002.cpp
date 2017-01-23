#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int x1, x2, y1, y2, r1, r2, n;
	scanf("%d", &n);
	
	while (n--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		
		if (r1 < r2)
			swap(r1, r2);

		double dist = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

		if (dist < r1) {
			if (r1 == r2 && x1 == x2 && y1 == y2)
				puts("-1");
			else if (dist == r1 - r2)
				puts("1");
			else if (dist > r1 - r2)
				puts("2");
			else
				puts("0");
		}
		else if (dist > r1) {
			if (dist == r1 + r2)
				puts("1");
			else if (dist > r1 + r2)
				puts("0");
			else
				puts("2");
		}
		else
			puts("2");
	}
}