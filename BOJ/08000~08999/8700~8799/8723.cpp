#include <iostream>
#include <algorithm>
using namespace std;
int ar[3];
int main() {
    for(int x =0; x<3; x++) cin >> ar[x];
    sort(ar,ar+3);
    if(ar[0] == ar[1] && ar[1] == ar[2]) cout << 2;
    else {
        if(ar[2] * ar[2] == ar[0] * ar[0] + ar[1]*ar[1] && ar[2] < ar[0] + ar[1]) {
            cout << 1;
        }
        else {
            cout<< 0;
        }
    }
}