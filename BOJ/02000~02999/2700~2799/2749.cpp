#include <iostream>
#include <vector>
#define Mod 1000000
using namespace std;
typedef vector< vector <unsigned long long> > v2;

v2 s(2);

v2 multi(v2 A, v2 B) {
    v2 ret(2);
    ret[0].push_back(0);
    ret[0].push_back(0);
    ret[1].push_back(0);
    ret[1].push_back(0);
    for(int x =0; x<2; x++) {
        for(int y= 0; y<2; y++) {
            for(int z=0;z<2; z++) {
                ret[x][y] += (A[x][z] * B[z][y]) % Mod;
                ret[x][y] %= Mod;
            }
        }
    }

    return ret;
}

v2 multiple(unsigned long long N) {
    if(N==1) {
        return s;
    }
    else if(N%2==0) {
        v2 L = multiple(N/2);
        return multi(L,L);
    }
    else {
        v2 L = multiple(N/2);
        return multi(s,multi(L,L));
    }
}


unsigned long long N;
int main() {
    cin >> N;
    if(N==0) {
        cout<<0;
        return 0;
    }
    
    s[0].push_back(1);
    s[0].push_back(1);
    s[1].push_back(1);
    s[1].push_back(0);

    v2 r = multiple(N);
    cout<<r[0][1]%Mod;
}