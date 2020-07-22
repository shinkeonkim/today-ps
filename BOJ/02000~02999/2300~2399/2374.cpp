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

ll N;
ll ar[1100];
ll ans;

ll mx_in_array(int s, int e) {
    if(s > e) return -1ll;
    ll ret = ar[s];
    for(int x=s; x<=e; x++) {
        ret = max(ar[x], ret);
    }
    return ret;
}

ll mn_in_array(int s, int e) {
    if(s > e) return -1ll;
    ll ret = ar[s];
    for(int x=s; x<=e; x++) {
        ret = min(ar[x], ret);
    }
    return ret;
}


void dfs(int s, int e, int start_value) {
    if(s >= e) return ;
    llv1 V;
    for(int x = s; x<=e; x++) {
        if(ar[x] == start_value) V.push_back(x);
    }

    int current = s;
    for(int x = 0; x< sz(V); x++) {
        ll mx = mx_in_array(current, V[x]-1);
        if(mx > 0 && mx < start_value) {
            ans += (start_value - mx);
            dfs(current, V[x]-1, mx);
        }
        current = V[x] + 1;
    }
    ll mx = mx_in_array(current, e);
    dfs(current, e, mx);
    if(mx > 0 && mx < start_value) {
        ans += (start_value - mx);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for(int x=0; x<N; x++) cin >> ar[x];   

    dfs(0,N-1,mx_in_array(0, N-1));
    cout << ans;   
}

