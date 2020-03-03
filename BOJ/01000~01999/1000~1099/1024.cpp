#include <iostream>
using namespace std;
typedef long long ll;
ll N,L;
int main() {
    cin >> N >> L;
    for(;L<=100; L++) {
        if(N - L*(L-1)/2 >= 0 && (N-(L*(L-1)/2)) % L == 0) {
            ll k = (N-(L*(L-1)/2)) / L;
            for(ll x=0; x<L; x++) {
                cout<<x+k<<" ";
            }
            return 0;
        }
    }
    cout<<-1;
}