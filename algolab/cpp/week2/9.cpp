#include <iostream>
using namespace std;
int tc,n,a,ret;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> n;
        ret = 1;
        while(n--) {
            cin >> a;
            ret *= (a%10);
            ret %=10;
        }
        cout << ret << "\n";
    }
}