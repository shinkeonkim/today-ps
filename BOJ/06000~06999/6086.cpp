#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 1100
#define INF 1000000000

using namespace std;
int n, result;
int c[MAX][MAX], f[MAX][MAX],d[MAX];
vector <int> a[MAX];

char A,B;
int cost;

// edmonds karp algorithm O(VE^2)
void maxFlow(int start, int end) {
    while(1) {
        fill(d, d+MAX, -1);
        queue <int> q;
        q.push(start);
        while(!q.empty()) {
            int x = q.front();
            q.pop();
            for(int i = 0; i < a[x].size(); i++) {
                int y = a[x][i];
                if(c[x][y] - f[x][y] > 0 && d[y] == -1) {
                    q.push(y);
                    d[y] = x;
                    if(y == end) break;
                }
            }
        }

        if(d[end] == -1) break;
        int flow = INF;
        for(int i = end; i !=start; i = d[i]) {
            flow = min(flow,c[d[i]][i] - f[d[i]][i]);
        }

        for(int i = end; i !=start; i = d[i]) {
            f[d[i]][i] += flow;
            f[i][d[i]] -= flow;
        }
        result += flow;
    }
}

int main() {
    int K;
    // n = (int)'z' - 65 +1;
    cin >> K;
    for(int x = 0; x < K; x++) {
        cin >> A >> B >> cost;
        a[(int)A - 65].push_back((int)B - 65);
        a[(int)B - 65].push_back((int)A - 65);
        c[(int)A-65][(int)B-65] += cost;
        c[(int)B-65][(int)A-65] += cost;
    }
    maxFlow(0,(int)'Z' - 65);
    cout << result;
}