#include <iostream>
using namespace std;
int N,sq;
int ar[550000];
int mo[550000];
int Q;
int a,b,c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(sq =1; sq*sq <=N; sq++) ;
    for(int x=0;x<N; x++) {
        cin >>ar[x];
        mo[x/sq]+=ar[x];
    }
    cin >> Q;
    for(int x = 0; x<Q; x++) {
        cin >> a;
        if(a == 1) {
            cin >> b >> c;
            b--;
            ar[b] +=c;
            mo[b/sq]+=c;
        }
        else {
            cin >>b;
            int mo_s=0,Sum=0;
            while(Sum + mo[mo_s]<b) {
                Sum+=mo[mo_s++];
            }
            for(int x=mo_s*sq; x<(mo_s+1)*sq; x++) {
                Sum+=ar[x];
                if(Sum >= b) {
                    cout<<x+1<<"\n";
                    break;
                }
            }
        }
    }
}