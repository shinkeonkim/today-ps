#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MX 110000
#define INF (ll)1e18
#define MX_LOG_K 24

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,M;
ll parent[MX_LOG_K+2][MX];
ll depth[MX];
ll dis[MX];
vector<vector<pair<ll, ll>>> edge;
ll root = 1ll;

void setParent(ll here, ll p, ll weight) {
    depth[here] = depth[p] + 1;
    dis[here] = weight;
    foreach(edge[here]) {
        if(i.first == p) continue;
        setParent(i.first, here, weight + i.second);
        parent[0][i.first] = here;
    }
}

ll getLCA(ll x, ll y) {
    if(depth[x] > depth[y]) swap(x, y);
    for(int i = MX_LOG_K; i>=0; i--) {
        if(depth[y] - depth[x] >= (1ll << i)) {
            y = parent[i][y];
        }
    }
    if(x == y) return x;
    for(int i= MX_LOG_K; i>=0; i--) {
        if(parent[i][x] != parent[i][y]) {
            x = parent[i][x];
            y = parent[i][y];
        }
    }
    return parent[0][x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    edge.resize(N+1);
    for1(0, N - 1) {
        ll a, b, c;
        cin >> a >> b >> c;
        edge[a].push_back({b, c});
        edge[b].push_back({a, c});
    }
    setParent(root, 0, 0);
    for(int k = 1; k < MX_LOG_K; k++) {
        for(int i = 1; i <= N; i++) {
            parent[k][i] = parent[k-1][parent[k-1][i]];
        }
    }

    cin >> M;
    while(M--) {
        ll t, u, v, k;
        cin >> t >> u >> v;
        ll lca = getLCA(u, v);
        if(t == 1) {
            cout << dis[u] + dis[v] - 2*(dis[lca]) << "\n";
        }
        else {
            cin >> k;
            ll d1 = depth[u] - depth[lca] + 1;
            ll d2 = depth[v] - depth[lca];
            ll current;
            if(d1 >= k) {
                k--;
                current = u;
                for(ll i = MX_LOG_K; i >= 0; i--) {
                    ll z = (1ll<<i);
                    if(z<=k) {
                        k-=z;
                        current = parent[i][current];
                    }
                }
            }
            else {
                current = v;
                k = depth[u] + depth[v] - 2*depth[lca] + 1  - k;
                for(ll i = MX_LOG_K; i >= 0; i--) {
                    ll z = (1ll<<i);
                    if(z<=k) {
                        k-=z;
                        current = parent[i][current];
                    }
                }
            }
            cout << current << "\n";

        }
        

    }
}