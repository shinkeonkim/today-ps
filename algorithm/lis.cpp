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

llv1 lis(llv1 ar) {
    llv1 v, buffer;
    llv1::iterator vv;
    vector<pair<ll, ll> > d;
    v.pb(2000000000ll);

    ll n = sz(ar);

    for1(0, n){
        if (ar[i] > *v.rbegin()) {
            v.pb(ar[i]);
            d.push_back({ v.size() - 1, ar[i] });
        }
        else {
            vv = lower_bound(v.begin(), v.end(), ar[i]);
            *vv = ar[i];
            d.push_back({ vv - v.begin(), ar[i] });
        }
    }
    
    for(int i = sz(d) - 1; i > -1; i--){
        if(d[i].first == sz(v)-1){
            buffer.pb(d[i].second);
            v.pop_back();
        }
    }

    reverse(buffer.begin(), buffer.end());

    return buffer;
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  

  llv1 V = { 1, 11, 1, 2, -3, 43, 1, 2, 102 };

  foreach(lis(V)) {
    cout << i << " ";
  }
}