#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

vector<pii> graph[100001]; //1.to , 2.cost
bool check[100001];
int dist[100001];

pii dijkstra(int start, int k)
{
	for (int i = 1; i <= k; i++)
	{
		check[i] = false;
		dist[i] = 2e9;
	}

	dist[start] = 0;
	priority_queue<pii> pq; //cost , vertex
	pq.push(make_pair(0, start));

	while (!pq.empty())
	{
		auto tmp = pq.top();
		pq.pop();

		//cost 최대인 정점 x
		int x = tmp.second;

		if (check[x])
			continue;

		check[x] = true;

		int size = graph[x].size();
		for (int i = 0; i < size; i++)
		{
			int y = graph[x][i].first;

			if (dist[x] + graph[x][i].second < dist[y])
			{
				dist[y] = dist[x] + graph[x][i].second;
				pq.push(make_pair(-dist[y], y));
			}
		}
	}

	int max = 0;
	int vertex = 0;

	for (int i = 1; i <= k; i++)
	{
		if (max < dist[i]) {
			max = dist[i];
			vertex = i;
		}
			
	}

	return make_pair(vertex, max);
}

int main()
{
	int k;
	cin >> k;

	for (int i = 1; i <= k; i++)
	{
		int vertex, to, cost;
		cin >> vertex;
		while (cin >> to)
		{
			if (to == -1)
				break;
			cin >> cost;
			graph[vertex].push_back(make_pair(to, cost));
		}
	}

	pii a = dijkstra(1, k);
	pii b = dijkstra(a.first, k);

	int ans = max(a.second, b.second);

	cout << ans << endl;

	return 0;
}