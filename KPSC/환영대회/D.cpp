#include <iostream>
using namespace std;
typedef long long ll;
ll N,K,s,e,current,cnt;
ll ar[110000];
int main() {
    cin >> N >> K;
    for(int x=0; x<N; x++) {
        cin >> ar[x];
    }
    s=0;e=1;
    current = ar[0];
    while(s<=e && e<=N) {
        if(current >= K) {
            cnt += (N-e+1);
            current-=ar[s];
            s++;
        }
        else {
            current+=ar[e];
            e++;
        }
    }
    cout<<cnt;

}