#include <iostream>
#include <string>
using namespace std;
string s;
int D[55000],D2[55000],ans;
int main() {
    cin >> s;
    for(int x=1; x<s.length(); x++) {
        D[x] = D[x-1];
        if(s[x] == s[x-1] && s[x] == '(') {
            D[x]++;
        }
    }
    for(int x=s.length()-2; x>-1; x--) {
        if(s[x+1] == s[x] && s[x] ==')') {
            ans += D[x-1];
        }
    }
    cout<<ans;
}