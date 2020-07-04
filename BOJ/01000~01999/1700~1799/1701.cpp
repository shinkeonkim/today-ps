#include <bits/stdc++.h>

#define MX 5500

using namespace std;

string a,o;
int answer;
int fail[MX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> a;
    for(int k = 0; k < a.length(); k++) {
        o = a.substr(k);
        fill(fail,fail+o.length(),0);
        for(int i=1, j=0; i<o.length(); i++){
            while(j > 0 && o[i] != o[j]) j = fail[j-1];
            if(o[i] == o[j]) fail[i] = ++j;
        }

        for(int i = 0; i < o.length(); i++) {
            answer = max(answer, fail[i]);
        }
    }

    cout << answer;
}