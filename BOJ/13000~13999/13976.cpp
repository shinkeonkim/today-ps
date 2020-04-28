#include <iostream>
#include <vector>

#define Mod 1000000007

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector< vector <ll> > v2;

ull S=2,K;
v2 s = {{4,-1},{1,0}};

v2 multi(v2 A, v2 B) {
    v2 ret = {{0,0},{0,0}};
    for(int x =0; x<S; x++)
        for(int y= 0; y<S; y++)
            for(int z=0;z<S; z++) {
                ret[x][y] += (A[x][z] * B[z][y] + Mod) % Mod;
                ret[x][y] = (ret[x][y] + Mod) % Mod;
            }
    return ret;
}

v2 multiple(ll N) {
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
    
	if(K % 2) {
		cout << 0;
		return 0;
	}

	K/=2;
	if(K == 1) {
		cout << 3;
		return 0;
	}

    v2 ret = multiple(K-1);
    cout <<(ret[0][0]*3 + ret[0][1]+Mod) % Mod;
}