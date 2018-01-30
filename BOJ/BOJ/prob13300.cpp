#include <iostream>

using namespace std;

int main()
{
	int arr[2][6] = {};
	int n, k;
	cin >> n >> k;

	int s, y;
	while (n--)
	{
		cin >> s >> y;
		arr[s][y - 1]++;
	}

	int room = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			room += arr[i][j] % k ? arr[i][j] / k + 1 : arr[i][j]/k;
		}
	}

	cout << room << endl;
}