#include <iostream>
using namespace std;
long long N,a,S;
int main() {
    cin >> N;
    for(int x=0; x<N*N; x++) {
        cin >> a;
        S+=a;
    }
    cout<<S;
}