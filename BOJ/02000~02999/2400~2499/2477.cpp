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

vector <point> V;
ll K,A,B,X,Y;
ll dx[] = {1,-1,0,0};
ll dy[] = {0,0,-1,1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> K;
    V.push_back({X,Y});
    for(int x=0; x<6; x++) {
        cin >> A >> B;
        A--;
        X += dx[A]*B;
        Y += dy[A]*B;
        V.push_back({X,Y});
    }
    ll S = 0ll;
    for(int x=1; x<5; x++) {
        S += ccw(V[0],V[x],V[x+1]);
    }
    cout << (llabs(S)/2ll)*K;

}