#include <bits/stdc++.h>
#define MX 110
 
#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;
 
ll tc;
ll N;
string a;
string b = "abacaba";
 
vector <int> isIn(string s, string o) {
    vector <int> ret = {};
    for(int i = 0; i  < s.length(); i++) {
        bool chk = true;
        for(int j = 0; j < o.length(); j++) {
            if(i+j >= s.length()) {
                chk= false;
                break;
            }
            if(s[i + j] == '?') continue;

            if(s[i + j] != o[j] ) {
                chk = false;
                break;
            }
        }
        if(chk) {
            ret.pb(i);
        }
    }
    return ret;
}

vector <int> isIn2(string s, string o) {
    vector <int> ret = {};
    for(int i = 0; i < s.length(); i++) {
        bool chk = true;
        for(int j = 0; j < o.length(); j++) {
            if(i+j >= s.length()) {
                chk= false;
                break;
            }
            if(s[i + j] != o[j]) {
                chk = false;
                break;
            }
        }
        if(chk) {
            ret.pb(i);
        }
    }
    return ret;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        cin >> N >> a;
        vector <int> ret = isIn2(a,b);
        if(ret.size() == 1) {
            cout << "Yes\n";
            for(int i = 0; i < a.size(); i++) {
                if(ret[0] == i) {
                    cout << b;
                    i+=6;
                }
                else if(a[i] == '?'){
                    cout << "d";
                }
                else {
                    cout << a[i];
                }
            }
            cout << "\n";
        }
        else if(ret.size() > 1){
            cout << "No\n";
        }
        else {
            vector <int> ret2 = isIn(a,b);
            if(ret2.size() > 0) {
                bool ccc = true;
                for(auto c : ret2) {
                    string sss =  "";
                    for(int i = 0; i < a.size(); i++) {
                        if(c == i) {
                            sss+= b;
                            i+=6;
                        }
                        else if(a[i] == '?'){
                            sss+="d";
                        }
                        else {
                            sss+=a[i];
                        }
                    }
                    if(isIn2(sss,b).size() ==  1) {
                        cout << "Yes\n"<<sss<<"\n";
                        ccc = false;
                        break;
                    }
                }
                if(ccc) {
                    cout <<"No\n";
                }
            }
            else {
                cout << "No\n";
            }
        }
    }
}