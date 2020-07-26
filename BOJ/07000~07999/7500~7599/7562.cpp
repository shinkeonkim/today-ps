#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define INF (ll)1e18

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct st {
    ll Y, X;
    ll cost;
};

struct compare {
    bool operator()(st a, st b) {
        return a.cost > b.cost;
    }
};

ll tc,N;
ll D[330][330];
ll dx[] = {-2,-1,1,2,2,1,-1,-2};
ll dy[] = {-1,-2,-2,-1,1,2,2,1};
st S, E;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> tc;
    while(tc--) {
        cin >> N;
        cin >> S.Y >> S.X >> E.Y >> E.X;
        S.cost = 0;
        E.cost = INF;
        for(int y=0; y< N; y++) {
            for(int x=0; x<N; x++) {
                D[y][x] = INF;
            }
        }
        priority_queue <st, vector<st>, compare> Q;
        Q.push(S);
        while(!Q.empty()) {
            st F = Q.top();
            Q.pop();

            if(D[F.Y][F.X] <= F.cost) continue;
            D[F.Y][F.X] = F.cost;

            for(int d = 0; d< 8; d++) {
                ll nextX = F.X + dx[d];
                ll nextY = F.Y + dy[d];

                if(nextY < 0 || nextX < 0 || nextX >= N || nextY >= N) {
                    continue;
                }
                if(D[nextY][nextX] > F.cost + 1) {
                    Q.push({nextY, nextX, F.cost + 1});
                }
            }

        }

        cout << D[E.Y][E.X] << "\n";

    }
    
}