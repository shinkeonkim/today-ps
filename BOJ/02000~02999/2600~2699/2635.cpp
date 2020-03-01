#include <iostream>
using namespace std;
int N,a,b,Mx,cnt,ans;
int main() {
    cin >> N;
    for(int x=1; x<=N; x++) {
        a = N;
        b = x;
        cnt = 0;
        while(a-b >=0) {
            cnt++;
            int c = a-b;
            a = b;
            b = c;
        }
        if(cnt > Mx) {
            Mx = cnt;
            ans = x;
        }
    }
    cout<<Mx+2<<"\n";
    a=N;
    b=ans;
    cout << a << " " << b <<" ";
    while(a-b >=0) {
        int c = a-b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
}