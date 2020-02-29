#include <iostream>
using namespace std;
typedef long long ll;
int N,M,K,sq,a,b,c;
ll mo[4400];
ll ar[110000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(sq=1; sq*sq<=N; sq++);
    for(int x = 0; x<N; x++) {
        cin >> ar[x];
        mo[x/sq]+=ar[x];
    }

    cin >> M >>K;
    for(int x=0; x<M+K; x++) {
        cin >> a >> b >> c;
        if(a == 0) {
            b--;
            mo[b/sq] += (c-ar[b]);
            ar[b] = c;
        }
        else {
            b--;
            c--;
            int ret = 0;
            int mo_s = b/sq;
            int mo_e = c/sq;
            for(int y = mo_s; y<=mo_e; y++) {
                ret += mo[y];
            }
            for(int y = (mo_s)*sq; y<b; y++) {
                ret -= ar[y];
            }
            for(int y= (mo_e+1)*sq-1; y>c; y-- ) {
                ret -= ar[y];
            }
            cout<<ret<<"\n";

        }
    }
}