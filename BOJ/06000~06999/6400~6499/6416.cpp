#include <iostream>
#include <map>
using namespace std;
#define MX 110
int a,b,k;
int D[MX][MX];
int K[MX][MX];
int check[MX];
int cntv, cnte;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true) {
        cntv=cnte=0;
        k++;
        cin >> a >> b;
        if(a==-1 && b == -1) break;
        for(int x=1; x<MX; x++) {
            check[x] = 0;
            for(int y=1;y<MX; y++) {
                D[x][y] = 0;
                K[x][y] = MX;
            }
        }
        if(a==0 && b==0) {
            cout << "Case "<<k<<" is a tree.\n";
            continue;
        }
        cnte=1;
        D[a][b] +=1;
        K[a][b] = 1;
        check[a]=1;
        check[b]=1;
        while(true) {
            cin >> a >> b;
            if(a == 0 && b==0) break;
            D[a][b] +=1;
            check[a] = 1;
            check[b] = 1;
            K[a][b] = 1;
            cnte++;
        }
        for(int z=1; z<MX;z++) {
            for(int x=1; x<MX; x++) {
                for(int y=1; y<MX; y++){
                    if(K[x][y] > K[x][z] + K[z][y]) {
                        K[x][y] = K[x][z] + K[z][y];
                    }
                }
            }
        }
        int root = 0;
        bool chk = true;
        for(int x =1; x<MX; x++) {
            if(check[x]) {
                if(K[x][x] != MX) chk = false;

                cntv++;
                int s = 0;
                for(int y=1; y<MX; y++) {
                    s += D[y][x];
                }
                if(s==0) root++;
                if(s>=2) chk = false;
            }
        }

        if(!chk || root > 1) {
            cout<<"Case "<<k<<" is not a tree.\n";
        }
        else cout << "Case "<<k<<" is a tree.\n";


    }
}