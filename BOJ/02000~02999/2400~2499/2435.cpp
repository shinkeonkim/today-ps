#include <iostream>
using namespace std;

int N,K,S,ans;
int ar[110],D[110];

int main() {
    cin >> N >> K;
    for(int x = 0; x < N; x++) {
        cin >> ar[x];
    }
    for(int x=0; x<K; x++) {
        S += ar[x];
    }
    ans = S;
    for(int x=0; x<N-K; x++) {
        S -= ar[x];
        S += ar[x+K];
        if(ans < S) ans = S; 
    }
    cout<<ans;

}