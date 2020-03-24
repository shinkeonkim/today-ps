#include <iostream>
using namespace std;
typedef long long ll;
ll tc,Y,C,N,T,I,J,K,L,P,Q,month,day;
int main() {
    cin >> tc;
    while(tc--) {
        cin >> Y;
        C = Y/100; // 2
        N = Y - (Y/19)*19; //3
        T = (C-17)/25; // 4
        I = C - (C/4 + (C-T)/3) + N*19 + 15; // 5, 6, 7
        J = I - (I/30)*30; // 8
        K = J - ((J/28) * (J/28 -1) * (29 / (J+1) * ((21-N)/11))); // 9,10,11,12,13
        L = ((Y + Y/4) + J + 2) - C + C/4; // 14, 15
        P = L - ((L/7)*7); // 16
        Q = K - P; //17
        month = (Q+40) / 44 + 3; // 18
        day = (Q + 28) - ((month/4)*31); // 19
        cout << month << " " << day << "\n";
    }
}