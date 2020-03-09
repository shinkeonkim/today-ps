#include <iostream>
using namespace std;
typedef long long ll;
int T;
ll A;
int main() {
    cin >> T;
    while(T--) {
        cin >> A;
        bool chk = true;
        for(int x=2; x<=1000000; x++) {
            if(A%x == 0) {
                chk = false;
                break;
            }
        }
        if(chk) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}