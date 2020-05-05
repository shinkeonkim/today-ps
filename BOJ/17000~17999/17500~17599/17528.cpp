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

ll N,ans=9999999;
ll A[333],S_a;
ll B[333],S_b;

ll DP[2][700000];

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

    cin >> N;    
    for(int x=1; x<=N; x++) {
        cin >> A[x] >> B[x];
        S_a += A[x];
        S_b += B[x];
    }

    for(int x=1; x<=N; x++) {
        for(int y=0; y <= 700000; y++) {
            if(A[x] <= y) {
                DP[x%2][y] = max(DP[(x+1)%2][y], DP[(x+1)%2][y-A[x]] + B[x]);
            }
            else {
                DP[x%2][y] = DP[(x+1)%2][y]; 
            }

            ans = min(max(y,S_b-DP[x%2][y]) , ans);
        }
    }



    cout << ans;
}