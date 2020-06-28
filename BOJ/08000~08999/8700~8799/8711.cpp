#include <iostream>
using namespace std;
int N,A;
int Mx,Mn,ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin >> A;
    Mx = A;
    Mn = A;
    ans = Mx - Mn;
    for(int x=1; x<N; x++) {
        cin >> A;
        if (Mx < A) {
            Mn = A;
            Mx = A;
        }
        if(Mx > A)  {
            Mn = A;
            if(ans < Mx - Mn) ans = Mx - Mn;
        }
    }

    if(ans <= 0) cout << 0;
    else cout << ans;

}