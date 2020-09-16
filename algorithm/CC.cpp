#include <iostream>
#include <vector>

#define MX 10000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;

/*
    coin: coin's price
    money: total price
*/
ll CC(llv1 &coin, ll money) {
    
    llv1 dp(MX);
    fill(dp.begin(),dp.end(),0);
    dp[0] = 1;

    for(int i = coin.size()-1; i>-1; i--) {
        for(int j = coin[i]; j <=money; j++) {
            dp[j] += dp[j-coin[i]];
        } 
    }
    return dp[money];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    llv1 coin = {1, 2, 5, 10};
    ll ret = CC(coin, 20);

    cout << ret;
}