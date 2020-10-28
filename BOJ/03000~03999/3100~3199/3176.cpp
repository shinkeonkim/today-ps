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
ll minWeight[MX_LOG_K+2][MX];
ll maxWeight[MX_LOG_K+2][MX];
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
        minWeight[0][i.first] = min(minWeight[0][i.first], i.second);
        maxWeight[0][i.first] = max(maxWeight[0][i.first], i.second);
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

ll getMinWeightToLCA(ll x, ll y) {
    ll ret = INF;
    if(depth[x] > depth[y]) swap(x, y);
    for(int i = MX_LOG_K; i>=0; i--) {
        if(depth[y] - depth[x] >= (1ll << i)) {
            ret = min(ret, minWeight[i][y]);
            y = parent[i][y];
        }
    }
    if(x == y) return ret;
    for(int i = MX_LOG_K; i>=0; i--) {
        if(parent[i][x] != parent[i][y]) {
            ret = min(ret, min(minWeight[i][x],minWeight[i][y]));
            x = parent[i][x];
            y = parent[i][y];
        }
    }
    ret = min(ret, min(minWeight[0][x], minWeight[0][y]));
    return ret;
}

ll getMaxWeightToLCA(ll x, ll y) {
    ll ret = -INF;
    if(depth[x] > depth[y]) swap(x, y);
    for(int i = MX_LOG_K; i>=0; i--) {
        if(depth[y] - depth[x] >= (1ll << i)) {
            ret = max(ret, maxWeight[i][y]);
            y = parent[i][y];
        }
    }
    if(x == y) return ret;
    for(int i = MX_LOG_K; i>=0; i--) {
        if(parent[i][x] != parent[i][y]) {
            ret = max(ret, max(maxWeight[i][x],maxWeight[i][y]));
            x = parent[i][x];
            y = parent[i][y];
        }
    }
    ret = max(ret, max(maxWeight[0][x], maxWeight[0][y]));
    return ret;
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

    for1(0, MX_LOG_K+1) {
        for1j(0,N+1) {
            minWeight[i][j] = INF;
            maxWeight[i][j] = -INF;
        }
    }
    setParent(root, 0, 0);
    for(int k = 1; k < MX_LOG_K; k++) {
        for(int i = 1; i <= N; i++) {
            parent[k][i] = parent[k-1][parent[k-1][i]];
            minWeight[k][i] = min(minWeight[k][i], min(minWeight[k-1][i], minWeight[k-1][parent[k-1][i]]));
            maxWeight[k][i] = max(maxWeight[k][i], max(maxWeight[k-1][i], maxWeight[k-1][parent[k-1][i]]));
        }
    }

    cin >> M;
    while(M--) {
        ll a, b;
        cin >> a >> b;
        cout << getMinWeightToLCA(a, b) << " " << getMaxWeightToLCA(a,b) << "\n";

    }
}