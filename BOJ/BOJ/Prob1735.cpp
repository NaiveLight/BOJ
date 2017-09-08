#include <iostream>

using namespace std;

int getGcd(int a, int b) {
	return b ? getGcd(b, a%b) : a;
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int res1, res2;
	res1 = b*c + a*d;
	res2 = b * d;

	int resGcd = getGcd(res1, res2);
	
	if (resGcd != 1) {
		res1 /= resGcd;
		res2 /= resGcd;
	}
	
	cout << res1 << " " << res2 << "\n";

	return 0;
} 