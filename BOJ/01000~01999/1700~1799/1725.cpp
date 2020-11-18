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

ll N;
ll ar[110000];
ll minTree[440000];
ll minTreeIdx[440000];

void init(ll x, ll y, ll idx) {
    if(x == y) {
        minTree[idx] = ar[x];
        minTreeIdx[idx] = x;
        return;
    }
    ll mid = (x + y) / 2;
    init(x, mid, idx*2);
    init(mid+1, y, idx*2+1);
    if(minTree[idx*2] < minTree[idx*2+1]) {
        minTree[idx] = minTree[idx*2];
        minTreeIdx[idx] = minTreeIdx[idx*2];
    }
    else {
        minTree[idx] = minTree[idx*2+1];
        minTreeIdx[idx] = minTreeIdx[idx*2+1];
    }
}

pair<ll,ll> query(ll left, ll right, ll x, ll y, ll idx) {
    if(left > y || right < x) return {INF, -1};
    if(left <= x && y <= right) return {minTree[idx], idx};
    ll mid = (x + y) / 2;
    pair<ll, ll> l = query(left, right, x, mid, idx * 2);
    pair<ll, ll> r = query(left, right, mid+1, y, idx*2+1);

    if(l.first < r.first) {
        return l;
    }
    else {
        return r;
    }
}

ll solution(ll s, ll e) {
    if(s > e) return 0;
    pair <ll, ll> ret = query(s, e, 1, N, 1);
    ll minIdx = minTreeIdx[ret.second];
    
    ll ans = (e - s + 1) * ret.first;
    ll leftRet = solution(s, minIdx-1);
    ll rightRet = solution(minIdx+1, e);

    return max(ans, max(leftRet, rightRet));
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(true) {
        cin >> N;
        if(N==0) break;
        for1(1, N+1) cin >> ar[i];
        fill(minTree, minTree+400001, INF);
        fill(minTreeIdx, minTreeIdx+400001, 0);
        init(1, N, 1);
        cout << solution(1, N) << "\n";
    }

}