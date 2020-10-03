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
typedef vector <vector<ll>> llv2;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct FenwickTree2D{
    ll size;
    llv2 data;

    FenwickTree2D(ll N) {
        size = N;
        data = llv2(size+1, llv1(size+1));
    }

    void update(int x, int y, ll val) {
        ll dv = val - sum(x, y, x, y);
        while(x <= size) {
            int y2 = y;
            while(y2 <= size) {
                data[x][y2] += dv;
                y2 += y2 & -y2;
            }
            x += x & -x;
        }
    }

    ll sum(int x, int y) {
        ll ret = 0;
        while(x) {
            int y2 = y;
            while(y2) {
                ret += data[x][y2];
                y2 -= y2 & -y2;
            }
            x -= x & -x;
        }
        return ret;
    }

    ll sum(int x1, int y1, int x2, int y2) {
        return sum(x2, y2) + sum(x1 - 1, y1 -1) - sum(x1-1, y2) - sum(x2, y1-1);
    }
};

ll N, M;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;

    FenwickTree2D F = FenwickTree2D(N);

    for1(1, N+1) {
        for1j(1, N+1) {
            ll a;
            cin >> a;
            F.update(i,j,a);
        }
    }

    while(M--) {
        ll w,a,b,c,d;
        cin >> w;
        if(w == 0) {
            cin >> a >> b >> c;
            F.update(a,b,c);
        }
        else {
            cin >> a >> b >> c >> d;
            cout << F.sum(a,b,c,d) << "\n";
        }
    }
    
}