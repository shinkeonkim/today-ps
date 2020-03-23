#include <iostream>
using namespace std;
typedef long long ll;
// problem
ll N,Q;
ll a,p,q;
//mo's algorithm
ll sq;
ll mo[11000];
ll ar[1100000];
ll mo_l,mo_r,L,R;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> Q;
    for(sq=1;sq*sq<=N; sq++);
   
    while(Q--) {
        cin >> a >> p >> q;
        if(a==1) { // add
            mo[p/sq]+=q;
            ar[p]+=q;
        }
        else { // query
            ll ans = 0;
            mo_l = p/sq;
            mo_r = q/sq;
            for(int x = mo_l; x<=mo_r; x++) ans += mo[x];
            for(int x = mo_l*sq; x<p; x++) ans -= ar[x];
            for(int x= q+1; x<(mo_r+1)*sq; x++) ans -= ar[x];
            cout << ans << "\n";
        }
    }
}