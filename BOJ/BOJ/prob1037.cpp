#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int count;
	cin >> count;

	vector<int> v(count);
	for (int i = 0; i < count; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[0] * v[count - 1] << endl;

	return 0;
}