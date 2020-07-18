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

ll N,ans;
int ar[4400000];
llv1 V; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    V.pb(2);
    for(int x=3; x<=4000000; x+=2) {
        if(!ar[x]) {
            V.pb(x);
            for(int y=x+x; y<=4000000; y+=x) {
                ar[y] = 1;
            }
        }
    }   

    ll s=0,e=1,current=2;
    while(s<=e) {
        if(current == N) {
            ans++;
            current-=V[s];
            s++;    
        }
        else if(current < N) {
            current += V[e];
            e++;
            if(e >= V.size()) break;
        }
        else {
            current -= V[s];
            s++;
        }
    }
    cout << ans;


}