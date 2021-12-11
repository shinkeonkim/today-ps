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

ll MX = 1000001, N, a;
ll ar[1100000];
ll d[1100000];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N;
  for(int i = 1; i <=MX; i++) {
    for(int j = i; j <= MX; j+=i) {
      ar[j] += i;
    }
  }

  for(int i = 1; i <= MX; i++) {
    d[i] = d[i-1] + ar[i];
  }
  
  while(N--) {
    cin >> a;
    cout << d[a] << "\n";
  }
}
