#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int ar[1100000];
int b[1100000];
map <int, int> m;
int n;
int cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int x=0; x<n; x++) {
        cin >> ar[x];
        b[x] = ar[x];
    }
    sort(b,b+n);
    m[b[0]] = cnt++;
    for(int x=1; x<n; x++) {
        if(b[x] != b[x-1]) {
            m[b[x]] = cnt++;
        }
    }

    for(int x=0; x<n; x++) {
        cout << m[ar[x]] << " ";
    }
    
}