#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

#define MX 110000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

string s;
int z[MX];

void z_algorithm() {
  int L = 0, R = 0;
  int n = s.length();

  for1(1, n) {
    if(i > R) {
      L = R = i;
      while(R < n && s[R - L] == s[R]) R++;
      z[i] = R - L;
      R--;
    } else {
      int k = i - L;
      if (z[k] < R - i + 1) z[i] = z[k];
      else {
        L = i;
        while(R < n && s[R - L] == s[R]) R++;
        z[i] = R-L; R--;
      }
    }
  }
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> s;
  z_algorithm();
  for(int i = 0; i < s.length(); i++) cout << z[i] << ' ';
}