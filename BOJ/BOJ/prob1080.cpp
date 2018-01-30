#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<vector<char>> &arr, int n, int m)
{
	for (int i = n; i < n+3; i++)
		for (int j = m; j < m+3; j++)
			arr[i][j] = arr[i][j] == '1' ? '0' : '1';
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<char>> arr(n);
	vector<vector<char>> copyarr(n);

	for (int i = 0; i < n; i++)
	{
		arr[i].resize(m);
		copyarr[i].resize(m);
	}


	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> copyarr[i][j];

	int cnt = 0;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			if (arr[i][j] != copyarr[i][j])
			{
				reverseArr(arr, i, j);
				cnt++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] != copyarr[i][j])
			{
				puts("-1");
				return 0;
			}
		}
	}
	cout << cnt << endl;
	
	return 0;
}
