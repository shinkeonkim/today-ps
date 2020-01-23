#include <iostream>
#include <algorithm>
using namespace std;
int N;
int ar[10];
int D[10],m[10],m2[10];
int D2[10],Max,Min;
int main() {
    cin >> N;
    for(int y = 0; y < N; y++) {
        for(int x = 0; x<3; x++) cin>>ar[x];
        
        if(y==0) {
            for(int x = 0; x<3; x++) D2[x] = ar[x];
            for(int x = 0; x<3; x++) m2[x] = ar[x];
        }
        else {
            for(int x = 0; x<3; x++) {
                if(x==0) {
                    D2[x] = max(D[x],D[min(x+1,N-1)]);
                }
                else if(x==2) {
                    D2[x] = max(D[x],D[max(x-1,0)]);
                }
                else{
                    D2[x] = max(D[x],max(D[x-1],D[x+1]));
                }
                D2[x] += ar[x];
            }

            for(int x = 0; x<3; x++) {
                if(x==0) {
                    m2[x] = min(m[x],m[min(x+1,N-1)]);
                }
                else if(x==2) {
                    m2[x] = min(m[x],m[max(x-1,0)]);
                }
                else{
                    m2[x] = min(m[x],min(m[x-1],m[x+1]));
                }
                m2[x] += ar[x];
            }

        }
        Max = 0;
        Min = 123456789;
        for(int x= 0; x<3; x++) {
            D[x] = D2[x];
            m[x] = m2[x];
            Max = max(Max,D[x]);
            Min = min(Min,m[x]);
        }
    }

    cout<<Max<<" "<<Min;

}