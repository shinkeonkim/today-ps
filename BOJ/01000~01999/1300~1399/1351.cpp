#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
ll N,P,Q;
map <ll, ll> m;
ll f(ll idx) {
    if(m[idx] ==0) {
        return m[idx] = f(idx/P) + f(idx/Q);
    }
    else {
        return m[idx];
    }
}
int main() {
    cin >> N >> P >> Q;
    m[0ll] = 1;
    cout << f(N);
}