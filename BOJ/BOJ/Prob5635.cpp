#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Person { string name; int d, m, y; };

bool cmp(const Person& u, const Person& v) {
	if (u.y == v.y) {
		if (u.m == v.m)
			return u.d < v.d;
		else
			return u.m < v.m;
	}
	else
		return u.y < v.y;
}

int main() {
	int n; scanf("%d", &n);
	vector<Person> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i].name >> a[i].d >> a[i].m >> a[i].y;

	sort(a.begin(), a.end(), cmp);

	cout << a[n - 1].name << "\n" << a[0].name << "\n";
}