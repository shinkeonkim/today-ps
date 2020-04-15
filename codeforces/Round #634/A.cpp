#include <iostream>
using namespace std;
typedef long long ll;
ll tc,N;

ll f(ll a) {
    if(a<=2) {
        return 0;
    }
    if(a%2==0) {
        return a/2 -1;
    }
    return a/2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while (tc--) {
        cin >> N;
        cout <<f(N) << "\n";
    }
}