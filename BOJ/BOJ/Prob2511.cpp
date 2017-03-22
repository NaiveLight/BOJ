#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b);
	int ap = 0, bp = 0;
	int size = a.size();
	int awp = 0, bwp = 0;
	for (int i = 0; i < size; i += 2) {
		if (a[i] > b[i]) {
			ap += 3; awp = i;
		}
		else if (b[i] > a[i]) {
			bp += 3; bwp = i;
		}
		else {
			ap += 1; bp += 1;
		}
	}
	cout << ap << " " << bp << "\n";
	if (ap > bp)
		cout << "A\n";
	else if (bp > ap)
		cout << "B\n";
	else {
		if (awp > bwp)
			cout << "A\n";
		else if (bwp> awp)
			cout << "B\n";
		else
			cout << "D\n";
	}
}