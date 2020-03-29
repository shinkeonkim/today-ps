#include <iostream>
#include <deque>
#include <string>
using namespace std;
int N;
string a;
int b;
deque <int> Q;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int q = 0; q< N; q++) {
        cin >> a;
        if(a == "push") {
            cin >> b;
            Q.push_back(b);
        }
        else if(a == "pop") {
            if(Q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << Q.front() <<"\n";
                Q.pop_front();
            }
        }
        else if(a == "size") {
            cout << Q.size() << "\n";
        }
        else if(a == "empty") {
            if(Q.empty()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if(a == "front") {
            if(Q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << Q.front() <<"\n";
            }
        }
        else if(a == "back") {
            if(Q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << Q.back() <<"\n";
            }
        }
    }
}