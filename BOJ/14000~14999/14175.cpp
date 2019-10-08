#include <iostream>
#include <string>
using namespace std;
int N,M,K;
string ar[11];
int main() {
    cin >> N >> M >> K;
    for(int y=0; y<N; y++) cin >>ar[y];
    for(int y=0; y<N; y++) {
        for(int y2=0; y2<K; y2++) {
            for(int x=0; x<M; x++) {
                for(int x2=0; x2<K; x2++) {
                    cout<<ar[y][x];
                }
            }
            cout<<"\n";
        }
    }
}