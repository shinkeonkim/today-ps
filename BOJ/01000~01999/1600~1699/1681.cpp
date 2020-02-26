#include <iostream>
using namespace std;
int N,K,cnt,x=0;
int main() {
    cin >> N >> K;
    while(cnt < N) {
        x++;
        int z = x;
        bool chk = true;
        while(z>0){
            if(z%10 == K) {
                chk = false;
                break;
            }
            z/=10;
        }
        if(chk) cnt++;
    }
    cout<<x;
}