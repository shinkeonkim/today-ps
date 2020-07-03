#include <bits/stdc++.h>

#define MX 1100000

using namespace std;

string S,P;

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
    getline(cin, S);
    getline(cin, P);
    vector <int> ret = kmp(S,P);
    cout << ret.size() << "\n";
    for(auto i : ret) {
        cout << i << " ";
    }
}