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

struct st{
    ll price;
    ll cnt;
};

ll C, N;
ll coin[11];
ll D[11000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    queue <st> Q;
    fill(D, D+10000, INF);
    cin >> C >> N;
    for1(0, N) {
        cin >> coin[i];
        Q.push({coin[i],1ll});
    }

    while(!Q.empty()) {
        st F = Q.front();
        Q.pop();
        if(D[F.price] <= F.cnt) continue;
        D[F.price] = F.cnt;

        for1(0,N) {
            if(F.price + coin[i] <= C && D[F.price + coin[i]] > F.cnt + 1) {
                Q.push({F.price + coin[i], F.cnt + 1});
            }
        }
    }
    cout << D[C];
}