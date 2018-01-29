#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

bool cmp(const pii &a, const pii &b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (!n && !m)
			break;

		map<int, int> rank;
		map<int, int>::iterator it;

		int tmp;
		for (int i = 0; i < n*m; i++)
		{
			scanf("%d", &tmp);
			it = rank.find(tmp);
			if (it != rank.end())
				rank[tmp]++;
			else
				rank[tmp] = 1;
		}

		vector<pii> v(rank.begin(), rank.end());

		sort(v.begin(), v.end(), cmp);

		bool winner = false;
		for (int i = 1; i < v.size(); i++)
		{
			if (winner)
			{
				if (v[i - 1].second != v[i].second)
					break;
				else
					cout << v[i].first << " ";
			}
			else
			{
				if (v[i - 1].second != v[i].second)
				{
					winner = true;
					cout << v[i].first << " ";
				}
			}
		}

		puts("");
	}

	return 0;
}