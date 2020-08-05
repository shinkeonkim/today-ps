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
    ll p=0,q=0;
    bool operator <(point b){
        if(x != b.x) {
            return x < b.x;
        }
        return y < b.y;
    };
    bool operator <=(point b){
        if(y == b.y && x == b.x) return true;
        if(x != b.x) {
            return x <= b.x;
        }
        return y <= b.y;
    };
};

ll ccw(point p1, point p2, point p3) {
    ll ret = (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
    return ret >0?1:(ret<0?-1:0);
}

void swapPoint(point a, point b) {
    point tmp;
    tmp = a;
    a = b;
    b= tmp;
}

bool isintersected(point a, point b, point c, point d) {
    ll lineAB = ccw(a,b,c) * ccw(a,b,d);
    ll lineCD = ccw(c,d,a) * ccw(c,d,b);
    if(lineAB == 0 && lineCD == 0) {
        if(b < a) swapPoint(a,b);
        if(d < c) swapPoint(c,d);
        return (c<=b && a<=d);
    }
    return lineAB <=0 && lineCD <=0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
}