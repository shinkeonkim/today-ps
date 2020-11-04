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
typedef vector<vector<ll>> llv2; 
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N, M, root,ans;
ll parent[55];
llv1 child[55];

void dfs(ll here) {
    if(here == M) {
        return;
    }
    ll cnt = 0;
    foreach(child[here]) {
        if(i != M) {
            dfs(i);
            cnt++;
        }
    }
    if(cnt == 0) ans++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for1(0, N) {
        cin >> parent[i];
        if(parent[i] == -1) {
            root = i;
        }
        else {
            child[parent[i]].pb(i);
        }
    }
    cin >> M;
    dfs(root);
    cout << ans;   
}