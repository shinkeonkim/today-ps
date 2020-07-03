#include <bits/stdc++.h>

#define MX 220000

using namespace std;

string content1;
string content2;
string obj;

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
    cin >> content1 >> content2 >> obj;
    
    vector <int> ret1 = kmp(content1, obj);
    vector <int> ret2 = kmp(content2, obj);

    if(ret1.size() > 0 && ret2.size() > 0) {
        cout << "YES";
    } 
    else {
        cout << "NO";
    }
}