#include <iostream>
using namespace std;
int N,M,C,a,b;
int ar[11];
int main() {
    cin >> N >> M >> C;
    for(int x=1; x<=N; x++) ar[x] = x;
    for(int x =0; x<M; x++) {
        cin >> a >> b;
        int k = ar[a];
        ar[a] = ar[b];
        ar[b] = k;
    }
    for(int x=1; x<=N; x++) {
        if(ar[x] == C) {
            cout<<x;
        }
    }
}