#include <iostream>
using namespace std;
int T;
int L,R,ans,cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        cin >> L >> R;
        ans = 0;
        cnt = 0;
        for(int x=L; x<=R; x++) {
            cnt = 0;
            for(int y =1; y*y<=x; y++) {
                if(x%y == 0) {
                    cnt++;
                    if(y*y != x) cnt++;
                }
            }
            if(ans < cnt) ans = cnt;
        }
        cout << ans << "\n";
    }
}