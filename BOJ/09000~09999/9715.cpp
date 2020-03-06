#include <iostream>
#include <cstdio>
using namespace std;
int T,a,b,ans;
int ar[55][55];
int main() {
    cin >> T;
    while(T--) {
        ans = 0;
        cin >> a >> b;
        for(int x = 0; x<a+2; x++) {
            for(int y = 0;y<b+2; y++) {
                ar[x][y] = 0;
            }
        }
        for(int y=1; y<=a; y++) {
            for(int x=1; x<=b; x++) {
                scanf("%1d",&ar[y][x]);
                if(ar[y][x] > 0) ans+=2;
            }
        }
        for(int y=1;y<=a; y++) {
            for(int x=1; x<=b; x++) {
                if(ar[y-1][x] < ar[y][x]) ans += ar[y][x] - ar[y-1][x];
                if(ar[y+1][x] < ar[y][x]) ans += ar[y][x] - ar[y+1][x];
                if(ar[y][x-1] < ar[y][x]) ans += ar[y][x] - ar[y][x-1];
                if(ar[y][x+1] < ar[y][x]) ans += ar[y][x] - ar[y][x+1];
            }
        }
        cout<<ans<<"\n";

    }
}