#include <iostream>
using namespace std;
long long a,b,c;
int main() {
    cin >> a >> b >> c;
    if(a < c || b < c) {
        cout << 0;
    }
    else {
        long long s = (a/c) * (b/c);
        long long in = max(0ll, (a/c-2)) * max((b/c-2), 0ll);
        cout << s - in; 
    } 
}