#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define Mx 999999999ll

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N;
ll s[550],a,b,cnt;
ll D[550][550];

ll min(ll a, ll b) {
    return a<b?a:b;
}

ll f(ll X, ll Y) {
    if(D[X][Y] != Mx) return D[X][Y];
    if(X == Y) return D[X][Y] = 0;
    if(Y < X) return D[X][Y] = Mx;

    if(Y-1 == X) return D[X][Y] = 0;

    if(Y-2 == X) return D[X][Y] = s[X] * s[X+1] * s[X+2];

    ll m = Mx;
    for(int k = X+1; k <= Y-1; k++) {
        m = min(m, f(X,k) + f(k,Y) + s[X] * s[k]* s[Y]);
    }
    return D[X][Y] = m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> a >> b;
        if(x==0) {
            s[cnt++] = a;
        }
        s[cnt++] = b;
    }

    for(int x=0; x<510; x++) {
        for(int y=0; y<510; y++) {
            D[x][y] = Mx;
        }
    }

    cout << f(0,cnt-1);
    
}