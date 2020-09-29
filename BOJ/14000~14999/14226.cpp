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

struct st{
    ll idx;
    ll clip;
    ll cost;

    bool operator<(const st &b) const {
        if(cost != b.cost) return cost > b.cost;
        else idx < b.idx;
    }
};

ll N;
ll D[4400][1100];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, 4000) {
        for1j(0, 1000) D[i][j] = INF;
    }

    priority_queue <st> Q;
    Q.push({1,0,0});
    while(!Q.empty()) {
        st F = Q.top();
        Q.pop();
        if(F.idx == N) {
            cout << F.cost;
            return 0;
        }
        if(F.idx > 1100 || F.clip > 800 || F.cost > 1100) continue;
        
        if(D[F.idx][F.clip] >= F.cost) {
            D[F.idx][F.clip] = F.cost;
        }
        else {
            continue;
        }

        if(D[F.idx][F.idx] > F.cost + 1) {
            D[F.idx][F.idx] = F.cost + 1;
            Q.push({F.idx, F.idx, F.cost+1});
        }

        if(F.clip != 0 && D[F.idx + F.clip][F.clip] > F.cost + 1) {
            D[F.idx + F.clip][F.clip] = F.cost + 1;
            Q.push({F.idx + F.clip, F.clip, F.cost+1});
        }

        if(F.idx - 1 > 0 && D[F.idx - 1][F.clip] > F.cost + 1) {
            D[F.idx - 1][F.clip] = F.cost + 1;
            Q.push({F.idx - 1, F.clip, F.cost+1});
        }
    }

    ll ans = D[N][0];
    for1(0, 4000) {
        ans = min(ans, D[N][i]);
    }
    cout << ans;
}