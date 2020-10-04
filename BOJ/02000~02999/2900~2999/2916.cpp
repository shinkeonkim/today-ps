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

ll N, K;
ll a;
ll D[366];
llv1 V;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    D[0] = 1;
    for1(0, N) {
        cin >> a;
        D[a] = 1;
    }
    for1(0, K) {
        cin >> a;
        V.pb(a);
    }

    for(int i = 0; i <= 359; i++) {
        for(int j = 0; j <=359; j++) {
            for(int k = 0; k <=359; k++) {
                if(D[j] && D[k]) {
                    D[(j+k)%360] = 1;
                    D[(j-k+360)%360]=1;
                    D[(k-j+360)%360]=1;
                }
            }
        }
    }
    foreach(V) {
        if(D[i]) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}