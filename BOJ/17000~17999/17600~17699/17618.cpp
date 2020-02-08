#include <iostream>
using namespace std;
int N,ans;
int main() {
    cin >> N;
    for(int x=1; x<=N; x++) {
        int k = x;
        int s = 0;
        while(k>0) {
            s+=k%10;
            k/=10;
        }
        if(x%s ==0) ans++;
    }
    cout<<ans;
}