#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)

using namespace std;
typedef long long ll;
ll T, N, ar[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> T;
    while(T--) {
        cin >> N;
        for1(0, N) {
            cin >> ar[i];
        }
        bool chk = false;
        for1(0, N) {
            if(ar[i] > i) {
                chk = true;
            }
            for1j(0, i) {
                if(ar[j] >= ar[i]) {
                    ar[j]++;
                }
            }
        }
        if(chk) {
            cout << "IMPOSSIBLE\n";
        }
        else {
            for1(0, N) {
                cout << ar[i] + 1 << " ";
            }
            cout << "\n";
        }
    }
    
}