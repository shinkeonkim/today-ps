#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>

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

ll f(ll A) {
    return A>0?A:-A;
}

ll ccw(point p1, point p2, point p3) {
    ll ret = (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
    return ret >0?1:(ret<0?-1:0);
}

vector <ll> getConvexHull(vector <point> ar) {
    vector <ll> stk;
    stk.push_back(0);
    stk.push_back(1);
    int next = 2;
    while(next < ar.size()) {
        while(stk.size() >= 2) {
            int s = stk.back();
            stk.pop_back();
            int f = stk.back();
            if(ccw(ar[f],ar[s],ar[next]) > 0) {
                stk.push_back(s);
                break;
            }
        }
        stk.push_back(next++);
    }

    return stk; 
}

ll getPartSize(point A, point B, point C) {
    return f(1ll*(B.x - A.x)*(C.y-A.y) - 1ll*(C.x-A.x)*(B.y - A.y));
}


ll getTotalSize(vector <point> v) {
    ll ret= 0;
    for(int i =1; i<v.size(); i++) {
        point t1 = v[i];
        point t2 = v[(i+1)%v.size()];
        ret += getPartSize(v[0],t1,t2);
    }
    return ret;
}

ll N;
point Z;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector <point> ar;

    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> Z.x >> Z.y;
        ar.push_back(Z);
    }
    
    sort(ar.begin(),ar.end(),comp1);
    for(int x=1; x<N; x++) {
        ar[x].p = ar[x].x - ar[0].x;
        ar[x].q = ar[x].y - ar[0].y;
    }
    sort(ar.begin()+1,ar.end(),comp2);
    
    vector <ll> ret = getConvexHull(ar);
    vector <point> ret2;
    for(auto i : ret) {
        ret2.push_back({ar[i].x,ar[i].y,0,0});
    }
    cout << getTotalSize(ret2)/100;


}