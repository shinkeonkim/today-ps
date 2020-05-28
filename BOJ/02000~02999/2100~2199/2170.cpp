#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct st {
    ll a, b;
    bool operator<(st k) {
        if(a != k.a) {
            return a < k.a;
        }
        return b < k.b;
    }
};

ll N,ans,s,e;
st ar[1100000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> ar[x].a >> ar[x].b;
    }
    sort(ar, ar+N);
    
    s = ar[0].a;
    e = ar[0].b;
    for(int x=1; x<N; x++) {
        if(e >= ar[x].a) {
            e = max(e, ar[x].b);
        }
        else {
            ans += e-s;
            s = ar[x].a;
            e = ar[x].b;
        }
    }
    ans += e-s;
    cout << ans;
}