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

ll N, M, K, parent;
llv1 edge[33];
ll chk[33];
bool p[33];

void dfs(int node) {
    if(chk[node] == 0) return;
    if(chk[node] == 1) {
        chk[node] = 2;
        foreach(edge[node]) {
            dfs(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, M) {
        char a, b;
        cin >> a >> b;
        bool check = true;
        edge[a-'A'].pb(b-'A');
        p[b-'A'] = true;
    }
    for1(0, 26) chk[i] = 1;
    cin >> K;
    for1(0, K) {
        char a;
        cin >> a;
        chk[a-'A'] = 0;
    }
    for1(0, 26) {
      if(!p[i]) {
        dfs(i);
      }
    }

    ll cnt = 0;
    for1(0, 26) {
        if(chk[i] == 2 && p[i]) {
            cnt++;
        }
    }
    cout << cnt;
}