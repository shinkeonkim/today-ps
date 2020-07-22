#include <bits/stdc++.h>
using namespace std;
int T,a,S[5];
int main() {
    cin >> T;
    for(int t=0; t<T; t++) {
        for(int x=0; x<3; x++) {
            cin >> a;
            S[x] +=a;
        }
        int k = min(S[0],min(S[1],S[2]));
        if(k < 30) {
            cout<< "NO\n";
        }
        else {
            cout<<k<<"\n";
            for(int x=0; x<3; x++) S[x]-=k;
        }
    }
}