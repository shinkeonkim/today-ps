#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

int N;
int ar[2200][2200];
int ans[3];

void dfs(int Y, int X, int size) {
    int count[3] = {0,0,0};
    for(int y=Y; y<Y+size; y++) {
        for(int x = X; x<X+size; x++) {
            count[ar[y][x]+1]++;
        }
    }
    int k = size*size;
    if(count[0] == k) ans[0]++;
    else if(count[1] == k) ans[1]++;
    else if(count[2] == k) ans[2]++;
    else {
        int z = size / 3;
        for(int y=0; y<3; y++) {
            for(int x=0; x<3; x++) {
                dfs(Y+y*z, X + x*z, z);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int y=0; y<N; y++) {
        for(int x=0; x<N; x++) {
            cin >> ar[y][x];
        }
    }

    dfs(0,0,N);
    for(int x=0; x<3; x++) cout << ans[x] <<"\n";   
    
}