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

struct poly{
    ll ar[2200];
};

poly p[33];
poly x;
ll T, N, K;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    p[1].ar[0] = 1;
    p[1].ar[1] = 1;

    for1(2, 21) {
        for1j(0,i+1) {
            x.ar[j] = 1;
        }

        for(int a = 0; a < 220; a++) {
            for(int b = 0; b < 220; b++) {
                p[i].ar[a+b]+= x.ar[a] * p[i-1].ar[b]; 
            }
        }
    }

    cin >> T;
    while(T--) {
        cin >> N >> K;
        cout << p[N].ar[K] << "\n";
    }

    // for1(1, 21) {
    //     for1j(0, 220) {
    //         cout << p[i].ar[j] << " ";
    //     }
    //     cout << "\n";
    // }
}