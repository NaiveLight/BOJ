#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BubbleSort(vector<int> &v)
{
	int cnt = 0;
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 1; j < v.size() - i; j++)
		{
			if (v[j] < v[j - 1])
			{
				swap(v[j], v[j - 1]);
				cnt++;
			}
		}
	}

	return cnt;
}

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	cout << BubbleSort(v) << endl;
}