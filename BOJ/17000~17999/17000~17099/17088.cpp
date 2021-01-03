#include <iostream>
#include <vector>
#include <algorithm>

#define INF ll(1e18)
#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;

typedef long long ll;

ll N, ans = INF;
ll ar[220000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for1(0, N) {
        cin >> ar[i];
    }
    if(N <= 2) {
        cout << 0;
    }
    else {
        for(int i0 = -1; i0 < 2; i0++) {
            for(int i1 = -1; i1 < 2; i1++) {
                ll cnt = abs(i0) + abs(i1);
                ll first = ar[0] + i0;
                ll second = ar[1] + i1;

                ll d = second - first;
                bool check = true;

                ll next = second + d;
                for(int j = 2; j < N; j++) {
                    ll org = ar[j];
                    if(abs(next - org) > 1) {
                        check = false;
                        break;
                    }
                    cnt += abs(next - org);
                    next = next + d;
                }

                if(check) {
                    ans = min(ans, cnt);
                }


            }
        }

        if(ans !=INF) {
            cout << ans;
        }
        else {
            cout << -1;
        }
    }
    cout << endl;
    return 0;
}