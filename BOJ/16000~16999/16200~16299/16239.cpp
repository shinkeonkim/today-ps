#include <iostream>
using namespace std;
int a,b,S;
int main() {
    cin >> a >> b;
    S = b*(b-1)/2;
    for(int x=1; x<b; x++) {
        cout<<x<<"\n";
    }
    cout << a-S;
}