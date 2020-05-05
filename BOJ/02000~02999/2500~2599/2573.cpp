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

ll N,M,c,dfscount;
ll ar[330][330];
ll diff[330][330];
bool check[330][330];
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};

ll max(ll a, ll b) {
    return a>b?a:b;
}

void dfs(int Y, int X) {
    check[Y][X] = false;

    for(int d =0; d<4; d++) {
        int nextY = Y + dy[d];
        int nextX = X + dx[d];

        if(nextY < 0 || nextX < 0 || nextY >=N || nextX >=M) continue;

        if(ar[nextY][nextX] >0 && check[nextY][nextX]) {
            dfs(nextY,nextX);
        }
    }
}

bool getDfsResult() {
    for(int y=0; y<N; y++) {
        for(int x=0; x<M; x++) {
            check[y][x] = true;
        }
    }
    dfscount = 0;
    for(int y=0; y<N; y++) {
        for(int x=0; x<M; x++) {
            if(ar[y][x] > 0 && check[y][x]) {
                dfscount++;
                dfs(y,x);
            }
        }
    }
    
    if(dfscount >=2) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for(int y =0; y< N; y++) {
        for(int x=0; x< M; x++) {
            cin >> ar[y][x];
        }
    }
    
    while(true) {
        if(getDfsResult()) {
            cout << c;
            return 0;
        }

        bool check= false;

        for(int y=0; y<N; y++) {
            for(int x=0; x<M; x++) {
                diff[y][x] = 0;
                if(ar[y][x] > 0) {
                    check = true;
                    for(int d=0; d<4; d++) {
                        int nY = y + dy[d];
                        int nX = x + dx[d];
                        if(nY < 0 || nX < 0 || nY >=N || nX >= M) continue;

                        if(ar[nY][nX] == 0) diff[y][x]++;
                    }

                }
            }
        }

        for(int y=0; y<N; y++) {
            for(int x=0; x<M; x++) {
                ar[y][x] = max(ar[y][x]-diff[y][x],0);
            }
        }
        c++;
        if(!check) break;
    }
    cout << 0;
}