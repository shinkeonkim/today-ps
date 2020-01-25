#include <iostream>
using namespace std;
int N;
int K;
int ar[110000];
int s = 1,e,ans,mid;
int main() {
    cin >> N >> K;
    ans = N;
    e = N;
    for(int i = 0; i < K; i++) {
        cin >>ar[i];
    }
    while(s<=e) {
        mid = (s+e)/2;
        bool check = true;

        if(0 < ar[0]-mid || ar[K-1]+mid <N) check = false;
        for(int i = 1; i <K; i++) {
            if(ar[i]-mid > ar[i-1]+mid) check = false;
        }

        if(check) {
            if(ans > mid) {
                ans = mid;
            }
            e = mid -1;
        }
        else {
            s = mid + 1;
        }

    }
    cout<<ans;
}