#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e10

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;


struct st {
  ll y, x, cost;
};

struct comp {
  bool operator()(st a, st b) {
    return a.cost > b.cost;
  }
};

ll n,tc;
ll cost[133][133], D[133][133];
ll dx[] = {0,0,1,-1};
ll dy[] = {1,-1,0,0};

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  while(1) {
    tc++;
    priority_queue<st, vector<st>, comp> Q;

    cin >> n;
    if(n == 0) break;

    for1(0, n) {
      for1j(0, n) {
        cin >> cost[i][j];
        D[i][j] = INF;
      }
    }

    Q.push({0, 0, 0});

    while(!Q.empty()) {
      st crt = Q.top(); Q.pop();

      if (D[crt.y][crt.x] < crt.cost + cost[crt.y][crt.x])
        continue;
      
      D[crt.y][crt.x] = crt.cost + cost[crt.y][crt.x];

      for(int d=0; d< 4; d++) {
        ll ny = crt.y + dy[d];
        ll nx = crt.x + dx[d];

        if(ny < 0 || ny >=n || nx < 0 || nx >=n) continue;

        if(D[ny][nx] > D[crt.y][crt.x] + cost[ny][nx]) {
          Q.push({ny, nx, D[crt.y][crt.x]});
        }
      }
    }

    cout << "Problem " << tc << ": " << D[n-1][n-1] << "\n";
  }




}