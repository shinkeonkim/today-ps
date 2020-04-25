#include <iostream>
using namespace std;
int tc;
int k,n;
int ar[330],S,cnt;
int ans[330];
int main() {
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        for(int x=0; x<n; x++) cin >> ar[x];
        cin >> k;
        S = cnt = 0;
        for(int x=0; x<k; x++) S+=ar[x];
        ans[cnt++]=S;
        for(int x=k; x<n; x++) {
            S += ar[x];
            S -= ar[x-k];
            ans[cnt++]=S;
        }
        cout <<cnt << " ";
        for(int x=0; x<cnt; x++) {
            cout << ans[x] / k <<" ";
        }
        cout<<"\n";
    }
}