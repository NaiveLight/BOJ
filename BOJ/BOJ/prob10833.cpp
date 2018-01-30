#include <iostream>

using namespace std;

int main()
{
	int ans = 0;
	int n;
	cin >> n;

	int a, b;
	while (n--)
	{
		cin >> a >> b;
		ans += b%a;
	}

	cout << ans << endl;

	return 0;
}