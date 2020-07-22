#include <iostream>
using namespace std;
long long a,b;
long long M(long long a,long long b) {
    if(a>b) return a;
    return b;
}
int main() {
    cin >> a >> b;
    a--;
    a/=2;
    a = M(a*(a+1)-2,0);
    b/=2;
    b = M(b*(b+1)-2,0);
    cout<<b-a;
}