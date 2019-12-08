#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>

#define MAX_V 440
#define INF 987654321

using namespace std;

int V;
int capacity[MAX_V][MAX_V], flow[MAX_V][MAX_V];

int P,a,b;

int networkFlow(int source, int sink) {
    int totalFlow = 0;

    while(true) {
        vector <int> parent(MAX_V, -1);
        queue <int> q;
        parent[source] = source;
        q.push(source);
        while(!q.empty() && parent[sink] == -1) {
            int here = q.front(); q.pop();
            for(int there = 1; there <= V; there++) {
                if(capacity[here][there] - flow[here][there] > 0 && parent[there] == -1) {
                    q.push(there);
                    parent[there] = here;
                }
            }
        }

        if(parent[sink] == -1) break;

        int amount = INF;
        for(int p = sink; p!= source; p = parent[p]) {
            amount = min(capacity[parent[p]][p] - flow[parent[p]][p], amount);
        }
        for(int p = sink; p!= source; p = parent[p]) {
            flow[parent[p]][p] += amount;
            flow[p][parent[p]] -= amount;
        }
        totalFlow += amount;
        //cout<<amount;
    }
    return totalFlow;
}

int main() {
    cin >> V >> P;
    for(int t = 0; t<P; t++) {
        cin >> a >> b;
        capacity[a][b] = 1;
    }
    cout << networkFlow(1,2);
}