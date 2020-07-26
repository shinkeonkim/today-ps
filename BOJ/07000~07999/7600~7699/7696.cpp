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

ll f(ll a) {
    ll D[11];
    fill(D, D+10, 0);
    ll cnt = 0;
    while(a > 0) {
        if(D[a%10] > 0) {
            return false;
        }
        D[a%10] +=1;
        a/=10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    llv1 V2;
    ll k = 1;
    ll a;
    while(V2.size() <= 1000000) {
        if(f(k)) {
            V2.pb(k);
        }
        k+=1;
    }
    
    while(1) {
        cin >> a;
        if(a == 0) break;
        cout << V2[a-1] << "\n";
    }
    
}