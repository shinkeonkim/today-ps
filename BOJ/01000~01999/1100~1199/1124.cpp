#include <iostream>
using namespace std;
int A,B,k,ans;
bool ar[110000];
int main() {
    for(int x=2; x<=100000; x++) ar[x] = true;
    for(int x=2; x<=100000; x++) {
        if(ar[x]) {
            for(int y=x+x; y<=100000; y+=x) {
                ar[y] = false;
            }
        }
    }
    cin >> A >> B;
    for(int x = A; x<=B; x++) {
        int cnt = 0;
        k = x;
        for(int y=2; y*y<=x && k >1; y++) {
            while(k%y == 0 && k > 1) {
                k/=y;
                cnt++;
            }
        }
        if(k>1) cnt++; 
        if(ar[cnt]) ans++;
    }
    cout<<ans;
}