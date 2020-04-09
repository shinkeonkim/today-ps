#include <iostream>
using namespace std;
int tc,a[4],b[4];
int f[3]; // y좌표, x0, x1
int e[3]; // x좌표 y0 y1
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        for(int x=0; x<4; x++) cin >> a[x];
        for(int x=0; x<4; x++) cin >> b[x];

        if(a[0] == a[2]) {
            e[0] = a[0];e[1] = a[1];e[2] = a[3];
            if(e[1] > e[2]) {
                int tmp = e[1];e[1] = e[2]; e[2] = tmp;
            }

            f[0] = b[1];f[1] = b[0];f[2] = b[2];
            if(f[1] > f[2]) {
                int tmp = f[1];f[1] = f[2];f[2] = tmp;
            }
        }
        else {
            e[0] = b[0];e[1] = b[1];e[2] = b[3];
            if(e[1] > e[2]) {
                int tmp = e[1];e[1] = e[2];e[2] = tmp;
            }
            f[0] = a[1];f[1] = a[0];f[2] = a[2];
            if(f[1] > f[2]) {
                int tmp = f[1];f[1] = f[2];f[2] = tmp;
            }
        }

        if((e[1] < f[0] && f[0] < e[2]) && f[1] < e[0] && e[0] < f[2]) {
            cout << "1\n";
        }
        else {
            if(((e[1] <= f[0] && f[0] <= e[2]) && f[1] <= e[0] && e[0] <= f[2]) ) {
                cout<<"2\n";
            }
            else {
                cout<<"0\n";
            }
        }
    }
}


/*
4
3 7 3 3
2 5 10 5
10 6 10 4
2 5 10 5
12 7 12 4
6 4 12 4
3 3 3 7
12 4 6 4
*/