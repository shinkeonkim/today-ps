#include <iostream>
using namespace std;
int tc;
int N;
int ar[2200];
int D[2200][33];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        int ans = 1;
        cin >> N;
        for(int x=0; x<N; x++) {
            cin >> ar[x];   
        }


        for(int x=0; x<=N; x++) {
            for(int y=1; y<=26; y++) D[x][y]= 0;
        }



        D[0][ar[0]] = 1;


        for(int x=1; x<=N; x++) {
            for(int y=0; y<=26; y++) D[x][y] = D[x-1][y];
            if(x!=N) D[x][ar[x]]++;
            if(D[x][ar[x]] >ans) ans = D[x][ar[x]];
        }


        for(int x=0; x<N; x++) {
            for(int y=N; y>x; y--) {
                int Mx = 0;
                for(int k =1; k<=26; k++) {
                    int A = D[x][k];
                    int B = D[N][k] - D[y-1][k];
                    if(Mx < min(A,B)) {
                        Mx = min(A,B);
                    }
                }
                
                int Mx2 = 0;
                for(int k=1; k <= 26; k++) {
                    int A = D[y-1][k]-D[x][k];
                    if(Mx2 < A) {
                        Mx2 = A;
                    }
                }

                if(ans < Mx*2 + Mx2) {
                    ans = Mx*2 + Mx2;
                }
                // cout << x << " " << y << " " << Mx << " " << Mx2 << "\n"; 
            }
        }


        cout << ans << "\n";        
    }
}