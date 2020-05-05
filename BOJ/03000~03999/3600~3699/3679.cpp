#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>

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
    ll order;
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

ll ccw(point p1, point p2, point p3) {
    return (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
}

ll N,T;
vector <point> ar;
point Z;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--) {
        ar.clear();
        cin >> N;
        for(int x=0; x<N; x++) {
            cin >> Z.x >> Z.y;
            Z.order = x;
            ar.push_back(Z);
        }
        sort(ar.begin(),ar.end(),comp1);

        for(int x=1; x<N; x++) {
            ar[x].p = ar[x].x -ar[0].x;
            ar[x].q = ar[x].y - ar[0].y;
        }

        sort(ar.begin()+1,ar.end(),comp2);

        for(int x = ar.size()-1; x>1; x--) {
            if(ccw(ar[0],ar[x-1],ar[x])!=0) {
                reverse(ar.begin()+x,ar.end());
                break;
            }
        }
        for(auto i: ar) {
            cout << i.order <<" ";
        }
        cout << "\n";
    }
}