#include <iostream>
#include <vector>

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

ll N, M;
ll ar[330][330];
ll D[330][330][11];
ll x1, y1, x2, y2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(1, N+1) 
        for1j(1, N+1) {
            cin >> ar[i][j];
        }
    
    for1(1, N+1) {
        for1j(1, N+1) {
            for(int k = 1; k <= 10; k++) {
                D[i][j][k] += D[i-1][j][k] + D[i][j-1][k] - D[i-1][j-1][k];
            }
            D[i][j][ar[i][j]]++;
        }
    }
    
    cin >> M;
    for1(0, M) {
        cin >> y1 >> x1 >> y2 >> x2;
        ll cnt = 0;
        for1j(1, 11) {
            if(D[y2][x2][j] + D[y1-1][x1-1][j] - D[y2][x1-1][j] - D[y1-1][x2][j] > 0) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}