#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct vertex {
    int weight, idx;
};

int rn[100][100];
int max_flow, n;
bool check[100];
vector<int> path;

int vertex_sort(vertex a, vertex b) {
    return a.weight > b.weight;
}

bool PFS(int x, int local_flow) {
    int i;
    vector <vertex> v;
    vertex vx;

    if(x == n-1) {
        max_flow += local_flow;
        for(int i = 0; i < path.size()-1; i++) {
            rn[path[i]][path[i+1]] -= local_flow;
            rn[path[i+1]][path[i]] += local_flow;
        }

        path.clear();
        path.push_back(0);
        return true;
    }

    for(i = 0; i < n; i++) {
        if(rn[x][i] > 0 && check[i] == false) {
            vx.idx = i;
            vx.weight = rn[x][i];
            v.push_back(vx);
        }
    }

    sort(v.begin(), v.end(), vertex_sort);

    for(i = 0; i < n; i++) {
        check[v[i].idx] = true;
        path.push_back(v[i].idx);

        if(PFS(v[i].idx, min(local_flow, v[i].weight)) == true) return true;
        path.pop_back();
        check[v[i].idx] = false;
    }
    return false;
}

void MaxFlow() {
    path.push_back(0);
    while(PFS(0,999999999)) {
        fill(check,check+n,false);
        check[0] = true;
    }
}

int main() {
    int m,a,b,c;

    cin >> n >> m;

    while(m--) {
        cin >> a >> b >> c;
        rn[a][b] = c;
    }

    MaxFlow();

    cout << max_flow << endl;
}