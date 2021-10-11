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

int N, M, a, b,ans;
int u[110];

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
  cin >> N >> M;
  init(N);
  while(M--) {
    cin >> a >> b;
    for1(a, b) {
      uni(i,i+1);
    }
  }
  for1(1, N+1) {
    if(u[find(i)] == i) ans++;
  }
  cout << ans;
}