#include <bits/stdc++.h>

#define MX 2200000

using namespace std;

int fail[MX];
vector <int> kmp (string s, string o) {
    fill(fail, fail+MX, 0);
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

int gcd(int a, int b) {
    return b >0?gcd(b, a%b):a;
}

int N;
string a;
string b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    getline(cin, a);
    getline(cin, a);
    getline(cin, b);
    a = a + " " + a.substr(0, a.length() - 1);
    int ret = kmp(a, b).size();
    int z = gcd(ret, N);
    cout << ret/z <<"/" <<N/z;
    
}