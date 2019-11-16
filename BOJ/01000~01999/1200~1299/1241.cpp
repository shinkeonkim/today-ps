#include <iostream>
using namespace std;
int N;
int ar[1100000];
int D[11000000];
int ans[110000];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int x = 0; x<N; x++) {
        cin>>ar[x];
        D[ar[x]]++;
    }
    for(int x= 0; x<N; x++) {
        for(int y=1; y*y<=ar[x]; y++) {
            if(ar[x]%y == 0) {
                ans[x] += D[y];
                if(y!= ar[x]/y)ans[x] += D[ar[x]/y];
            }
        }
    }
    for(int x= 0; x<N; x++) {
        cout <<ans[x]-1<<"\n";
    }

}