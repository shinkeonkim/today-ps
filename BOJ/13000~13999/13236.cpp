#include<iostream>
using namespace std;
long long N;
int main() {
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    while(true) {
        cout << N << " ";
        if (N==1) break;
        else if(N%2==0) {
            N/=2;
        }
        else N = 3*N+1;
    }
}