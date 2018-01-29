#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

typedef pair<int, int> pii;

int main()
{
	int tmp;
	vector<pii> v(8);

	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &tmp);
		v[i] = make_pair(tmp, i+1);
	}

	sort(v.begin(), v.end(), greater<pair<int,int>>());

	int prob[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		sum += v[i].first;
		prob[i] = v[i].second;
	}

	sort(prob, prob + 5);

	cout << sum << endl;

	for (int i = 0; i < 5; i++)
		cout << prob[i] << " ";
	puts("");

	return 0;
}