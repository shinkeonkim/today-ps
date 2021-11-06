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
string s;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  while(1) {
    cin >> N >> s;
    if(N == 0) break;

    if(s == "August" && N == 4) {
      cout << "Happy birthday";
    } else if((s == "August" && N > 4) || s == "September" || s == "October" || s == "November" || s == "December" ){
      cout << "No";
    } else if(N == 29 && s == "February"){
      cout << "Unlucky";
    } else {
      cout << "Yes";
    }
    cout << "\n";
  }
}