#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

// https://gratus907.com/74 mobius 참고

int mo[1100000];

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
    ll K,S=1,E=10000000000,mid;
    ll answer = E;
    mobius(100000);
    cin >> K;
    while(S<=E) {
        mid = (S+E)/2;
        if(free_count(mid) >= K) {
            if(answer > mid) answer = mid;
            E = mid -1;
        }
        else {
            S = mid+1;
        }
    }
    cout<<answer;

}