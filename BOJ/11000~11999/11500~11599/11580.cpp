#include <iostream>
#include <string>
using namespace std;
int N,ans;
string s;
int D[2200][2200],X=1000,Y=1000;
int main() {
    cin >> N >> s;
    D[X][Y]=1;
    ans++;
    for(int x=0; x<N; x++) {
        if(s[x]=='S') {
            Y--;
        }
        if(s[x]=='N') {
            Y++;
        }
        if(s[x]=='W') {
            X--;
        }
        if(s[x]=='E') {
            X++;
        }

        if(D[X][Y] == 0) {
            ans++;
            D[X][Y] = 1;
        }
    }
    cout << ans;
}