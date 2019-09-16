#include <iostream>
#define ll long long
using namespace std;
ll T;
ll n,m,a,b,p,q,Max,Min;
ll plus_score[1100],minus_score[1100];

ll f(int team) {
    if(plus_score[team] == 0) {
        return 0;
    }
    if(minus_score[team] == 0) {
        return 1000;
    }
    return (plus_score[team] * plus_score[team] *1000) / (minus_score[team]*minus_score[team] + plus_score[team] *plus_score[team]);
}

int main() {
    cin>>T;
    for(int x = 0; x < T; x++) {
        cin >> n >> m;
        Max = 0;
        Min = 9876543210;
        for(int team = 1; team <=n; team++) {
            plus_score[team] = 0;
            minus_score[team] = 0;
        }

        for(int y = 0 ; y<m; y++) {
            cin >> a >> b >> p >> q;
            plus_score[a] += p;
            plus_score[b] += q;

            minus_score[a] += q;
            minus_score[b] += p; 
        }

        for(int team = 1; team <= n; team++) {
            ll Score = f(team);
            if(Max < Score) Max = Score;
            if(Min > Score) Min = Score;
        }
        cout<<Max<<endl<<Min<<endl;
        
    }
}