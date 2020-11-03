#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MX 220000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll D[MX];

void manacher(string s) {
    ll r = 0;
    ll p = 0;
    for1(0, s.length()) {
        if(i <= r) {
            D[i] = min(D[2 * p - i], r - i);
        }
        else D[i] = 0;

        while(i - D[i] - 1 >= 0 && i + D[i] + 1 < s.length() && s[i - D[i] - 1] == s[i + D[i] + 1]) {
            D[i]++;
        }
        if(r < i + D[i]) {
            r = i + D[i];
            p = i;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    string s2 = "#";
    for1(0, s.length()) {
        s2 += s[i];
        s2 += "#";
    }    
    
    manacher(s2);
    ll ans = 1;
    for1(0, s2.length()) {
        ans = max(ans, D[i]);
    }
    cout << ans;
    
}