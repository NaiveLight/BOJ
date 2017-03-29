#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int a[] = { 1, 0, 0 };

void ball(char c) {
	if (c == 'A')
		swap(a[0], a[1]);
	else if (c == 'B')
		swap(a[1], a[2]);
	else
		swap(a[0], a[2]);
}

int main() {
	string s;
	cin >> s;
	
	int size = s.size();
	for (int i = 0; i < size; i++)
		ball(s[i]);

	if (a[0])
		puts("1");
	else if (a[1])
		puts("2");
	else if(a[2])
		puts("3");
}