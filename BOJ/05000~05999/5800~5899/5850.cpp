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

ll N, y, x;
ll D[110][110];
ll ans;
ll dx[] = {0,0,1,-1};
ll dy[] = {1,-1,0,0,};

void dfs(int Y, int X) {
    D[Y][X] = 2;
    for(int d = 0; d < 4; d++) {
        ll nextX = X + dx[d];
        ll nextY = Y + dy[d];

        if(nextX < 0 || nextY < 0 || nextX > 101 || nextY > 101) {
            continue;
        }

        if(D[nextY][nextX] == 1){
            continue;
        }
        if(D[nextY][nextX] == 0) {
            dfs(nextY, nextX);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    while(N--) {
        cin >> y >> x;
        D[y][x] = 1;
    }

    dfs(0,0);
    
    for(int x = 1; x<=100; x++) {
        for(int y=1; y<=100; y++) {
            if(D[y][x] == 1) {
                for(int d = 0; d<4; d++) {
                    if(D[y+dy[d]][x+dx[d]] == 2) ans++;
                }
            }
        }
    }
    cout << ans;
     
    
}