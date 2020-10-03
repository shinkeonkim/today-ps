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

ll X1,Y1,Z1,X2,Y2,Z2;
ll N, a;
ll mn=0,mx;
llv1 V;

ll f(ll a, ll b) {
    return (a-b)*(a-b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> X1 >> Y1 >> Z1 >> X2 >> Y2 >> Z2;
    cin >> N;
    while(N--) {
        cin >> a;
        V.pb(a);
        mx += a;
    }
    sort(V.begin(), V.end(), greater<ll>());
    ll crt = 0;
    foreach(V) {
        ll k1 = abs(crt-i);
        ll k2 = crt+i;
        if(k1 < k2) crt = k1;
        else {
            crt = k2;
        }
    }
    mn = crt;

    ll Z = f(X1,X2) + f(Y1, Y2) + f(Z1, Z2);

    if(mn * mn <= Z && Z <= mx *mx) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}