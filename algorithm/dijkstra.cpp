// http://www.secmem.org/blog/2019/01/09/wrong-dijkstra/
#include <cstdio>
#include <queue>
#include <vector>
#define MAX_V 100000
#define INF (ll)1e18

using namespace std;
using ll = long long;


struct st {
	int node;
	ll cost;
	bool operator<(const st &to) const {
		return cost > to.cost;
	}
};

ll dist[MAX_V + 1];
vector<st> adj[MAX_V + 1];

ll dijkstra(int n,int start)
{
	fill(dist, dist + n + 1, INF);
	priority_queue<st> pq;
	pq.push({ start, 0 });
	dist[start] = 0;
	while (!pq.empty())
	{
		st cur = pq.top();
		pq.pop();

		if (cur.cost > dist[cur.node])
			continue;

		for (st &nxt : adj[cur.node])
		{
			if (dist[cur.node] + nxt.cost < dist[nxt.node])
			{
				dist[nxt.node] = dist[cur.node] + nxt.cost;
				pq.push({ nxt.node, dist[nxt.node] });
			}
		}
	}

	return dist[n] >= INF ? -1 : dist[n];
}

int main()
{
	int v, e, a, b, w;
	scanf("%d%d", &v, &e);
	for (int i = 0; i < e; i++)
	{
		scanf("%d%d%d", &a, &b, &w);
		adj[a].push_back({b, w});
		adj[b].push_back({a, w});
	}

	printf("%lld\n", dijkstra(v,1));
}