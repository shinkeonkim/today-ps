#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;

int N, ans, ar[55], sorted_ar[55], mp[2200], check[55];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  cin >> N;
  for1(0, N) {
    cin >> ar[i];
    sorted_ar[i] = ar[i];
  }

  sort(sorted_ar, sorted_ar + N);

  for1(0, N) {
    mp[sorted_ar[i]+1000] = i+1;
  }

  for1(0, N) {
    int crt = mp[ar[i] + 1000];

    if(!(check[crt-1] || check[crt+1])) {
      ans += 1;
    }
    check[crt] = 1;
  }

  cout << ans;
}