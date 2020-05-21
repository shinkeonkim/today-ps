#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll tc,N,ans;
ll ar[1100];;
bool check[1100];

void dfs(int x) {
    check[x] = false;
    x = ar[x];
    if(check[x]) {
        dfs(x);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        cin >> N;
        ans = 0;
        for(int x=1; x<=N; x++) {
            cin >> ar[x];
            check[x] = true;
        }
        for(int x=1; x<=N; x++) {
            if(check[x]) {
                ans++;
                dfs(x);
            }
        }
        cout << ans << "\n";
    }
}