#include <bits/stdc++.h>

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

const int MX_NODE = 26;

int chrToIdx(char ch) { return ch - 'a'; }

struct Trie {
    Trie* children[MX_NODE];
    bool isEndPoint = false;

    Trie() {
        for1(0, MX_NODE) {
            children[i] = NULL;
        }
    }

    ~Trie() {
        for1(0, MX_NODE) {
            if(children[i]) delete children[i];
        }
    }
    
    void insert(string& s, int idx = 0) {
        if(idx == s.size()) {
            isEndPoint = true;
            return;
        }
        int nextIdx = chrToIdx(s[idx]);
        if(children[nextIdx] == NULL) {
            children[nextIdx] = new Trie();
        }
        children[nextIdx]->insert(s, idx+1);
    }

    bool find(string& s, int idx = 0) {
        if(idx == s.size()) {
            return isEndPoint;
        }
        int nextIdx = chrToIdx(s[idx]);
        if(children[nextIdx] == NULL) {
            return false;
        }
        return children[nextIdx]->find(s, idx+1);
    }
};

ll N, M, ans;
string a;
Trie T;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M;
    for1(0, N) {
        string a;
        cin >> a;
        T.insert(a);
    }
    for1(0, M) {
        string a;
        cin >> a;
        if(T.find(a)) ans++;
    }
    cout << ans;
    
}