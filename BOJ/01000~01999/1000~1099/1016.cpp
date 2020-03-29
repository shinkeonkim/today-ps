#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

ll mo[1100000];
ll m,M;

void mobius(ll Max) {
    for(ll x = 1; x<=Max; x++) {
        mo[x] = 1;
    }
    for(ll x=2; x<=Max; x++) {
        if(mo[x] == 1) {
            for(ll y=x; y<=Max; y+=x) {
                mo[y] *= -x;
            }
            for(ll y=x*x; y<=Max; y+=x*x) {
                mo[y] = 0;
            }
        }
    }
    for(ll x=2; x<=Max; x++) {
        if(mo[x] == x) mo[x] =1;
        else if(mo[x] == -x) mo[x] = -1;
        else if(mo[x] <0) mo[x] =1;
        else if(mo[x] >0) mo[x] =-1;
    }
}

ll free_count(ll K) {
    ll ret = 0;
    for(ll x = 1; x*x<=K; x++) {
        ret += mo[x]*(K/(x*x));
    }
    return ret;
}

int main() {

    cin >> m >> M;

    mobius(1000000);
    cout<<free_count(M) - free_count(m-1);

}