#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX_V 220000
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
int n;
int k;


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



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    int a,b;
	for (int i = 0; i < n-1; i++)
	{
        cin >> a >> b;
		adj[a].push_back({b, 1});
		adj[b].push_back({a, 1});
	}
    dijkstra(n,1);

    for(int i =0; i < n-1; i++) {
        
    }
    // for(int x=1; x<=n; x++) {
    //     cout << dist[x] << " ";
    // }

    sort(dist,dist+n);
    for(int x = n-1; x>n-k; x--) {
        s += dist[x];
        cout << dist[x];
    }


}