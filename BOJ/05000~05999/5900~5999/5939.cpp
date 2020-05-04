#include <iostream>
#include <algorithm>
using namespace std;

struct time {
    int H,M,S;
};

int N;
time ar[5500];

bool cmp(time a, time b) {
    if(a.H*3600 + a.M*60 + a.S<b.H*3600 + b.M*60 + b.S) return true;
    return false;
}

int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> ar[i].H >> ar[i].M >> ar[i].S;
    }

    sort(ar,ar+N,cmp);

    for(int i = 0; i < N; i++) {
        cout << ar[i].H << " " << ar[i].M << " " << ar[i].S << "\n";
    }
}