#include <iostream>
using namespace std;
typedef long long ll;
ll tc,n,H,M,S,h,m,s,total;
ll ans[4];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> n;
        total = 0;
        for(int i = 0; i < n; i++) {
            cin >> H >> M >> S >> h >> m >> s;
            total += (h*3600 + m*60 + s)-(H*3600 + M*60 + S);
        }
        ans[0] = total / (3600*24);
        ans[1] = (total % (3600*24)) / 3600;
        ans[2] = ((total % (3600*24)) % 3600) / 60;
        ans[3] = total % 60;
        for(int i=0; i <4; i++) cout << ans[i] <<" ";
        cout << "\n";
    }
}