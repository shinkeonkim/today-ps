#include <iostream>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

ull A,R,N,MOD;

ull fast_pow(ull n, ull k, ull mod) {
    if(k<=0) return 1;
    if(k==1) return n % mod;
    ull half = fast_pow(n,k/2,mod);
    if(k%2==0) return (half*half)%mod;
    return (((half*half)%mod)*n)%mod;
}

ull solve(ull n) {
    if(n == 0) return 1;
    if(n == 1) return A%MOD;
    if(n ==2) return (A + A*R)%MOD;
    if(n%2 ==0) {
        ull k = solve(n/2);
        return ((1 + fast_pow(R,n/2,MOD))*k)%MOD;
    }
    else {
        ull k = solve(n/2);
        return ((A*fast_pow(R,n/2,MOD)) %MOD + ((1 + fast_pow(R,n/2+1,MOD))*k)%MOD)%MOD;
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(0);
    cin >> A >> R >> N >> MOD;
    A%=MOD;
    R%=MOD;
    cout << solve(N) % MOD;
}