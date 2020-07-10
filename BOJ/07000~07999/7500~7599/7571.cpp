#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll N,M,Sx,Sy,D;
ll X[110000];
ll Y[110000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for(int x=0; x<M; x++) {
        cin >> X[x] >> Y[x];
    }
    sort(X,X+M);
    sort(Y,Y+M);

    for(int x=0; x<M; x++) {
        D += llabs(X[x] - X[M/2]) + llabs(Y[x] - Y[M/2]);
    }
    cout << D;
}