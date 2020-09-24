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

ll N;
string ar[22];
ll K;
ll D[110000][110]; // state, mod
ll modTable[55];
ll modTenTable[55];

ll gcd(ll a, ll b) {
    return b>0?gcd(b,a%b):a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) cin >> ar[i];
    cin >> K;

    for(ll i = 0; i < N; i++) {
        for(ll j = 0; j < ar[i].length(); j++) {
            modTable[i] *= 10;
            modTable[i] += (ar[i][j] - '0');
            modTable[i] %= K;    
        }
    }

    ll s = 1;
    for(ll i = 0; i < 51; i++) {
        modTenTable[i] = s % K;
        s*=10;
        s%=K;
    }



    D[0][0] = 1ll;

    for(ll i = 0; i < (1<<N); i++) {
        for(ll j = 0; j < K; j++) {
            for(ll current = 0; current < N; current++) {
                if((i & (1 << current)) == 0) {
                    ll z = ((j * modTenTable[ar[current].length()]) + modTable[current]) % K;
                    ll next = i | (1 << current);
                    D[next][z] += D[i][j];
                }

            }
        }
    }

    ll ans = D[(1<<N)-1][0];
    ll total = 1ll;
    for(ll i = 1; i <= N; i++) {
        total *= i;
    }
    ll g = gcd(ans, total);
    cout << ans/g << "/" << total/g;
}