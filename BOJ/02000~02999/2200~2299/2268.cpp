#include <iostream>
using namespace std;
typedef long long ll;
ll N,M,sq;
ll ar[1100000];
ll mo[1100000];
ll a,b,c;

ll mo_sum(ll a, ll b) {
    ll ret = 0; 
    int S = a/sq;
    int E = b/sq;
    for(ll x=S; x<=E; x++) ret += mo[x];
    for(ll x=sq*S; x<a; x++) ret -= ar[x];
    for(ll x=b+1; x<(E+1)*sq; x++) ret -= ar[x];
    return ret;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >>M;
    for(sq=1; sq*sq<=N; sq++) mo[sq] = 0;
    for(int x=0; x<N; x++) ar[x] = 0;

    for(int m=0; m < M; m++) {
        cin >> a >> b >> c;
        if(a==0) {
            if(b>c) {
                ll z = b;
                b = c;
                c = z;
            }
            cout << mo_sum(b-1,c-1) << "\n";
        }
        else {
            b--;
            ll change = c-ar[b];
            mo[b/sq] +=change;
            ar[b] +=change;
        }
        
    }
}