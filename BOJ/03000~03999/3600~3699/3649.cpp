#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MM (ll)10000000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;
typedef pair<ll, ll> pll;

ll width, n, a;
llv1 V;
vector<pll> ans;

bool compare(pll a, pll b) {
  return abs(a.second - a.first) > abs(b.second - b.first);
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  while(1) {
    V.clear();
    ans.clear();

    cin >> width >> n;

    if (cin.eof()) break;

    width *= MM;

    for1(0, n) {
      cin >> a;
      V.pb(a);
    }

    sort(V.begin(), V.end());

    for1(0, n) {
      int idx = lower_bound(V.begin()+i+1, V.end(), width - V[i]) - V.begin();

      if (idx < n && i != idx && width == V[i] + V[idx])
      {
        ans.push_back({V[i], V[idx]});
      }
    }
    
    sort(ans.begin(), ans.end());

    if(ans.size() == 0) {
      cout << "danger\n";
    } else {
      cout << "yes " << ans[0].first << " " << ans[0].second << "\n";
    }

  }
}