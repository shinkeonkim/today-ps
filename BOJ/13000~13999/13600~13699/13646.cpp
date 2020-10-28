#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N, ans;
llv1 V;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(cin >> N) {
        ans = N;
        for(ll x = 2; x*x <=N; x++) {
            if(N%x ==0) {
                ans = ans / x * (x - 1) ;
            }
            while(N%x == 0 && N!=0) {
                N/=x;
            }
        }
        if(N > 1) {
            ans = ans / N * (N - 1);
        }

        cout << ans / 2 << "\n";

    }
}