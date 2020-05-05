#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ull N,M,ans;
ull R,C,D;

int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int ar[55][55];
int check[55][55];

void dfs(int r,int c,int d) {
    if(check[r][c] == 0) ans++;
    check[r][c] =1;
    for(int k = 1; k < 5; k++) {
        int nextR = r + dy[(d-k+8)%4];
        int nextC = c + dx[(d-k+8)%4];

        if(nextR < 0 || nextC < 0 || nextR >=N || nextC >=M) continue;
        if(ar[nextR][nextC] == 0 && check[nextR][nextC] == 0) {
            dfs(nextR,nextC,(d-k+8)%4);
            return;
        }
    }
    int nextR = r - dy[d];
    int nextC = c - dx[d];
    if(nextR < 0 || nextC < 0 || nextR >=N || nextC >=M) return;
    if(ar[nextR][nextC] == 0) {
        dfs(nextR,nextC,d);
        return;
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    cin >> R >> C >> D;
    for(int y=0; y<N; y++) {
        for(int x=0; x<M; x++) cin >> ar[y][x];
    }

    dfs(R,C,D);
    cout << ans;
}