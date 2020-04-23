#include <iostream>
using namespace std;
int tc;
int n;
int x[110],y[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        int s = 0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> x[i] >> y[i]; 
        }
        for(int i=0; i < n; i++) {
            s += (x[i] + x[(i+1)%n]) * (y[(i+1)%n]-y[i]);
        }
        if(s < 0) {
            cout << -s << " -1\n";
        }
        else {
            cout << s << " 1\n";
        }
    }
}