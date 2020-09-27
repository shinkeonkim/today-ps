#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

#define MAX_V 440
#define SRC MAX_V-2
#define SINK MAX_V-1
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

struct Edge {
    ll v, capacity, rev;
    Edge(ll v, ll capacity, ll rev): v(v), capacity(capacity), rev(rev) {}
};

vector<Edge> vt[MAX_V];
ll level[MAX_V];
ll work[MAX_V];


void addEdge(ll start, ll end, ll capacity) {
    vt[start].emplace_back(end, capacity, (ll)vt[end].size());
    vt[end].emplace_back(start, 0, (ll)vt[start].size()-1);
}

// 레벨 그래프 만드는 BFS
bool bfs() {
    memset(level, -1, sizeof(level));        //레벨 그래프 초기화
    queue <ll> q;
    level[SRC] = 0;
    q.push(SRC);

    while(!q.empty()){
        int here = q.front(); q.pop();
        for (auto i : vt[here]) {
            ll there = i.v;
            if(level[there] == -1 && i.capacity > 0) {
                level[there] = level[here] + 1;
                q.push(there);
            }
        }
    }
    return level[SINK] != -1;
}


ll dfs(ll here, ll crt_capacity) {
    if(here == SINK) return crt_capacity;

    for(ll &i = work[here]; i < vt[here].size(); i++) {
        ll there = vt[here][i].v;
        ll capacity = vt[here][i].capacity;

        if(level[here] + 1 == level[there] && capacity > 0) {
            ll next_capacity = dfs(there, min(crt_capacity, capacity));

            if(next_capacity > 0) {
                vt[here][i].capacity -= next_capacity;
                vt[there][vt[here][i].rev].capacity += next_capacity;
                return next_capacity;
            }
        }
    }
    return 0;
}

ll dinic() {
    ll ret = 0;
    while(bfs()) {
        memset(work, 0, sizeof(work));

        while(1) {
            ll flow = dfs(SRC, INF);
            if(!flow) break;
            ret += flow;
        }
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll N, M;
    cin >> N >> M;
    for1(0, N) {
        addEdge(SRC,i,1);
        ll S,a;
        cin >> S;
        while(S--) {
            cin >> a;
            addEdge(i,a+N-1,1);
        }
    }
    for1(N,N+M) {
        addEdge(i,SINK,1);
    }

    cout << dinic();
    
    
}