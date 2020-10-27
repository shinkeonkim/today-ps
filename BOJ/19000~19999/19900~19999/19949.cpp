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

int ar[11];
int D[11];
int ans;

void g() {
    int cnt = 1;
    int crt = D[0];
    for(int i = 1; i < 10; i++) {
        if(crt == D[i]) {
            cnt++;
            if(cnt >=3) {
                return;
            }
        }
        else {
            cnt=1;
            crt = D[i];
        }
    }
    int r = 0;
    for1(0, 10) {
        if(D[i] == ar[i]) {
            r++;
        }
    }
    if(r>=5) ans++;
}

void dfs(int idx) {
    if(idx == 9) {
        for1(1, 6) {
            D[idx] = i;
            g();
        }
    }
    else {
        for1(1, 6) {
            D[idx] = i;
            dfs(idx+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    for1(0, 10) cin >> ar[i];
    for1(1, 6) {
        D[0] = i;
        dfs(1);
    } 
    cout << ans;
}