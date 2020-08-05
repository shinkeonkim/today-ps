#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
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
typedef vector <vector <ll>> llv2;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

int V, E, a,b;
iv2 edge(11000);
iv2 edgePrime(11000);
iv2 scc;

bool visited[11000];
bool visitedPrime[11000];
int finishTimeNode[11000];
int current;

void dfs(int node) {
    visited[node] = true;
    foreach(edge[node]) {
        if(!visited[i]) {
            dfs(i);
        }
    }
    finishTimeNode[++current] = node;
}

void reverseDfs(int node, iv1& currentScc) {
    currentScc.pb(node);
    visitedPrime[node] = true;
    foreach(edgePrime[node]) {
        if(!visitedPrime[i]) {
            reverseDfs(i, currentScc);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> V >> E;

    for1(0, E) {
        cin >> a >> b;
        edge[a].pb(b);
        edgePrime[b].pb(a);
    }

    for1(1,V+1) {
        if(!visited[i]) {
            dfs(i);
        }
    }

    for(int t = V; t >= 1; t--) {
        int r = finishTimeNode[t];
        if(!visitedPrime[r]) {
            iv1 currentScc;
            reverseDfs(r, currentScc);
            sort(currentScc.begin(), currentScc.end());
            scc.push_back(currentScc);
        }
    }

    sort(scc.begin(), scc.end());

    cout << sz(scc) << "\n";
    foreach(scc) {
        foreachj(i) {
            cout << j << " ";
        }
        cout << "-1\n";
    }
}