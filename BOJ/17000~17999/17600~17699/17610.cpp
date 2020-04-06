#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

ll N;
ll check[22];
ll ar[22];
ll summ = 0;
set <ll> S;

void g() {
    ll A=0,B=0;
    for(int x=0; x<N; x++) {
        if(check[x] == 1) {
            A += ar[x];
        }
        else if(check[x] == 2) {
            B += ar[x];
        }
    }
    S.insert(abs(A-B));
}

void f(int k) {
    if(k == N-1) {
        for(int x=0; x<3; x++) {
            check[k] = x;
            g();
        }
    }
    else {
        for(int x = 0; x < 3; x++) {
            check[k] = x;
            f(k+1);
        }
    }
}


int main() {
    cin >> N;
    for(int x = 0; x<N; x++) {
        cin >> ar[x];
        summ += ar[x];
    }
    f(0);
    cout << summ - (S.size() -1);
}