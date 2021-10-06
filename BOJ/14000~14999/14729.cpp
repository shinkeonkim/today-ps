#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)

using namespace std;

int N, sz;
double ar[11], a;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N;
  for1(0, 7) ar[i] = 111;

  for1(0, N) {
    cin >> a;

    if(sz == 0) ar[sz++] = a;
    else {
      ar[7] = a;
      for(int i = 6; i > -1; i--) {
        if(ar[i+1] <= ar[i]) {
          double tmp = ar[i];
          ar[i] = ar[i+1];
          ar[i+1] = tmp;
        } else {
          break;
        }
      }
    }
  }
  
  cout << fixed;
  cout.precision(3);

  for1(0, 7) {
    cout << ar[i] << '\n';
  }
}