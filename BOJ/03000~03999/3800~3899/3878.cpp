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
    ll x;
    ll y;
    ll p=0;
    ll q=0;
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
    bool operator ==(point b) {
        return y == b.y && x == b.x;
    }
};

ll N,M,tc;
vector <point> black;
vector <point> white;
point Z;

ll abs(ll a) {
    return a>0?a:-a;
}

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
    ll ret = 1ll * (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p2.x * p1.y - p3.x * p2.y - p1.x * p3.y);
    return ret >0 ?1:(ret<0?-1:0);
}

void swapPoint(point a, point b) {
    point tmp;
    tmp = a;
    a = b;
    b= tmp;
}

vector <int> getConvexHull(vector <point> ar) {
    if(ar.size() == 1) {
        return {0,0};
    }

    vector <int> stk;
    stk.clear();

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
    
    
    cin >> tc;
    while(tc--) {
        black.clear();
        white.clear();
        cin >> N >> M;

        for(int x=0; x<N; x++) {
            cin >> Z.x >> Z.y;
            Z.p = Z.q = 0;
            black.push_back(Z);
        }
        for(int x=0; x<M; x++) {
            cin >> Z.x >> Z.y;
            Z.p = Z.q = 0;
            white.push_back(Z);
        }

        if(N==1 && M ==1) {
            cout <<"YES\n";
            continue;
        }

        sort(black.begin(),black.end(),comp1);
        for(int x=1; x<N; x++) {
            black[x].p = black[x].x - black[0].x;
            black[x].q = black[x].y - black[0].y;
        }
        if(white.size() > 1) sort(black.begin()+1,black.end(),comp2);
        // for(int x = black.size()-1; x>1; x--) {
        //     if(ccw(black[0],black[x-1],black[x])!=0) {
        //         reverse(black.begin()+x,black.end());
        //         break;
        //     }
        // }

        sort(white.begin(),white.end(),comp1);
        for(int x=1; x<M; x++) {
            white[x].p = white[x].x - white[0].x;
            white[x].q = white[x].y - white[0].y;
        }
        if(white.size()>1) sort(white.begin()+1,white.end(),comp2);
        // for(int x = white.size()-1; x>1; x--) {
        //     if(ccw(white[0],white[x-1],white[x])!=0) {
        //         reverse(white.begin()+x,white.end());
        //         break;
        //     }
        // }

        vector <int> bPoint =  getConvexHull(black);

        vector <int> wPoint= getConvexHull(white);
        
        bool chk = true;
        bool z1 = true;
        bool z2 = true;

        for(int x = 0; x<bPoint.size(); x++) {
            for(int y=0; y<wPoint.size(); y++) {
                if(isintersected(black[bPoint[x]],black[bPoint[(x+1) %(bPoint.size())]],white[wPoint[y]],white[(wPoint[(y+1)%(wPoint.size())])])) {
                    chk = false;
                }
            }
        }

        for(int x =0; x<bPoint.size(); x++) {
            for(int y=0; y<wPoint.size(); y++) {
                if(ccw(black[bPoint[x]],black[(bPoint[(x+1)%(bPoint.size())])],white[wPoint[y]]) <=0) {
                    z1 = false;
                    break;
                }
            }
            if(!z1) {
                break;
            }
        }
        if(z1) {
            cout << "NO\n";
            continue;
        }       

        for(int y=0; y<wPoint.size(); y++) {
            for(int x =0; x<bPoint.size(); x++) {
                if(ccw(white[wPoint[y]],white[(wPoint[(y+1)%(wPoint.size())])],black[bPoint[x]]) <=0) {
                    z2 = false;
                    break;
                }
            }
            if(!z2) {
                break;
            }
        }
        if(z2) {
            cout << "NO\n";
            continue;       
        }

        if(chk) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}