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

int u[1100000];

void init(int size) {
  for(int x=1; x<=size; x++) {
    u[x] = x;
  }
}

int find(int k) {
  if(u[u[k]] == u[k]) return u[k];
  else return u[k]=find(u[k]);
}

void uni(int a, int b) {
  a = find(a);
  b = find(b);
  if(a < b) u[b] = a;
  else u[a] = b; 
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  int tc, n, k, q, a, b;

  cin >> tc;
  for1(0, tc) {
    cin >> n >> k;
    init(n);
    for1j(0, k) {
      cin >> a >> b;
      uni(++a, ++b);
    }
    cin >> q;
    cout << "Scenario " << i + 1 <<":\n";
    while(q--) {
      cin >> a >> b;
      cout << (find(++a) == find(++b)) << "\n";
    }
    cout << "\n";
  }
}
