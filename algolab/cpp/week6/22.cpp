#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int tc,a,b,c;
ll A[110][110];
ll B[110][110];
ll ans[110][110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        cin >> a >> b >> c;
        for(int y=0; y<a; y++)
            for(int x=0; x<c; x++)
                ans[y][x] = 0;
        
        for(int y=0;y<a; y++) {
            for(int x=0; x<b; x++) {
                cin >> A[y][x];
            }
        }
        for(int y=0; y<b; y++) {
            for(int x=0; x<c; x++) {
                cin >> B[y][x];
            }
        }
        for(int x=0; x<a; x++) {
            for(int y=0; y<b; y++) {
                for(int z=0; z<c; z++) {
                   ans[x][z] += A[x][y] * B[y][z]; 
                }
            }
        }
        for(int y=0;y<a; y++) {
            for(int x=0; x<c; x++) {
                cout << ans[y][x] << " ";
            }
            cout << "\n";
        }
    }    
}