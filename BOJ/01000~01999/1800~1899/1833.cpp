#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MAX 44000
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
    ll crt;
    ll node, cost;
};

struct WGraph {
    ll V; 
    vector<edge> adj[MAX];
    vector<ll> prev;
    WGraph(ll V) : V{V} {}
    void addEdge(ll s, ll e, ll cost) {
        adj[s].push_back({s, e, cost});
        adj[e].push_back({e, s, cost});
    }
    
    ll prim(vector<edge> &selected) { // selected에 선택된 간선정보 vector 담김
        selected.clear();
    
        vector<bool> added(V+1, false);
        llv1 minWeight(V+1, INF), parent(V+1, -1);
        ll ret = 0;

        minWeight[0] = parent[0] = 0ll;

        for (int iter = 0; iter < V; iter++) {
            int u = -1;
            for (int v = 0; v < V; v++) {
                if (!added[v] && (u == -1 || minWeight[u]>minWeight[v]))
                    u = v;
            }
    
            if (parent[u] != u && minWeight[u] !=0) {
                selected.push_back({parent[u], u, minWeight[u]});
            }
    
            ret += minWeight[u];
            added[u] = true;

            for1(0, sz(adj[u])) {
                int v = adj[u][i].node, weight = adj[u][i].cost;
                if (!added[v] && minWeight[v]>weight) {
                    parent[v] = u;
                    minWeight[v] = weight;
                }
            }
        }
        return ret;
    }
};

ll N;
ll ans;
ll D[220][220];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    cin >> N;
    WGraph w = WGraph(N);
    for1(0, N) {
        for1j(0, N) {
            cin >> D[i][j];
        }
    }
    for1(0, N) {
        for1j(i, N) {
            if(D[i][j] > 0) {
                w.addEdge(i, j, D[i][j]);
            }
            else if(D[i][j] < 0) {
                w.addEdge(i,j,0);
                ans -= D[i][j];
            }
        }
    }
    vector <edge> e;
    ll ret = w.prim(e);
    cout << ans + ret << " " << e.size() << "\n";
    foreach(e) {
        cout << i.crt+1 << " " << i.node+1 <<"\n";
    }
}