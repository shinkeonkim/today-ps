#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N;
int D[3300][6600];

void f(int Y, int X, int size) {
    if(size == 3) {
        D[Y][X] = D[Y+1][X-1] = D[Y+1][X+1] = 1;
        for1(-2,3) {
            D[Y+2][X+i] = 1;
        }
    }
    else {
        f(Y,X,size/2);
        f(Y+size/2, X-(size/2), size/2);
        f(Y+size/2, X+(size/2), size/2);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
   f(0,N-1,N);
    for(int y=0; y<N; y++) {
        for(int x=0; x<N*2; x++) {
            if(D[y][x] == 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}