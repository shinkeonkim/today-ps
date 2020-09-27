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

ll tc;
ll m,n,x,y;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        bool chk = true;
        cin >> m >> n >> x >> y;
        for(ll i = x; i < m*n; i+=m) {
            ll X = (i - 1)%m + 1;
            ll Y = (i - 1)%n + 1;
            if(X == x && Y == y) {
                cout << i << "\n";
                chk = false;
                break;
            }
        }
        if(chk) {
            cout << "-1\n";
        }
    }
}