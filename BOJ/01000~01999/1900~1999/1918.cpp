#include <iostream>
#include <stack>
#include <string>
#include <map>

using namespace std;

string s;
stack <char> stk;
map<char,int> pr;

int main() {
    cin >> s;
    pr['('] = 0;
    pr['+'] = 1;
    pr['-'] = 1;
    pr['*'] = 2;
    pr['/'] = 2;

    for(int x= 0; x<s.length(); x++) {
        if(s[x] == '(') {
            stk.push('(');
        }
        else if(65<=s[x] && s[x]<=90) {
            cout << s[x];
        }
        else if(s[x] == ')') {
            while(stk.top() != '(') {
                cout<<stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else {
            while(!stk.empty() && pr[stk.top()] >= pr[s[x]]) {
                cout << stk.top();
                stk.pop();
            }
            stk.push(s[x]);
        }
    } 
    while(!stk.empty()) {
        cout<<stk.top();
        stk.pop();
    }

}