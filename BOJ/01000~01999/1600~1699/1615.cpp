#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define MAX 2200
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll a[MAX], tree[MAX * 4]; 
ll N, M, ans, aa, bb;
llv1 V[MAX];

void init(int node, int x, int y) {
	if (x == y) {
		tree[node] = a[x]; 
		return; 
	}
	int mid = (x + y)/2; 
	init(node*2, x, mid); 
	init(node*2 + 1, mid + 1, y); 
	tree[node] = tree[node*2] + tree[node*2 + 1];
}

void update(int pos, ll val, int node, int x, int y) {
	if (pos < x || pos > y) return; 
	if (x==y) {
		tree[node] = val; 
		return; 
	}
	int mid = (x + y)/2; 
	update(pos, val, node*2, x, mid); 
	update(pos, val, node*2 + 1, mid + 1, y); 
	tree[node] = tree[node*2] + tree[node*2 + 1];  
}

ll query(int lo, int hi, int node, int x, int y) {
	if (lo > y || hi < x) return 0; 
	if (lo <= x && y <= hi) return tree[node]; 
	int mid = (x + y)/2;
	return query(lo, hi, node*2, x, mid) + query(lo, hi, node*2 + 1, mid + 1, y);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0, M) {
        cin >> aa >> bb;
        V[aa].pb(bb);
        a[bb]++;
    }
    init(1, 1, N);

    for1(1, N+1) {
        llv1 tmp;
        foreachj(V[i]) {
            tmp.pb(j);
            a[j]--;
            update(j, a[j],1, 1, N);
        }
        foreachj(tmp) {
            ans += query(1, j-1, 1, 1, N);
        }
    }
    cout << ans;
}