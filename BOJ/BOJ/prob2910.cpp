	#include <iostream>
	#include <map>
	#include <vector>
	#include <algorithm>
	using namespace std;

	typedef pair<int, int> pii;

	bool cmp(pair<int, pii> &a, pair<int, pii> &b)
	{
		if (a.second.first == b.second.first)
			return a.second.second < b.second.second;
		return a.second.first > b.second.first;
	}

	int main()
	{
		map<int, pii> m;
		map<int, pii>::iterator it;
	
		int n, c;
		scanf("%d %d", &n, &c);

		int tmp = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &tmp);
			it = m.find(tmp);
			if (it != m.end())
				m[tmp] = make_pair(it->second.first+1, it->second.second);
			else
				m[tmp] = make_pair(1, i);
		}

		vector<pair<int, pii> > v(m.begin(), m.end());

		sort(v.begin(), v.end(), cmp);

		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[i].second.first; j++)
				cout << v[i].first << " ";
		}
		puts("");

		return 0;
	}