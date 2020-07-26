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

ll tc;
ll K, W,H;
ll s_x,s_y;
ll D[1100][1100];
ll ar[1100][1100];
string a;
int chk[33];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

struct st {
    ll Y,X;
    ll t;

};

struct compare{
    bool operator()(st a, st b){
        return a.t > b.t;
    }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> tc;
    while(tc--) {
        ll ans = INF;
        cin >> K >> W >> H;
        for1(0,K) {
            char t1;
            int k;
            cin >> t1 >> k;
            chk[t1-65] = k;
        }

        for(int y = 0; y < H; y++) {
            cin >> a;
            for(int x=0; x<W; x++) {
                D[y][x] = INF;
                if(a[x] - 65 == 4) {
                    s_x = x;
                    s_y = y;
                    ar[y][x] = 0;
                }
                else {
                    ar[y][x] = chk[a[x] - 65];
                }
            }
        }

        priority_queue <st, vector<st>, compare> Q;
        Q.push({s_y, s_x, 0});
        while(!Q.empty()) {
            st Z  = Q.top();
            Q.pop();
            if(D[Z.Y][Z.X] <= Z.t) continue;


            D[Z.Y][Z.X] = Z.t;
            if(Z.Y == 0 || Z.Y == H-1 || Z.X == 0 || Z.X == W-1) {
                if(Z.t <ans) ans = Z.t;
                continue;
            }

            for(int d = 0; d < 4; d++) {
                int nextX = Z.X + dx[d];
                int nextY = Z.Y + dy[d];

                if(nextY < 0 || nextX < 0 || nextY >= H || nextX >= W) {
                    continue;
                }

                if(D[nextY][nextX] > Z.t + ar[nextY][nextX]) {
                    Q.push({nextY,nextX,Z.t + ar[nextY][nextX]});
                }
            }
        }
        cout << ans <<"\n";
    }
}

