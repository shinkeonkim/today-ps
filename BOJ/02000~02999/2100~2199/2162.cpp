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

struct point{
  ll x;
  ll y;
  bool operator <(point b){
    if(x != b.x) {
        return x < b.x;
    }
    return y < b.y;
  };
  bool operator <=(point b){
    if(y == b.y && x == b.x) return true;
    if(x != b.x) {
        return x <= b.x;
    }
    return y <= b.y;
  };
  bool operator ==(point b) {
    return y == b.y && x == b.x;
  }
};

ll N, ans, mx;
ll u[3300], cnt[3300];
point ar[3300][2];
llv1 adj[3300];

ll ccw(point p1, point p2, point p3) {
  ll ret = 1ll * (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
  return ret >0 ?1:(ret<0?-1:0);
}

void swap_point(point &a, point &b) {
  point tmp = a;
  a = b;
  b = tmp;
}

bool is_intersected(point &a, point &b, point &c, point &d) {
  ll lineAB = ccw(a,b,c) * ccw(a,b,d);
  ll lineCD = ccw(c,d,a) * ccw(c,d,b);
  if(lineAB == 0 && lineCD == 0) {
    if(b < a) swap_point(a,b);
    if(d < c) swap_point(c,d);
    return (c<=b && a<=d);
  }
  return lineAB <= 0 && lineCD <= 0;
}

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
  cin >> N;
  for1(1, N+1) {
    cin >> ar[i][0].x >> ar[i][0].y >> ar[i][1].x >> ar[i][1].y;
  }

  init(N);

  for1(1, N+1) {
    for1j(1, N+1) {
      if(i == j) continue;
      if(is_intersected(ar[i][0], ar[i][1], ar[j][0], ar[j][1])) {
        uni(i, j);
      }
    }
  }

  for1(1, N+1) {
    cnt[find(i)]++;
  }

  for1(1, N+1) {
    if(cnt[i] > 0) ans++;
    mx = max(mx, cnt[i]);
  }
  cout << ans << "\n" << mx << "\n";
}