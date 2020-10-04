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

ll N;
ll z[1100000];
llv1 V;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    V.pb(2);
    for(int i = 3; i <=1000000; i+=2) {
        if(!z[i]) {
            V.pb(i);
            for(int j = i+i; j<=1000000; j+=i) z[j]=1;
        }
    }
    for(int i = 0; i<100; i++) {
        for(int j = i; j <100; j++) {
            for(int k = j; k<100; k++) {
                ll s = N - (V[i] + V[j] + V[k]);
                if(s <= 0) break;
                if(s==2 || (s%2!=0 &&!z[s])) {
                    llv1 ret = {V[i], V[j], V[k], s};
                    sort(ret.begin(), ret.end());
                    for(int t = 0; t < 4; t++) {
                        cout << ret[t]<<" ";
                    }
                    return 0;
                }

            }
        }
    }
    cout << -1;
}