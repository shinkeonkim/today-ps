#include <iostream>
using namespace std;
int a,b,c,d;
int ar[110],cnt;
int main() {
    cin >>a >> b >> c >> d;
    for(int x=a; x<b; x++) {
        cnt++;
        ar[x]=1;
    }
    for(int x=c; x<d; x++) {
        if(ar[x]!=1) cnt++;
    }
    cout<<cnt;
}