#include <iostream>
using namespace std;

int tc;
int health, n,m;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> health >> n >> m;
        int cnt = 0;
        while(health > (health/2) + 10 && cnt < n) {
            health = (health/2) + 10;
            cnt++;
        }
        health -= m*10;

        if(health <=0 ) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}