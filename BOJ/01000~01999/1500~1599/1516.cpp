#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int N;
int T[550];
int cnt[550];
bool check[550];
vector< vector<ll> > V(550);
vector<vector<int>> time(550);

int main() {
    cin >> N;
    for(int x= 1 ; x<=N; x++) {
        cin >> T[x];
        int a;
        while(true) {
            cin >> a;
            if (a == -1) break;
            cnt[x]++;
            V[a].push_back(x);
        }
    }

    for(int x=1; x<=N; x++) {
        int select = 0;
        for(int y=1; y<=N; y++) {
            if(!check[y] && cnt[y] == 0) {
                select = y;
            }
        }

        check[select] = true;
        time[select].push_back(select);

        for(int v = 0; v<V[select].size(); v++) {
            int next = V[select][v];
            time[next].push_back(select);
            cnt[next]--;
        }

    }
    for(int x= 1; x<=N; x++) {
        sort(time[x].begin(),time[x].end());
        int ret = T[time[x][0]];
        for(int v = 1; v<time[x].size(); v++) {
            if(time[x][v]!= time[x][v-1]) {
                ret += T[time[x][v]];
            }
        }
        cout <<ret <<endl;

    }
}