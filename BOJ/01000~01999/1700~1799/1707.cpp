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

ll tc;
ll V, E, a, b;
ll chk[22000];
bool ans;

void dfs(int crt, int color, llv1* adj) {
  if(chk[crt] != -1 && chk[crt] != color) {
    ans = 0;
    return;
  }

  chk[crt] = color;

  foreach(adj[crt]) {
    ll nxt = i;
    if(crt == nxt) continue;
    if(chk[nxt] != -1 && chk[nxt] == color) {
      ans = 0;
      return;
    }
    if(chk[nxt] == -1) {
      dfs(nxt, 1 - color, adj);
    }
  }

}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  cin >> tc;
  while(tc--) {
    cin >> V >> E;

    llv1 adj[V+1];
    fill(chk, chk+V+1, -1);
    ans = 1;

    for1(0, E) {
      cin >> a >> b;
      adj[a].pb(b);
      adj[b].pb(a);
    }


    for1(1, V+1) {
      if(chk[i] == -1) {
        dfs(i, 0, adj);
      }
    }

    cout << (ans ? "YES" : "NO") << "\n";
  }
}