#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MX 110000
#define MAX_LOG_K 24
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;


ll N; // 노드의 개수
ll M; // 쿼리 노드 쌍 개수
ll parent[MAX_LOG_K+2][MX]; // 부모 노드를 저장하는 배열
ll dist[MX]; // root 노드에서부터의 거리를 저장하는 배열
ll depth[MX]; // root 노드에서부터의 깊이를 저장하는 배열
vector<vector<pair<ll,ll>>> edge; // 간선을 연결된 노드, 가중치 순으로 pair를 만들어 저장한다.
ll root = 1ll; // root 노드를 기본으로 1로 지정

void setParent(ll here, ll p, ll d) {
    depth[here] = depth[p] + 1; // 깊이 지정
    dist[here] = d; // 거리

    foreach(edge[here]) {
        if(i.first == p) continue; // 다시 부모로 돌아가면 안 된다.
        setParent(i.first, here, d + i.second);
        parent[0][i.first] = here;  
    }
}

ll getLCA(ll x, ll y) {
    if(depth[x] > depth[y]) swap(x, y);
    for(int i = 20; i > -1; i--) {
        if(depth[y] - depth[x] >= (1ll << i)) {
            y = parent[i][y];
        }
    }
    if(x == y) return x;
    for(int i = 20; i > -1; i--) {
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
    for1(0, N-1) {
        ll a, b, c;
        cin >> a >> b;
        edge[a].push_back({b, 1});
        edge[b].push_back({a, 1});
    }
    
    setParent(root, 0, 0);
    for(int k = 1; k <= MAX_LOG_K; k++) {
        for(int i = 1; i <= N; i++) {
            parent[k][i] = parent[k-1][parent[k-1][i]];
        }
    }

    cin >> M;
    while(M--) {
        ll a, b;
        cin >> a >> b;
        cout << getLCA(a, b) << "\n";
    }
}   