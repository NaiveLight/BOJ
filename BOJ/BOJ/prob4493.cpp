#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		int n;
		cin >> n;

		int scoreA = 0;
		int scoreB = 0;

		while (n--)
		{
			char a, b;
			cin >> a >> b;

			switch (a)
			{
			case 'R':
				if ('S' == b)
					scoreA++;
				else if ('P' == b)
					scoreB++;
				break;
			case 'S':
				if ('P' == b)
					scoreA++;
				else if ('R' == b)
					scoreB++;
				break;
			case 'P':
				if ('R' == b)
					scoreA++;
				else if ('S' == b)
					scoreB++;
				break;
			}
		}

		if (scoreA > scoreB)
			cout << "Player 1\n";
		else if (scoreA < scoreB)
			cout << "Player 2\n";
		else
			cout << "TIE\n";
	}
	return 0;
}