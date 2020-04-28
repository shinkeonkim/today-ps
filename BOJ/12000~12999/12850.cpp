#include <iostream>
#include <vector>

#define Mod 1000000007

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector< vector <ull> > v2;

ull S,K;
v2 s;

v2 multi(v2 A, v2 B) {
    v2 ret(S);
    for(int x=0; x<S; x++) {
        for(int y=0; y<S; y++) ret[x].push_back(0);
    }
    for(int x =0; x<S; x++)
        for(int y= 0; y<S; y++)
            for(int z=0;z<S; z++) {
                ret[x][y] += (A[x][z] * B[z][y]) % Mod;
                ret[x][y] %= Mod;
            }
    return ret;
}

v2 multiple(ull N) {
    if(N==1) return s;
    else {
        v2 L = multiple(N/2);
        if(N%2==0) return multi(L,L);
        return multi(s,multi(L,L));
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> K;
    S = 8;
    s = {{0,1,1,0,0,0,0,0},
         {1,0,1,1,0,0,0,0},
         {1,1,0,1,1,0,0,0},
         {0,1,1,0,1,1,0,0},
         {0,0,1,1,0,1,1,0},
         {0,0,0,1,1,0,0,1},
         {0,0,0,0,1,0,0,1},
         {0,0,0,0,0,1,1,0}
         };

    v2 ret = multiple(K);

    cout << ret[0][0];
}