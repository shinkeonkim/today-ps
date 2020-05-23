#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll N, K, s=0;
ll ar[110000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    for(int x=0; x<N; x++) {
        cin >> ar[x];
        s += ar[x];
    }
    if(s > K) {
        ll k = 0;
        for(int x=0; x<N; x++) {
            k+=ar[x];
            if(k > K) {
                cout << x+1;
                break;
            }
        }
    }
    else {
        K-=s;
        ll k = 0;
        for(int x=N-1; x>-1; x--) {
            k+=ar[x];
            if(k > K) {
                cout << x+1;
                break;
            }
        }
    }

        
}