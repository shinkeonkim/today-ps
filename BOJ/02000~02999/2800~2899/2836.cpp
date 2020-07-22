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

struct st {
    ll s, e;
    bool operator<(st b) {
        if(s!=b.s) {
            return s < b.s;
        }
        else return e < b.e;
    }
};

ll N,M,cnt;
st ar[330000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for(int x=0; x<N; x++) {
        st Z;
        cin >> Z.s >> Z.e;
        if(Z.s > Z.e) {
            ar[cnt++] = {Z.e, Z.s};
        }
    }
    
    if(cnt == 0) {
        cout << M;
        return 0;
    }

    sort(ar,ar + cnt);

    ll total = 0;
    ll start = ar[0].s;
    ll last = ar[0].e;

    for(int x = 1; x<cnt; x++) {
        if(ar[x].s <= last) {
            last = max(ar[x].e, last);
        }
        else {
            total += last - start;
            start = ar[x].s;
            last = ar[x].e;
        }
    }
    total += last - start;

    cout << M + total * 2;

}