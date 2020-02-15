#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s,a;
string k = "#";
int D[220000];
int r = 0, p = 0,ans,N,x;
int main() {
    cin >> a;
    s = " ";
    for(x=0; x<a.length(); x++) {
        s+=k;
        s+=a[x];
    }s+=k;
    N = s.length();
    for(x = 1; x<N; x++) {
        if(x <= r) D[x] = min(D[2*p-1],r-x);
        else D[x] = 0;
        while(x-D[x]-1 >0 && x+D[x]+1 <N && s[x-D[x]-1] == s[x+D[x]+1]) D[x]++;
        if(r<x+D[x]) r = x + D[x], p = x;
    }
    for(int x = 1; x<N; x++) ans = max(ans,D[x]);
    cout<<ans;
}