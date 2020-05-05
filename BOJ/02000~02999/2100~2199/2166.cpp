#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct point{
    ll x,y;
};

ll ccw(point p1, point p2, point p3) {
    ll ret = (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
    return ret;
}

ll N,a,b,S;
vector <point> V;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> a >> b;
        V.push_back({a,b});
    }
    for(int x=1; x<N-1; x++) {
        S += ccw(V[0],V[x],V[(x+1)%N]);
    }
    S = llabs(S);
    cout << S/2;

    if(S%2 == 0) {
        cout <<".0";
    }
    else {
        cout << ".5";
    }
}
