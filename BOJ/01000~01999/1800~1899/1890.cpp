#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N;
ll ar[110][110];
ll D[110][110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int y = 0; y<N; y++) {
        for(int x=0; x<N; x++) {
            cin >> ar[y][x];
        }
    }
    D[0][0] = 1;
    for(int y=0; y<N; y++) {
        for(int x=0; x<N; x++) {
            if(y == N-1 && x == N-1) continue;
            if(y + ar[y][x] < N) D[y+ar[y][x]][x] += D[y][x];
            if(x + ar[y][x] < N ) D[y][x+ar[y][x]] += D[y][x];
        }
    }

    cout << D[N-1][N-1];

}