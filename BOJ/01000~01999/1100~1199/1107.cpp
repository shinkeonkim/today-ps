#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

#define MX 3000001ll
#define INF 10000001ll

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct st{
    ll n,k;
};

ll N,M,broken[11];
ll D[3300000];

queue <st> Q;

bool f(ll a) {
    if(a ==0 && broken[a] ==1) {
        return false;
    }
    while(a > 0) {
        if(broken[a%10]) return false;
        a/=10;
    }
    return true;    
}

ll count(ll a) {
    if(a == 0) return 1;
    ll ret = 0;
    while(a > 0) {
        a/=10;
        ret++;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M;
    for(int x=0; x<M; x++) {
        ll a;
        cin >> a;
        broken[a] = 1;
    }

    for(ll x=0; x<MX; x++) {
        if(x == 100) {
            Q.push({x,0});
            D[x] = 0;
        }
        else if(f(x)) {
            D[x] = count(x);
            Q.push({x,D[x]});
        }
        else {
            D[x] = INF;
        }
    }

    while(!Q.empty()) {
        st F = Q.front();
        Q.pop();
        if(D[F.n] < F.k) continue;
        D[F.n] = F.k;
        if(F.n-1>=0) {
            if(D[F.n-1] > F.k + 1) {
                Q.push({F.n-1,F.k+1});
            }
        }
        if(F.n+1 <= MX) {
            if(D[F.n+1] > F.k + 1) {
                Q.push({F.n+1,F.k+1});
            }
        }
    }
    cout << D[N];
}