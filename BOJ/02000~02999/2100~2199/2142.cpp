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
ll N,M;
ll ar[550][550];
ll D[550][550];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> tc;
    while(tc--) {
        cin >> N >> M;
        for1(0,N) {
            for1j(0, M) {
                cin >> ar[i][j];
            }
        }
        bool chk = true;

        for1(1,N) {
            for1j(1,M) {
                if(ar[i-1][j] - ar[i-1][j-1] < ar[i][j] - ar[i][j-1]) chk = false;
            }
        }
        if(chk) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }
        
}