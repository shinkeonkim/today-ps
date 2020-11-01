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

struct st {
    ll idx, sub;
    double score;
};

bool operator<(st a, st b) {
    return a.score < b.score;
}

ll N, M, K;
priority_queue <st, vector<st>> Q;
bool iD[110];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> K;
    for1(0, M) {
        for1j(0, N) {
            ll a;
            double b;
            cin >> a >> b;
            Q.push({a, i+1, b});
        }
    }
    double S = 0;
    while(K && !Q.empty()) {
        st Z = Q.top(); Q.pop();
        if(iD[Z.idx]) continue;
        iD[Z.idx] = true;
        K--;
        S += Z.score;
    }
    cout << fixed;
    cout.precision(1);
    cout << S;
    
}