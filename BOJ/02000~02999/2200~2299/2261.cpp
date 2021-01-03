#include <iostream>
#include <vector>
#include <algorithm>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;

typedef vector <int> iv1;
typedef vector <ull> ullv1;
typedef vector <ll> llv1;

struct point {
    ll x, y;
};

bool compare(point p1, point p2) {
    return p1.x < p2.x;
}

bool compare2(point p1, point p2) {
    return p1.y < p2.y;
}

ll dis(point p1, point p2) {
    ll x = p1.x - p2.x;
    ll y = p1.y - p2.y;
    return x*x + y*y;
}

ll disy(point p1, point p2) {
    ll y = p1.y - p2.y;
    return y * y;
}

ll get_nearest_two_points_distance(vector<point>::iterator it, ll n) {
    if(n == 2) {
        return dis(it[0], it[1]);
    }
    if(n== 3) {
        return min(dis(it[0], it[1]), min(dis(it[0], it[2]), dis(it[1], it[2])));
    }

    ll center = (it[n/2-1].x + it[n/2].x)/2;
    ll ans = min(get_nearest_two_points_distance(it, n/2), get_nearest_two_points_distance(it+n/2, n-n/2));

    vector<point> mid;
    mid.reserve(n);

    for1(0, n) {
        ll tmp = center - it[i].x;
        if(tmp*tmp < ans) {
            mid.push_back(it[i]);
        }
    }

    sort(mid.begin(), mid.end(), compare2);

    for1(0, mid.size()) {
        for(int j = i+1; j < mid.size() && disy(mid[i], mid[j]) < ans; j++) {
            ans = min(ans, dis(mid[i], mid[j]));
        }
    }

    return ans;    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll N;
    cin >> N;
    vector<point> points(N);
    for1(0, N) {
        cin >> points[i].x >> points[i].y;
    }
    sort(points.begin(), points.end(), compare);

    cout << get_nearest_two_points_distance(points.begin(), N) << endl;
    
    return 0;
}