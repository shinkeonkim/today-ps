#include <iostream>
using namespace std;
long long t,n,a,s;
int main() {
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--) {
        cin >> n;
        s = 0;
        for(int x=0; x<n; x++) {
            cin>>a;
            s+=a;
            s%=n;
        }
        if(s%n==0) {
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }
}