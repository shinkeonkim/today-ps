#include <iostream>
using namespace std;
int main () {
    int T,a;
    cin >> T;
    while(T--) {
        cin >> a;
        if(a%2==0) {
            cout << a << " is even\n";
        }
        else {
            cout<< a << " is odd\n";
        }
    }
}