#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N, maxWeight,ans,cnt,w,c;
ll D[2][11000];
ll weight[2200], cost[2200],V,C,K;

ll max(ll a, ll b) {
    return a>b?a:b;
}

void input() {
    cin >> N >> maxWeight;
    cnt = 1;

    for(int y=1; y<=N; y++) {
        cin >> V >> C >> K;
        ll x = 1ll;
        ll S = 0;
        while(S <= K) {
            weight[cnt] = V*min(x,K-S);
            cost[cnt] = C*min(x,K-S);
            cnt++;
            S+=x;
            x*=2;
        }
    }
}

void knapsack() {
    for(int x=1; x<cnt; x++) {
        for(int y=0; y<=maxWeight; y++) {
            if(y>=weight[x]) {
                D[x%2][y] = max(D[(x+1)%2][y],D[(x+1)%2][y-weight[x]]+cost[x]);
            }
            else {
                D[x%2][y] = D[(x+1)%2][y];
            }
            ans = max(ans, D[x%2][y]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    input();
    knapsack();
    cout << ans;

}