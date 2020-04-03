#include <iostream>
#define MOD 1000000007
using namespace std;

int D[110000][11];
int M,N,broken[110000],a;

int main() {
    cin >> N >> M;
    for(int x=0; x<M; x++) {
        cin >> a;
        broken[a]=1;
    }
    
    if(broken[1] != 1) {
        D[1][1] = 1; //D[i][j] i번째 계단을 밟을 차례인데, 이번턴에 j만큼 밟아서 올라왔음. 
    }

    if(broken[2] != 1) {
        D[2][2] = 1;
        D[2][1] = D[1][1];
    }

    for(int x=3; x<=N; x++) {
        if(broken[x] != 1) {
            D[x][1] = (D[x-1][1] + D[x-1][2])%MOD;
            D[x][2] = (D[x-2][1] + D[x-2][2])%MOD;
        }
    }
    cout << (D[N][1] + D[N][2])%MOD;
}