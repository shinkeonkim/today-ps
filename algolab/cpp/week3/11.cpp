#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct point {
    int X,Y;
};

int tc;

point p[3];
int d[3];
int dis2(point A, point B) {
    return (A.X - B.X)*(A.X - B.X) + (A.Y - B.Y)*(A.Y - B.Y);
}

int main() {
    cin >> tc;
    while(tc--) {
        int cnt =0;
        for(int i=0; i<3; i++) {
            cin >> p[i].X >> p[i].Y;
        }
        for(int i=0; i<3; i++) {
            for(int j=i+1; j<3; j++) {
                d[cnt++] = dis2(p[i],p[j]);
            }
        }
        sort(d,d+3);

        if(d[2] >= d[0] + d[1] + 2*sqrt(d[0]*d[1])) {
            cout << "0\n";
        }
        else {
            if (d[2] == d[0] + d[1]) {
                cout<< "1\n";
            }
            else if(d[2] > d[0] + d[1]) {
                cout<<"2\n";
            }
            else cout<<"3\n";
        }
    }
}