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

ll N,a;
llv1 ar;
ll ans = 2200000000ll;
ll x,y;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0,N) {
        cin >> a;
        ar.pb(a);
    }
    sort(ar.begin(), ar.end());

    for1(0, N) {
        ll k = -ar[i];
        ll idx = lower_bound(ar.begin(), ar.end(), k) - ar.begin();
        for1j(max(0ll,idx-100), min(N,idx+100)) {
            if(ans > llabs(0 - (ar[i] + ar[j])) && i !=j) {
                ans = llabs(0 - (ar[i] + ar[j]));
                x = i;
                y = j;
            }
        }
    }
    if(ar[x] < ar[y]) {
        cout << ar[x] << " " << ar[y];
    }
    else {
        cout << ar[y] << " " << ar[x];
    }
    
}