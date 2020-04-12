#include <iostream>
#include <queue>
#define MX 999999999999999
using namespace std;
typedef long long ll;

ll N;
ll ar[440000];
ll D[440000][11];

struct st {
    ll point, cnt, S;
};

int main() {
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> ar[x];
        for(int d=0;d<4; d++) {
            D[x][d] = -MX;
        }
    }
    queue <st> Q;
    bool chk = true;
    ll ans = 0;
    if(N%2 ==0) {
        Q.push({0,0,ar[0]});
        Q.push({1,1,ar[1]});
        while(!Q.empty()) {
            st F = Q.front();
            Q.pop();
            if(F.point >= N) continue;
            if(D[F.point][F.cnt] > F.S) continue;
            D[F.point][F.cnt] = F.S;
            if(F.point == N-1 && F.cnt == 1) {
                if(chk) {
                    ans = F.S;
                    chk = false;
                }
                if(F.S > ans ) {
                    ans = F.S;
                }
            }
            if(F.point == N-2 && F.cnt == 0) {
                if(chk) {
                    ans = F.S;
                    chk = false;
                }
                if(F.S > ans) {
                    ans = F.S;
                }
            }

            if(F.cnt == 0) {
                Q.push({F.point+3, F.cnt + 1, F.S + ar[F.point+3]});
            }
            Q.push({F.point+2, F.cnt, F.S + ar[F.point+2]});
        }
        cout<<ans;
    }
    else {
        Q.push({0,0,ar[0]});
        Q.push({1,1,ar[1]});
        Q.push({2,0,ar[0]+ar[2]});
        Q.push({2,2,ar[2]});
        while(!Q.empty()) {
            st F = Q.front();
            Q.pop();
            if(F.point >= N) continue;
            if(D[F.point][F.cnt] > F.S) continue;
            D[F.point][F.cnt] = F.S;
            
            if(F.point == N-1 && F.cnt ==2) {
                if(chk) {
                    ans = F.S;
                    chk = false;
                }
                if(F.S > ans) {
                    ans = F.S;
                }
            }
            if(F.point == N-2 && F.cnt == 1)  {
                if(chk) {
                    ans = F.S;
                    chk = false;
                }
                if(F.S > ans) {
                    ans = F.S;
                }
            }
            if(F.point == N-3 && F.cnt == 0) {
                if(chk) {
                    ans = F.S;
                    chk = false;
                }
                if(F.S > ans) {
                    ans = F.S;
                }
            }

            if(F.cnt == 0 || F.cnt == 1) {
                Q.push({F.point+3, F.cnt + 1, F.S + ar[F.point+3]});
            }
            Q.push({F.point+2, F.cnt, F.S + ar[F.point+2]});
        }
        cout<<ans;
    }
}