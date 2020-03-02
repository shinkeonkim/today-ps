#include <iostream>
using namespace std;
typedef long long ll;
ll N,Q,sq;
ll ar[110000];
ll mo[110000];
ll a,b,c,d;

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
    cin >> N >>Q;
    for(sq=1; sq*sq<=N; sq++);
    for(int x=0; x<N; x++) {
        cin >> ar[x];
        mo[x/sq]+=ar[x];
    }

    for(int q=0;q<Q; q++) {
        cin >> a >> b >> c >> d;
        a--;b--;c--;
        if(a>b) {
            ll c = a;
            a = b;
            b = c;
        }
        cout << mo_sum(a,b) << "\n";
        ll change = d-ar[c];
        mo[c/sq] +=change;
        ar[c] +=change;
    }
}