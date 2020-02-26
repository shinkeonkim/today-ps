#include <iostream>
#include <string>
using namespace std;
int T;
string str;
int main() {
    cin >> T;
    while(T--) {
        cin >> str;
        int s = 0;
        int e = str.length()-1;
        
        // palindrome
        bool chk = true;
        while(s<e) {
            if(str[s]!=str[e]) {
                chk = false;
                break;
            }
            s++;
            e--;
        }
        if(chk) {
            cout<<"0\n";
            continue;
        }

        //similar
        s = 0;
        e = str.length()-1;
        int count = 0;
        while(s<e) {
            // cout << str[s] << " " << str[e]<<"\n";
            if(str[s]!=str[e]) {
                if(str[s] == str[e-1] && s<=e-1){
                    count++;
                    e--;
                } else if(str[s+1] == str[e] && s+1<=e) {  
                    count++;
                    s++;
                }
                else {
                    count+=2;
                }
            }
            s++;
            e--;
        }
        if(count == 1) {
            cout<<"1\n";
            continue;
        }

        s = 0;
        e = str.length()-1;
        count = 0;
        while(s<e) {
            // cout << str[s] << " " << str[e]<<"\n";
            if(str[s]!=str[e]) {
                if(str[s+1] == str[e] && s+1<=e) {  
                    count++;
                    s++;
                } else if(str[s] == str[e-1] && s<=e-1){
                    count++;
                    e--;
                } else {
                    count+=2;
                }
            }
            s++;
            e--;
        }
        if(count == 1) {
            cout<<"1\n";
        }
        else if(count >= 2) {
            cout<<"2\n";
        }
    }
}

