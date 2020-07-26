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

ll G, P, a;
ll ar[110000];
ll u[110000];
ll ans = 0;

ll find(ll k) {
    if(u[u[k]] == u[k]) return u[k];
    else return u[k]=find(u[k]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> G >> P;
    for(int k = 1; k <=G; k++) u[k] = k;
    for(int x=0; x<P; x++) {
        cin >> ar[x];
    }

    for(int x=0; x<P; x++) {
        ll z = find(ar[x]);
        if(z <= 0) {
            break;
        }
        else {
            u[z]--;
            ans++;
        }
    }
    cout << ans;

    
}