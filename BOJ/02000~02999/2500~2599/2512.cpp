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

ll N, M, ans, m;
ll ar[11000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) {
        cin >> ar[i];
        m = max(ar[i], m);
    }
    cin >> M;

    ll s = 0;
    ll e = m;
    while(s <= e) {
        ll mid = (s+e)/2;

        ll S = 0;
        for1(0, N) {
            S += min(ar[i], mid);
        }

        if(S <= M) {
            ans = max(ans, mid);
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    cout << ans;
}