#include <iostream>
using namespace std;
int N,M,ar[11][11],check[11][11];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int cnt,ans;

void DFS(int Y,int X) {
    check[Y][X] = 1;
    for(int d = 0; d < 4; d++) {
        int next_y = Y + dy[d];
        int next_x = X + dx[d];

        if(next_x < 0 || next_x >=M || next_y < 0 || next_y >=N) {
            continue;
        }

        if(check[next_y][next_x] == 0 && (ar[next_y][next_x] == 0 || ar[next_y][next_x] == 2)) {
            DFS(next_y,next_x);
        }
    }
}

void f() {
    for(int y = 0; y<N; y++) {
        for(int x = 0; x<M; x++) {
            check[y][x] = 0;
        }
    }

    cnt = 0;

    for(int y = 0; y<N; y++) {
        for(int x = 0; x<M; x++) {
            if(ar[y][x] == 2 && check[y][x] == 0) {
                DFS(y,x);
            }
        }
    }

    for(int y = 0; y <N; y++) {
        for(int x = 0; x<M; x++) {
            if(check[y][x] == 0 && ar[y][x] == 0) {
                cnt++;
            }
        }
    }
    if(cnt>ans) {
        ans = cnt;
    }
}

int main() {
    cin >> N >> M;
    for(int y = 0; y < N; y++) {
        for(int x = 0; x <M; x++) {
            cin >> ar[y][x];
        }
    }
    for(int t1 = 0; t1 < N*M; t1 ++)
        for(int t2 = t1+1; t2 < N*M; t2 ++)
            for(int t3 = t2+1; t3 < N*M; t3++) {
                if(ar[t1/M][t1%M] + ar[t2/M][t2%M] + ar[t3/M][t3%M] == 0) {
                    ar[t1/M][t1%M] = ar[t2/M][t2%M] = ar[t3/M][t3%M] = 1;
                    f();
                    ar[t1/M][t1%M] = ar[t2/M][t2%M] = ar[t3/M][t3%M] = 0;
                }
            }
    cout << ans;
}