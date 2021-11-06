#include <bits/stdc++.h>
#include <ext/rope>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
using namespace __gnu_cxx;

typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

crope r;
string s;
ll M, N;
ll a,b,c;


int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> M >> s;
  cin >> N;

  r.append(s.c_str());

  while(N--) {
    cin >> a >> b >> c;
    b--;
    r = r.substr(0, c) + r.substr(a, b-a+1) + r.substr(c, r.size()-c+1);
    r = r.substr(0, M);
  }

  r = r.substr(0, M);

  cout << r;
}