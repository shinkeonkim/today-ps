#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e18
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,M;
string ar[55];
ll D[55][55];
ll mn[2550][2550];
ll ans;
ll dx[] = {0,0,1,-1};
ll dy[] = {1,-1,0,0};

void dfs(ll sy, ll sx, ll y, ll x, ll w) {
    mn[sy*N + sx][y*N+x] = min(mn[sy*N + sx][y*N+x], w); 
    if(D[y][x] <= w) return;
    D[y][x] = w;
    for1(0, 4) {
        ll nextX = x + dx[i];
        ll nextY = y + dy[i];

        if(nextX < 0 || nextY < 0 || nextY >=N || nextX >=M) continue;
        if(ar[nextY][nextX] == 'L' && D[nextY][nextX] > w + 1) {
            dfs(sy, sx, nextY, nextX, w+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, N) cin >> ar[i];
    for1(0, N*M) {
        for1j(0, N*M) {
            mn[i][j] = INF;
        }
    }

    for1(0, N) {
        for1j(0, M) {
            if(ar[i][j] == 'L') {
                for(int y = 0; y < N; y++) {
                    for(int x=0; x < M; x++) {
                        D[y][x] = INF;
                    }
                }
                dfs(i, j, i, j, 0ll);
            }
        }
    }

    for1(0, N*M) {
        for1j(0, N*M) {
            if(mn[i][j] != INF)
                ans = max(ans, mn[i][j]);
        }
    }

    cout << ans;
}