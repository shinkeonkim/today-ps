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
ll n,m,z;
ll a[1100];
ll b[1100];
ll cnt[1100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        cin >> n >> m;
        z = -1;
        fill(cnt,cnt+1010,0);
        for1(0,n) {
            cin >> a[i];
            cnt[a[i]] = 1;
        }
        for1(0,m) {
            cin >> b[i];
            if(cnt[b[i]] == 1) {
                cnt[b[i]] = 2;
                z = b[i];
            }
        }
        if(z == -1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << "1 " << z<<"\n";
        }
    }    
}