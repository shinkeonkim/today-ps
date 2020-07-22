#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    long long T,a,b,c;
    cin >>T;
    while(T--) {
        cin>>a>>b>>c;
        long long k = min(a*b,min(b*c,c*a));
        cout << a*a + b*b + c*c +2*k<<"\n";
    }
}