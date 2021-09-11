#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

#define MX_EDGE_CNT 110000
#define MX_NODE_CNT 110000 

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;


iv1 adj[MX_EDGE_CNT]; // 간선 정보
int sz[MX_NODE_CNT]; // 서브 트리의 크기
int parent[MX_NODE_CNT]; // 부모 노드

iv1 chain[MX_NODE_CNT]; // 각 체인에 속한 노드의 번호
int depth[MX_NODE_CNT]; // 각 노드가 속한 체인의 깊이
int chain_number[MX_NODE_CNT]; // 각 노드가 속한 체인의 번호
int chain_index[MX_NODE_CNT]; // 각 노드가 속한 체인에서 몇 번째 노드인지

// sub_tree의 사이즈(무게)를 알아낸다.
int get_sub_tree_size(int cur, int par) {
  parent[cur] = par;
  sz[cur] = 1;

  for(int node: adj[cur]) {
    if(node != par) {
      sz[cur] += get_sub_tree_size(node, cur);
    }
  }
  return sz[cur];
}

// Heavy Light Decomposition
void HLD(int cur, int parent, int cur_chain, int cur_chain_depth) {
  depth[cur] = cur_chain_depth;
  chain_number[cur] = cur_chain;
  chain_index[cur] = chain[cur_chain].size();
  chain[cur_chain].pb(cur);

  int heavy_node = -1;

  for(int node : adj[cur]) {
    if(node != parent && (heavy_node == -1 || sz[node] > sz[heavy_node])) {
      heavy_node = node;
    }
  }

  if(heavy_node != -1) {
    HLD(heavy_node, cur, cur_chain, cur_chain_depth);
  }
  
  for(int node : adj[cur]) {
    if(node != parent && node != heavy_node) {
      HLD(node, cur, node, cur_chain_depth + 1);
    }
  }
}

// LCA
int LCA(int a, int b) {
  while(chain_number[a] != chain_number[b]) {
    if(depth[a] > depth[b]) {
      a = parent[chain_number[a]];
    }
    else {
      b = parent[chain_number[b]];
    }
  }
  return chain_index[a] > chain_index[b] ? b : a;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m, i, a, b;

  cin >> n;
  for1(0, n - 1) {
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }

  get_sub_tree_size(1, 0);
  HLD(1, 0, 1, 0);

  cin >> m;

  while(m--) {
    cin >> a >> b;
    cout << LCA(a, b) << '\n';
  }
}
