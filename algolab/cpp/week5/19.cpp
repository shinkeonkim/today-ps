#include <iostream>
#include <algorithm>
#define MX 398580751
using namespace std;
typedef long long ll;
int tc,N;
ll cnt;
ll ar[110000];
int main() {
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll k1 = 1;
    for(int x=0; x<=50; x++) {
        ll k2 =1;
        for(int y=0; y<=50; y++) {
            ll k3 = 1;
            for(int z=1; z<=50; z++) {
                ll Z = k1*k2*k3;
                if(Z <0) continue;
                ar[cnt++] = Z;
                k3*=5;
                if(k3 > MX) {
                    break;
                }
            }

            k2*=3;
            if(k2 > MX) {
                break;
            }
        }

        k1*=2;
        if(k1 > MX) {
            break;
        }
    }

    sort(ar,ar+cnt);
    cin >> tc;
    while(tc--) {
        cin >> N;
        cout << ar[N-1]<<"\n";
    }
    

}