#include <bits/stdc++.h>

using namespace std;
int N;
int D[11000];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> N;

  for(int i = N; i > 0; i--) {
    if(D[i]) continue;

    int z = 2;
    while(true) {
      if(z > i && !D[z-i]) {
        D[i] = z-i;
        D[z-i] = i;
        break;
      }
      z <<= 1;
    }
  } 

  for(int i = 1; i <= N; i++) {
    cout << D[i] << "\n";
  }
}