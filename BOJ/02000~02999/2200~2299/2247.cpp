#include <iostream>
using namespace std;
int N,S,Mod = 1000000;
int main() {
    cin >> N;
    for(int x = 2; x<=N/2; x++) {
        int cnt = (N / x) -1;
        // cout << x <<" "<<cnt<<endl;
        S = (S + x*cnt)%Mod;
    }
    cout<<S;
}