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
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
}

bool comp2 (point a, point b) {
    if(a.q * b.p != a.p*b.q)
        return a.q * b.p < a.p*b.q;
    return comp1(a,b);
}

ll ccw(point p1, point p2, point p3) {
    ll ret = 1ll * (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
    return ret >0 ?1:(ret<0?-1:0);
}

vector <int> getConvexHull(vector <point> ar) {
    vector <int> stk;
    stk.push_back(0);
    stk.push_back(1);
    int next = 2;
    while(next < ar.size()) {
        while(stk.size() >= 2) {
            int s = stk.back();
            stk.pop_back();
            int f = stk.back();
            if(ccw(ar[f],ar[s],ar[next]) >= 0) {
                stk.push_back(s);
                break;
            }
        }
        stk.push_back(next++);
    }

    return stk; 
}


ll N;
string isC;
point Z;
vector <int> ret;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector <point> ar;

    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> Z.x >> Z.y >> isC;
        // if(isC == "Y")
        ar.push_back(Z);
    }
    
    sort(ar.begin(),ar.end(),comp1);
    for(int x=1; x<N; x++) {
        ar[x].p = ar[x].x - ar[0].x;
        ar[x].q = ar[x].y - ar[0].y;
    }
    sort(ar.begin()+1,ar.end(),comp2);
    for(int x = ar.size()-1; x>1; x--) {
        if(ccw(ar[0],ar[x-1],ar[x])!=0) {
            reverse(ar.begin()+x,ar.end());
            break;
        }
    }

     vector <int> ret = getConvexHull(ar);
    cout << ret.size()<<"\n";
    for(int x=0; x<ret.size(); x++) {
        cout << ar[ret[x]].x << " " << ar[ret[x]].y << "\n";
    }
    // cout << ar.size() << "\n";
    // for(auto i : ar) {
    //     cout << i.x << " " << i.y << "\n";
    // }
}