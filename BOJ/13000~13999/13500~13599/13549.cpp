#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e18
#define MX 440000

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
    ll idx, cost;
};
struct compare {
    bool operator()(st a, st b) {
        return a.cost > b.cost;
    }
};


ll N, K;
ll D[1100000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    
    fill(D,D+440000,INF);
    
    priority_queue <st, vector<st>, compare> Q;
    Q.push({N,0});

    while(!Q.empty()) {
        st Z = Q.top();
        Q.pop();

        if(D[Z.idx] < Z.cost) continue;

        D[Z.idx] = Z.cost;

        if(Z.idx + 1 <= MX && D[Z.idx +1] > Z.cost + 1 ) {
            Q.push({Z.idx + 1, Z.cost + 1});
        }
        if(Z.idx - 1 >= 0 && D[Z.idx - 1] > Z.cost + 1 ) {
            Q.push({Z.idx - 1, Z.cost + 1});
        }
        if(Z.idx * 2 <= MX && D[Z.idx * 2] > Z.cost && Z.idx != 0) {
            Q.push({Z.idx * 2, Z.cost});
        }
    }
    cout << D[K];

    
}