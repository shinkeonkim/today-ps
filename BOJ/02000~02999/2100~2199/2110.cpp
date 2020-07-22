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

ll N, K,ans;
ll ar[220000];
ll s=1ll, e=1000000000ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    for1(0, N) {
        cin >> ar[i];
    }

    sort(ar,ar+N);

    while(s<=e) {
        ll mid = (s+e)/2ll;
        ll count = 1;
        ll current = ar[0];
        ll dis = 1111111111ll;
        llv1 V;
        for(int x=1; x<N; x++) {
            if(current + mid <= ar[x]) {
                count++;
                dis = min(dis, ar[x] - current);
                V.pb(ar[x] - current);
                current = ar[x];
            }
        }
        if(count < K) {
            e = mid -1;
        }
        else {
            if(count == K && dis != 1111111111ll) {
                ans = max(dis,ans);
            }
            else if(count < K * 2 && V.size() > 0){
                ll m = V[0];
                foreach(V) {
                    m = min(m, i);
                }
                ans = max(m, ans);
            }
            s = mid +1;
        }
    }

    cout << ans;
}