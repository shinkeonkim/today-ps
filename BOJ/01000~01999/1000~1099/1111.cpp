#include <bits/stdc++.h>

using namespace std;

int N;
int ar[110];
int diff[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for(int x=0; x<N; x++) cin >> ar[x];

    if(N == 1) {
        cout << "A";
        return 0;
    }
    else if(N == 2) {
        if(ar[0] == ar[1]) {
            cout << ar[0];
            return 0;
        }
        cout << "A";
        return 0;
    }

    bool chk = false;
    for(int i = 0; i < N-1; i++) {
        diff[i] = ar[i+1] - ar[i];
        if(diff[i] == 0) chk =true;
    }

    if(chk) {
        int bb = ar[1] - ar[0] * 0;
        bool cc = true;
        for(int i = 1; i < N; i++) {
            if(ar[i] != bb) {
                cc = false;
            }
        }
        if(cc) {
            cout << bb;
            return 0;
        }



        for(int i=1; i<N-1; i++) {
            if(diff[i] != diff[0]) {
                cout <<"B";
                return 0;
            }
        }
        cout << ar[0];
        return 0;
    }

    int k = diff[1] / diff[0];
    if(diff[1] % diff[0] !=0) {
        cout << "B";
        return 0;
    }

    for(int i = 1; i < N-2; i++) {
        if(diff[i+1] % diff[i] != 0 || diff[i+1] / diff[i] != k) {
            cout <<"B";
            return 0;
        }
    }

    int A = k;
    int B = ar[1] - ar[0]*A;
    cout << ar[N-1] * A + B;
    
}