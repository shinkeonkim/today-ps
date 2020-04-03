#include <iostream>
#include <vector>
#include <queue>
#define Mx 9876543210
using namespace std;
typedef long long ll;

struct st{ 
    ll Place,Cost;
};


ll S,E,N,M,i;
ll cnt;
vector<ll> L[440000];
ll cost[440000];
queue <st> Q;




int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int x=1; x<=N; x++) cost[x] = Mx;

    for(int x=1; x<=M; x++) {
        cost[x+N] = Mx;
        cin >> cnt;
        for(int y=0; y < cnt; y++) {
            cin >> i;
            L[x+N].push_back(i);
            L[i].push_back(x+N);
        }
    }

    cin >> S >> E;
    if(S == E) {
        cout << 0;
        return 0;
    }
    Q.push({S,0});
    cost[S] = 0;
    
    while(!Q.empty()) {
        st F = Q.front();
        Q.pop();
        if(F.Cost > cost[F.Place]) continue;

        for(int v =0; v<L[F.Place].size(); v++) {
            ll next_station = L[F.Place][v];
            if (next_station > N){
                if(cost[next_station] > F.Cost + 1) {
                    cost[next_station] = F.Cost + 1;
                    Q.push({next_station, F.Cost + 1});
                }
            }
            else {
                if(cost[next_station] > F.Cost) {
                    cost[next_station] = F.Cost;
                    Q.push({next_station,F.Cost });
                }
            }
        }
    }
    if(cost[E] == Mx) {
        cout<<-1;
    }
    else {
        cout<<cost[E]-1;
    }

    // cout<<"\n";
    // for(int x=1; x<=N; x++) {
    //     cout << cost[x]<<" ";
    // }
    // cout<<"\n";
    // for(int x=1; x<=M; x++) {
    //     cout << cost[x+N] <<" ";
    // }
}