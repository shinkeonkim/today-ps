#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N,S;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int x=1; x<=N; x++) {
        int c = N/x;
        S += x*c;
    }
    cout << S;
}