#include <iostream>
#define Mx 9876543210
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
ll T;
ll N;
ll a[330000];
ll b[330000];
ll D[330000];
 
ll max(ll a, ll b) {
    return a>b?a:b;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        ull S = 0;
        ull ans = Mx;
 
        cin >> N;
        for(int x=0; x<N; x++) {
            cin >> a[x] >> b[x];
        }
        
        for(int x=0; x<N; x++) {
            if(x==0) {
                D[x] = max(0, a[x]- b[N-1]);
            }
            else {
                D[x] = max(0,a[x]- b[x-1]);
            }    
            S += D[x];
        }
 
        for(int x = 0; x<N; x++) {
            ull k = a[x] + (S - D[x]);
            if(k < ans) {
                ans = k;
            }
        }
        cout<<ans<<"\n";
    
    }
}