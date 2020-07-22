#include <iostream>
using namespace std;
int T,N,S,Mx,cnt,Pos,A;
int main() {
    cin >> T;
    while(T--) {
        S = 0;
        cin >> N >> A;
        Mx = A;
        cnt = 1;
        Pos = 1;
        S+=A;
        for(int x=1; x<N; x++) {
            cin >> A;
            S += A;
            if(Mx < A) {
                Mx = A;
                cnt = 1;
                Pos = x+1;
            }
            else if(Mx == A) {
                cnt+=1;
            }
        }
        if(cnt>1) {
            cout << "no winner\n";
        }
        else if(S < Mx*2) {
            cout << "majority winner " << Pos<<"\n";
        }
        else {
            cout << "minority winner " << Pos<<"\n";
        }
        

    }
}