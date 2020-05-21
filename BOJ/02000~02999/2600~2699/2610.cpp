#include <iostream>
#include <vector>
#include <algorithm>

#define INF 1100
using namespace std;
int N,K,a,b;

vector<vector<int>> V(110);
vector<int> ans;
int u[110];
int dis[110][110];
int find(int k) {
    if(u[u[k]] == u[k]) return u[k];
    else return u[k]=find(u[k]);
}

void uni(int A, int B) {
    if(A < B) u[B] = A;
    else u[A] = B; 
}

int main() {
    cin >> N >> K;
    for(int x=1; x<=N; x++)
        for(int y=1; y<=N; y++)
            dis[x][y] = INF;
    
    for(int x=1; x<=N; x++) u[x] = x;

    while(K--) {
        cin >> a >> b;
        dis[a][b] = 1;
        dis[b][a] = 1;
        uni(find(a),find(b));
    }
    for(int x=1; x<=N; x++) u[x] = find(x);

    for(int z=1; z<=N; z++) 
        for(int x=1; x<=N; x++)
            for(int y=1; y<=N; y++) {
                if(dis[x][y] > dis[x][z] + dis[z][y]) {
                    dis[x][y] = dis[x][z] + dis[z][y];
                }
            } 

    
    for(int x=1; x<=N; x++) {
        V[u[x]].push_back(x);
    }

    for(int x=1; x<=N; x++) {
        if(V[x].size() > 0) {
            int sub_dis = INF;
            int sub_ans = V[x][0];
            for(int y=0; y<V[x].size(); y++) {
                int d = 0;
                for(int z=0; z<V[x].size(); z++) {
                    if(y!=z) {
                        d = max(d,dis[V[x][y]][V[x][z]]);
                    }
                }
                if(d < sub_dis) {
                    sub_dis = d;
                    sub_ans = V[x][y];
                }
            }
            ans.push_back(sub_ans);
        }
    }
    cout << ans.size() << "\n";
    sort(ans.begin(), ans.end());
    for(auto i : ans) {
        cout << i << "\n";
    }
}