#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return b>0?gcd(b,a%b):a;
}
int D[220][220];
int N,ans;
int main() {
    cin >> N;
    for(int x=1; x<=N; x++) {
        for(int y=x; y<=N; y++) {
            int ret = gcd(x,y);
            D[x][y] = ret;
            D[y][x] = ret;
        }
    }
    for(int x=1; x<=N; x++) {
        for(int y=1; y<=N; y++) {
            for(int z=1; z<=N; z++) {
                ans += D[D[x][y]][z];
            }
        }
    }
    cout<<ans;
}