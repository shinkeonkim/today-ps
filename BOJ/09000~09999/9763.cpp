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

struct point {
    ll x, y, z;
};

ll N;
point ar[11000];
ll ans = INF;

ll d(int i, int j) {
    return abs(ar[i].x - ar[j].x) + abs(ar[i].y - ar[j].y) + abs(ar[i].z - ar[j].z);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) {
        cin >> ar[i].x >> ar[i].y >> ar[i].z;
    }

    for1(0, N) {
        ll MN1 = INF-1;
        ll MN2 = INF;
        for1j(0, N) {
            if(i == j) continue;
            ll c = d(i, j);
            if(c < MN1) {
                MN2 = MN1;
                MN1 = c;
            }
            else if(c < MN2) {
                MN2 = c;
            }
        }
        ans = min(ans, MN1 + MN2);
    }
    cout << ans;
    
    
}