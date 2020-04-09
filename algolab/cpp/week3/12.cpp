#include <iostream>
using namespace std;
int tc,a,b,c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> a >> b >> c;
        if(c >= (a+b)) {
            cout << "0\n";
        }
        else {
            if(a == b && b == c) {
                cout<<"1\n";
            }
            else if(c*c == a*a + b*b) {
                cout<<"2\n";
            }
            else if(a==b || b==c) {
                cout<<"3\n";
            }
            else {
                cout<<"4\n";
            }
        }
    }
}