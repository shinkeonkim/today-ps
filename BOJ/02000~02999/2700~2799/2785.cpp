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

ll N, a;
llv1 V;

ll solve() {
    if(V.size() ==2) return 1;
    ll ret = 1;
    V[0]-=1;

    if(V[0] == 0) {
        V.erase(V.begin());
    }
    V.pop_back();
    V.pop_back();

    while (V.size() > 1) {
        V[0]-=1;
        ret +=1;
        if(V[0] == 0) {
            V.erase(V.begin());
        }
        V.pop_back();
    }
    if(V.size() == 1 && V[0] > 0) {
        ret +=1;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) {
        cin >> a;
        V.pb(a);
    }    
    sort(V.begin(), V.end());
    cout << solve();
}