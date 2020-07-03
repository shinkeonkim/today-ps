#include <bits/stdc++.h>

#define MX 220000

using namespace std;

string S,S2,P;

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


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> S >> P;
    for(auto i : S) {
        if(! ('0' <= i && i <= '9')) {
            S2 += i;
        }
    }
    
    vector <int> ret = kmp(S2,P);

    if(ret.size() > 0) {
        cout << "1";
    }
    else {
        cout << "0";
    }
}