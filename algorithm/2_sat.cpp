#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k) 
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MX 220000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef vector <vector <ll> > llv2;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

struct two_sat {
  int v, e;
  iv2 edge;
  iv2 edgePrime;
  iv2 scc;
  bool visited[MX];
  bool visitedPrime[MX];
  int finishTimeNode[MX];
  int current;

  two_sat(int _v, int _e) : v(_v), e(_e) {
    int mx = 2*_v+1;
    edge.assign(mx, iv1(0));
    edgePrime.assign(mx, iv1(0));
    scc.clear();
    fill(visited, visited+mx, 0);
    fill(visitedPrime, visitedPrime+mx, 0);
    fill(finishTimeNode, finishTimeNode+mx, 0);
    current = 0;
  }

  int not_num(int num) {
    return num > v ? num - v : num + v;
  }

  void add_edge(int a, int b) {
    if(a < 0) a = -a + v;
    if(b < 0) b = -b + v;

    edge[not_num(a)].pb(b);
    edgePrime[b].pb(not_num(a));
    edge[not_num(b)].pb(a);
    edgePrime[a].pb(not_num(b));
  }

  void set_scc() {
    for1(1, 2*v+1) {
      if(!visited[i]) {
        dfs(i);
      }
    }
    for(int t = 2*v; t >= 1; t--) {
      int r = finishTimeNode[t];
      if(!visitedPrime[r]) {
        iv1 current_scc;
        reverse_dfs(r, current_scc);
        sort(current_scc.begin(), current_scc.end());
        scc.push_back(current_scc);
      }
    }

    sort(scc.begin(), scc.end());
  }  

  void dfs(int node) {
    visited[node] = true;
    foreach(edge[node]) {
      if(!visited[i]) {
        dfs(i);
      }
    }
    finishTimeNode[++current] = node;
  }

  void reverse_dfs(int node, iv1& current_scc) {
    current_scc.pb(node);
    visitedPrime[node] = true;
    foreach(edgePrime[node]) {
      if(!visitedPrime[i]) {
        reverse_dfs(i, current_scc);
      }
    }
  }

  bool is_valid() {
    foreach(scc) {
      map<int, int> m;
      foreachj(i) {
        m[j] = 1;
        if(m.find(not_num(j)) != m.end()) {
          return false;
        }
      }
    }
    return true;
  }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  while(1) {
    int e, v;
    cin >> e >> v;

    if(v == 0 && e == 0) break;
    two_sat s(v, e);

    for1(0, e) {
      int a, b;
      cin >> a >> b;
      s.add_edge(a, b);
    }

    s.set_scc();

    cout << (s.is_valid() ? 1 : 0) << '\n';
  }
}

