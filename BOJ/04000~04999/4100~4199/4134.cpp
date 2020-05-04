#include <iostream>
using namespace std;
typedef long long ll;
ll T,N;
int ar[300000],cnt;
bool chk[300000];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int x=2; x<=300000; x++) {
        if(!chk[x]) {
            ar[cnt++]=x;
            for(int y=x+x;y<=300000; y+=x) chk[y] = true;
        }
    }
    cin >> T;
    while(T--) {
        bool final = true;
        cin >> N;
        if(N<=1) {
            cout<<"2\n";
            continue;
        }
        while(final) {            
            bool check = true;
            for(int x=0; x<cnt && ar[x]*ar[x]<=N; x++) {
                if(N%ar[x] ==0) {
                    check = false;
                    break;
                }
            }
            if(check) {
                break;
            } 
            else {
                if(N>3 && N%2==0) N++;
                else if(N>3) N+=2;
                else N++;
            }
        }
        cout<<N<<"\n";
        
    }
}