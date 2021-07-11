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
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

struct st {
    ll i, cost;
};

struct compare {
    bool operator()(st a, st b) {
        return a.cost > b.cost;
    }
};

priority_queue <st, vector<st>, compare> Q; 

ll N, M;
ll D[110];
ll chk[110];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for1(2,110) {
        D[i] = INF;
    }
    cin >> N >> M;
    for1(0, N+M) {
        ll a, b;
        cin >> a >> b;
        chk[a] = b;
    }

    Q.push({1, 0});

    while(!Q.empty()) {
        st Z = Q.top();
        Q.pop();

        if(Z.cost > D[Z.i]) continue;

        if(chk[Z.i]) {
            if(D[chk[Z.i]] > Z.cost) {
                D[chk[Z.i]] = Z.cost;
                Q.push({chk[Z.i], Z.cost});
            }
            continue;
        }

        for(int i = 6; i > 0; i--) {
            ll next = i + Z.i;
            if(next > 100 || D[next] <= Z.cost + 1) continue;
            D[next] = Z.cost + 1;
            Q.push({next, Z.cost + 1});
        }
    }
    cout << D[100];
}