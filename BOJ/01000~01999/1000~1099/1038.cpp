#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
vector <ll> V;
ll N;
ll check[11];

void g(ll k) {
    ll ret = 0;
    for(int x=0; x<=k; x++) {
        ret*=10;
        ret+=check[x];
    }
    V.push_back(ret);
}

void dfs(int k,int prev) {
    for(int x = prev-1; x>-1; x--) {
        check[k] = x;
        g(k);
        dfs(k+1,x);
    }
}

int main() {
    dfs(0,10);
    sort(V.begin(),V.end());
    cin >> N;
    if(N>=V.size()) cout<<-1;
    else cout<<V[N];
}