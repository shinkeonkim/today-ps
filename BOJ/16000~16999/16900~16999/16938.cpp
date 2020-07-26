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

ll N, L, R, X;
ll ar[22];
int check[22];
ll ans;

void g() {
    llv1 V;
    ll S = 0;
    for1(0, N) {
        if(check[i] == 1) {
            V.pb(ar[i]);
            S += ar[i];
        }
    }

    if(V.size() < 2) return;
    sort(V.begin(), V.end());
    if(L <= S && S <= R && V.back() - V[0] >=X) {
        ans++;
    }
}


void dfs(int n) {
    if(n == N-1) {
        for1(0,2) {
            check[n] = i;
            g();
        }
    }else {
        for1(0,2) {
            check[n] = i;
            dfs(n+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> L >> R >> X;
    for1(0, N) {
        cin >> ar[i];
    }

    dfs(0);
    
    cout << ans;
}