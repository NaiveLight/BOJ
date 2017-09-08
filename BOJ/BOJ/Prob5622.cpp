#include <iostream>
#include <string>

using namespace std;

int main() {

	int alpha[26] = { 3, 3, 3, 4 ,4 ,4 ,5 ,5 ,5 ,6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	string s;
	cin >> s;

	int ans = 0;
	int size = s.size();

	for (int i = 0; i < size; i++)
		ans += alpha[s[i] - 'A'];

	cout << ans;
}