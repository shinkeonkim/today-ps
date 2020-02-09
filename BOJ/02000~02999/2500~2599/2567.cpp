#include <iostream>
using namespace std;
int check[110][110];
int N,X,Y,ans;
int main() {
    cin >> N;
    for(int x= 0; x<N; x++) {
        cin >> X >> Y;
        for(int x=X; x<X+10; x++) {
            for(int y=Y; y<Y+10; y++) {
                check[y+1][x+1]=1;
            }
        }
    }
    for(int x=1; x<=101; x++) {
        for(int y=1; y<=101; y++) {
            if(!check[y][x]) {
                ans += check[y+1][x] + check[y-1][x] +check[y][x+1] +check[y][x-1];
            }
        }
    }
    cout<<ans;
    
}