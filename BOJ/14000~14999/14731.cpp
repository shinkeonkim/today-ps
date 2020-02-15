#include <iostream>
#define Mod 1000000007
using namespace std;

typedef long long ll;

ll N,a,b;
ll f(ll k) {
    if(k<=0) return 1;
    if(k == 1) return 2;
    if(k%2 ==1) {
        ll A = f(k/2);
        return (A*A*2)%Mod;
    }
    ll A = f(k/2);
    return (A*A)%Mod;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll S = 0;
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> a >> b;
        S +=(((a*b)%Mod)*f(b-1))%Mod;
        S%=Mod;
    }   
    cout<<S%Mod;
}