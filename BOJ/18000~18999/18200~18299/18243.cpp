#include <iostream>
#define Mx 123456789
using namespace std;

int N,K,a,b;
int ar[110][110];

int main() {
    cin >> N >> K;
    for(int x=1; x<=N; x++) {
        for(int y=1; y<=N; y++) {
            ar[x][y] = Mx;
        }
    }
    for(int x=0; x<K; x++) {
        cin >> a >> b;
        ar[a][b]= 1;
        ar[b][a] = 1;
    }
    for(int z = 1; z<=N; z++)
        for(int x = 1; x<=N; x++)
            for(int y=1;y<=N; y++) {
                if(ar[x][y] > ar[x][z] + ar[z][y]) {
                    ar[x][y] = ar[x][z] + ar[z][y];
                }
            }

    for(int y=1; y<=N; y++) {
        for(int x=1; x<=N; x++) {
            if(ar[y][x] > 6) {
                cout<<"Big World!";
                return 0;
            }
        }
    }
    cout<<"Small World!";
}