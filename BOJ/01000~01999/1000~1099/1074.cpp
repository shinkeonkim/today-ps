#include <iostream>
using namespace std;
typedef long long ll;
ll cnt,a,b,d[50],cnt2;
bool check=true;
void dfs(int n,int X,int Y) {
    // cout<< X <<" " <<Y << "\n";
    if(n==1) {
        if(check && X == a && Y == b) {
            cout << cnt;
            check=false;
        }
        if(check && X+1 == a && Y == b) {
            cout << cnt+1;
            check=false;
        }
        if(check && X == a && Y+1 == b) {
            cout << cnt+2;
            check=false;
        }
        if(check && X+1 == a && Y+1 == b) {
            cout << cnt+3;
            check=false;
        }     
    }
    

    if(n>=2) {
        if(a < X + d[n-1] && b< Y + d[n-1] && check) {
            dfs(n-1,X,Y);
        }
        else if(check && X+d[n-1]<=a && b < Y + d[n-1]) {
            cnt += d[2*(n-1)];
            dfs(n-1,X+d[n-1],Y);
        }
        else if(check && a < X + d[n-1] && Y + d[n-1] <= b) {
            cnt += 2*d[2*(n-1)];
            dfs(n-1,X,Y+d[n-1]); 
        }
        else if(check && X + d[n-1] <=a && Y + d[n-1] <=b) {
            cnt += 3*d[2*(n-1)];
            dfs(n-1,X+d[n-1],Y+d[n-1]);
        }
    }
}
        
int main() {
    int n;
    cin >> n >> b >> a;
    d[0]=1;
    for(int x=1; x<=40; x++) d[x] = d[x-1]*2;
    dfs(n,0,0);
}