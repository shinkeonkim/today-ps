#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

priority_queue <pll, vector<pll>, greater<pll>> Q;
ll N, M;
ll ar[110000];
ll q, a, b;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N;
  for1(0, N) {
    cin >> ar[i];
    Q.push({ ar[i], i});
  }

  cin >> M;
  while(M--) {
    cin >> q;
    if(q == 1) {
      cin >> a >> b; a--;
      ar[a] = b;
      Q.push({b, a});
    } else {
      while(!Q.empty() && ar[Q.top().second] != Q.top().first) {
        Q.pop();
      }
      cout << Q.top().second + 1<< "\n";
    }
  }
}