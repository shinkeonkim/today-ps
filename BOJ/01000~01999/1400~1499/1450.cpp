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

ll N, C;
llv1 V;

llv1 V1;
llv1 V2;

ll mid, ans;
bool chk[33];

void g(bool flag) {
  ll s = 0;
  for1(0, N) {
    if(chk[i]) {
      s += V[i];
    }
  }
  if(flag) V1.pb(s);
  else V2.pb(s);
}

void f(int start, int end, int crt, bool flag) {
  if(start > end) return;
  if(crt == end) {
    for1(0, 2) {
      chk[crt] = i;
      g(flag);
    }
  }
  else {
    for1(0, 2) {
      chk[crt] = i;
      f(start, end, crt+1, flag);
    }
  }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> C;
    mid = N/2;
    for1(0, N) {
      ll a;
      cin >> a;
      V.pb(a);
    }

    f(0, mid, 0, true);
    memset(chk, false, N);
    f(mid+1, N-1, mid+1, false);

    if(V2.empty()) V2.push_back(0);
    sort(V1.begin(), V1.end());
    sort(V2.begin(), V2.end());

    for1(0, V1.size()) {
      ll mx = C - V1[i];
      ans += upper_bound(V2.begin(), V2.end(), mx) - V2.begin();      
    }

    cout << ans;
}