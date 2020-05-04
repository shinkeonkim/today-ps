#include <iostream>
using namespace std;
int N,a,b;
int check[33];
void f(int A,int B) {
    if(A == 0 && B == 0) {
        for(int x = a; x>0; x--) {
            cout << check[x];
        }
        cout<<"\n";
    }
    else if(A>0) {
        if(B>0) {
            check[A] = 1;
            f(A-1,B-1);
            check[A] = 0;
            f(A-1,B);
        }
        else {
            check[A] = 0;
            f(A-1,B);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int x = 0; x<N; x++) {
        cin >> a >> b;
        cout << "The bit patterns are\n";
        f(a,b);
        cout << "\n";
    }
}