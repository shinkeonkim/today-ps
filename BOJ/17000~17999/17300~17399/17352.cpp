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

int u[330000];

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
  int n, a, b;
  cin >> n;

  init(n);
  for1(0, n-2) {
    cin >> a >> b;
    uni(a, b);
  }
  cout << find(1);
  for1(2, n+1) {
    if(find(i-1) != find(i)) {
      cout << " " << find(i);
      break;
    }
  }
}