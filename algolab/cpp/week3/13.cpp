#include <iostream>
using namespace std;
int tc,ax,ay,bx,by,cx,cy;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        int S = ((bx - ax)*(cy-ay)) - ((cx-ax)*(by-ay));

        if(S > 0) {
            cout << S << " 1\n";
        }
        else if(S < 0) {
            cout << -S << " -1\n";
        }
        else {
            cout << "0 0\n";
        }

    }
}