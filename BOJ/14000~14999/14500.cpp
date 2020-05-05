#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ll>> llv2;
typedef vector <vector <ull>> ullv2;

ll N,M,ans,S;
ll ar[550][550];

llv2 dx = {{0,0,0,0},{0,1,2,3},{0,0,1,1},{0,0,0,1},{0,1,2,2},{0,1,1,1},{0,1,2,0},{0,1,1,1},{0,0,1,2},{0,0,0,1},{0,1,2,2},{0,1,1,2},{0,0,1,1},{0,1,1,2},{1,1,0,0},{0,1,2,1},{0,0,0,1},{1,1,1,0},{0,1,2,1}};
llv2 dy = {{0,1,2,3},{0,0,0,0},{0,1,0,1},{0,1,2,2},{1,1,1,0},{0,0,1,2},{0,0,0,1},{2,2,1,0},{0,1,1,1},{0,1,2,0},{0,0,0,1},{1,1,0,0},{0,1,1,2},{0,0,1,1},{0,1,1,2},{0,0,0,1},{0,1,2,1},{0,1,2,1},{1,1,1,0}};

void f(ll a) {
    if(ans < a) {
        ans = a;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for(int y=0; y < N; y++) {
        for(int x=0; x<M; x++) {
            cin >> ar[y][x];
        }
    }

    for(int y=0; y<N; y++) {
        for(int x=0; x<M; x++) {
            for(int tool=0; tool < 19; tool++) {
                bool chk = true;
                for(int d=0; d<4; d++) {
                    ll Y = y+dy[tool][d];
                    ll X = x+dx[tool][d];
                    if(Y < 0 || X < 0 || Y >=N || X >=M) {
                        chk = false;
                        break;
                    }
                }
                if(chk) {
                    ll S = 0;
                    for(int d=0; d<4; d++) {
                        int Y = y+dy[tool][d];
                        int X = x+dx[tool][d];
                        S += ar[Y][X];
                    }
                    f(S);
                }
            }   
        }
    }
    cout << ans;
}