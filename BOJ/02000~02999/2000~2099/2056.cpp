#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ll> llv1;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,K;
ll T[11000];
ll check[11000];
ll D[11000];
vector < vector <ll>> V(11000);
queue <ll> Q;

ll max(ll a, ll b) {
    return a>b?a:b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;

    for(int y=1; y<=N; y++) {
        cin >> T[y];
        D[y] = T[y];
        check[y] = 0;
        cin >> K;
        for(int x=0; x<K; x++) {
            ll a;
            cin >> a;
            V[y].push_back(a);
            check[a]++;
        }
    }
    
    for(int x=1; x<=N; x++) {
        if(check[x] == 0) {
            Q.push(x);
        }
    }

    while(!Q.empty()) {
        int f= Q.front();
        Q.pop();
        for(auto next : V[f]) {
            D[next] = max(D[next],D[f] + T[next]);
            check[next]--;
            if(check[next] == 0) {
                Q.push(next);
            }
        }
    }
    ll ans = D[1];
    for(int x=2; x<=N; x++) {
        ans = max(ans,D[x]);
    }
    cout << ans;
}