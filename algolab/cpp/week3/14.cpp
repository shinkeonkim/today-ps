#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct point {
    int X,Y;
};

int tc;
int x1,y1,x2,y2;
int x,y;

int dis2(point A, point B) {
    return (A.X - B.X)*(A.X - B.X) + (A.Y - B.Y)*(A.Y - B.Y);
}

int disTaxi(point A, point B) {
    return abs(A.X - B.X) + abs(A.Y - B.Y);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> x >> y;
        // 포함.
        if(x1 <= x && x <= x2 && y1 <= y && y <= y2) {
            cout << "0 0\n";
        }
        // 십자가 영역
        else if((x1 <= x && x <= x2) || (y1 <= y && y <= y2)) {
            if(x1 <= x && x <= x2) {
                int d = min(abs(y-y1),abs(y-y2));
                cout << d*d << " " << d << "\n";
            }
            else {
                int d = min(abs(x-x1),abs(x-x2));
                cout << d*d << " " << d << "\n";
            }
        }
        // 그 외의 영역
        else {
            int mn0 = 123456789;
            int mn1 = 123456789;

            vector <point> V;
            point Z;
            Z.X = x1;
            Z.Y = y1;
            V.push_back(Z);
            Z.X = x2;
            Z.Y = y1;
            V.push_back(Z);
            Z.X = x1;
            Z.Y = y2;
            V.push_back(Z);
            Z.X = x2;
            Z.Y = y2;
            V.push_back(Z);

            point current;
            current.X = x;
            current.Y = y;
            
            for(int i=0; i < 4; i++) {
                mn0 = min(mn0,dis2(V[i],current));
                mn1 = min(mn1,disTaxi(V[i],current));
            }

            cout << mn0 <<" "<<mn1 << "\n";
        }
    }
}