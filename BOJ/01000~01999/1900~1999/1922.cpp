#include <bits/stdc++.h>
#define MAXN 100010

#define for1(s,n) for(int i = s; i < n; i++)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;

int root[MAXN];
int level[MAXN];

class Edge{
public:
	int node[2];
	int distance;
	Edge(int a, int b, int distance){
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}
	
	bool operator<(Edge &edge){
		return this->distance < edge.distance;
	}
};

void init(int n) {
	for1(0, n){
		root[i] = i;
		level[i] = 1;
	}
}

int find(int x) {
	return root[x] == x ? x : root[x] = find(root[x]);
}

// merge와 동시에 cycle 여부 확인
bool merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return true;
	if (level[x] < level[y]) root[x] = y;
	else root[y] = x;
	if (level[x] == level[y]) level[x]++;
	return false;
}

int main(){
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 

	int n, m, start, end, cost;
	
	cin >> n >> m;
	vector<Edge> v;
	for1(0, m){
		cin >> start >> end >> cost;
		v.pb(Edge(start, end, cost));
	}
	sort(v.begin(), v.end());
	
	init(n+1);
	int sum = 0;
	for1(0, sz(v)){
		if(!merge(v[i].node[0], v[i].node[1])){
			sum += v[i].distance;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
