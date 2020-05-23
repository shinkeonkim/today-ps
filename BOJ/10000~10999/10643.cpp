#include <bits/stdc++.h>

using namespace std;

int ar[11];
int ans,s=0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    for(int x=0; x<8; x++) cin >> ar[x];
    for(int x=0; x<4; x++) s+= ar[x];
    ans = s;
    for(int x=4; x<12; x++) {
        s-=ar[(x+4)%8];
        s+=ar[x%8];
        if(ans < s) ans =s;
    }
    cout<<ans;
}