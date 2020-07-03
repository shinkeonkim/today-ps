#include <bits/stdc++.h>

#define MX 1100000

using namespace std;

int fail[MX];

int N;
string o;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> o;

    for(int i=1, j=0; i<N; i++){
        while(j > 0 && o[i] != o[j]) j = fail[j-1];
        if(o[i] == o[j]) fail[i] = ++j;
    }

    cout << N - fail[N-1];    
}