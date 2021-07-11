#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

ll p;
ll t,m;
bool D[11000];
bool chk[55000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fill(D+2, D+10001, true);
    
    for(int i = 2; i <= 10000; i++) {
        if(D[i]) {
            for(int j = i + i; j <=10000; j+=i) D[j] = false;
        }
    }

    cin >> p;
    while(p--) {
        cin >> t >> m;
        if(!D[m]) {
            cout << t << " " << m << " " << "NO\n";
            continue;
        }

        fill(chk, chk+50000, false);

        ll m2 = m;
        bool flag = true;

        while(!chk[m2]) {
            chk[m2] = true;
            if(m2 == 1) {
                cout << t << " " << m << " " << "YES\n";
                flag = false;
                break;
            }
            ll tmp = 0;
            while(m2 > 0) {
                tmp += (m2%10) * (m2%10);
                m2/=10;
            }
            m2 = tmp;
        }
        if(flag) {
            cout << t << " " << m << " " << "NO\n";
        }
    }
}