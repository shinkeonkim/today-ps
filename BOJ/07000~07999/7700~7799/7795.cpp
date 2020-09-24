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

ll T;
ll N,M;
ll ar[22000];
ll ar2[22000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> T;
    while(T--) {
        ll ans = 0;
        cin >> N >> M;
        for1(0, N) cin >> ar[i];
        for1(0, M) cin >> ar2[i];

        sort(ar,ar+N);
        sort(ar2,ar2+M);

        for1(0, N) {
            ll k = lower_bound(ar2, ar2+M, ar[i]) - ar2;
            ans += k;
        }
        cout << ans << "\n";
    }
}