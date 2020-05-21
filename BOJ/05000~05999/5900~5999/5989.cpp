#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll X,Y,N,ax,ay,bx,by,ans;
bool check[330][330];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> X >> Y >> N;
    for(int t = 0; t < N; t++) {
        cin >> ax >> ay >> bx >> by;
        for(int x =ax; x<=bx; x++) {
            for(int y=ay;y<=by; y++) {
                check[x][y] = true;
            }
        }
    }

    for(int x=0; x<=X; x++) {
        for(int y=0; y<=Y; y++) {
            if(check[x][y]) ans++;
        }
    }
    cout << ans;
    
}
