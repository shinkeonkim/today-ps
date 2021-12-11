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

ll N, s, ans;
bool chk[110000];
ll ar[110000];
queue <ll> Q;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N;
  for1(1, N+1) cin >> ar[i];
  cin >> s;

  Q.push(s);

  while(!Q.empty()) {
    ll crt = Q.front(); Q.pop();

    if(chk[crt]) continue;

    chk[crt] = 1;

    for(int d = -1; d<=1; d+=2) {
      int nxt = crt + d * ar[crt];

      if(nxt < 1 || nxt > N) continue;
      Q.push(nxt);
    }
  }

  for1(1, N+1) {
    if(chk[i]) ans++;
  }
  cout << ans;
}