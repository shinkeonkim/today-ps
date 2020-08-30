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

ll N, Q;
ll D[110000][4];
ll qa, qb, a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> Q;
    for1(1,N+1) {
        cin >> a;
        for1j(1,4) {
            D[i][j] = D[i-1][j];
        }
        D[i][a]++;
    }

    for1(0,Q) {
        cin >> qa >> qb;
        for1j(1,4){
            cout << D[qb][j] - D[qa-1][j] << " ";
        }
        cout << "\n";
    }

}