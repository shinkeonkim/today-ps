#include <iostream>
using namespace std;
int N,s,e,ans;
int ar[110];
int main() {
    cin >> N;
    for(int x =0; x < N; x++) {
        cin >> ar[x];
    }
    while(s<=e && e<N) {
        if(ar[e+1] >= ar[e]) {
            e++;
        }
        else {
            if(ans < e-s +1 ) {
                ans = e-s+1;
            }
            s=e=e+1;
        }
    }
    cout << ans;
}