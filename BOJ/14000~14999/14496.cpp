#include <iostream>
#include <vector>
#define INF 99999999
using namespace std;

int N,M,start,en,i,j;
vector<vector<int>> V(1100);
bool check[1100];
int minC[1100];

int main() {
    cin >> start >> en >> N >> M;
    for(int x=0; x<M; x++) {
        cin >> i >> j;
        V[i].push_back(j);
        V[j].push_back(i);
    }
    for(int x=1; x<=N; x++) {
        minC[x] = INF;
        check[x] = true;
    }
    minC[start] = 0;

    for(int y=1; y<=N; y++) {
        int current = -1;
        int M = INF;
        for(int x=1; x<=N; x++) {
            if(check[x] && M > minC[x]) {
                current = x;
                M = minC[x];
            }
        }
        if(current == -1) break;

        for(int v = 0; v<V[current].size(); v++) {
            if(minC[V[current][v]] > minC[current] + 1) {
                minC[V[current][v]] = minC[current] +1;
            }
        }
        check[current] = false;
    }
    if(minC[en] == INF) {
        cout<<-1;
    }
    else cout<<minC[en];
}