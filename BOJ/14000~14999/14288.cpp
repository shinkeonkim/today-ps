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

ll N, M, q, a, b;
ll supervisor[110000];
ll s[110000], e[110000];
llv1 adj[110000];

ll lazy[440000], tree[440000];

void update(int start, int end, int left, int right, int idx, ll diff) {
  if(lazy[idx] != 0) {
    tree[idx] += (end-start+1)*lazy[idx];
    if(start!=end) {
        lazy[idx*2] += lazy[idx];
        lazy[idx*2+1] += lazy[idx];
    }
    lazy[idx] = 0;
  }

  if(end < left || right < start) return ;

  if(left <= start && end <= right) {
    tree[idx]+=(end-start+1)*diff;
    if(start!=end) {
      lazy[idx*2] += diff;
      lazy[idx*2+1] += diff; 
    }
    return ;
  }

  update(start,(start+end)/2,left,right,idx*2,diff);
  update((start+end)/2+1,end,left,right,idx*2+1,diff);

  tree[idx] = tree[idx*2]+tree[idx*2+1];
}

ll query(int start, int end, int left, int right, int idx) {
  if(lazy[idx] != 0) {
    tree[idx] += (end-start+1)*lazy[idx];
    if(start!=end) {
      lazy[idx*2] += lazy[idx];
      lazy[idx*2+1] += lazy[idx];
    }
    lazy[idx] = 0;
  }

  if(right < start || end < left) return 0;
  if(left <= start && end <= right) return tree[idx];
  return query(start,(start+end)/2,left,right,idx*2)+query((start+end)/2+1,end,left,right,idx*2+1);
}


int cnt = 1;
void dfs(int idx) {
  s[idx] = cnt;
  foreach(adj[idx]) {
    cnt++;
    dfs(i);
  }
  e[idx] = cnt;
}


int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N >> M;
  for1(1, N+1) {
    cin >> supervisor[i];
    if(supervisor[i] != -1) {
      adj[supervisor[i]].pb(i);
    }
  }

  dfs(1);

  while(M--) {
    cin >> q >> a;
    if(q == 1) {
      cin >> b;
      update(1, N, s[a], e[a], 1, b);
    } else {
      cout << query(1, N, s[a], s[a], 1) << "\n";
    }
  }
}