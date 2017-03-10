#include <iostream>
#include <string>
using namespace std;
string joi = "JOI";
string ioi = "IOI";
string input;
int main() {
	cin >> input;
	int cntJ = 0;
	int cntI = 0;

	for (int i = 0; i < input.length(); i++) {
		if (input.substr(i, 3) == joi) {
			cntJ++;
		}
		if (input.substr(i, 3) == ioi) {
			cntI++;
		}
	}

	cout << cntJ << endl << cntI << endl;

	return 0;
}