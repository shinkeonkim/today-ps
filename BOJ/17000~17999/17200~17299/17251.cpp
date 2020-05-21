#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N;
ll ar[1100000];
ll D1[1100000];
ll D2[1100000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> ar[x];
    }
    D1[0] = ar[0];
    for(int x=1; x<N; x++) {
        D1[x] = D1[x-1]+ar[x];
    }
    D2[N-1] = ar[N-1];
    for(int x=N-2; x>-1; x--) {
        D2[x] = D2[x+1] + ar[x];
    }
    int a=0,b=0;

    for(int x=0; x<N-1; x++) {
        if(D1[x] < D2[x+1]) b++;
        if(D1[x] > D2[x+1]) a++;
    }
    cout << a << b;
    cout << (a>b?"R":(a<b?"B":"X"));
    
}