#include <iostream>
#include <string>
using namespace std;
int D[220000][110];
string s;
char a;
int N,l,r;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for(int x = 0; x <s.length(); x++) {
        if(x != 0) {
            for(int y = 0; y < 26; y++) {
                D[x][y] = D[x-1][y];
            }
        }
        D[x][s[x]-'a']++;
    }
    cin >> N;
    for(int y = 0; y < N; y++) {
        cin >> a >> l >> r;
        if(l>0) cout<< D[r][a-'a'] - D[l-1][a-'a'] << "\n";
        else cout<< D[r][a-'a']<<"\n";
    }
}