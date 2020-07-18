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

int N,ans;
int D[1100][1100];

void dfs(int Y, int X, int count, int prevY, int prevX) {
    if(D[Y][X] == 1 || count  >= N) {
        if(count == N && D[Y][X] == 1 ) ans++;
        return;
    }

    D[Y][X] = 1;
    if(Y!= prevY || X-1 != prevX) {
        dfs(Y, X-1, count+1, Y, X);
    }
    if(Y!= prevY || X+1 != prevX) dfs(Y, X+1, count+1, Y, X);
    if(Y%2 ==0) {
        if(X%2 == 0) {
            if(Y + 1!= prevY || X != prevX) dfs(Y+1,X, count+1, Y, X); 
        } 
            
        else {
            if(Y - 1!= prevY || X != prevX) {
                dfs(Y-1,X,count+1, Y, X);
            }
        } 
    }
    else {
        if(X%2 == 1) {
            if(Y + 1!= prevY || X != prevX) {
                dfs(Y+1,X, count+1, Y, X); 
            }
        }
        else {
            if(Y-1!= prevY || X != prevX) {
                dfs(Y-1,X,count+1, Y, X);
            }
        }
    }

    D[Y][X] = 0;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    D[550][549] = 1;
    dfs(550, 550, 0, 550,549);    
    cout << ans;   
}