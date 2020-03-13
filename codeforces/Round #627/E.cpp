#include <iostream>
#include <algorithm>
using namespace std;
int N, H,L,R,ans;
int D[2200][2200];
int ar[2200];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> H >> L >> R;
    for(int x= 1; x<=N; x++) cin >> ar[x];

    for(int x=0; x<=N; x++) {
        for(int y=0; y<H; y++) D[x][y] = -1; 
    }

    D[0][0] = 0;
    for(int x=1; x<=N; x++) {
        for(int y=0;y<H; y++) {
            if(D[x-1][y] >= 0) {
                if(L <= ((y+ar[x]) %H) &&  ((y+ar[x]) %H) <=R) {
                    D[x][(y+ar[x]) %H] = max(D[x][(y+ar[x]) %H],D[x-1][y]+1); 
                }
                else {
                     D[x][(y+ar[x]) %H] = max(D[x][(y+ar[x]) %H],D[x-1][y]); 
                }
                if(L <= ((y+ar[x]-1) %H) &&  ((y+ar[x]-1) %H) <=R) {
                    D[x][(y+ar[x]-1) %H] = max(D[x][(y+ar[x]-1) %H],D[x-1][y]+1); 
                }
                else {
                    D[x][(y+ar[x]-1) %H] = max(D[x][(y+ar[x]-1) %H],D[x-1][y]); 
                }
            }
        }
    }
    for(int x=0; x<=N; x++) {
        for(int y=0; y<H; y++) {
            ans = max(ans,D[x][y]);
        }
    }
    cout<<ans;


}