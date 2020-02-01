#include <iostream>
#define INF 123456789
using namespace std;
int C,N;
int D[11000];
int cost[110];
int man[110];
int main() {
    cin >> C >> N;
    for(int i  = 0; i < N; i++) {
        cin >> cost[i] >> man[i];
    }

    for(int d = 1; d<=C+1000; d++) D[d] = INF;

    for(int x = 0; x<=C+1000; x++) {
        for(int y = 0; y<N; y++) {
            if(D[x + man[y]] > D[x] + cost[y]) {
                D[x + man[y]] = D[x] + cost[y];
            }
        }
    }
    int ans = INF;
    for(int x = C; x<=C+1000; x++) {
        // cout<<D[x]<<" ";
        if(ans > D[x]) ans = D[x];
    }
    cout<<ans;

}