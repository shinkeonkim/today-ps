#include <iostream>
using namespace std;
int N;
int K = 1;
int cnt = 1;
int main() {
    cin >>  N;
    if(N % 2 ==0 || N%5==0) {
        cout<<-1;
        return 0;
    }
    if(N==1) {
        cout << 1;
        return 0;
    }

    while(true) {
        K*=10;
        K++;
        cnt++;
        if(K > N) K%=N;
        if(K%N ==0) break;
    }
    cout<<cnt;

}