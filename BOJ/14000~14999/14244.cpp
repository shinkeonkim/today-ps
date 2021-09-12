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

ll n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> m;

    if((n - m) % 2 == 0) {
      int left = n - m - 2;
      cout << "0 1\n";
      if(n != m) {
        cout << "0 2\n";
        for(int i = 0; i < m-1; i++) {
          cout << "1 " << i + 3 << '\n';
        }
      }
      if (left > 0) {
        int last = 2;
        for(int i = 0; i < left; i++) {
          cout << last << ' ' <<  m + i + 2 << '\n';
          last = m + i + 2;
        }
      }
    }
    else {
      int left = n - m - 1;

      if(left > 0) {
        int last = 1;
        for(int i = 1; i<= m; i++) {
          cout << "0 " << i << '\n';
        }
        for(int i = 0; i < left; i++) {
          cout << last << ' ' << m + i + 1 << '\n';
          last = m + i + 1;
        }
      } else {
        for(int i = 1; i <= m; i++) {
          cout << "0 " << i << '\n';
        }
      }
    }
}