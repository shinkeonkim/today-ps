#include <iostream>
#include <algorithm>
using namespace std;
int N,K;
long long s = 1,e,mid,ans;
int main() {
    cin >> N >> K;
    e = K;
    while(s<=e) {
        mid = (s+e)/2;
        int m = 0;
        for(int x = 1; x<=N; x++) {
            m += min(N, (int)mid/x);
        }
        if(m < K){
            s = mid + 1;
        }
        else {
            ans = mid;
            e = mid -1;
        }
    }
    cout << ans;
}