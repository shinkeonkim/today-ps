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
ll height[5500];
llv1 edge[5500];
ll tree_height[5500];
ll cnt[5500];
ll a,b;

ll getHeight(ll node) {
    if(tree_height[node]) return tree_height[node];
    else {
        ll mx = 0;
        for(auto i : edge[node]) {
            mx = max(mx, getHeight(i));
        }
        return tree_height[node] = mx +1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(1, N+1) {
        cin >> height[i];
    }

    for1(0, M) {
        cin >> a >> b;
        if(height[a] < height[b]) {
            edge[a].pb(b);
            cnt[b]++;
        }
        else {
            edge[b].pb(a);
            cnt[a]++;
        }
    }

    for1(1, N+1) {
        if(cnt[i] == 0) {
            getHeight(i);
        }
    }

    for1(1, N+1) {
        cout << tree_height[i] << "\n";
    }

    
}