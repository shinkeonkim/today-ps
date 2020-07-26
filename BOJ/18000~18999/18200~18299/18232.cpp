#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
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

struct st {
    ll idx, cost;
};
struct compare {
    bool operator()(st a, st b) {
        return a.cost > b.cost;
    }
};

ll N, M;
ll S, E;
llv1 telpo[330000];
ll D[330000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;

    fill(D, D + N+1, INF);
    cin >> S >> E;
    for1(0, M) {
        ll a, b;
        cin >> a >> b;
        telpo[a].pb(b);
        telpo[b].pb(a);
    }

    priority_queue <st, vector<st>, compare> Q;

    Q.push({S,0});

    while(!Q.empty()) {
        st T = Q.top();
        Q.pop();
        if(D[T.idx] <= T.cost) continue;
        
        D[T.idx] = T.cost;
        
        for(auto i : telpo[T.idx]) {
            if(D[i] > T.cost + 1) {
                Q.push({i, T.cost + 1});
            }
        }

        if(T.idx - 1 >= 0 && D[T.idx - 1] > T.cost + 1) {
            Q.push({T.idx - 1, T.cost + 1});
        }
        if(T.idx + 1 <= N && D[T.idx + 1] > T.cost + 1) {
            Q.push({T.idx + 1, T.cost + 1});
        }
    }    

    cout << D[E];
}