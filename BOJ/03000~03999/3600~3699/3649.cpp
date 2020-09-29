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

ll x, n, a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(cin >> x) {
        cin >> n;
        llv1 V;
        llv1 ans = {-INF, INF, -INF};
        for1(0, n) {
            cin >> a;
            V.pb(a);
        }
        sort(V.begin(), V.end());
        ll S = x * 10000000ll;
        for1(0, n) {
            ll obj = S - V[i];
            if(obj < 0) continue;
            ll idx = lower_bound(V.begin()+i+1, V.end(), obj) - V.begin();
            if(V[idx] == obj && idx > i) {
                if(ans[0] < abs(V[idx] - V[i])) {
                    ans[0] = V[idx]-V[i];
                    ans[1] = V[i];
                    ans[2] = V[idx];
                    cout << "yes " << ans[1] << " " << ans[2] << "\n";
                    break;
                }
            }
        }
        if(ans[0] == -INF) {
            cout << "danger\n";
        }
    }
}