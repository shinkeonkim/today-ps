#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long int ull;
string a,b;
ull r;
string ll_max = "9223372036854775807";
int main() {
    cin >> a >> b >> r;
    if(a=="0" || b=="0") cout<<0;
    else if(a.length()>=20 || b.length() >=20 || a.compare(ll_max)>0 || b.compare(ll_max) >0) cout<<"overflow";
    else {
        ull A = stoll(a);
        ull B = stoll(b);
        if(B > r/A) cout<<"overflow";
        else cout<< A*B;
    }
}