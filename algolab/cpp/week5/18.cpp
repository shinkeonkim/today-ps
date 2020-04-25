#include <iostream>
using namespace std;

int tc;
int m,n;
int a[110][110];
int b[110][110];

int main() {
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> m >> n;
        for(int y=0; y<m; y++) {
            for(int x=0; x<n; x++) {
                cin >> a[y][x];
            }
        }

        for(int y=0; y<m; y++) {
            for(int x=0; x<n; x++) {
                cin >> b[y][x];
            }
        }

        for(int y=0; y<m; y++) {
            for(int x=0; x<n; x++) {
                cout << a[y][x] + b[y][x] <<" ";
            }
            cout<<"\n";
        }
    }
}