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
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll D, N,sq, ans;
ll ar[330000];
ll mo[33000];
ll pizza[330000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> D >> N;
    for(sq = 1; sq*sq <=D; sq++);
    for1(0,sq) mo[i] = 98765432110ll;
    mo[sq] = -1;
    for1(0,D) {
        cin >> ar[i];
        mo[i/sq] = min(mo[i/sq], ar[i]);
    }
    for1(0,N) {
        cin >> pizza[i];
    }

    for1(0,N) {
        ll area = 0;
        for(ll x = 0; x<sq; x++) {
            area = x;
            if(mo[x] == -1) {
                area = x-1;
                break;
            }
            if(mo[x] < pizza[i]) {
                break;
            }
        }
        ll batch = min(sq * (area+1)-1,D-1);
        bool chk = true;
        for(ll j = sq*area; j <sq*area+sq && j < D; j++) {
            if(ar[j] < pizza[i]) {
                batch = j-1;
                chk = false;
                break;
            }
            if(ar[j] == -1) {
                batch = j-1;
                chk = false;
                break;
            }
        }
        // cout <<"***\n";
        // cout << area << " " << batch << " \n";
        if(batch == sq * area -1) {
            mo[area] = -1;
            if(batch < 0) {
                cout << 0;
                return 0;
            }
            if(ar[batch] == -1) {
                cout << 0;
                return 0;
            }
            ans = batch;
            ar[batch] = -1;
            mo[area-1] = ar[sq * (area-1)]; 
            for(ll x= sq * (area-1); x< batch; x++) {
                if(ar[x] != -1) mo[area-1] = min(mo[area-1], ar[x]);
            }
        }
        else {
            if(ar[batch] == -1) {
                cout << 0;
                return 0;
            }
            ans = batch;
            mo[area+1] = -1;
            for(ll x = batch; x<(area+1)*sq; x++) {
                ar[x] = -1;
            }
            mo[area] = ar[area*sq];
            for(ll x=area*sq; x<batch; x++) {
                if(ar[x] != -1) mo[area] = min(mo[area], ar[x]);
            }
        }
        // for(ll x=0; x<sq; x++) {
        //     cout << mo[x] << " ";
        // }
        // cout << "\n";
        // for(ll x=0; x<D; x++) {
        //     cout << ar[x] << " ";
        // }
        // cout << "\n";
    }

    cout << ans + 1;
}