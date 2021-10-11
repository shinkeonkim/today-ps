#include <bits/stdc++.h>
#define for1(s,n) for(int i = s; i < n; i++)

using namespace std;
typedef long long ll;

ll N, ans, mn;
ll dis[110000];
ll cost[110000];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N;
  for1(1, N) cin >> dis[i];
  for1(0, N) cin >> cost[i];

  mn = cost[0];

  for1(1, N) {
    ans += dis[i] * mn;
    mn = min(mn, cost[i]);
  }
  cout << ans;
}