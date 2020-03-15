#include <iostream>
#include <string>
using namespace std;
int N,M,Mn,Mx;
string a,b;
bool check[11][55];
int d[11];

void eval() {
    int chk[55],cnt=0,S=0;
    for(int x=0; x<M; x++) chk[x] = 0;
    for(int x=0; x<N; x++) {
        if(d[x] == 1){
            cnt++;
            for(int y=0; y<M; y++) {
                if(check[x][y]==1) chk[y]=1;
            }
        }
    }
    for(int x=0; x<M; x++) S +=chk[x];
    // cout<<S <<cnt<<endl;
    if(S > Mx) {
        Mn = cnt;
        Mx = S;
    }
    else if(S==Mx) {
        if(Mn > cnt) {
            Mn = cnt;
        }
    }
}

void dfs(int k) {
    if(k==N-1){
        for(int x =0; x<2; x++) {
            d[k] = x;
            eval();
        }
    }
    else {
        for(int x = 0; x<2; x++) {
            d[k] = x;
            dfs(k+1);
        }
    }
}

int main() {
    cin >> N >> M;
    Mn = N+1;
    Mx = 0;
    for(int x=0; x<N; x++) {
        cin >> a >> b;
        for(int y=0;y<M; y++) {
            if(b[y] == 'Y') check[x][y] = 1;
        }
    }
    dfs(0);
    if(Mx == 0) cout<<-1;
    else cout<<Mn;
}