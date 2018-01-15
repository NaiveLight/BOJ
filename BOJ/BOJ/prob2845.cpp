#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int l, p;
	scanf("%d %d", &l, &p);

	vector<int> v(5);
	for (int i = 0; i < 5; i++)
		scanf("%d", &v[i]);

	int whole = l * p;
	for (int i = 0; i < 5; i++)
		printf("%d ", v[i] - whole);
	puts("");

	return 0;
}