#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T;
int M,N;
int ar[110];
int ar2[110];
int K[110];
int seg[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--) {
        cin >> M >> N;
        for(int x=0; x<M; x++) {
            cin >> ar[x];
            ar2[x] = ar[x];
        }
        
        for(int x=0; x<N; x++) {
            cin >> K[x];
            K[x]-=1;            
        }
        sort(K,K+N);
        sort(ar2,ar2+M);
        int s=K[0];
        int e=K[0]+1;
        sort(ar+s,ar+min(e+1,M));
        // cout<<s<<" "<<e<<"#\n";
        for(int x=1; x<N; x++) {
            if(e >= K[x]) {
                e = K[x]+1;
                sort(ar+s,ar+min(e+1,M));
            }
            else {
                sort(ar+s,ar+min(e+1,M));
                s = K[x];
                e = K[x]+1;
            }
            // cout<<s<<" "<<e<<"#\n";
        }
        sort(ar+s,ar+min(e+1,M));
        bool check = true;
        for(int x=0;x<M; x++) {
            if(ar2[x] !=ar[x]) {
                cout<<"NO\n";
                check = false;
                break;
            }
        }
        if(check) {
            cout<<"YES\n";
        }
    }
}