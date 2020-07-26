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
ll K, N;
ll ar[11][1100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        map <ll, ll> M1;
        llv1 V;
        cin >> K >> N;
        ll ans = 11000000000ll;
        for1(0,4) {
            for1j(0,N) {
                cin >> ar[i][j];
            }
        }

        for1(0,N) {
            for1j(0,N) {
                V.pb(ar[0][i] + ar[1][j]);
            }
        }

        sort(V.begin(), V.end());
        unique(V.begin(), V.end());

        for1(0,N) {
            for1j(0,N) {
                ll current = ar[2][i] + ar[3][j];
                ll obj = K - current;

                ll s = 0;
                ll e = V.size()-1;
                while(s<=e) {
                    ll mid = (s+e) / 2ll;
                    
                    ll z = current + V[mid];
                    if(llabs(K - z) < llabs(K-ans)) {
                        ans = z;
                    }
                    else if(llabs(K - z) == llabs(K-ans)) {
                        if(z < ans) ans = z;
                    }

                    if(V[mid] >= obj) {
                        e = mid - 1;
                    }
                    else {
                        s = mid + 1;
                    }
                }
                
            }
        }
        cout << ans <<"\n";
    }
    
}