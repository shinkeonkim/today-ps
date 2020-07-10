#include <bits/stdc++.h>
#include <queue>
using namespace std;

int tc,n,m,a;

struct st {
    int number, weight;
};

struct cmp {
    bool operator()(st a, st b) {
        return a.weight < b.weight;
    }
};

int check[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        cin >> n >> m;
        fill(check, check+100, 0);
        queue <st> q;
        priority_queue <st, vector<st>, cmp> pq;

        for(int x=0; x<n; x++) {
            cin >> a;
            q.push({x,a});
            pq.push({x,a});
        }
        int cnt = 1;
        while(!q.empty()) {
            while(check[q.front().number] == 1) {
                q.pop();
            }
            while(check[pq.top().number] == 1) {
                pq.pop();
            }

            if(q.front().weight >= pq.top().weight) {
                check[q.front().number] = 1;
                if(q.front().number == m) {        
                    cout << cnt <<"\n";
                }
                cnt++;
                q.pop();
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }

    }

}
