#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MX 220000
#define INF 44000000
#define DIFF 10

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

struct st {
  ll crt, cost;
};

ll N, K;
ll mn=INF, cnt;
ll D[230000];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N >> K;
  fill(D, D+MX, INF);

  queue <st> Q;

  Q.push({ N, 0 });

  while(!Q.empty()) {
    st f = Q.front(); Q.pop();

    if(f.crt == K) {
      if(f.cost < mn) {
        mn = f.cost;
        cnt = 1;
      }
      else if(f.cost == mn) {
        cnt++;
      }
      continue;
    }

    if(D[f.crt] < f.cost) continue;
    D[f.crt] = f.cost;
    
    if(f.crt + 1 <= MX && D[f.crt + 1]+DIFF > f.cost + 1) {
      Q.push({f.crt + 1, f.cost + 1});
    }
    if(f.crt - 1 >= 0 && D[f.crt - 1]+DIFF > f.cost + 1) {
      Q.push({f.crt - 1, f.cost + 1});
    }
    if(f.crt != 0 && f.crt * 2 <= MX && D[f.crt * 2]+DIFF > f.cost + 1) {
      Q.push({f.crt * 2, f.cost + 1});
    }
  }
  cout << mn << "\n" << cnt;
}