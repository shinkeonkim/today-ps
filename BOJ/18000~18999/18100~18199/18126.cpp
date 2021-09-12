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
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

struct st {
  ll e, cost;
};

vector <st> adj[5500];
ll parent[5500];
ll dis[5500];

ll N, a, b, c;

void dfs(ll cur, ll parent, ll d) {
  dis[cur] = d;
  for(st node : adj[cur]) {
    if(node.e != parent) {
      dfs(node.e, cur, d + node.cost);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0); 

  cin >> N;

  for1(0, N - 1) {
    cin >> a >> b >> c;
    adj[a].push_back({ b, c});
    adj[b].push_back({ a, c});
  }

  dfs(1, 0, 0);

  ll mx = 0;
  for1(1, N+1) {
    mx = max(mx, dis[i]);
  }
  cout << mx;
}