#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int a[26];

int main() {
	string s;  cin >> s;
	int size = s.size();
	for (int i = 0; i < size; i++) {
		if ('a' <= s[i] && s[i] <= 'z')
			a[s[i] - 'a']++;
		else
			a[s[i] - 'A']++;
	}

	int max = 0;
	int ans = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i]; ans = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (i != ans && max == a[i]) {
			puts("?"); return 0;
		}
	}

	printf("%c\n", ans + 'A');
}