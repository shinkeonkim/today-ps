#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e18
#define MAX 1100000

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
    ll node;
    double cost;
};

vector<edge> adj[MAX];
struct WGraph {
    ll V; 
    vector<ll> prev;
    WGraph(ll V) : V{V} {}
    void addEdge(ll s, ll e, double cost) {
        adj[s].push_back({s, e, cost});
        adj[e].push_back({e, s, cost});
    }
    
    double prim(vector<edge> &selected) { // selected에 선택된 간선정보 vector 담김
        selected.clear();
    
        vector<bool> added(V, false);
        llv1 parent(V, -1);
        vector<double> minWeight(V, 1000000);
        
        double ret = 0;
        minWeight[0] = parent[0] = 0;
        for (int iter = 0; iter < V; iter++) {
            ll u = -1;
            for (int v = 0; v < V; v++) {
                if (!added[v] && (u == -1 || minWeight[u]>minWeight[v]))
                    u = v;
            }
    
            if (parent[u] != u)
                selected.push_back({parent[u], u, (double)minWeight[u]});
    
            ret += minWeight[u];
            added[u] = true;

            for1(0, sz(adj[u])) {
                int v = adj[u][i].node;
                double weight = adj[u][i].cost;
                if (!added[v] && minWeight[v]>weight) {
                    parent[v] = u;
                    minWeight[v] = weight;
                }
            }
        }
        return ret;
    }
};

ll N, M;
ll X[1100];
ll Y[1100];
ll D[1100][1100];

double dis(ll a, ll b) {
    return sqrt(((X[a]-X[b])*(X[a]-X[b])) + ((Y[a]-Y[b])*(Y[a]-Y[b])));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;

    WGraph w = WGraph(N);

    for1(0, N) {
        cin >> X[i] >> Y[i];
    }
    for1(0, N) {
        for1j(0, N) {
            if(i!=j) D[i][j] = dis(i, j);
        }
    }

    for1(0, M) {
        ll a,b;
        cin >> a >> b;
        a--;b--;
        D[a][b] = 0;
        D[b][a] = 0;
        w.addEdge(a,b,0);
    }
    
    for1(0, N) {
        for1j(0, N) {
            if(D[i][j] != 0) {
                w.addEdge(i, j, D[i][j]);
            }
        }
    }

    vector <edge> e;
    double ret = w.prim(e);

    cout << fixed;
    cout.precision(2);
    cout << ret;

}