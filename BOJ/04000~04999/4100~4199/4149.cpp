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

llv1 ret;

ll modpow(ll a, ll e, ll m) {
    __int128_t r = 1, b = a % m;
    while (e > 0) {
        if (e & 1)
            r = r * b % m;
        b = b * b % m;
        e >>= 1;
    }
    return r;
}

bool check_composite(ll n, ll a, ll d, int s) {
    auto x = modpow(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (__int128_t)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
}

bool isPrime(ll x) {
    if (x < 2)
        return false;
    int r = 0;
    ll d = x - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }
    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (x == a)
            return true;
        if (check_composite(x, a, d, r))
            return false;
    }
    return true;
}

ll f(ll x, ll c, ll n) {
    return ((__int128_t)x * x % n + c) % n;
}

ll gcd(ll a, ll b) {
    return b > 0? gcd(b, a%b) : a;
}

void solution(ll n) {
    if(n==1) return ;
    if(isPrime(n)) {
        ret.pb(n);
        return;
    }
    if(n == 4) {
        ret.pb(2);
        ret.pb(2);
        return;
    }

    ll x = 2, y, c = 1, g = n;
    do {
        if(g == n) {
            x = y = rand() % (n-1);
            c = rand() % 10 + 1;
            g = 1;
        }
        x = f(x, c, n);
        y = f(f(y, c, n), c, n);
        g = gcd(abs(x - y), n);
    }while(g == 1);
    solution(g);
    solution(n/g);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll N;
    cin >> N;
    solution(N);
    sort(ret.begin(), ret.end());
    foreach(ret) {
        cout << i << "\n";
    }
}