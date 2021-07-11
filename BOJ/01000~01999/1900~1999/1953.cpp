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

ll N;
llv1 hate[110], team1, team2;
ll team[110];

void dfs(ll n, ll t) {
  team[n] = t;
  for1(0, hate[n].size()) {
    if(team[hate[n][i]] > 0) continue;
    dfs(hate[n][i], 3-t);
  }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) {
      ll k, tmp;
      cin >> k;
      for1j(0, k) {
        cin >> tmp;
        hate[i].push_back(tmp - 1);
      }
        
    }

    for1(0, N) {
      if(team[i] > 0) continue;
      dfs(i, 1);
    }

    for1(0, N) {
      if(team[i] == 1) team1.push_back(i + 1);
      if(team[i] == 2) team2.push_back(i + 1);
    }

    cout << team1.size() << "\n";
    foreach(team1) cout << i << " ";
    cout << "\n" << team2.size() << "\n";
    foreach(team2) cout << i << " ";
}
