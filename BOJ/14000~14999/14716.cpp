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

ll N, M, ans;
ll D[330][330];
ll dx[] = {0,0,1,1,1,-1,-1,-1};
ll dy[] = {1,-1,1,0,-1,1,0,-1};

void dfs(ll Y, ll X) {
    D[Y][X] = 0;
    for1(0, 8) {
        ll nextY = Y + dy[i];
        ll nextX = X + dx[i];

        if(nextX < 0 || nextY < 0 || nextX >=M || nextY >=N) continue;
        if(D[nextY][nextX] == 1) dfs(nextY, nextX);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, N) {
        for1j(0, M) {
            cin >> D[i][j];
        }
    }

    for1(0, N) {
        for1j(0, M) {
            if(D[i][j] == 1) {
                ans++;
                dfs(i, j);
            }
        }
    } 
    cout << ans;
}