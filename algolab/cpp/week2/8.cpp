#include <iostream>
using namespace std;
int tc,n,h;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> n;
        h = n/2;
        for(int y=0; y < h; y++) {
            for(int x=0; x<y; x++) cout << "-";
            cout << "*";
            for(int x=0; x<(h-y); x++) cout << "+*";
            for(int x=0; x<y; x++) cout << "-";
            cout<<"\n";
        }
        for(int y=h; y >= 0; y--) {
            for(int x=0; x<y; x++) cout << "-";
            cout << "*";
            for(int x=0; x<(h-y); x++) cout << "+*";
            for(int x=0; x<y; x++) cout << "-";
            cout<<"\n";
        }
    }
}