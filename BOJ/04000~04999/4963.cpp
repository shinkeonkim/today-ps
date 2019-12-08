#include <iostream>
#include <queue>
using namespace std;

int w,h;
int ar[55][55];
int D[55][55];
int dx[] = {0,0,1,1,1,-1,-1,-1};
int dy[] = {1,-1,1,0,-1,0,1,-1};

void DFS(int Y,int X, int C) {
    D[Y][X] = C;
    for(int d = 0; d<8; d++) {
        int nextY = Y + dy[d];
        int nextX = X + dx[d];
        if(0 > nextX || 0 > nextY || nextX >= w || nextY >=h) continue;

        if(ar[nextY][nextX] == 1 && D[nextY][nextX] == 0) {
            DFS(nextY,nextX,C);
        }
    } 
}


int main() {
    while(true){   
        cin >> w >> h;

        if(w == 0 || h == 0) break;

        for(int y = 0; y < h; y++) {
            for(int x = 0; x <w; x++) {
                cin >>ar[y][x];
                D[y][x] = 0;
            }
        }
        int cnt = 0;

        for(int y = 0; y < h; y++) {
            for(int x = 0; x <w; x++) {
                if(ar[y][x] == 1 && D[y][x] == 0) {
                    cnt++;
                    DFS(y,x,cnt);
                }
            }
        }
        cout<<cnt<<"\n"; 
    }
}