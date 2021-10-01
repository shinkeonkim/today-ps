#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)

using namespace std;

int N, M, a;
int ar[220000];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N >> M;

  for1(0, N) {
    cin >> ar[i];
  }

  sort(ar, ar+N);

  for1(0, M) {
    cin >> a;
    int *p = lower_bound(ar, ar+N, a);
    if(p != ar + N && *p == a) cout << p - ar;
    else cout << -1;
    cout << '\n';
  }
}