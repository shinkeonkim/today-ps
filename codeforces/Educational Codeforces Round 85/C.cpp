#include <iostream>
#define Mx 300000000000030
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
ll T;
ll N;
ll a[330000];
ll b[330000];

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
            if(x ==0) {
                S += max(0,a[x]-b[N-1]);
            }
            else {
                S += max(0,a[x]-b[x-1]);
            }
        }

        for(int x = 0; x<N; x++) {
            ull k = 0;
            if(x==0) {
                k = a[x] + (S - max(0,a[x]-b[N-1]));
            }
            else k = a[x] + (S - max(0,a[x]- b[x-1]));
            if(k < ans) {
                ans = k;
            }
        }
        cout<< ans <<"\n";
    }
}