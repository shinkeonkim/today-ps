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


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;
    vector<string> v;
    string k = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'w' && i > 0 && s[i-1] == 'f') {
            v.pb(k);
            k = "";
        }
        k += s[i];
    }
    if(k != "") v.pb(k);
    for(auto i : v) {
        string k  = i;
        sort(k.begin(), k.end());
        reverse(k.begin(),k.end());
        if(i != k) {
            cout << 0;
            return 0;
        }
        llv1 cnt = {0,0,0,0};
        for(auto j : i) {
            if(j == 'w') cnt[0]++;
            if(j == 'o') cnt[1]++;
            if(j == 'l') cnt[2]++;
            if(j == 'f') cnt[3]++;
        }
        if(cnt[0] == cnt[1] && cnt[1] == cnt[2] && cnt[2] == cnt[3]) continue;
        else {
            cout << 0;
            return 0;
        }
    }

    cout << 1;

}