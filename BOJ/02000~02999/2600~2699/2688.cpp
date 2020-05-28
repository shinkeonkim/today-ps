#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

ull T,A,ans;
ull D[110][11];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    for(int x=0; x<10; x++) D[1][x] = 1;

    for(int y=2; y<=100; y++) {
        ull k =0;
        for(int x=9; x>-1; x--) {   
            k += D[y-1][x];
            D[y][x] = k;
        }
    }

    cin >> T;
    while(T--) {
        cin >> A;
        ans = D[A][0];
        for(int x=1; x<10; x++) {
            ans+=D[A][x]; 
        }
        cout << ans << "\n";
    }
}