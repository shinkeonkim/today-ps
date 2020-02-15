#include <iostream>
using namespace std;
int N,ans=1;
int ar[1100];
int D[1100];

int f(int x,int y) {return x>y?x:y;}

int main() {
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >>ar[x];
        D[x] =1;
    }
    for(int x=0; x<N; x++) {
        for(int y=0; y<x; y++) {
            if(ar[y] < ar[x] && D[y] + 1 > D[x]) {
                D[x] = D[y]+1;
                ans = f(D[x],ans);
            }
        }
    }
    cout<<ans;
}