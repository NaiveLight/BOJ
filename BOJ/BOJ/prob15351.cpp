#include <iostream>
#include <string>

using namespace std;

int SumScore(const string &s)
{
	int sum = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] != ' ')
			sum += (s[i] - 'A') + 1;

	return sum;
}

int main()
{
	int n;

	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; i++)
	{
		int score = 0;
		string s;
		getline(cin, s);
		score = SumScore(s);
		if (100 != score)
			cout << score << "\n";
		else
			cout << "PERFECT LIFE\n"; 
	}
	return 0;
}