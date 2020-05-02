#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

stack <char> stk;
int tc;
int ans;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        while(!stk.empty()) stk.pop();
        ans = 1;
        cin >> s;

        for(int x=0; x<s.size(); x++) {
            switch (s[x])
            {
            case '(':
            case '[':
            case '{':
                stk.push(s[x]);
                break;
            case ')':
                if(stk.empty()) ans = 0;
                else {
                    if(stk.top() != '(') ans = 0;
                    else stk.pop();
                }
                break;
            case '}':
                if(stk.empty()) ans = 0;
                else {
                    if(stk.top() != '{') ans = 0;
                    else stk.pop();
                }
                break;
            case ']':
                if(stk.empty()) ans = 0;
                else {
                    if(stk.top() != '[') ans = 0;
                    else stk.pop();
                }
                break;
            }
        }
        if(!stk.empty()) ans = 0;
        cout << ans << "\n";
    }
}