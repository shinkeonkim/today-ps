#include <iostream>
using namespace std;
long long N,Q,a,p,q;
long long D[11000];
int main() {
    cin >> N >> Q;
    for(int i = 0; i < Q; i++) {
        cin >> a >> p >> q;
        if(a==1) {
            D[p]+=q;
        }
        else {
            long long S = 0;
            for(int x=p; x<=q; x++) {
                S += D[x];
            }
            cout<<S<<"\n";
        }
    }
}