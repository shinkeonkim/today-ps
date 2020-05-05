#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <cmath>

#define MX 110000
#define MXV 44000

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct point{
    ll x,y;
    ll p=0,q=0;
};

bool comp1(point a, point b) {
    if(a.y != b.y) return a.y < b.y;
    return a.x < b.x;
}

bool comp2 (point a, point b) {
    if(a.q * b.p != a.p*b.q)
        return a.q * b.p < a.p*b.q;
    return comp1(a,b);
}

ll dist(point a, point b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

ll ccw(point p1, point p2, point p3) {
    return (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
}

ll N;
vector <point> ar;
point Z;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(8);

    stack <int> stk;


    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> Z.x >> Z.y;
        ar.push_back(Z);
    }

    // Graham scan
    sort(ar.begin(),ar.end(),comp1);
    for(int x=1; x<N; x++) {
        ar[x].p = ar[x].x -ar[0].x;
        ar[x].q = ar[x].y - ar[0].y;
    }
    sort(ar.begin()+1,ar.end(),comp2);
    stk.push(0);
    stk.push(1);
    int next = 2;
    while(next < ar.size()) {
        while(stk.size() >= 2) {
            int s = stk.top();
            stk.pop();
            int f = stk.top();
            if(ccw(ar[f],ar[s],ar[next]) > 0) {
                stk.push(s);
                break;
            }
        }
        stk.push(next++);
    }

    vector <int> nums;
    while(!stk.empty()) {
        nums.push_back(stk.top());
        stk.pop();
    }
    reverse(nums.begin(), nums.end());

    int j = 1;
    ll ans = 0, sz = nums.size();
    point a,b;
    for(int i = 0; i < sz; i++) {
        int iNext = (i+1) % sz;
        while(1) {
            int jNext = (j+1) % sz;
            int k = ccw({0, 0}, {ar[nums[iNext]].x-ar[nums[i]].x, ar[nums[iNext]].y-ar[nums[i]].y}, {ar[nums[jNext]].x-ar[nums[j]].x, ar[nums[jNext]].y-ar[nums[j]].y});
            if(k > 0) {
                j = jNext;
            }else break;
        }
        ll d = dist(ar[nums[i]],ar[nums[j]]);
        if(ans < d) {
            ans = d;
            a = ar[nums[i]];
            b = ar[nums[j]];
        }
    }

    cout << sqrt(ans);
}