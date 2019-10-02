#include <iostream>
#include <algorithm>
using namespace std;
int T,a,b;

int sol(int x,int y) {
    if(x == 1 || y== 1) {
        return 0;
    }
    else {
        return (min(a,b)-2)*2 +2;
    }
}

int main() {
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    cin >> T;
    while(T--) {
        cin >> a >> b;
        cout << sol(a,b) << "\n";
    }
}