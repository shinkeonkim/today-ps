#include <iostream>
using namespace std;
int tc,n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> n;
        for(int y=1; y<=n; y++) {
            int k = y;
            for(int x=0; x<y; x++) {
                cout << k <<" ";
                k += (n-x-1);
            }
            cout<<"\n";
        }
    }
}