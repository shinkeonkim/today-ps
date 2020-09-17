#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MAX 550000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N, M;
ll seg[4 * MAX], lazy[4 * MAX];
ll ar[MAX];

void update_lazy(ll node, ll x, ll y) {
    if (!lazy[node])
        return;
    seg[node] ^= lazy[node];
    if (x != y) {
        lazy[node * 2] ^= lazy[node];
        lazy[node * 2 + 1] ^= lazy[node];
    }
    lazy[node] = 0;
}

ll update(ll lo, ll hi, ll val, ll node, ll x, ll y) {
    update_lazy(node, x, y);
    if (y < lo || hi < x)
        return seg[node];
    if (lo <= x && y <= hi) {
        lazy[node] ^= val;
        update_lazy(node, x, y);
        return seg[node];
    }
    ll mid = (x + y)/2;
    return seg[node] = update(lo, hi, val, node * 2, x, mid) ^ update(lo, hi, val, node * 2 + 1, mid + 1, y);
}

ll query(ll lo, ll hi, ll node, ll x, ll y) {
    update_lazy(node, x, y);
    if (y < lo || hi < x)
        return 0;
    if (lo <= x && y <= hi)
        return seg[node];
    ll mid = (x + y)/2;
    return query(lo, hi, node * 2, x, mid) ^ query(lo, hi, node * 2 + 1, mid + 1, y);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(1, N+1) {
        cin >> ar[i];
        update(i, i, 0, 1, 1, N);
    }
    cin >> M;

    for1(0, M) {
        ll q;
        cin >> q;
        if(q == 1) {
            ll a,b,c;
            cin >> a >> b >> c;
            a++;b++;
            update(a,b,c,1,1,N);
        }
        else {
            ll a;
            cin >> a;
            a++;
            cout << (query(a, a, 1, 1, N) ^ ar[a]) << "\n";
        }
    }

}