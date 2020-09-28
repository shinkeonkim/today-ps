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

ll N, M;
ll ar[110000];
ll tree[110000];
llv1 children[110000];
ll D[110000];
ll parent;

void dfs(ll current, ll weight) {
    D[current] = ar[current] + weight;
    for(auto i : children[current]) {
        dfs(i, weight + ar[current]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, N) {
        cin >> tree[i];
        if(tree[i] == -1) {
            parent = i;
        }
        else children[tree[i]-1].pb(i);
    }

    for1(0, M) {
        ll a, b;
        cin >> a >> b;
        ar[a-1] += b;
    }

    dfs(parent, 0);
    for1(0, N) {
        cout << D[i] << " ";
    }
}