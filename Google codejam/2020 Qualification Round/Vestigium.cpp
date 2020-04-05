#include <iostream>
using namespace std;
int tc,n;
int ar[110][110];
int ans[3];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    for(int t = 1; t<=tc; t++) {
        cin >> n;
        for(int x=0; x<3; x++) ans[x] =0;
        for(int y=0; y<n; y++) {
            for(int x=0; x<n; x++) {
                cin >> ar[y][x];
            }
        }

        for(int y=0; y<n;y++) ans[0]+=ar[y][y];

        for(int y=0;y<n;y++) {
            bool check = false;
            for(int x1=0; x1<n; x1++) {
                for(int x2=x1+1;x2<n; x2++) {
                    if(ar[y][x1] == ar[y][x2]) check= true;
                }
            }
            if(check) ans[1]++;
        }
        for(int y=0;y<n;y++) {
            bool check = false;
            for(int x1=0; x1<n; x1++) {
                for(int x2=x1+1;x2<n; x2++) {
                    if(ar[x1][y] == ar[x2][y]) check= true;
                }
            }
            if(check) ans[2]++;
        }
        cout << "Case #"<<t<<": ";
        for(int x=0; x<3; x++) cout<<ans[x] << " ";
        cout << "\n";
    }
}