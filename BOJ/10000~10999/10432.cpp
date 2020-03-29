#include <iostream>
using namespace std;
int N;
int T,ans;
int ar[12];
int main() {
    cin >> N;
    while(N--) {
        cin >> T;
        ans = 0;
        for(int x=0; x<12; x++) cin >> ar[x];
        for(int S =1; S <11; S++) {
            for(int E = S; E < 11; E++) {
                bool chk = true;
                for(int z = S; z <=E; z++) {
                    if(ar[S-1] >= ar[z] || ar[E+1] >=ar[z]) {
                        chk = false;
                        break;
                    }
                }
                if(chk) ans++;
            }
        }
        cout<<T<<" "<<ans<<"\n";
    } 
}