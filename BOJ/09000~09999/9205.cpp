#include <iostream>
using namespace std;
int T;
int N;
int X[110],Y[110];
int D[110][110];
int main() {
    cin >> T;
    for(int t = 0; t < T; t++) {
        cin >> N;
        for(int x = 0; x<N+2; x++) {
            cin >> X[x] >> Y[x];
            for(int y = 0; y< N+2; y++) D[x][y] = 0;
        }

        for(int x = 0; x<N+2; x++) {
            for(int y = 0; y<N+2; y++) {
                if(abs(X[x]-X[y]) + abs(Y[x]-Y[y]) <=1000) {
                    D[x][y] = 1;
                }
            }
        }
        for(int z = 0; z<N+2;z++) 
            for(int x = 0; x<N+2; x++) 
                for(int y = 0; y<N+2; y++) {
                    if(D[x][z] & D[z][y]) {
                        D[x][y] = 1;
                    }
                }
        if(D[0][N+1]) cout<<"happy\n";
        else cout<<"sad\n";
    }
}