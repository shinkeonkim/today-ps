#include <iostream>
#include <queue>
#define INF 210999999
using namespace std;

struct st{
    int Y,X,S,T;  
};

int N,M,T;
int D[110][110][2];
int ar[110][110];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
queue <st> Q;

int main() {
    cin >> N >> M >> T;
    for(int y = 1; y <= N; y++) 
        for(int x = 1; x<=M; x++) {
            cin >>ar[y][x];
            D[y][x][0] = INF;
            D[y][x][1] = INF;
        }
    D[1][1][0] = 1;
    //int cnt = 0;
    Q.push({1,1,0,0});
    while(!Q.empty()) {
        //cnt++;
        st front = Q.front();
        Q.pop();

        if(D[front.Y][front.X][front.S] > front.T) {
            D[front.Y][front.X][front.S] = front.T;
        }

        for(int d = 0; d<4; d++) {
            int nextY = front.Y + dy[d];
            int nextX = front.X + dx[d];

            if(0 > nextY || 0 > nextX || nextY >N || nextX > M) continue;
            if(ar[nextY][nextX] == 1 && front.S ==0) continue;

            if(ar[nextY][nextX] == 2 || front.S == 1) {
                if(D[nextY][nextX][1] > front.T + 1) {
                    D[nextY][nextX][1] = front.T+1;
                    Q.push({nextY,nextX,1,front.T+1});
                }
            }
            else {
                if(D[nextY][nextX][0] > front.T + 1) {
                    D[nextY][nextX][0] = front.T + 1;
                    Q.push({nextY,nextX,0,front.T + 1});
                }
            }
        }


    }
    //cout<<cnt;
    int answer = min(D[N][M][0],D[N][M][1]);
    if(answer > T) {
        cout << "Fail";
    }else {
        cout << answer;
    }

}