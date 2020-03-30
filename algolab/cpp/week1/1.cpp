#include <iostream>
using namespace std;
int T,N,A,S;
int main() {
    cin >> T;
    while(T--) {
        cin >> N;
        S = 0;
        for(int x = 0; x < N; x++) {
            cin >> A;
            S+=A;
        }
        cout << S << "\n";
    }
}