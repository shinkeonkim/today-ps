#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MOD 1000000000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N, K;
ll D[11000][5500];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;

    for(int i = 1; i <= N+K-1; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1) D[i][j] = i;
            else if(i == j) D[i][j] = 1;
            else D[i][j] = (D[i-1][j-1] + D[i-1][j]) %MOD;
        }
    }
    cout << D[N+K-1][N];
}