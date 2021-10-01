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



int N, M, V;
vector<int> adj[1100];
bool check[1100];

int a, b;

void dfs(int crt) {
  cout << crt << ' ';
  if(!check[crt]) {
    check[crt] = 1;

    for(auto i: adj[crt]) {
      if(!check[i]) {
        dfs(i);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  cin >> N >> M >> V;

  for1(0, M) {
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);    
  }

  for1(1, N+1) sort(adj[i].begin(), adj[i].end());

  dfs(V);

  cout << '\n';

  fill(check, check+1100, false);

  queue <int> Q;
  Q.push(V);

  while(!Q.empty()) {
    int crt = Q.front(); Q.pop();

    if(!check[crt]) {
      cout << crt << ' ';
      check[crt] = 1;
      for(auto i: adj[crt]) {
        if(!check[i]) {
          Q.push(i);
        }
      }
    }
  }
}