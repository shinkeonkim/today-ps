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

ll N, M;
ll D[1100];
ll cnt[1100];
llv1 nxt[1100];

void dfs(ll idx, ll z) {
    if(D[idx] > z) return; 
    D[idx] = max(D[idx], z);
    for(ll i : nxt[idx]) {
        if(D[i] < z+1) {
            dfs(i, z+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, M) {
        ll a, b;
        cin >> a >> b;
        nxt[a].pb(b);
        cnt[b]++;
    }
    for1(1, N+1) {
        if(cnt[i] == 0) {
            if(D[i] != 1) {
                dfs(i, 1);
            }
        }
    }
    for1(1, N+1) {
        cout << D[i] << " ";
    }
    
}