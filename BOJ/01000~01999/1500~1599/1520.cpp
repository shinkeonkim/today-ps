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

ll N, M;
ll ar[550][550];
ll D[550][550];
ll dx[] = {1,0,-1,0};
ll dy[] = {0,1,0,-1};

ll dfs(ll Y, ll X) {
    if(Y == N-1 && X == M-1) return 1;
    if(D[Y][X] != -1) return D[Y][X];

    D[Y][X] = 0;
    for1(0, 4) {
        ll nextX = X + dx[i];
        ll nextY = Y + dy[i];

        if(nextX < 0 || nextY < 0 || nextX >= M || nextY >=N) continue;

        if(ar[Y][X] > ar[nextY][nextX]) {
            D[Y][X] += dfs(nextY, nextX);
        }
    }
    return D[Y][X];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, N) {
        for1j(0, M) {
            cin >> ar[i][j];
            D[i][j] = -1;
        }
    }


    cout << dfs(0, 0);
}