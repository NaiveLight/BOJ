#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string ans = "";
	for (int i = 0; i < s.length(); i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			ans += s[i];
	}

	cout << ans << endl;
}