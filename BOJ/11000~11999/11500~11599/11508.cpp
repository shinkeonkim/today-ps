#include <iostream>
#include <algorithm>
using namespace std;
int N,ans;
int ar[110000];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int x=0; x<N; x++) cin >> ar[x];    
    sort(ar,ar+N,greater <int> ());
    for(int x=0; x<N; x+=3) {
        ans += ar[x] + ar[x+1];
    }
    cout<<ans;
}