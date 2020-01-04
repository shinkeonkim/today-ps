#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int N,S;
string s;

vector <int> get_table(string s) {
    int p = s.size();
    vector <int> table(p,0);
    int j = 0;
    for(int i = 1; i<p; i++) {
        while(j>0 && s[i] != s[j]) {
            j = table[j-1];
        }
        if(s[i] == s[j]) {
            table[i] = ++j;
        }
    }
    return table;
}

int main() {
    cin >> N >> s;
    vector <int> ret = get_table(s);
    for(int x = 0; x<ret.size(); x++) {
        if(ret[x]!=0 && x%2 == 1) {
            // cout<< ret[x] +1;
            S+= ret[x]+1;
        }
        else {
            // cout << ret[x];
            S+=ret[x];
        }
    }
    cout<<S;
}