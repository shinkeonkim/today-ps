#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e18
#define MAX 1100

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef vector <llv1> llv2;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N;

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
    
        vector<bool> added(V, false);
        llv1 minWeight(V, INF), parent(V, -1);
    
        ll ret = 0;
        minWeight[0] = parent[0] = 0;
        for (int iter = 0; iter < V; iter++) {
            int u = -1;
            for (int v = 0; v < V; v++) {
                if (!added[v] && (u == -1 || minWeight[u]>minWeight[v]))
                    u = v;
            }
    
            if (parent[u] != u)
                selected.push_back({parent[u], u, minWeight[u]});
    
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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    WGraph W = WGraph(N);

    for1(0, N-1) {
        for1j(i+1, N) {
            ll a;
            cin >> a;
            W.addEdge(i,j,a);
        }
    }
    vector <edge> ret;
    
    ll ans = W.prim(ret);
    llv1 V[N];
    foreach(ret) {
        V[i.crt].pb(i.node);
        V[i.node].pb(i.crt);
    }

    for1(0, N) {
        cout << V[i].size() << " ";
        sort(V[i].begin(), V[i].end());
        foreachj(V[i]) {
            cout << j + 1 << " ";
        }
        cout <<"\n";
    }


    
}