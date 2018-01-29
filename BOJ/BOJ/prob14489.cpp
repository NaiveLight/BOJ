#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	if (((a + b) - 2 * c) >= 0)
		cout << ((a + b) - 2 * c) << "\n";
	else
		cout << a + b << "\n";
	return 0;
}