#include <iostream>
using namespace std;
int N;
int ans[11];
int ar[11];
int main() {
    cin >> N;
    for(int x= 1; x<=N; x++) cin >> ar[x];
    for(int x=1; x<=N; x++) {
        int k=0,k2 = 0;
        while(k2<=ar[x]) {
            k++;
            if(ans[k] == 0) k2++;
        }
        ans[k] = x;
    }
    for(int x=1; x<=N; x++) cout<<ans[x]<<" ";
}