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
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,a;
llv1 pos;
llv1 neg;
ll zero = 0;
ll ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) {
        cin >> a;
        if(a < 0) neg.pb(a);
        else if(a > 0) pos.pb(a);
        else zero++;
    }

    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());

    for(int i = pos.size()-1; i>-1; i-=2) {
        if(i - 1 >= 0) {
            if(pos[i] + pos[i-1] < pos[i] * pos[i-1]) ans += pos[i] * pos[i-1];
            else ans += pos[i] + pos[i-1];
        }
    }
    if(pos.size() % 2) ans += pos[0];

    for(int i = 0; i < neg.size(); i+=2) {
        if(i + 1 < neg.size()) {
            ans += neg[i] * neg[i+1];
        }
    }
    if(neg.size() % 2) {
        if(zero == 0) {
            ans += neg[neg.size()-1];
        }
    }

    cout << ans;
    
}