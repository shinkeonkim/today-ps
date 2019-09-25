#include <iostream>
using namespace std;
int X,N,S,a;
int main() {
    cin >> X >> N;
    for(int x=0; x<N; x++) {
        cin >>a;
        S += a;
    }
    cout << X*(N+1) - S;
}