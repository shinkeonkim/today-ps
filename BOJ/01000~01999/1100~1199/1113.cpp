#include <bits/stdc++.h>

using namespace std;

int answer,s;
int N,M;
bool check;
char a;
int ar[55][55];
int D[55][55];
bool chk[55][55];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void dfs(int Y, int X) {
    s++;
    chk[Y][X] = false;
    if(Y == 0 || X == 0 || Y == N+1 || X == M+1) check = false;

    for(int i = 0; i <4; i ++) {
        int nextX = X + dx[i];
        int nextY = Y + dy[i];

        if(nextX < 0 || nextY < 0 || nextX > M+1 || nextY > N+1) {
            continue;
        }

        if(chk[nextY][nextX] && D[nextY][nextX]) {
            dfs(nextY, nextX);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for(int y = 0; y<=N+1; y++) D[y][0] = D[y][M+1] = 1;
    for(int x = 0; x<=M+1; x++) D[0][x] = D[N+1][x] = 1;

    for(int y=1; y<=N; y++) {
        for(int x=1; x<=M; x++) {
            cin >> a;
            ar[y][x] = a-48;
        }
    }

    for(int height = 1; height <= 12; height++) {
        for(int y=0; y<=N+1; y++) {
            for(int x=0; x<=M+1; x++) {
                chk[y][x] = true;
            }
        }
        for(int y=1; y<=N; y++) {
            for(int x=1; x<=M; x++) {
                if(ar[y][x] < height) {
                    ar[y][x] = height;
                    D[y][x] = 1;
                }
                else {
                    D[y][x] = 0;
                }
            }
        }
        
        for(int y=1; y<=N; y++) {
            for(int x=1; x<=M; x++) {
                if(D[y][x] == 1 && chk[y][x]) {
                    check = true;
                    s = 0;
                    dfs(y, x);
                    if(check) {
                        answer += s;
                    }
                }
            }
        }

    }
    cout << answer;
    
}