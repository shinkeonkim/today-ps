#include <iostream>
using namespace std;
char ar[2200];
int a,b;
int main() {
    cin >> ar;
    int z = ar[0];
    int z2 = ar[0];
    while(z > 0) {
        a = a ^ (z & 1);
        z = z >> 1;
    }
    z2 = z2 >> 1; 
    while(z2>0) {
        b = b ^ (z2&1);
        z2 = z2 >> 1;
    }
    cout << (a&&b);
}