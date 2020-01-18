#include <iostream>

#define Mod 1000000007

using namespace std;

int N, i, j, k;
long long D[110][11][11], ans;

int main() {
    cin >> N;
    for (j = 0; j <= 9; j++)
        D[1][j][2] = 1;

    for (i = 1; i < N; i++) {
        for (j = 0; j <= 9; j++) {
            if (j + 1 <= 9) {
                D[i + 1][j][0] = D[i][j + 1][1];
                D[i + 1][j][1] = (D[i][j + 1][3] + D[i][j + 1][4] + D[i][j + 1][2]) % Mod;
            }
            if (j - 1 >= 0) {
                D[i + 1][j][3] = (D[i][j - 1][0] + D[i][j - 1][1] + D[i][j - 1][2]) % Mod;
                D[i + 1][j][4] = D[i][j - 1][3];
            }
        }
    }
    // for(i = 0; i<=N; i++) {
    //     cout << "i = " <<i<<endl;
    //     for(j = 0; j<=9; j++) {
    //         for(k = 0; k<=4; k++) {
    //             cout<< j <<" "<< k <<" "<< D[i][j][k]<<endl;
    //         }
    //     }
    //     cout << endl;
    // }

    for (j = 0; j <= 9; j++) {
        for (k = 0; k <= 4; k++) {
            ans += D[N][j][k];
            ans %= Mod;
        }
    }
    cout << ans;
} 