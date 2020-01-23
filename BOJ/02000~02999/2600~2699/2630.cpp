#include <iostream>
using namespace std;
int N;
int ar[220][220];
int D[220][220];
int cnt0,cnt1;

int sub_sum(int y1,int x1, int y2, int x2) {
    int S = 0;
    S += D[y2][x2];
    if(x1-1>=0) S -= D[y2][x1-1];
    if(y1-1>=0) S -= D[y1-1][x2];
    if(x1-1>=0 && y1-1>=0) S += D[y1-1][x1-1];

    return S;
}

void f(int y1, int x1, int y2, int x2) {
    int S = sub_sum(y1,x1,y2,x2);
    if(S == (y2-y1+1)*(x2-x1+1)) {
        cnt1++;
    }
    else if(S == 0) {
        cnt0++;
    }
    else if(y2-y1>=1 && x2-x1>=1){
        // cout << y1 << x1 << (y1+y2)/2 << (x1+x2)/2 <<endl;
        f(y1,x1,(y1+y2)/2,(x1+x2)/2);
        f(y1,(x1+x2)/2 + 1,(y1+y2)/2,x2);
        f((y1+y2)/2 + 1,x1,y2,(x1+x2)/2);
        f((y1+y2)/2 + 1, (x1+x2)/2 +1,y2,x2);
    }
}

int main() {
    cin >> N;
    for(int y = 0; y < N; y++) {
        for(int x = 0; x < N; x++) {
            cin >> ar[y][x];
        }
    }
    for(int y = 0; y < N; y++) {
        for(int x = 0; x< N; x++) {
            if(y == 0 && x == 0) {
                D[y][x] = ar[y][x];
            }
            else if(y == 0) {
                D[y][x] = D[y][x-1] + ar[y][x];
            }
            else if(x == 0) {
                D[y][x] = D[y-1][x] + ar[y][x];
            }
            else D[y][x] = D[y-1][x] + D[y][x-1] - D[y-1][x-1] + ar[y][x];
            // cout << D[y][x] << " ";
        }
        // cout <<endl;
    }

    f(0,0,N-1,N-1);

    cout << cnt0 <<endl<< cnt1;

}