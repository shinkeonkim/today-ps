#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define MX 9999999999ll

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,S,ans= MX,summ;
ll ar[110000];
ll s,e;

ll min(ll a, ll b) {
    return a>b?b:a;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    e = 1;

    cin >> N >> S;
    for(int x=0; x<N; x++) cin >> ar[x];
    summ = ar[0];
    while(s <= e && e <=N) {
        if(summ >=S) {
            ans = min(e-s,ans);
            summ -= ar[s];
            s++;
        }
        else {
            summ += ar[e];
            e++;
        }
    }
    if(ans == MX) {
        cout << 0;
    }
    else {
        cout << ans;
    }
    
}