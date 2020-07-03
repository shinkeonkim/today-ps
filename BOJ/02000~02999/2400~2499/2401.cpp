#include <bits/stdc++.h>
#define MX 110000
using namespace std;

int fail[MX];
vector <int> kmp (string s, string o) {
    fill(fail,fail+MX,0);
    vector<int> result;
    int N = s.length();
    int M = o.length();
    for(int i=1, j=0; i<M; i++){
        while(j > 0 && o[i] != o[j]) j = fail[j-1];
        if(o[i] == o[j]) fail[i] = ++j;
    }
    for(int i = 0, j = 0; i < N; i++) {
        while(j > 0 && s[i] != o[j]) {
            j = fail[j-1];
        }
        if(s[i] == o[j]) {
            if(j == M-1) {
                // matching OK;
                result.push_back(i - M + 2);
                j = fail[j];
            }
            else {
                j++;
            }
        }
    }
    return result;
}

string content;
string sh;
int N;
int DP[110000];
int maxDP[110000];
int len[550];
bool check[110000][550];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> content;
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> sh;
        len[x] = sh.length();
        vector<int> ret = kmp(content, sh);
        for(auto i : ret) {
            check[i -2 + len[x]][x] = true;
        }
    }

    for(int x=0; x<content.length(); x++) {
        for(int y = 0; y < N; y++) {
            if(check[x][y]) {
                int k = x- len[y];
                if(k < 0) {
                    DP[x] = max(DP[x], len[y]);
                }
                else {
                    DP[x] = max(DP[x], maxDP[k] + len[y]);
                }
            }
        }
        if(x == 0) {
            maxDP[x] = DP[x];
        }
        else {
            maxDP[x] = max(maxDP[x-1], DP[x]);
        }
    }

    cout <<maxDP[content.length() - 1];
    
}