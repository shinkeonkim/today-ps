#include <iostream>
using namespace std;
int N;
int current=1;
int D[22];
int main() {
    cin >> N;
    D[4]=1;
    for(int x=2; x<=N; x++) {
        if(x%2==0) {
            D[x+4] += current;
        }
        else {
            D[x+3] +=current;
        }

        current *= 2;
        current -= D[x];
    }
    cout << current;
}