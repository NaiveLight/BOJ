#include <iostream>

using namespace std;

int main()
{
	int room[3] = {};
	int people;

	for (int i = 0; i < 3; i++) cin >> room[i];
	cin >> people;
	
	int i_len = people / room[0];
	int j_len = people / room[1];
	int k_len = people / room[2];
	for (int i = 0; i <= i_len; i++)
	{
		for (int j = 0; j <= j_len; j++)
		{
			for (int k = 0; k <= k_len; k++)
			{
				if (room[0] * i + room[1] * j + room[2] * k == people)
				{
					puts("1");
					return 0;
				}
			}
		}
	}

	puts("0");

	return 0;
}