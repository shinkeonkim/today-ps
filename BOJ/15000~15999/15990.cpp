#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MOD (ll)1000000009
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll D[110000][4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    D[1][0] = D[2][1] = D[3][0] = D[3][1] = D[3][2] = 1;
    for1(4, 100001) {
        for1j(0,3) {
            D[i][j] = (D[i-(j+1)][(j+1)%3] + D[i-(j+1)][(j+2)%3]) % MOD;
        }
    }
    ll tc, a;
    cin >> tc;
    while(tc--) {
        cin >> a;
        cout << (D[a][0] + D[a][1] + D[a][2])%MOD << "\n";
    }
}