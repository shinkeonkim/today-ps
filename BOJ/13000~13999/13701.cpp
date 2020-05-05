#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

uint s[1048590];
int a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(cin >> a) {
        if((s[a/32] & (1<<(a%32))) > 0) {
            continue;
        }
        s[a/32] |= (1<<(a%32));
        cout << a <<" ";
    }
    
}