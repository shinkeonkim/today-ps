#include <iostream>
#include <string>
using namespace std;

string a,b,c;
int stack[1100000];
int stk_size = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> a >> b;
    if(b.length() == 1) {
        for(auto i : a) {
            if(i != b[0]) {
                c += i;
            }
        }
        a = c;
    }
    if(a.length() == 0) {
        cout << "FRULA";
        return 0;
    }

    stack[0] = 0;
    stk_size = 1;

    int i = 1;
    while(i < a.length()) {
        stack[stk_size++] = i++;

        if(stk_size < b.length()) {
            continue;
        }

        bool chk = true;
        for(int j = 0; j < b.length(); j++) {
            if(a[stack[stk_size -j -1]] != b[b.length()-j-1]) {
                chk = false;
                break;
            }
        }
        if(chk) {
            stk_size -= b.length();
        }
    }

    if(stk_size == 0) {
        cout << "FRULA";
    }
    else {
        for(int x = 0; x< stk_size; x++) {
            cout << a[stack[x]];
        }
    }

}