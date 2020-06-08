#include <bits/stdc++.h>
#define MX 222222
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct st {
    ll a,cnt;
};

ll A,B,N,M;
ll D[110000];
queue <st> Q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> A >> B >> N >> M;
    fill(D,D+100011,MX);
    D[N] = 0;
    Q.push({N,0});

    while(!Q.empty()) {
        st f = Q.front();
        Q.pop();
        if(f.cnt > D[f.a]) continue;

        D[f.a] = f.cnt;

        if(f.a * A <= 100000 && D[f.a*A] > f.cnt+1) {
            D[f.a*A] = f.cnt+1;
            Q.push({f.a*A, f.cnt+1});
        }
        if(f.a * B <= 100000 && D[f.a*B] > f.cnt+1) {
            D[f.a*B] = f.cnt+1;
            Q.push({f.a*B, f.cnt+1});
        }
        if(f.a + A<= 100000 && D[f.a + A] > f.cnt+1) {
            D[f.a + A] = f.cnt+1;
            Q.push({f.a + A, f.cnt+1});
        }
        if(f.a + B <= 100000 && D[f.a + B] > f.cnt+1) {
            D[f.a + B] = f.cnt+1;
            Q.push({f.a + B, f.cnt+1});
        }
        if(f.a - A > -1 && D[f.a - A] > f.cnt+1) {
            D[f.a - A] = f.cnt+1;
            Q.push({f.a - A, f.cnt+1});
        }
        if(f.a - B > -1 && D[f.a - B] > f.cnt+1) {
            D[f.a - B] = f.cnt+1;
            Q.push({f.a - B, f.cnt+1});
        }
        if(f.a + 1 <= 100000 && D[f.a + 1] > f.cnt+1) {
            D[f.a + 1] = f.cnt+1;
            Q.push({f.a + 1, f.cnt+1});
        }
        if(f.a - 1 > -1 && D[f.a - 1] > f.cnt+1) {
            D[f.a - 1] = f.cnt+1;
            Q.push({f.a - 1, f.cnt+1});
        }
    }
    
    cout << D[M];
}