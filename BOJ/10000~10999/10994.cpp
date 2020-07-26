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
int D[550][550];
void f(int Y, int N) {
    if(N<0) return;
    f(Y+2, N-1);
    for(int i=Y; i<=Y+4*(N-1); i++) {
        D[i][Y] = 1;
        D[Y][i] = 1;
        D[i][Y+4*(N-1)] = 1;
        D[Y+4*(N-1)][i] = 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    f(1,N);
    for(int y=1; y<=4*(N-1)+1; y++) {
        for(int x=1; x<=4*(N-1)+1; x++) {
            if(D[y][x]) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}