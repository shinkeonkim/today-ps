#include <iostream>

using namespace std;

int f(int a, int b) {
    return b>0?f(b,a%b):a;
}

int main() {
    int a, b;
    cin >> a >> b;
    int k = f(a,b);
    cout << k * (a/k + b/k -1);
}