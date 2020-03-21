#include <iostream>
using namespace std;
int T;
int N,M;
char A[22][22];
char A2[22][22];
int main() {
    cin >> T;
    while(T--) {
        cin >> N >> M;
        for(int y =0; y<N; y++) {
            for(int x = 0; x<M; x++) {
                cin >>A[y][x];
            }
        }

        for(int y=0; y<N; y++) {
            for(int x=0; x<M; x++) {
                A2[M-x-1][N-y-1] = A[y][x];
            }
        }

        for(int x=N-1; x>-1; x--){
            for(int y=0; y<M; y++) {
                cout<< A2[y][x];
            }cout<<"\n";
        }
    }
}