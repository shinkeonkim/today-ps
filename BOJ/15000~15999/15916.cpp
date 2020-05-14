#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,ar[110000],K;
int z = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int x=1; x<=N; x++) cin >> ar[x];
    cin >> K;

    for(int x=1; x<=N; x++) {
        if(ar[x] < K*x) z|=1;
        if(ar[x] > K*x) z|=2;
        if(ar[x] == K*x) z|=3;
    }
    if(z==3) {
        cout << "T";
    }
    else cout << "F";
    
}