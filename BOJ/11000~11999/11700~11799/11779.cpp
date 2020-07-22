#include <bits/stdc++.h>

#define MAX_V 1100
#define INF (ll)1e18

using namespace std;
typedef long long ll;

struct edge {
	int node;
	ll cost;
	bool operator<(const edge &to) const {
		return cost > to.cost;
	}
};

ll dist[MAX_V + 1];
ll track[MAX_V + 1];

ll dijkstra(int n,int start,int end_p, vector<vector<edge>>& adj) {
	fill(dist, dist + n + 1, INF);
    fill(track, track + n + 1, -1);
	priority_queue<edge> pq;
    track[start] = start;
	pq.push({ start, 0 });
	dist[start] = 0;
	while (!pq.empty()) {
		edge cur = pq.top();
		pq.pop();

		if (cur.cost > dist[cur.node]) continue;

		for (edge &nxt : adj[cur.node])
			if (dist[cur.node] + nxt.cost < dist[nxt.node]) {
                track[nxt.node] = cur.node;
				dist[nxt.node] = dist[cur.node] + nxt.cost;
				pq.push({ nxt.node, dist[nxt.node] });
			}
	}
	return dist[end_p] >= INF ? -1 : dist[end_p];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
    int v, e, a, b, w, start_p, end_p;
    cin >> v >> e;
    vector<vector<edge>> adj(MAX_V + 1);
    for (int i = 0; i < e; i++) {
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
    }
    cin >> start_p >> end_p;

    cout << dijkstra(v,start_p,end_p,adj) <<"\n";
    int current = end_p;
    vector <ll> ret;
    ret.push_back(current);
    while(current != -1 && track[current] != current) {
        ret.push_back(track[current]);
        current = track[current];
    }
    cout << ret.size() <<"\n";
    for(int j = ret.size()-1; j > -1; j--) {
        cout << ret[j] << " ";
    }
}