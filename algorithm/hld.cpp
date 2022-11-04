// https://justicehui.github.io/hard-algorithm/2020/01/24/hld/
// 하다 맘.

#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

#define MX 110000

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

int sz[MX], depth[MX], parent[MX], top[MX], in[MX], out[MX];
bool check[MX];
iv1 child[MX]; // g
iv1 adj[MX];

/*
sz[i]: i를 루트로 하는 서브 트리의 크기
depth[i]: i의 깊이
parent[i]: i의 부모 노드
top[i]: i가 속한 체인의 가장 위에 있는 정점
in[i], out[i]: dfs를 돌면서 들어가는 시점과 빠져나오는 시점
child[i]: i의 자식 노드 목록
check[i]: 방문 체크
adj: 양방향 그래프 간선 목록
*/

void dfs0(int v = 1) {
  check[v] = true;
  for(auto node : adj[v]) {
    if(check[v]) continue;
    check[v] = true;
    child[v].pb(node);
    dfs0(node);
  }
}

void dfs1(int v = 1) {
  sz[v] = 1;
  for(auto &i : adj[v]) {
    depth[i] = depth[v] + 1;
    parent[i] = v;
    dfs(i);
    sz[v] += sz[i];
    if(sz[i] > sz[adj[v][0]]) swap(i, adj[v][0]);
  }
}

void dfs2(int v = 1)


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, q, a, b;
    cin >> n >> q;
    // n: 정점 개수, q: 쿼리 개수

    for1(n-1) {
      cin >> a >> b;
      adj[a].pb(b);
      adj[b].pb(a);
    }


    
}