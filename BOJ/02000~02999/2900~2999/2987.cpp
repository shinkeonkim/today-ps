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

struct point{
    ll x,y;
};

ll ccw(point p1, point p2, point p3) {
    ll ret = (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
    return ret >0?1:(ret<0?-1:0);
}

ll ccw_org(point p1, point p2, point p3) {
    ll ret = (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
    return ret >0 ? ret:(ret<0?-ret:0);
}

point t[3];
ll N, ans;
point ar[1100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(1);

    for1(0,3) {
        cin >> t[i].x >> t[i].y;
    }
    cin >> N;
    for1(0, N) {
        cin >> ar[i].x >> ar[i].y;
    }

    for1(0, N) {
        llv1 V;
        for1j(0,3) {
            if(ccw(t[j], t[(j+1)%3], ar[i]) != 0)
                V.pb(ccw(t[j], t[(j+1)%3], ar[i]));
        }
        bool check = true;
        for1j(0, V.size()) {
            if(V[0] != V[j]) check = false;
        }
        if(check) ans++;
    }

    cout << (double)ccw_org(t[0], t[1], t[2])/2 << "\n";

    cout << ans;

}