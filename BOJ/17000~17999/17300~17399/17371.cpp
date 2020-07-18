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


ll N;
ll X[1100], Y[1100];
ll ansX, ansY, ans = 987654321ll; 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0,N) {
        cin >> X[i] >> Y[i];
        ansX = X[i];
        ansY = Y[i];
    }    


    for1(0,N) {
        ll m = -1;
        ll tempX;
        ll tempY;
        for1j(i+1,N) {
            ll d = (X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]);
            if(d >= m) {
                m = d;
                tempX = X[i];
                tempY = Y[i];
            }
        } 
        if(m <= ans && m != -1) {
            ans = m;
            ansX = tempX;
            ansY = tempY;
        }
    }
    cout << ansX << " " << ansY;
}