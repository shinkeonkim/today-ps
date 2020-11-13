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
llv1 V;
int D[1100];

ll p(ll x) {
    if(x<=0) return 1;
    ll ret = 1;
    for1(0, x) ret*=2;
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    D[1] = 1;
    D[2] = 3;
    for(int i = 3; i <= 20; i++) {
        ll Z = (ll)1e18;
        for(int k = 0; k < i; k++) {
            Z = min(Z, 2 * D[k] + p(i-k) - 1);
        }
        D[i] = Z;
    }
    cin >> N;
    cout << D[N];
}