#include <iostream>
#define Mx 987654321
using namespace std;
typedef long long ll;
ll A,B,C,X,Y,Z;
ll Cost;

ll m(ll a,ll b) {
    return a<b?a:b;
}

int main() {
    cin >> A >> B >> C >> X >> Y;

    Z = min(X,Y);
    X-=Z;
    Y-=Z;

    if(Z *(A+B) < Z*2*C) {
        Cost = Z*(A+B);
    }
    else {
        Cost = Z*2*C;
    }

    if(X*2*C > X*A) {
        Cost+=X*A;
    }
    else {
        Cost += X*2*C;
    }

    if(Y*2*C > Y*B) {
        Cost+=Y*B;
    }
    else {
        Cost+=Y*2*C;
    }

    cout << Cost;

}