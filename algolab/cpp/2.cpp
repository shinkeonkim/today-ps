#include <iostream>
using namespace std;
int T,N,Mx,Mn,A;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        cin >> N >> A;
        Mx = Mn = A;
        for(int x=1; x<N; x++) {
            cin >> A;
            if(Mx < A) Mx = A;
            if(Mn > A) Mn = A;
        }
        cout<<Mx << " " << Mn << "\n";
    }
}