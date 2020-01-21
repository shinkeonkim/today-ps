#include <iostream>
#include <string>
using namespace std;
int N;
string s;
string ans = ".|-+";
int ar[110][110];
int x=1,y=1;
int main() {
    cin >> N >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'U') {
            if(y>=2) {
                ar[y][x] |=1;
                y-=1;
                ar[y][x] |=1;
            }
        }
        if(s[i] == 'D') {
            if(y+1 <=N) {
                ar[y][x] |=1;
                y+=1;
                ar[y][x] |=1;
            }
        }
        if(s[i] == 'L') {
            if(x>=2) {
                ar[y][x] |=2;
                x-=1;
                ar[y][x] |=2;
            }
        }
        if(s[i] == 'R') {
            if(x+1<=N) {
                ar[y][x] |=2;
                x+=1;
                ar[y][x] |=2;
            }
        }
    }

    for(int y =1; y<=N; y++) {
        for(int x = 1; x<=N; x++) {
            cout << ans[ar[y][x]];
        }
        cout<<endl;
    }

}