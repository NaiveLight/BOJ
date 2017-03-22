#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	int n; scanf("%d", &n);
	string pat, a, b;
	cin >> pat;
	int size = pat.size();
	for (int i = 0; i < size; i++) {
		if (pat[i] == '*') {
			a = pat.substr(0, i);
			b = pat.substr(i + 1, size);
			break;
		}
	}

	string tmp;
	while (n--) {
		cin >> tmp;
		if (tmp.size() < size - 1) {
			cout << "NE\n";
			continue;
		}	
		if (tmp.substr(0, a.size()) == a && tmp.substr(tmp.size() - b.size(), tmp.size()) == b)
			cout << "DA\n";
		else
			cout << "NE\n";
	}
}