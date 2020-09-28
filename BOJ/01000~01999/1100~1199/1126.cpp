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

ll N;
ll ar[55];
ll D[55][330000];

ll dfs(ll idx, ll diff) {
    if(diff > 250000) {
        return -INF;
    }

    if(idx >= N) {
        if(diff == 0) {
            return 0;
        }
        return -INF;
    }

    if(D[idx][diff] != -1) return D[idx][diff];

    D[idx][diff] = max(dfs(idx+1, diff), dfs(idx+1, diff+ar[idx]));

    if(ar[idx] > diff) {
        D[idx][diff] =  max(D[idx][diff], diff + dfs(idx+1, ar[idx] - diff));
    }
    else {
        D[idx][diff] =  max(D[idx][diff], ar[idx] + dfs(idx+1, diff - ar[idx]));
    }
    return D[idx][diff];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) {
        cin >> ar[i];
    }

    for1(0, N+1) {
        for1j(0, 300000) D[i][j] = -1;
    }

    ll ret = dfs(0,0);
    cout << (ret == 0 ? -1 : ret);
}