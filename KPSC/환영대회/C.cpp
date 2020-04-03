#include <iostream>
#include <algorithm>
using namespace std;
int T;
int A,B,C,N;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        cin >> A >> B >> C >> N;

        int M = max(A,max(B,C));
        int S = (3*M - (A + B + C));
        N-=S;
        if(N>=0 && N%3 ==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}