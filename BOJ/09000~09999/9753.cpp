#include <iostream>
#define MX 55000
using namespace std;
typedef long long ll;
ll T,N;
int ar[MX],cnt;
bool chk[MX];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int x=2; x<=MX; x++) {
        if(!chk[x]) {
            ar[cnt++]=x;
            for(int y=x+x;y<=MX; y+=x) chk[y] = true;
        }
    }
    cin >> T;
    while(T--) {
        cin >> N;
        int ans = 123456789;
        for(int x=0;x<cnt; x++) {
            for(int y=x+1; y<cnt; y++) {
                if(ar[x]*ar[y] >= N && ans > ar[x]*ar[y]) {
                    ans = ar[x]*ar[y];
                }
            }
        }
        cout<<ans<<"\n";
    }
}