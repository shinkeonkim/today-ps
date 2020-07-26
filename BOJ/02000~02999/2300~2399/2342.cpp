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

    ll a;
    llv1 V;

    ll D[110000][25];


    ll f(ll a, ll b) {
        if(a == b) {
            return 1;
        }
        else if(a == 0 || b == 0){
            return 2;
        }
        else {
            if(a % 2 == b % 2) {
                return 4;
            }
            else return 3;
        }
        return 0ll;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        ll ans = INF;
        V.pb(0);
        while(1) {
            cin >> a;
            if(a == 0) break;
            V.pb(a);
        }
        for1(0, V.size()) {
            for1j(0,25) D[i][j] = INF;
        }

        D[0][0] = 0;

        for(int i = 1; i < V.size(); i++) {
            for(int j = 0; j < 25; j++) {
                int prev_left = j / 5;
                int prev_right = j % 5;

                int curr_left = V[i];
                int curr_right = prev_right; 
                ll cost = f(prev_left, curr_left) + D[i-1][j];
                if(D[i][curr_left*5 + curr_right] > cost) {
                    D[i][curr_left*5 + curr_right] = cost;
                }

                curr_left = prev_left;
                curr_right = V[i];
                cost = f(prev_right, curr_right) + D[i-1][j];
                if(D[i][curr_left*5 + curr_right] > cost) {
                    D[i][curr_left*5 + curr_right] = cost;
                }
            }
        }

        for(int k = 0; k < 5; k++) {
            if(ans > D[V.size()-1][V.back() * 5 + k]) ans = D[V.size()-1][V.back() * 5 + k];
            if(ans > D[V.size()-1][V.back() + k * 5]) ans = D[V.size()-1][V.back() + k * 5];
        }
        cout << ans;

        
    }