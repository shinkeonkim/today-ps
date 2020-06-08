#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,ans;
ll weight[22];
ll cost[22];
bool check[22];

void g() {
    int w = 0;
    int c = 0;
    for(int x=0; x<N; x++) {
        if(check[x]) {
            w+=weight[x];
            c+=cost[x];
        }
    }
    if(w < 100 && c > ans) ans = c; 
}

void dfs(int k) {
    if(k == N-1) {
        for(int x=0; x<2; x++) {
            check[k] = x;
            g();
        }
    }
    else {
        for(int x=0; x<2; x++) {
            check[k] = x;
            dfs(k+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int x=0; x<N; x++) cin >> weight[x];
    for(int x=0; x<N; x++) cin >> cost[x];

    dfs(0);
    cout << ans;
}