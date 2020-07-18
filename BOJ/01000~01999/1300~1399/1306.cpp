#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define MAX 1100000

using namespace std; 

typedef long long ll;
ll a[MAX], tree[MAX * 4]; 

void init(int node, int x, int y) {
	if (x == y) {
		tree[node] = a[x]; 
		return; 
	}
	int mid = (x + y)/2; 
	init(node*2, x, mid); 
	init(node*2 + 1, mid + 1, y); 
	tree[node] = max(tree[node*2] , tree[node*2 + 1]);
}

ll query(int lo, int hi, int node, int x, int y) {
	if (lo > y || hi < x) return 0; 
	if (lo <= x && y <= hi) return tree[node]; 
	int mid = (x + y)/2;
	return max(query(lo, hi, node*2, x, mid) , query(lo, hi, node*2 + 1, mid + 1, y));
}

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 

	int n, q;
	cin >> n >> q; 
	for1(1, n+1)
		cin >> a[i];
	init(1, 1, n); 
    q = (q-1)*2;
    for1(1,n-q+1) {
        cout << query(i,i+q,1,1,n) << " ";
    }
	
	return 0; 
}
