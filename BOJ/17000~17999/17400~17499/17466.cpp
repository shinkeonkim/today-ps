#include <iostream>
using namespace std;
typedef long long ll;
ll N,P,K=1;
int main() {
    cin >> N >> P;
    for(int x=2; x<=N; x++) {
        K*=x;
        K%=P;
    }
    cout<<K;
}