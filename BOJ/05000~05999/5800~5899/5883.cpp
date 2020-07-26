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

ll N,ans;
ll ar[1100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) cin >> ar[i];

    for1(0,N) {
        llv1 V;
        for1j(0,N) {
            if(ar[i] != ar[j]) {
                V.pb(ar[j]);
            }
        }
        ll mx = 1;
        ll cnt = 1;
        ll current = V[0];
        for(int j = 1; j < V.size(); j++) {
            if(current == V[j]) {
                cnt++;
                if(mx < cnt) mx = cnt;
            }
            else {
                cnt = 1;
                current = V[j];
            }
        }
        if(ans < mx) ans = mx;
    }
    cout << ans;
}