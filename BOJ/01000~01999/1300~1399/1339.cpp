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
string ar[11];
map <char, ull> M;
ullv1 V;
ull cnt = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, N) {
        cin >> ar[i];
        foreachj(ar[i]) {
            if(M[j] == 0) {
                M[j] = cnt++;
            }
        }
    }
    for1(0, 10) V.pb(i);

    do {
        ull crt = 0;
        for1(0, N) {
            ull tmp = 0;
            foreachj(ar[i]) {
                tmp*=10ull;
                tmp += V[M[j]-1];
            }
            crt+=tmp;
        }
        if(crt > ans) {
            ans = crt;
        }
    }
    while(next_permutation(V.begin(), V.end()));
    cout << ans;
}