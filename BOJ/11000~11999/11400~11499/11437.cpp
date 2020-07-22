#include <iostream>
#include <vector>

using namespace std;
int N,M,a,b;
bool check[55000];
int parent[55000];
int depth[55000];
vector < vector <int> > V(55000);

void makeTree(int node, int p, int dep) {
    depth[node] = dep;
    parent[node] = p; 
    check[node] = true;
    for(int x = 0; x < V[node].size(); x++) {
        if(!check[V[node][x]]) {
            makeTree(V[node][x], node, dep +1);
        }
    }
}

int LCA(int nodeA, int nodeB) {
    while(depth[nodeA] != depth[nodeB] || nodeA != nodeB) {
        if(depth[nodeA] > depth[nodeB]) {
            nodeA ^= nodeB;
            nodeB ^= nodeA;
            nodeA ^= nodeB;
        }
        nodeB = parent[nodeB];
    }
    return nodeA;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    
    for(int x = 1; x < N; x++) {
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }

    makeTree(1,1,1);

    cin >> M;
    for(int x = 0; x<M; x++) {
        cin >> a >> b;
        cout << LCA(a,b) << "\n";
    }
 }