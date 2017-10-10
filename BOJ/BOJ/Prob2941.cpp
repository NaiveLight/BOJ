#include <iostream>
#include <string>

using namespace std;

int main() {
	string cro[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	string s;
	cin >> s;
	int size = s.size();
	int ans = 0;
	string tmp;

	for (int i = 0; i < size; i++) {
		if (s[i] == 'c') {
			tmp = s.substr(i, 2);
			if (tmp == "c=" || tmp == "c-") {
				i++;
				ans++;
			}
			else {
				ans++;
			}
			continue;
		}

		if (s[i] == 'd') {
			tmp = s.substr(i, 2);
			if (tmp == "d-") {
				i++;
				ans++;
			}
			else {
				tmp = s.substr(i, 3);
				if (tmp == "dz=") {
					i += 2;
					ans++;
				}
				else {
					ans++;
				}
			}
			continue;
		}

		if (s[i] == 'l') {
			tmp = s.substr(i, 2);
			if (tmp == "lj") {
				i++;
				ans++;
			}
			else {
				ans++;
			}
			continue;
		}

		if (s[i] == 'n') {
			tmp = s.substr(i, 2);
			if (tmp == "nj") {
				i++;
				ans++;
			}
			else {
				ans++;
			}
			continue;
		}

		if (s[i] == 's') {
			tmp = s.substr(i, 2);
			if (tmp == "s=") {
				i++;
				ans++;
			}
			else {
				ans++;
			}
			continue;
		}

		if (s[i] == 'z') {
			tmp = s.substr(i, 2);
			if (tmp == "z=") {
				i++;
				ans++;
			}
			else {
				ans++;
			}
			continue;
		}

		ans++;
	}

	cout << ans;
}
