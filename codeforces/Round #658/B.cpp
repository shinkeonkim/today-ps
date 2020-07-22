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
ll n;
ll ar[110000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        cin >> n;
        int cnt = 0;
        for(int x = 0; x<n; x++) {
            cin >> ar[x];
        }
        for(int x=0; x<n-1; x++) {
            if(ar[x] == 1) {
                cnt++;
            }
            else {
                break;
            }
        }
        
        
        if(cnt%2 == 1) {
            cout << "Second\n";
        }
        else {
            cout << "First\n";
        }
    }
    
}