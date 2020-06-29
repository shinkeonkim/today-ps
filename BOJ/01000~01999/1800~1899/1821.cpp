#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

llv1 ar;
ll N,K;
int D[22][22];

int f(int x, int y) {
    if(D[x][y]) return D[x][y];
    if(x < y || x< 0 || y < 0) {
        return D[x][y] = 0;
    }
    if(x == y || y == 0) {
        return D[x][y] = 1;
    }
    if(y == 1) {
        return D[x][y] = x;
    }
    return D[x][y] = f(x-1,y-1) + f(x-1, y);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    for(int x=1; x<=N; x++) {
        ar.push_back(x);
    }

    do {
        ll S = 0;
        for(int x=0; x<N; x++) {
            S += f(N-1,x) * ar[x];
        }
        if(S == K) {
            for(auto i : ar) {
                cout << i << " ";
            }
            break;
        }
    }
    while(next_permutation(ar.begin(), ar.end()));
}