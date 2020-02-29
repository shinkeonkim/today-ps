#include <iostream>
using namespace std;
int T,N;
int S,a;
int main() {
    cin >> T;
    while(T--) {
        cin >> N;
        int S = 0;
        int ans = -9999999;
        for(int x = 0; x <N; x++) {
            cin >> a;
            if(a>ans) ans = a;
            S += a;
            if(S > ans) ans = S;

            if(S < 0) S = 0;
        }
        cout << ans << "\n";
    }
} 