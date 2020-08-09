#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MX 999999ll

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct st {
    ll idx, k, t;
};

struct comp {
    bool operator()(st a, st b) {
        if(a.t != b.t) return a.t > b.t;
        return a.k > b.k;
    }
};

ll N,m,M,T,R;
ll ans = MX;

priority_queue <st, vector<st>, comp> Q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> m >> M >> T >> R;

    Q.push({m,0,0});

    while(!Q.empty()) {
        st Z = Q.top();
        Q.pop();
        // cout << Z.idx << " " << Z.k << " " << Z.t << "\n";

        if(Z.k == N) {
            ans = min(ans, Z.t);
            break;
        }

        if(Z.idx + T <= M) {
            Q.push({Z.idx + T, Z.k +1, Z.t + 1});
        }
        else {
            Q.push({M, Z.k, Z.t + 1});
        }

        if(Z.idx - R >= m) {
            Q.push({Z.idx - R, Z.k, Z.t + 1});
        }
        else {
            Q.push({m, Z.k, Z.t + 1});
        }
    }
    cout << (ans == MX?-1:ans);
}