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

ull m,a,b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> S >> m;
    s.resize(S);
    for(int y=0; y<S; y++)
        for(int x=0; x<S; x++) s[y].push_back(0);
    for(int x=0; x<m; x++) {
        cin >> a >> b;
        a--;b--;
        s[a][b] = s[b][a] = 1;
    }
    cin >> K;
    
    v2 ret = multiple(K);

    cout << ret[0][0];
}