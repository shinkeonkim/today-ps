#include <iostream>
using namespace std;
int n,tc,h;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> n;
        h = n/2; 
        for(int y= h; y>= -h; y--) {
            for(int x=-h; x<=h; x++) {
                if(x==0 && y ==0) cout << "O";
                else if(x==0) cout << "I";
                else if(y==0) cout << "+";
                else if(x==y) cout<<"*";
                else cout<<".";
            }
            cout<<"\n";
        }
    }
}