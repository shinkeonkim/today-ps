#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
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
typedef vector <vector <ll>> llv2;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

int V, E, a,b;
iv2 edge(22000);
iv2 edgePrime(22000);
iv2 scc;

bool visited[22000];
bool visitedPrime[22000];
int finishTimeNode[22000];
int current;


int not_num(int num) {
  return num > V ? num - V : num + V;
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

void reverse_dfs(int node, iv1& currentScc) {
  currentScc.pb(node);
  visitedPrime[node] = true;
  foreach(edgePrime[node]) {
    if(!visitedPrime[i]) {
      reverse_dfs(i, currentScc);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  cin >> V >> E;

  for1(0, E) {
    cin >> a >> b;
    if(a < 0) a = -a + V;
    if(b < 0) b = -b + V;

    edge[not_num(a)].pb(b);
    edgePrime[b].pb(not_num(a));
    edge[not_num(b)].pb(a);
    edgePrime[a].pb(not_num(b));
  }

  for1(1,2*V+1) {
    if(!visited[i]) {
      dfs(i);
    }
  }

  for(int t = 2*V; t >= 1; t--) {
    int r = finishTimeNode[t];
    if(!visitedPrime[r]) {
      iv1 currentScc;
      reverse_dfs(r, currentScc);
      sort(currentScc.begin(), currentScc.end());
      scc.push_back(currentScc);
    }
  }

  sort(scc.begin(), scc.end());

  foreach(scc) {
    map<int, int> m;
    foreachj(i) {
      m[j] = 1;
      if(m.find(not_num(j)) != m.end()) {
        cout << 0;
        return 0;
      }
    }
  }
  cout << 1 << '\n';

  foreach(scc) {
    foreachj(i) {
      cout << j << ' ';
    }
    cout << '\n';
  }
}

