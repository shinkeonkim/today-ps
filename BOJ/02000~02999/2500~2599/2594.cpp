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

int N,a,b,cnt,ans;
int D[2200];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;    
   for1(0,N) {
       cin >> a >> b;
       int start = (a/100) * 60 + a %100;
       int end = (b/100) * 60 + b % 100;

       for(int h = max(0,start-10); h< end+10; h++) {
            D[h] = 1;
       }
    }
    for1(600,1320) {
        if(D[i] == 0) {
            cnt++;
        }
        else if(D[i] == 1) {
            ans = max(ans,cnt);
            cnt = 0;
        }
        ans = max(ans,cnt);
    }
    cout<<ans;
}