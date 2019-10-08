#include <iostream>
using namespace std;
long long N,ans=1,M,a;
int main() {
    cin >> N >> M;
    for(int x=0; x<N; x++) {
        cin >> a;
        if(a == 0) a++;
        ans *= a;
        ans %=M;
    }
    cout<<ans%M;
}