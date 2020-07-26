#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e18

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N, M;
ll D[33][33];
string a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0, 30) {
        for1j(0, 30) {
            D[i][j] = INF;
        }
    }
    getline(cin, a);
    for1(0, N) {
        getline(cin, a);
        D[(int)a[0]-97][(int)a[5]-97] = 1;
    }

    for1(0, 26) {
        for1j(0, 26) {
            for(int k = 0; k < 26; k++) {
                if(D[j][k] > D[j][i] + D[i][k]) {
                    D[j][k] = D[j][i] + D[i][k];
                }
            }
        }
    }
    cin >> M;
    getline(cin, a);
    for1(0, M) {
        getline(cin, a);
        if(D[a[0]-97][a[5]-97] == INF) {
            cout << "F\n";
        }
        else {
            cout << "T\n";
        }
    }
    
}
