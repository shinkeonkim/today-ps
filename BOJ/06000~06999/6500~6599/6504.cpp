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

ll n, a;
ll d[44] = {1, 2, 3};
ll v[44];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> n;

  for1(3, 33) {
    d[i] = d[i-1] + d[i-2];
  }

  for1(0, n) {
    cin >> a;
    fill(v, v+40, 0);

    for(int j = 30; j>=0; j--) {
      if(d[j] <= a) {
        a -= d[j];
        v[j] = 1;
      }
    }
    ll ans = 0;
    for(int j = 0; j <= 30; j++) {
      if(v[j] > 0 && j > 0) {
        ans += d[j-1];
      }
    }
    cout << ans << "\n";
  }
}