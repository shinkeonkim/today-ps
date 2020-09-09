#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

#define MX_N 400
#define MX_NODE 2*(MX_N+2)
#define SRC MX_NODE-2
#define SINK MX_NODE-1
#define INF (ll)1e18

ll N, M;
ll cost[MX_NODE][MX_NODE]; // 각 간선의 Cost
ll capacity[MX_NODE][MX_NODE]; // 각 간선의 용량
ll flow[MX_NODE][MX_NODE]; // 각 간선에 흐르고 있는 유량
llv1 edge[MX_NODE]; // 각 정점의 인접리스트

llv1 MCMF() {
    llv1 ret = {0,0};
    while(1) {
        ll prev[MX_NODE], dist[MX_NODE];
        bool isInQ[MX_NODE];
        queue<ll> Q;
        fill(prev, prev+MX_NODE, -1);
        fill(dist, dist+MX_NODE, 0);
        fill(isInQ, isInQ+MX_NODE, false);

        dist[SRC] = INF;
        Q.push(SRC);
        isInQ[SRC] = true;

        while(!Q.empty()) {
            ll current = Q.front();
            Q.pop();

            isInQ[current] = false;

            for(ll next: edge[current]) {
                if(capacity[current][next] - flow[current][next] > 0 && dist[next] < dist[current] + cost[current][next]) {
                    dist[next] = dist[current] + cost[current][next];
                    prev[next] = current;

                    if(!isInQ[next]) {
                        Q.push(next);
                        isInQ[next] = true;
                    }
                }
            }
        }

        if(prev[SINK] == -1) break;

        ll current_flow = INF;

        for(ll i = SINK; i != SRC; i = prev[i])
            current_flow = min(current_flow, capacity[prev[i]][i] - flow[prev[i]][i]);
        
        ret[0] += current_flow;
        for(ll i = SINK; i != SRC; i = prev[i]) {
            ret[1] += current_flow * cost[prev[i]][i];
            flow[prev[i]][i] += current_flow;
            flow[i][prev[i]] -= current_flow;
        }
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    
    for1(0, N) {
        capacity[SRC][i] = 1;
        edge[i].pb(SRC);
        edge[SRC].pb(i);
    }
    for1(N, N+M) {
        capacity[i][SINK] = 1;
        edge[i].pb(SINK);
        edge[SINK].pb(i);
    }
    for1(0, N) {
        ll a,b,c;
        cin >> a;
        while(a--) {
            cin >> b >> c;
            b--;b+=N;
            capacity[i][b] = 1;
            cost[i][b] = c;
            cost[b][i] = -c;
            edge[i].pb(b);
            edge[b].pb(i);
        }
    }
    
    llv1 ans = MCMF();
    cout << ans[0] << "\n" << ans[1];
}