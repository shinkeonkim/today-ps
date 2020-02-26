#include <iostream>
using namespace std;
int N,cnt;
int main() {
    cin >> N;
    for(int x=N/3; x<=N/2; x++) {
        for(int y=1; y<=x; y++) {
            int z = N-x-y;
            if(x>=y && y>=z && z>0 && x < y+z) {
                cnt++;
            }
        }
    }
    cout<<cnt;
}