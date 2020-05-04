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

ll N, maxWeight,ans;
string m;
ll V,C,cnt;
ll D[2][33000];
ll weight[33000], cost[33000];

ll f(string a) {
    ll S = 0ll;
    for(int x = 0; x < a.length()-3; x++) {
        S*=10ll;
        S += (a[x]-48);
    }
    S*=10ll;
    S += (ll)(a[a.length()-2] - 48);
    S*=10ll;
    S += (ll)(a[a.length()-1] - 48);
    return S;   
}

ll max(ll a, ll b) {
    return a>b?a:b;
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
    
    while(true) {
        ans = 0;
        cin >> N;
        cin >> m;

        if(N==0 || m == "0.00") break;

        maxWeight = f(m);

        cnt = 1;

        for(int y=1; y<=N; y++) {
            cin >> C >> m;
            V = f(m);
            ll x = 1ll;
            while(x <= maxWeight) {
                weight[cnt] = V*x;
                cost[cnt] = C*x;
                cnt++;
                x*=2;
            }
        }

        for(int y=0; y<=maxWeight; y++) {
            D[0][y] = D[1][y] =  0ll;
        }

        knapsack();

        cout << ans << "\n";

    }

}