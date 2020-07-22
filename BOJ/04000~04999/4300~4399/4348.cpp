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

ll tc;
ll N,k;
ll ar[33];
bool d[2048*2048];

bool f(int idx, int s, int chk) {
    if(s > k) return false;
    if(d[chk]) return false;
    if(s == k) s = 0;
    if(idx == N && s == 0) return true;
    d[chk] = true;
    for(int i = 0; i < N; i++) {
        if(!(chk & (1 << i))) {
            if(f(idx+1, s + ar[i], chk | (1<<i))) {
                return true;
            }
        } 
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        ll s = 0;
        cin >> N;
        for1(0, N) {
            cin >> ar[i];
            s += ar[i];
        }
        k = s / 4;
        if(s % 4 !=0) {
            cout << "no\n";
            continue;
        }
        fill(d,d+(1<<(N+1)),false);

        if(f(0,0,0)) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

}