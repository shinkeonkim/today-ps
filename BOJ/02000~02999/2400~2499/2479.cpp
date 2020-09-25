#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MAX_V 1100
#define INF (ll)1e18
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct edge {
    ll node;
    ll cost;
    bool operator<(const edge &to) const {
        return cost > to.cost;
    }
};

ll dist[MAX_V + 1];
ll prev_v[MAX_V + 1];
vector<edge> adj[MAX_V + 1];

ll dijkstra(ll n, ll start_v, ll end_v) {
    fill(dist, dist + n + 1, INF);
    fill(prev_v, prev_v + n + 1, -1);
    priority_queue<edge> pq;
    pq.push({ start_v, 0 });
    dist[start_v] = 0;
    while (!pq.empty()) {
        edge cur = pq.top();
        pq.pop();

        if (cur.cost > dist[cur.node]) continue;

        for (edge &nxt : adj[cur.node])
            if (dist[cur.node] + nxt.cost < dist[nxt.node]) {
                dist[nxt.node] = dist[cur.node] + nxt.cost;
                prev_v[nxt.node] = cur.node;
                pq.push({ nxt.node, dist[nxt.node] });
            }
    }
    return dist[end_v] >= INF ? -1 : dist[end_v];
}

ll N, M;
ll s,e;
ll edge_cnt;
string ar[1100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, N) {
        cin >> ar[i];
    }

    for1(0, N) {
        for1j(i+1, N) {
            if(i == j) continue;
            ll cnt = 0;
            for(int k = 0; k < M; k++) {
                if(ar[i][k] != ar[j][k]) cnt++;
            }
            if(cnt == 1) {
                edge_cnt++;
                edge Z = {(ll)(j+1),1ll};
                adj[i+1].pb(Z);
                Z = {(ll)(i+1),1ll};
                adj[j+1].pb(Z);
            }
        }
    }
    cin >> s >> e;

    ll dis = dijkstra(N, s, e);
    if(dis == -1) {
        cout << -1;
    }
    else {
        ll current = e;
        stack <ll> stk;
        while(current != s) {
            stk.push(current);
            current = prev_v[current];
        }
        stk.push(current);
        while(!stk.empty()) {
            cout << stk.top() << " ";
            stk.pop();
        }
    }   
}