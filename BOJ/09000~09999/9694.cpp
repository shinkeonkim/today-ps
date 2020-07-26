#include <bits/stdc++.h>

#define MAX_V 22
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

ll dijkstra(int n,int start, vector<vector<edge>>& adj) {
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
	return dist[n] >= INF ? -1 : dist[n];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
    ll tc;
    cin >> tc;
    for(int t = 1; t <=tc; t++) {
        int v, e, a, b, w;
        cin >> e >> v;
        vector<vector<edge>> adj(MAX_V + 1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b >> w;
            a++;b++;
            adj[a].push_back({b, w});
            adj[b].push_back({a, w});
        }
        if(dijkstra(v,1,adj) == -1) {
            cout << "Case #" << t << ": -1\n";
        }
        else {
            cout << "Case #" << t <<": ";
            int current = v;
            vector <ll> ret;
            ret.push_back(current);
            while(current != -1 && track[current] != current) {
                ret.push_back(track[current]);
                current = track[current];
            }
            for(int j = ret.size()-1; j > -1; j--) {
                cout << ret[j] - 1 << " ";
            }
            cout << "\n";
        }
    }
}