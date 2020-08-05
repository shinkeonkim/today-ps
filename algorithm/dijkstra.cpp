#include <bits/stdc++.h>

#define MAX 100000
#define INF (ll)1e18

using namespace std;
typedef long long ll;

struct edge {
	int node;
	ll cost;
	bool operator<(const st &to) const {
		return cost > to.cost;
	}
};

ll dist[MAX_V + 1];
vector<edge> adj[MAX_V + 1];

ll dijkstra(int n,int start) {
	fill(dist, dist + n + 1, INF);
	priority_queue<edge> pq;
	pq.push({ start, 0 });
	dist[start] = 0;
	while (!pq.empty()) {
		edge cur = pq.top();
		pq.pop();

		if (cur.cost > dist[cur.node]) continue;

		for (st &nxt : adj[cur.node])
			if (dist[cur.node] + nxt.cost < dist[nxt.node]) {
				dist[nxt.node] = dist[cur.node] + nxt.cost;
				pq.push({ nxt.node, dist[nxt.node] });
			}
	}
	return dist[n] >= INF ? -1 : dist[n];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int v, e, a, b, w;
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> w;
		adj[a].push_back({b, w});
		adj[b].push_back({a, w});
	}
	cout << dijkstra(v, 1);
}