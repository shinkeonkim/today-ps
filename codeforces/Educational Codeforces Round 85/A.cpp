#include <iostream>
using namespace std;
int T,N;
int a[1100];
int b[1100];
bool chk;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        chk = true;
        cin >> N;
 
        for(int x=0; x<N; x++) {
            cin >> a[x] >> b[x];
        }
        for(int x=0; x<N; x++) {
            for(int y=x+1; y<N; y++) {
                if(a[x] > a[y]) chk = false;
                if(b[x] > b[y]) chk = false;
                int k1 = a[y] - a[x];
                int k2 = b[y] - b[x];
                if(k2 > k1 && k1 >= 0 && k2 >=0) {
                    chk = false;
                }
            }
            if(a[x] < b[x]) chk = false;
        }
 
        if(chk) cout<<"YES\n";
        else cout<<"NO\n";
    }
}