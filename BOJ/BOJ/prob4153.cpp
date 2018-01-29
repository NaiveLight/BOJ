#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		if (!a && !b && !c)
			break;

		if (a > b)
			swap(a, b);
		if (b > c)
			swap(b, c);

		if (a*a + b*b == c*c)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}