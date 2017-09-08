#include <iostream>
#include <string>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	int ans = 0;
	string s;

	while (tc--) {
		cin >> s;
		bool check[28];
		bool notGroup = false;
		for (int i = 0; i < 28; i++) {
			check[i] = false;
		}

		int size = s.size();
		check[s[0]- 'a'] = true;
		for (int i = 1; i < size; i++) {
			if (s[i] != s[i - 1]) {
				if (check[s[i]-'a'] == true) {
					notGroup = true;
					break;
				 }
				else {
					check[s[i]-'a'] = true;
					continue;
				}
			}
		}

		if (notGroup) {
			continue;
		}
		else {
			ans++;
		}
	}
	cout << ans << "\n";
}