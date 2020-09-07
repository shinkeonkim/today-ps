#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

#define MX_N 1100
#define MX_NODE 2*(MX_N+3)
#define P_SRC MX_NODE-4
#define K_SRC MX_NODE-3
#define SRC MX_NODE-2
#define SINK MX_NODE-1
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

ll N, M, K, ans;
ll capacity[MX_NODE][MX_NODE]; // 각 간선의 용량
ll flow[MX_NODE][MX_NODE]; // 각 간선에 흐르고 있는 유량
llv1 edge[MX_NODE]; // 각 정점의 인접리스트


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> K;
    
    edge[SRC].pb(P_SRC);
    edge[P_SRC].pb(SRC);
    capacity[SRC][P_SRC] = INF;

    edge[SRC].pb(K_SRC);
    edge[K_SRC].pb(SRC);
    capacity[SRC][K_SRC] = K;

    for1(0, N) {
        capacity[P_SRC][i] = 1;
        edge[P_SRC].pb(i);
        edge[i].pb(P_SRC);

        capacity[K_SRC][i] = 1;
        edge[K_SRC].pb(i);
        edge[i].pb(K_SRC);
    }

    for1(0, M) {
        capacity[N+i][SINK] = 1;
        edge[N+i].pb(SINK);
        edge[SINK].pb(N+i);
    }

    for1(0, N) {
        int a,b;
        cin >> a;
        while(a--) {
            cin >> b;
            capacity[i][b-1+N] = 1;
            edge[i].pb(b-1+N);
            edge[b-1+N].pb(i);
        }
    }

    while(1) {
        ll prev[MX_NODE];
        queue<ll> Q;
        fill(prev, prev+MX_NODE, -1);
        Q.push(SRC);

        while(!Q.empty() && prev[SINK] == -1) {
            ll current = Q.front();
            Q.pop();

            for(ll next: edge[current]) {
                if(capacity[current][next] - flow[current][next] > 0 && prev[next] == -1) {
                    Q.push(next);
                    prev[next] = current;
                    if(next == SINK) break;
                }
            }
        }

        if(prev[SINK] == -1) break;

        ll current_flow = INF;

        for(ll i = SINK; i != SRC; i = prev[i]) {
            current_flow = min(current_flow, capacity[prev[i]][i] - flow[prev[i]][i]);
        }

        for(ll i = SINK; i != SRC; i = prev[i]) {
            flow[prev[i]][i] += current_flow;
            flow[i][prev[i]] -= current_flow;
        }
        ans += current_flow;
    }
    cout << ans;
}