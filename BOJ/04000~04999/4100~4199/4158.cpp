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

ll a,b;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0) break;

        llv1 V1;
        llv1 V2;

        for1(0, a) {
            ll k;
            cin >> k;
            V1.pb(k);
        }
        for1(0, b) {
            ll k;
            cin >> k;
            V2.pb(k);
        }
        sort(V1.begin(), V1.end());
        sort(V2.begin(), V2.end());

        ll i = 0;
        ll j = 0;
        ll ans = 0;
        while(i < V1.size() && j < V2.size()) {
            if(V1[i] == V2[j]) {
                ans++;
                i++;
                j++;
            }
            else if(V1[i] < V2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        cout << ans << "\n";
    }
}