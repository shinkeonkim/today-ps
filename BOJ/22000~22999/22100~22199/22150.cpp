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


int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ll tc;
  cin >> tc;
  while(tc--) {
    ll n, tmp;
    llv1 V;
    bool chk = false;

    cin >> n;
    for1(0, 2*n) {
      cin >> tmp;
      V.pb(tmp);
    }

    for1(0, n) {
      if(V[i*2] + V[i*2+1] != n) {
        chk = true;
      }
    }

    cout << (chk ? "yes" : "no") << "\n";
  }
}