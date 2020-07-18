#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 123456789;
int N,K,W;
int T[1100];
int D[1100];
int check[1100];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> N >> K;
        vector < vector <int>> V(N+1);
        queue <int> Q;
        for(int x=1; x<=N; x++) {
            cin >> T[x];
            D[x] = T[x];
            check[x] = 0;
        }
        int a,b;
        for(int x=0; x<K; x++) {
            cin >> a >> b;
            V[a].push_back(b);
            check[b]++;
        }
        cin >> W;
        int start = 0;
        for(int x=1; x<=N; x++) {
            if(check[x] == 0) {
                Q.push(x);
            }
        }

        while(!Q.empty()) {
            int f= Q.front();
            Q.pop();
            for(auto next : V[f]) {
                D[next] = max(D[next],D[f] + T[next]);
                check[next]--;
                if(check[next] == 0) {
                    Q.push(next);
                }
            }
        }
        cout << D[W] << "\n";
    }
}