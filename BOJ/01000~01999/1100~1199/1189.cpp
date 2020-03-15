#include <iostream>
#include <string>
using namespace std;
int N,M,K,ans;
string m[10];
int check[11][11];
int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};

void dfs(int Y,int X, int k) {
    if(k==0) {
        if(Y == N-1 && X == 0) ans++;
    }
    else {
        for(int d=0; d<4; d++) {
            int prev_x = X + dx[d];
            int prev_y = Y + dy[d];
            if(0> prev_x || 0 > prev_y || prev_x >= M || prev_y >= N) continue;
            if(m[prev_y][prev_x] == 'T' || check[prev_y][prev_x]) continue;
            check[prev_y][prev_x] = true;
            dfs(prev_y,prev_x,k-1);
            check[prev_y][prev_x] = false;
        }
    }
}

int main() {
    cin >> N >> M >> K;
    for(int x = 0; x< N; x++) {
        cin >> m[x];
    }
    check[0][M-1] = true;
    dfs(0,M-1,K-1);

    cout << ans;
}