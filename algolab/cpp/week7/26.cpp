#include <iostream>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

ll tc;
ll a,b,c,cnt;
ll A[43];
ll B[43];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        cin >> a >> b;
        cnt = 0;
        c = 0;
        while(a >0) {
            A[cnt++] = a%2;
            a/=2;
        }
        cnt = 0;
        while(b >0) {
            B[cnt++] = b%2;
            b/=2;
        }

        for(int x=0; x<=32; x++) {
            if(A[x] == 1) a++;
            if(B[x] == 1) b++;
            if(A[x]!=B[x]) c++;
            A[x]=B[x]=0;
        }

        cout << a << " " << b <<" " << c <<"\n";
    }
    
}