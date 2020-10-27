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

int a;
iv1 V;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a;

    for(int i = 31; i > -1; i--) {
        V.pb((a & (1 << i)) > 0);
    }
    if(a < 0) {
        cout << 32;
        return 0;
    }
    else if(a==0) {
        cout << 1;
        return 0;
    }
    int ans = 0;
    bool chk = true;
    foreach(V) {
        if(chk) {
            if(i == 0) {
                ans++;
            }
            else {
                chk = false;
            }
        }
    }
    cout << 32 - ans;
    
}

