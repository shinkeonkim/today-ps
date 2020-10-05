#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e18

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll A, B, a;
ll N;
llv1 V;
ll D[1100];

void dfs(ll idx, ll weight) {
    if(D[idx] <= weight) return;
    D[idx] = weight;

    if(idx+1 <= 1000 && D[idx+1] > weight + 1) {
        dfs(idx + 1, weight + 1);
    }

    if(idx-1 >= 0 && D[idx-1] > weight + 1) {
        dfs(idx - 1, weight + 1);
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> A >> B >> N;
    
    fill(D, D+1001, INF);
    dfs(A, 0);
    for1(0, N) {
        cin >> a;
        V.pb(a);
        dfs(a, 1);
    }
    cout << D[B];

}