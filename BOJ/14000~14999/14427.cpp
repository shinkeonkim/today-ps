#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e11

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

ll mo[110000];
ll mo_idx[110000];
ll ar[110000];
ll N, sq, Q, q, a, b;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  cin >> N;
  
  fill(mo, mo+N, INF);
  fill(mo_idx, mo_idx+N, -1);
  for(sq = 0; sq*sq < N; sq++);

  for1(0, N) {
    cin >> ar[i];
    if(mo[i/sq] > ar[i]) {
      mo[i/sq] = ar[i];
      mo_idx[i/sq] = i;
    }
  }

  cin >> Q;
  while(Q--) {
    cin >> q;
    if (q == 1) {
      cin >> a >> b;
      a--;

      ar[a] = b;
      ll partition = a/sq;
      mo[partition] = INF;
      mo_idx[partition] = -1; 
      for1(partition * sq, min((partition + 1) * sq, N)) {
        if(mo[i/sq] > ar[i]) {
          mo[i/sq] = ar[i];
          mo_idx[i/sq] = i;
        }
      }
    } else {
      ll mn = INF;
      ll ret = -1;
      for1(0, sq) {
        if(mo[i] < mn && mo_idx[i] != -1) {
          mn = mo[i];
          ret = mo_idx[i];
        }  
      }
      cout << ret + 1 << "\n";
    }
  }
}