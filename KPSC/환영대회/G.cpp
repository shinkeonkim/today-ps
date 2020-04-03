#include <iostream>
#include <string>
using namespace std;
int T,N;
string ar2[110];
int ar[110];
int check[110];
int KK;
int main() {
    cin >> T;
    while(T--) {
        cin >> N;
        for(int x=0; x<N; x++) {
            cin >> ar[x] >> ar2[x];
        }
        KK = ar[N-1];
        for(int x=1; x<=100; x++) check[x] = 1;

        bool chk = true;
        for(int x=0; x<N; x++) {
            if(ar2[x] == "DOWN") {
                for(int y=ar[x]; y>=1; y--) {
                    check[y] = 0;
                }
            }
            else if(ar2[x] == "UP") {
                
            }
            else {

            }
        }






        if(chk) {
            cout<<"NO\n";
        }
        else {
            cout << "YES\n";
        }
        
    }
}