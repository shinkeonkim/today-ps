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

struct Query {
  ll k, q, b, c, idx, ans;
};

bool compare1(Query a, Query b) {
  if(a.k != b.k) return a.k < b.k;
  return a.q < b.q;
}

bool compare2(Query a, Query b) {
  return a.idx < b.idx;
}

ll N, Q;
ll ar[110000];

ll tree[440000];
ll lazy[440000];
Query q[110000];

void update(ll s, ll e, ll left, ll right, ll idx, ll diff) {
  if(lazy[idx] != 0) {
    tree[idx] += (e-s+1)*lazy[idx];

    if(s!=e) {
      lazy[idx*2] += lazy[idx];
      lazy[idx*2+1] += lazy[idx];
    }
    lazy[idx] = 0;
  }

  if(e < left || right < s) return;
  if(left <= s && e <= right) {
    tree[idx] += (e-s+1)*diff;
    if(s!=e) {
      lazy[idx*2] += diff;
      lazy[idx*2+1] += diff;
    }
    return;
  }
  update(s, (s+e)/2, left, right, idx*2, diff);
  update((s+e)/2+1, e, left, right, idx*2+1, diff);

  tree[idx] = tree[idx*2] + tree[idx*2+1];
}

ll query(ll s, ll e, ll left, ll right, ll idx) {
  if(lazy[idx] != 0) {
    tree[idx] += (e-s+1)*lazy[idx];

    if(s!=e) {
      lazy[idx*2] += lazy[idx];
      lazy[idx*2+1] += lazy[idx];
    }
    lazy[idx] = 0;
  }

  if(e < left || right < s) return 0;
  if(left <= s && e <= right) return tree[idx];
  return query(s, (s+e)/2, left, right, idx*2) + query((s+e)/2+1, e, left, right, idx*2+1);
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  ll cnt = 1;

  cin >> N;
  for1(1, N+1) {
    cin >> ar[i];
    update(1, N, i, i, 1, ar[i]);
  }

  cin >> Q;

  for1(0, Q) {
    cin >> q[i].q;
    q[i].idx = i;
    if(q[i].q == 1) {
      cin >> q[i].b >> q[i].c;
      q[i].k = cnt++;
    } else {
      cin >> q[i].k >> q[i].b >> q[i].c;
    }
  }

  sort(q, q+Q, compare1);

  for1(0, Q) {
    if(q[i].q == 1) {
      ll diff = q[i].c - ar[q[i].b];
      ar[q[i].b] = q[i].c;
      update(1, N, q[i].b, q[i].b, 1, diff);
    } else {
      q[i].ans = query(1, N, q[i].b, q[i].c, 1);
    }
  }

  sort(q, q+Q, compare2);

  for1(0, Q) {
    if(q[i].q == 2) {
      cout << q[i].ans << "\n";
    }
  }
}