#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll tc,N,ans=9999999;
ll A[1100],S_a;
ll B[1100],S_b;

ll DP[2][330000];

ll min(ll a,ll b) {
    return a>b?b:a;
}
ll max(ll a, ll b) {
    return a>b?a:b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> tc;
    while(tc--) {
        cin >> N;    
        ans = 9999999999ll;
        A[0]=0;
        B[0]=0;
        S_b = 0;
        for(int x=1; x<=N; x++) {
            cin >> A[x] >> B[x];
            S_b += B[x];
        }
        for(int y=0; y <= 220000; y++) {
            DP[0][y] = DP[1][y] = 0;
        }
        for(int x=1; x<=N; x++) {
            for(int y=0; y <= 220000; y++) {
                if(A[x] <= y) {
                    DP[x%2][y] = max(DP[(x+1)%2][y], DP[(x+1)%2][y-A[x]] + B[x]);
                }
                else {
                    DP[x%2][y] = DP[(x+1)%2][y]; 
                }

                ans = min(max(y,S_b-DP[x%2][y]) , ans);
            }
        }
        cout << ans << "\n";
    }
}